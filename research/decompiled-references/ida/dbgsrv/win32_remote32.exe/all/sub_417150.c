/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417150
// Address: 0x00417150

//----- (00417150) --------------------------------------------------------
char sub_417150()
{
  int *v0; // eax
  int *v1; // esi
  bool v2; // zf

  v0 = sub_4017B0();
  v1 = v0;
  if ( *((_BYTE *)v0 + 8) )
  {
    v2 = *((_BYTE *)v0 + 9) == 0;
    *((_BYTE *)v0 + 8) = 0;
    if ( !v2 )
    {
      sub_410520("SeDebugPrivilege", 0);
      *((_BYTE *)v1 + 9) = 0;
    }
    if ( hModule )
    {
      FreeLibrary(hModule);
      hModule = nullptr;
    }
    if ( hObject )
    {
      CloseHandle(hObject);
      hObject = nullptr;
      dword_4B6A00(&dword_4B4020);
    }
  }
  return 1;
}
// 4B4020: using guessed type int dword_4B4020;
// 4B6A00: using guessed type int (__stdcall *dword_4B6A00)(_DWORD);
