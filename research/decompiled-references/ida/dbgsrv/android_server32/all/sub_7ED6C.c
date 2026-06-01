/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7ED6C
// Address: 0x0007ED6C

//----- (0007ED6C) --------------------------------------------------------
int __fastcall sub_7ED6C(int a1, int status)
{
  int result; // r0
  _DWORD *v5; // r4

  byte_E053C = 1;
  result = dword_E054C;
  if ( dword_E054C )
  {
    result = dword_E0554;
    if ( dword_E0554 )
    {
      v5 = operator new(0x14u);
      *v5 = &off_DB270;
      v5[1] = 0;
      v5[2] = 0;
      v5[3] = status;
      *((_BYTE *)v5 + 16) = a1;
      if ( is_main_thread() )
        sub_7F87C((int)v5);
      else
        callui(86, v5, 2);
      return (*(int (__fastcall **)(_DWORD *))(*v5 + 8))(v5);
    }
  }
  else if ( a1 )
  {
    exit(status);
  }
  return result;
}
// DB270: using guessed type _UNKNOWN *off_DB270;
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// E053C: using guessed type char byte_E053C;
// E054C: using guessed type int dword_E054C;
// E0554: using guessed type int dword_E0554;
