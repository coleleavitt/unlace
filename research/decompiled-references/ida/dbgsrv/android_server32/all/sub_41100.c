/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41100
// Address: 0x00041100

//----- (00041100) --------------------------------------------------------
int __fastcall sub_41100(int a1, const char *a2)
{
  int v2; // r6
  int *v4; // r7
  unsigned int v5; // r4
  const char *v6; // r0
  pthread_mutex_t *mutex; // [sp+0h] [bp-Ch]
  unsigned int v9; // [sp+4h] [bp-8h]

  v2 = 0;
  if ( a2 )
  {
    mutex = (pthread_mutex_t *)dword_DE374;
    qmutex_lock((pthread_mutex_t *)dword_DE374);
    v2 = 0;
    v9 = *(_DWORD *)(a1 + 44);
    if ( v9 )
    {
      v4 = *(int **)(a1 + 40);
      v5 = 0;
      do
      {
        v2 = *v4;
        v6 = &byte_B3CBE;
        if ( *(_DWORD *)(*v4 + 24) )
          v6 = *(const char **)(v2 + 20);
        ++v5;
        if ( !strcmp(v6, a2) )
          break;
        ++v4;
        v2 = 0;
      }
      while ( v5 < v9 );
    }
    qmutex_unlock(mutex);
  }
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE374: using guessed type int dword_DE374;
