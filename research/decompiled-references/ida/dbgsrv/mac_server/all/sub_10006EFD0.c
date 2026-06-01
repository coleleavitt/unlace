/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006EFD0
// Address: 0x000000010006EFD0

//----- (000000010006EFD0) ----------------------------------------------------
__int64 __fastcall sub_10006EFD0(_QWORD *a1, __int64 a2)
{
  pthread_mutex_t *v2; // rbx
  __int64 v3; // r15

  v2 = (pthread_mutex_t *)a1[2];
  qmutex_lock(v2);
  v3 = a1[5];
  if ( !v3 )
  {
    v3 = sub_10006E8E0(a1, a2, 0, 0);
    a1[5] = v3;
  }
  qmutex_unlock(v2);
  return v3;
}
