/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A47A0
// Address: 0x00000000000A47A0

//----- (00000000000A47A0) ----------------------------------------------------
void __fastcall sub_A47A0(_QWORD *a1)
{
  pthread_mutex_t *v2; // x0
  _QWORD *v3; // x1

  v2 = (pthread_mutex_t *)a1[4];
  *a1 = off_15F1F8;
  qmutex_free(v2);
  v3 = (_QWORD *)a1[2];
  *a1 = off_15F230;
  sub_A4868((__int64)(a1 + 1), v3);
  operator delete(a1);
}
// 15F1F8: using guessed type __int64 (__fastcall *off_15F1F8[5])();
// 15F230: using guessed type __int64 (__fastcall *off_15F230[5])();
