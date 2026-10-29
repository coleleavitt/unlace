/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qexit
// Address: 0x000000010006FA34

//----- (000000010006FA34) ----------------------------------------------------
void __fastcall qexit(int a1)
{
  int v1; // w19
  _QWORD *v2; // x20
  char *v3; // x0
  va_list v4; // x1

  byte_10009D900 = 1;
  if ( !qword_10009E3A0 )
LABEL_9:
    exit(a1);
  v1 = a1;
  if ( qword_10009E3A8 )
  {
    v2 = operator new(0x20u);
    v2[1] = 0;
    v2[2] = 0;
    *v2 = off_10009BFA8;
    *((_DWORD *)v2 + 6) = v1;
    *((_BYTE *)v2 + 28) = 1;
    if ( is_main_thread() )
      sub_100070078((__int64)v2);
    else
      callui(86);
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
  }
  if ( (byte_10009E3B0 & 1) != 0 )
  {
    a1 = v1;
    goto LABEL_9;
  }
  byte_10009E3B0 = 1;
  if ( under_debugger == 1 )
    __break(1u);
  interr(546);
  verror(v3, v4);
}
// 10006FB09: variable 'v3' is possibly undefined
// 10006FB09: variable 'v4' is possibly undefined
// 10009BFA8: using guessed type __int64 (__fastcall *off_10009BFA8[3])();
// 10009D680: using guessed type __int64 (__fastcall *callui)(_QWORD);
// 10009D900: using guessed type char byte_10009D900;
// 10009D90D: using guessed type char under_debugger;
// 10009DF98: using guessed type __int64 qword_10009DF98[128];
// 10009E3A0: using guessed type __int64 qword_10009E3A0;
// 10009E3A8: using guessed type __int64 qword_10009E3A8;
// 10009E3B0: using guessed type char byte_10009E3B0;
