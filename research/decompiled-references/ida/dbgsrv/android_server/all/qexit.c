/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qexit
// Address: 0x00000000000BE9F0

//----- (00000000000BE9F0) ----------------------------------------------------
FILE *__fastcall qexit(pthread_mutex_t *status, _OWORD *a2)
{
  int v2; // w19
  _QWORD *v3; // x20

  v2 = (int)status;
  byte_168DD4 = 1;
  if ( !qword_168DE8 )
    goto LABEL_8;
  if ( qword_168DF8 )
  {
    v3 = operator new(0x20u);
    v3[1] = 0;
    v3[2] = 0;
    *((_DWORD *)v3 + 6) = v2;
    *v3 = off_160420;
    *((_BYTE *)v3 + 28) = 1;
    if ( is_main_thread() )
      sub_BFB04((__int64)v3);
    else
      callui(86, v3, 2);
    status = (pthread_mutex_t *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  }
  if ( (byte_168E00 & 1) != 0 )
LABEL_8:
    exit(v2);
  byte_168E00 = 1;
  if ( !under_debugger )
    status = interr(546);
  __break(1u);
  return verror((char *)status, a2);
}
// BEABD: variable 'a2' is possibly undefined
// 160420: using guessed type __int64 (__fastcall *off_160420[2])();
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
// 167DD0: using guessed type __int64[512];
// 168DD4: using guessed type char byte_168DD4;
// 168DE8: using guessed type __int64 qword_168DE8;
// 168DF0: using guessed type char under_debugger;
// 168DF8: using guessed type __int64 qword_168DF8;
// 168E00: using guessed type char byte_168E00;
