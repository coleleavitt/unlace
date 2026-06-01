/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qexit
// Address: 0x0007EDF4

//----- (0007EDF4) --------------------------------------------------------
void __fastcall __noreturn qexit(int status)
{
  _DWORD *v2; // r5

  byte_E053C = 1;
  if ( dword_E054C )
  {
    if ( dword_E0554 )
    {
      v2 = operator new(0x14u);
      *v2 = &off_DB270;
      v2[1] = 0;
      v2[2] = 0;
      v2[3] = status;
      *((_BYTE *)v2 + 16) = 1;
      if ( is_main_thread() )
        sub_7F87C((int)v2);
      else
        callui(86, v2, 2);
      (*(void (__fastcall **)(_DWORD *))(*v2 + 8))(v2);
    }
    if ( !byte_E0558 )
    {
      byte_E0558 = 1;
      if ( !under_debugger )
        interr(546);
      __debugbreak();
    }
  }
  exit(status);
}
// DB270: using guessed type _UNKNOWN *off_DB270;
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// E053C: using guessed type char byte_E053C;
// E054C: using guessed type int dword_E054C;
// E0550: using guessed type char under_debugger;
// E0554: using guessed type int dword_E0554;
// E0558: using guessed type char byte_E0558;
