/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_419E80
// Address: 0x00419E80

//----- (00419E80) --------------------------------------------------------
LSTATUS __stdcall sub_419E80(HKEY hkey, LPCSTR pszSubKey)
{
  HMODULE ModuleHandleA; // eax
  LSTATUS (__stdcall *RegDeleteTreeA)(HKEY, LPCSTR); // eax

  if ( (dword_4B6B1C & 1) != 0 )
  {
    RegDeleteTreeA = (LSTATUS (__stdcall *)(HKEY, LPCSTR))dword_4B6B18;
  }
  else
  {
    dword_4B6B1C |= 1u;
    ModuleHandleA = GetModuleHandleA("advapi32");
    RegDeleteTreeA = (LSTATUS (__stdcall *)(HKEY, LPCSTR))GetProcAddress(ModuleHandleA, "RegDeleteTreeA");
    dword_4B6B18 = (int)RegDeleteTreeA;
  }
  if ( RegDeleteTreeA )
    return ((int (__cdecl *)(HKEY))RegDeleteTreeA)(hkey);
  else
    return SHDeleteKeyA(hkey, pszSubKey);
}
// 4B6B18: using guessed type int dword_4B6B18;
// 4B6B1C: using guessed type int dword_4B6B1C;
