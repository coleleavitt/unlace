/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BC4
// Address: 0x00080BC4

//----- (00080BC4) --------------------------------------------------------
int __fastcall sub_80BC4(int a1)
{
  pthread_mutex_t *v2; // r4
  int result; // r0

  v2 = *(pthread_mutex_t **)(a1 + 28);
  if ( v2 )
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 28));
  result = *(unsigned __int8 *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 40) )
    result = pthread_kill(*(_DWORD *)(a1 + 32), 12);
  if ( v2 )
    return pthread_mutex_unlock(v2);
  return result;
}
