/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494748
// Address: 0x0000000000494748

//----- (0000000000494748) ----------------------------------------------------
bool __fastcall sub_494748(_QWORD *a1)
{
  pthread_mutex_t *v1; // x1

  v1 = (pthread_mutex_t *)qword_524528;
  *a1 = qword_524528;
  return sub_494720(v1);
}
// 524528: using guessed type __int64 qword_524528;
