/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419C50
// Address: 0x00419C50

//----- (00419C50) --------------------------------------------------------
BOOL __stdcall sub_419C50(DWORD a1, const WCHAR *a2, HMODULE *a3)
{
  HMODULE ModuleHandleA; // eax
  BOOL (__stdcall *GetModuleHandleExW)(DWORD, LPCWSTR, HMODULE *); // eax
  const WCHAR *v6; // eax
  HMODULE ModuleHandleW; // eax

  if ( (dword_4B6B04 & 1) != 0 )
  {
    GetModuleHandleExW = (BOOL (__stdcall *)(DWORD, LPCWSTR, HMODULE *))dword_4B6B00;
  }
  else
  {
    dword_4B6B04 |= 1u;
    ModuleHandleA = GetModuleHandleA("kernel32");
    GetModuleHandleExW = (BOOL (__stdcall *)(DWORD, LPCWSTR, HMODULE *))GetProcAddress(
                                                                          ModuleHandleA,
                                                                          "GetModuleHandleExW");
    dword_4B6B00 = (int)GetModuleHandleExW;
  }
  if ( GetModuleHandleExW )
    return GetModuleHandleExW(a1, a2, a3);
  if ( !a3 )
    return 0;
  v6 = a2;
  if ( (a1 & 4) != 0 )
    v6 = nullptr;
  ModuleHandleW = GetModuleHandleW(v6);
  *a3 = ModuleHandleW;
  return ModuleHandleW != nullptr;
}
// 4B6B00: using guessed type int dword_4B6B00;
// 4B6B04: using guessed type int dword_4B6B04;
