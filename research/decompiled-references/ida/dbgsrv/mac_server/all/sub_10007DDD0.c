/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007DDD0
// Address: 0x000000010007DDD0

//----- (000000010007DDD0) ----------------------------------------------------
int __fastcall sub_10007DDD0(_QWORD *a1)
{
  pthread_mutex_t *v2; // rdi

  v2 = qword_1000AED08;
  *a1 = qword_1000AED08;
  if ( v2 )
    LODWORD(a1) = pthread_mutex_lock(v2);
  return (int)a1;
}
