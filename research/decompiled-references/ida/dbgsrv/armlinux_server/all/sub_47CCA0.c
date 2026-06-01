/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CCA0
// Address: 0x000000000047CCA0

//----- (000000000047CCA0) ----------------------------------------------------
bool __fastcall sub_47CCA0(_QWORD *a1)
{
  pthread_mutex_t *v2; // x21
  __int64 v3; // x1
  _QWORD *v4; // x0

  *a1 = &off_51E3A8;
  v2 = (pthread_mutex_t *)qword_5223D0;
  sub_494720((pthread_mutex_t *)qword_5223D0);
  v3 = qword_5223E0;
  if ( qword_5223E0 + 1 > (unsigned __int64)qword_5223E8 )
  {
    v4 = sub_491288((__int64)&qword_5223D8, (void *)qword_5223D8, qword_5223E0 + 1, 8u);
    v3 = qword_5223E0;
    qword_5223D8 = (__int64)v4;
  }
  else
  {
    v4 = (_QWORD *)qword_5223D8;
  }
  v4[v3] = a1;
  ++qword_5223E0;
  return sub_494760(v2);
}
// 51E3A8: using guessed type void (__fastcall __noreturn *off_51E3A8)();
// 5223D0: using guessed type __int64 qword_5223D0;
// 5223D8: using guessed type __int64 qword_5223D8;
// 5223E0: using guessed type __int64 qword_5223E0;
// 5223E8: using guessed type __int64 qword_5223E8;
