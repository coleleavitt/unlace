/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476458
// Address: 0x0000000000476458

//----- (0000000000476458) ----------------------------------------------------
void __fastcall sub_476458(__int64 a1)
{
  pthread_mutex_t *v2; // x0

  v2 = *(pthread_mutex_t **)(a1 + 56);
  *(_QWORD *)a1 = off_51B928;
  sub_4943D8(v2);
  *(_QWORD *)a1 = off_51B8F0;
  sub_476268(a1 + 8, *(_QWORD **)(a1 + 24));
}
// 51B8F0: using guessed type __int64 (__fastcall *off_51B8F0[5])();
// 51B928: using guessed type __int64 (__fastcall *off_51B928[5])();
