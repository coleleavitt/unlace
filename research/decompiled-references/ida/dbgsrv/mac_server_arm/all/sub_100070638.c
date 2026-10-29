/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100070638
// Address: 0x0000000100070638

//----- (0000000100070638) ----------------------------------------------------
_QWORD *__fastcall sub_100070638(_QWORD *result)
{
  pthread_mutex_t *v1; // x8
  _QWORD *v2; // x19

  v1 = (pthread_mutex_t *)qword_10009E3C0;
  *result = qword_10009E3C0;
  if ( v1 )
  {
    v2 = result;
    pthread_mutex_lock(v1);
    return v2;
  }
  return result;
}
// 10009E3C0: using guessed type __int64 qword_10009E3C0;
