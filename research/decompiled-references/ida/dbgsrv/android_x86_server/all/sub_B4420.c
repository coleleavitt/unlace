/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4420
// Address: 0x000B4420

//----- (000B4420) --------------------------------------------------------
void __cdecl sub_B4420(int a1)
{
  pthread_mutex_t *v1; // edi

  v1 = *(pthread_mutex_t **)(a1 + 28);
  if ( v1 )
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 28));
  if ( *(_BYTE *)(a1 + 40) )
    pthread_kill(*(_DWORD *)(a1 + 32), 12);
  if ( v1 )
    pthread_mutex_unlock(v1);
}
