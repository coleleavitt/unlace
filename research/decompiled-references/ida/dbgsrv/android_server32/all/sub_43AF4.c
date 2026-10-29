/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43AF4
// Address: 0x00043AF4

//----- (00043AF4) --------------------------------------------------------
int __fastcall sub_43AF4(int a1, unsigned int a2)
{
  pthread_mutex_t *v4; // r4
  int v5; // r6

  v4 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  if ( *(_DWORD *)(a1 + 56) <= a2 )
  {
    if ( !under_debugger )
      interr(288);
    __debugbreak();
  }
  v5 = *(_DWORD *)(a1 + 52);
  qmutex_unlock(v4);
  return v5 + 40 * a2 + 16;
}
// DE374: using guessed type int dword_DE374;
// E0550: using guessed type char under_debugger;
