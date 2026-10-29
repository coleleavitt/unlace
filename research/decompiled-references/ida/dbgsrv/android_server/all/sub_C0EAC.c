/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0EAC
// Address: 0x00000000000C0EAC

//----- (00000000000C0EAC) ----------------------------------------------------
_QWORD *__fastcall sub_C0EAC(_QWORD *result)
{
  pthread_mutex_t *v1; // x8

  v1 = (pthread_mutex_t *)qword_168E10;
  *result = qword_168E10;
  if ( v1 )
    return (_QWORD *)pthread_mutex_lock(v1);
  return result;
}
// 168E10: using guessed type __int64 qword_168E10;
