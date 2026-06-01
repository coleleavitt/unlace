/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1674
// Address: 0x00000000000C1674

//----- (00000000000C1674) ----------------------------------------------------
__int64 __fastcall sub_C1674(__int64 result)
{
  pthread_mutex_t *v1; // x19
  __int64 v2; // x20

  v1 = *(pthread_mutex_t **)(result + 56);
  v2 = result;
  if ( v1 )
    result = pthread_mutex_lock(*(pthread_mutex_t **)(result + 56));
  if ( *(_BYTE *)(v2 + 80) )
    result = pthread_kill(*(_QWORD *)(v2 + 64), 12);
  if ( v1 )
    return pthread_mutex_unlock(v1);
  return result;
}
