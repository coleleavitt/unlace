/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419A70
// Address: 0x00419A70

//----- (00419A70) --------------------------------------------------------
int __stdcall sub_419A70(DWORD dwTlsIndex)
{
  HMODULE ModuleHandleA; // eax
  BOOL (__stdcall *FlsFree)(DWORD); // eax

  if ( (dword_4B6AD4 & 1) != 0 )
  {
    FlsFree = (BOOL (__stdcall *)(DWORD))dword_4B6AD0;
  }
  else
  {
    dword_4B6AD4 |= 1u;
    ModuleHandleA = GetModuleHandleA("kernel32");
    FlsFree = (BOOL (__stdcall *)(DWORD))GetProcAddress(ModuleHandleA, "FlsFree");
    dword_4B6AD0 = (int)FlsFree;
  }
  if ( FlsFree )
    return ((int (__cdecl *)(DWORD))FlsFree)(dwTlsIndex);
  else
    return TlsFree(dwTlsIndex);
}
// 4B6AD0: using guessed type int dword_4B6AD0;
// 4B6AD4: using guessed type int dword_4B6AD4;
