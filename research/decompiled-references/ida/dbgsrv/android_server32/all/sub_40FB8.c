/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40FB8
// Address: 0x00040FB8

//----- (00040FB8) --------------------------------------------------------
int __fastcall sub_40FB8(int a1, unsigned int a2)
{
  pthread_mutex_t *v4; // r4
  int v5; // r5

  v4 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  if ( *(_DWORD *)(a1 + 44) <= a2 )
  {
    if ( !under_debugger )
      interr(284);
    __debugbreak();
  }
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 4 * a2);
  qmutex_unlock(v4);
  return v5;
}
// DE374: using guessed type int dword_DE374;
// E0550: using guessed type char under_debugger;
