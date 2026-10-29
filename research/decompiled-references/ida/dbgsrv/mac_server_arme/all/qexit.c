/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qexit
// Address: 0x00000001000749EC

//----- (00000001000749EC) ----------------------------------------------------
void __fastcall qexit(int a1)
{
  int v1; // w19
  _QWORD *v2; // x20
  char *v3; // x0
  va_list v4; // x1

  byte_1000A5900 = 1;
  if ( !qword_1000A63A0 )
LABEL_9:
    exit(a1);
  v1 = a1;
  if ( qword_1000A63A8 )
  {
    v2 = operator new(0x20u);
    v2[1] = 0;
    v2[2] = 0;
    *v2 = off_10009FFE8;
    *((_DWORD *)v2 + 6) = v1;
    *((_BYTE *)v2 + 28) = 1;
    if ( is_main_thread() )
      (*(void (__fastcall **)(_QWORD *))*v2)(v2);
    else
      callui(86);
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
  }
  if ( (byte_1000A63B0 & 1) != 0 )
  {
    a1 = v1;
    goto LABEL_9;
  }
  byte_1000A63B0 = 1;
  if ( under_debugger == 1 )
    __break(1u);
  interr(546);
  verror(v3, v4);
}
// 100074B0D: variable 'v3' is possibly undefined
// 100074B0D: variable 'v4' is possibly undefined
// 10009FFE8: using guessed type __int64 (__fastcall *off_10009FFE8[3])();
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
// 1000A5900: using guessed type char byte_1000A5900;
// 1000A590D: using guessed type char under_debugger;
// 1000A5F98: using guessed type __int64 qword_1000A5F98[128];
// 1000A63A0: using guessed type __int64 qword_1000A63A0;
// 1000A63A8: using guessed type __int64 qword_1000A63A8;
// 1000A63B0: using guessed type char byte_1000A63B0;
