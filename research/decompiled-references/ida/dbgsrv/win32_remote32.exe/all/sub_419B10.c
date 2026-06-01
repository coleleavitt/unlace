/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419B10
// Address: 0x00419B10

//----- (00419B10) --------------------------------------------------------
LPVOID __stdcall sub_419B10(DWORD dwTlsIndex)
{
  HMODULE ModuleHandleA; // eax
  PVOID (__stdcall *FlsGetValue)(DWORD); // eax

  if ( (dword_4B6ADC & 1) != 0 )
  {
    FlsGetValue = (PVOID (__stdcall *)(DWORD))dword_4B6AD8;
  }
  else
  {
    dword_4B6ADC |= 1u;
    ModuleHandleA = GetModuleHandleA("kernel32");
    FlsGetValue = (PVOID (__stdcall *)(DWORD))GetProcAddress(ModuleHandleA, "FlsGetValue");
    dword_4B6AD8 = (int)FlsGetValue;
  }
  if ( FlsGetValue )
    return (LPVOID)((int (__cdecl *)(DWORD))FlsGetValue)(dwTlsIndex);
  else
    return TlsGetValue(dwTlsIndex);
}
// 4B6AD8: using guessed type int dword_4B6AD8;
// 4B6ADC: using guessed type int dword_4B6ADC;
