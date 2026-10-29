/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D00
// Address: 0x00040D00

//----- (00040D00) --------------------------------------------------------
int __fastcall sub_40D00(int a1, const char *a2)
{
  int v2; // r6
  int v5; // r0
  int v6; // r6
  int v7; // r4
  const char *v8; // r0
  pthread_mutex_t *mutex; // [sp+8h] [bp-4h]

  v2 = 0;
  if ( a2 )
  {
    mutex = (pthread_mutex_t *)dword_DE374;
    qmutex_lock((pthread_mutex_t *)dword_DE374);
    v5 = *(_DWORD *)(a1 + 56);
    v2 = 0;
    if ( 40 * v5 )
    {
      v6 = *(_DWORD *)(a1 + 52);
      v7 = 40 * v5;
      while ( 1 )
      {
        v8 = &byte_B3CBE;
        if ( *(_DWORD *)(v6 + 4) )
          v8 = *(const char **)v6;
        if ( !strcmp(v8, a2) )
          break;
        v7 -= 40;
        v6 += 40;
        if ( !v7 )
        {
          v2 = 0;
          goto LABEL_10;
        }
      }
      v2 = v6 + 16;
    }
LABEL_10:
    qmutex_unlock(mutex);
  }
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE374: using guessed type int dword_DE374;
