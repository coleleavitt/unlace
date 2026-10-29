/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476578
// Address: 0x0000000000476578

//----- (0000000000476578) ----------------------------------------------------
void __fastcall sub_476578(_QWORD *a1)
{
  pthread_mutex_t *v2; // x0
  _QWORD *v3; // x1

  v2 = (pthread_mutex_t *)a1[7];
  *a1 = off_51B928;
  sub_4943D8(v2);
  v3 = (_QWORD *)a1[3];
  *a1 = off_51B8F0;
  sub_476268((__int64)(a1 + 1), v3);
  j_j__free_0(a1);
}
// 51B8F0: using guessed type __int64 (__fastcall *off_51B8F0[5])();
// 51B928: using guessed type __int64 (__fastcall *off_51B928[5])();
