/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6380
// Address: 0x00000000000C6380

//----- (00000000000C6380) ----------------------------------------------------
int __fastcall sub_C6380(__int64 a1)
{
  pthread_mutex_t *v1; // r14
  int result; // eax

  v1 = *(pthread_mutex_t **)(a1 + 56);
  if ( v1 )
    result = pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 56));
  if ( *(_BYTE *)(a1 + 80) )
    result = pthread_kill(*(_QWORD *)(a1 + 64), 12);
  if ( v1 )
    return pthread_mutex_unlock(v1);
  return result;
}
