/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BBD9
// Address: 0x0046BBD9

//----- (0046BBD9) --------------------------------------------------------
int (__thiscall *__cdecl sub_46BBD9(int a1))(FARPROC, int)
{
  int (__thiscall *result)(FARPROC, int); // eax
  HMODULE hModule; // [esp+0h] [ebp-4h] BYREF

  hModule = nullptr;
  result = (int (__thiscall *)(FARPROC, int))off_4B4050(0, L"mscoree.dll", &hModule);
  if ( result )
  {
    result = (int (__thiscall *)(FARPROC, int))GetProcAddress(hModule, "CorExitProcess");
    if ( result )
      result = (int (__thiscall *)(FARPROC, int))result((FARPROC)result, a1);
  }
  if ( hModule )
    return (int (__thiscall *)(FARPROC, int))FreeLibrary(hModule);
  return result;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A5930: using guessed type wchar_t aMscoreeDll[12];
// 4B4050: using guessed type BOOL (__stdcall *off_4B4050)(DWORD a1, const WCHAR *a2, HMODULE *a3);
