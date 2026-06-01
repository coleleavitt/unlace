/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C5BE0
// Address: 0x00000000000C5BE0

//----- (00000000000C5BE0) ----------------------------------------------------
int __fastcall sub_C5BE0(_QWORD *a1)
{
  pthread_mutex_t *v2; // rdi

  v2 = mutex;
  *a1 = mutex;
  if ( v2 )
    LODWORD(a1) = pthread_mutex_lock(v2);
  return (int)a1;
}
