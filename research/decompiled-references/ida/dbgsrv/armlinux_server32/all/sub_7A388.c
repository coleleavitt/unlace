/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A388
// Address: 0x0007A388

//----- (0007A388) --------------------------------------------------------
pthread_mutex_t *__fastcall sub_7A388(int a1)
{
  pthread_mutex_t *v2; // r5

  v2 = *(pthread_mutex_t **)(a1 + 28);
  sub_7A268(v2);
  if ( *(_BYTE *)(a1 + 164) )
    pthread_kill(*(_DWORD *)(a1 + 32), 12);
  return sub_7A290(v2);
}
