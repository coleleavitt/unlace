/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000756E0
// Address: 0x00000001000756E0

//----- (00000001000756E0) ----------------------------------------------------
_QWORD *__fastcall sub_1000756E0(_QWORD *result)
{
  pthread_mutex_t *v1; // x8
  _QWORD *v2; // x19

  v1 = (pthread_mutex_t *)qword_1000A63C0;
  *result = qword_1000A63C0;
  if ( v1 )
  {
    v2 = result;
    pthread_mutex_lock(v1);
    return v2;
  }
  return result;
}
// 1000A63C0: using guessed type __int64 qword_1000A63C0;
