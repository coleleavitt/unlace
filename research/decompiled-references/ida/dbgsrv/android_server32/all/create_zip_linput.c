/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: create_zip_linput
// Address: 0x0007B114

//----- (0007B114) --------------------------------------------------------
_DWORD *__fastcall create_zip_linput(int a1, int a2, int a3)
{
  _WORD *v5; // r4

  v5 = operator new(0x8068u);
  v5[16434] = 1;
  *(_DWORD *)v5 = &off_DB138;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 9) = 0;
  *((_DWORD *)v5 + 10) = a2;
  *((_DWORD *)v5 + 2) = 0;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 5) = a3;
  *((_DWORD *)v5 + 6) = a1;
  memset(v5 + 24, 0, 0x35u);
  *((_DWORD *)v5 + 11) = v5 + 50;
  if ( sub_88C8C((_DWORD *)v5 + 11, "1.3.1", 56) )
  {
    if ( !under_debugger )
      interr(192);
    __debugbreak();
  }
  return create_generic_linput((int *)v5);
}
// DB138: using guessed type _UNKNOWN *off_DB138;
// E0550: using guessed type char under_debugger;
