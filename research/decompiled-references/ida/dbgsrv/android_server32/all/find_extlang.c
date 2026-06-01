/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_extlang
// Address: 0x0003EF9C

//----- (0003EF9C) --------------------------------------------------------
int __fastcall find_extlang(const char *a1, int a2)
{
  int v2; // r5
  pthread_mutex_t *v4; // r4
  int v5; // r0
  int *v6; // r4
  int v7; // r6
  int v8; // r0
  const char *v9; // r1
  pthread_mutex_t *v11; // [sp+4h] [bp-8h]

  v2 = 0;
  if ( a1 )
  {
    v4 = (pthread_mutex_t *)dword_DE360;
    qmutex_lock((pthread_mutex_t *)dword_DE360);
    if ( a2 == 2 )
    {
      v2 = 0;
      if ( *(_DWORD *)a1 < (unsigned int)dword_DE368 )
      {
        v5 = *(_DWORD *)(dword_DE364 + 4 * *(_DWORD *)a1);
        if ( v5 )
        {
          ++*(_DWORD *)(v5 + 8);
          v2 = v5;
        }
      }
    }
    else
    {
      v2 = 0;
      if ( 4 * dword_DE368 )
      {
        v11 = v4;
        v6 = (int *)dword_DE364;
        v7 = 4 * dword_DE368;
        while ( 1 )
        {
          v2 = *v6;
          if ( *v6 )
          {
            v8 = 16;
            if ( a2 )
              v8 = 12;
            v9 = *(const char **)(v2 + v8);
            if ( v9 )
            {
              if ( !strcasecmp(a1, v9) )
                break;
            }
          }
          v7 -= 4;
          ++v6;
          if ( !v7 )
          {
            v2 = 0;
            goto LABEL_16;
          }
        }
        ++*(_DWORD *)(v2 + 8);
LABEL_16:
        v4 = v11;
      }
    }
    qmutex_unlock(v4);
  }
  return v2;
}
// DE360: using guessed type int dword_DE360;
// DE364: using guessed type int dword_DE364;
// DE368: using guessed type int dword_DE368;
