/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419BB0
// Address: 0x00419BB0

//----- (00419BB0) --------------------------------------------------------
int __stdcall sub_419BB0(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  HMODULE ModuleHandleA; // eax
  BOOL (__stdcall *FlsSetValue)(DWORD, PVOID); // eax

  if ( (dword_4B6AE4 & 1) != 0 )
  {
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))dword_4B6AE0;
  }
  else
  {
    dword_4B6AE4 |= 1u;
    ModuleHandleA = GetModuleHandleA("kernel32");
    FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))GetProcAddress(ModuleHandleA, "FlsSetValue");
    dword_4B6AE0 = (int)FlsSetValue;
  }
  if ( FlsSetValue )
    return ((int (__cdecl *)(DWORD))FlsSetValue)(dwTlsIndex);
  else
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}
// 4B6AE0: using guessed type int dword_4B6AE0;
// 4B6AE4: using guessed type int dword_4B6AE4;
