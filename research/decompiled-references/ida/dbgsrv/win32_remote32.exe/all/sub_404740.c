/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_404740
// Address: 0x00404740

//----- (00404740) --------------------------------------------------------
bool __cdecl sub_404740(const CHAR *a1)
{
  BOOL (__stdcall *PathIsUNCA)(LPCSTR); // eax
  HMODULE ModuleHandleA; // eax

  PathIsUNCA = (BOOL (__stdcall *)(LPCSTR))dword_4B69B4;
  if ( !dword_4B69B4 )
  {
    ModuleHandleA = GetModuleHandleA("shlwapi.dll");
    if ( ModuleHandleA )
    {
      PathIsUNCA = (BOOL (__stdcall *)(LPCSTR))GetProcAddress(ModuleHandleA, "PathIsUNCA");
      dword_4B69B4 = (int)PathIsUNCA;
    }
    else
    {
      PathIsUNCA = (BOOL (__stdcall *)(LPCSTR))dword_4B69B4;
    }
  }
  return *a1 != 92 && *a1 != 47 && (!PathIsUNCA || !PathIsUNCA(a1)) || sub_404420(0) == 1;
}
// 4B69B4: using guessed type int dword_4B69B4;
