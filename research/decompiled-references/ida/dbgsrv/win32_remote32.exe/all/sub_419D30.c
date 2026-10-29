/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419D30
// Address: 0x00419D30

//----- (00419D30) --------------------------------------------------------
int __stdcall sub_419D30(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  HMODULE ModuleHandleA; // eax
  BOOL (__stdcall *InitializeCriticalSectionEx)(LPCRITICAL_SECTION, DWORD, DWORD); // eax

  if ( (dword_4B6AC4 & 1) != 0 )
  {
    InitializeCriticalSectionEx = (BOOL (__stdcall *)(LPCRITICAL_SECTION, DWORD, DWORD))dword_4B6AC0;
  }
  else
  {
    dword_4B6AC4 |= 1u;
    ModuleHandleA = GetModuleHandleA("kernel32");
    InitializeCriticalSectionEx = (BOOL (__stdcall *)(LPCRITICAL_SECTION, DWORD, DWORD))GetProcAddress(
                                                                                          ModuleHandleA,
                                                                                          "InitializeCriticalSectionEx");
    dword_4B6AC0 = (int)InitializeCriticalSectionEx;
  }
  if ( InitializeCriticalSectionEx )
    return ((int (__cdecl *)(LPCRITICAL_SECTION))InitializeCriticalSectionEx)(lpCriticalSection);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}
// 4B6AC0: using guessed type int dword_4B6AC0;
// 4B6AC4: using guessed type int dword_4B6AC4;
