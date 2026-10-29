/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80634
// Address: 0x00080634

//----- (00080634) --------------------------------------------------------
_DWORD *__fastcall sub_80634(_DWORD *a1)
{
  pthread_mutex_t *v2; // r0

  v2 = (pthread_mutex_t *)dword_E0560;
  *a1 = dword_E0560;
  if ( v2 )
    pthread_mutex_lock(v2);
  return a1;
}
// E0560: using guessed type int dword_E0560;
