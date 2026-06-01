/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482EF0
// Address: 0x0000000000482EF0

//----- (0000000000482EF0) ----------------------------------------------------
bool __fastcall sub_482EF0(_QWORD *a1)
{
  pthread_mutex_t *v2; // rdi

  v2 = (pthread_mutex_t *)qword_4C9518;
  *a1 = qword_4C9518;
  return sub_482EC0(v2);
}
// 4C9518: using guessed type __int64 qword_4C9518;
