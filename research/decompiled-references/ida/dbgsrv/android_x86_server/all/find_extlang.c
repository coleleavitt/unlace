/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_extlang
// Address: 0x00050260

//----- (00050260) --------------------------------------------------------
int __cdecl find_extlang(char *s1, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax
  int *v6; // esi
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  pthread_mutex_t *v11; // [esp+0h] [ebp-2Ch]
  int v12; // [esp+14h] [ebp-18h]
  int v13; // [esp+18h] [ebp-14h]

  if ( !s1 )
    return 0;
  v2 = dword_13BD48;
  qmutex_lock((pthread_mutex_t *)dword_13BD48);
  if ( a2 == 2 )
  {
    v3 = 0;
    if ( *(_DWORD *)s1 < (unsigned int)dword_13BD50 )
    {
      v4 = *(_DWORD *)(dword_13BD4C + 4 * *(_DWORD *)s1);
      if ( v4 )
      {
        ++*(_DWORD *)(v4 + 8);
        v3 = v4;
      }
    }
  }
  else if ( (dword_13BD50 & 0x3FFFFFFF) != 0 )
  {
    v12 = v2;
    v6 = (int *)dword_13BD4C;
    v7 = 4 * dword_13BD50;
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 )
      {
        if ( *(_DWORD *)(v8 + 4 * (a2 == 0) + 12) )
        {
          v13 = *v6;
          v9 = strcasecmp(s1, *(const char **)(v8 + 4 * (a2 == 0) + 12));
          v3 = v13;
          if ( !v9 )
            break;
        }
      }
      ++v6;
      v7 -= 4;
      if ( !v7 )
      {
        v3 = 0;
        goto LABEL_16;
      }
    }
    ++*(_DWORD *)(v13 + 8);
LABEL_16:
    v2 = v12;
  }
  else
  {
    v3 = 0;
  }
  v11 = (pthread_mutex_t *)v2;
  v10 = v3;
  qmutex_unlock(v11);
  return v10;
}
// 13BD48: using guessed type int dword_13BD48;
// 13BD4C: using guessed type int dword_13BD4C;
// 13BD50: using guessed type int dword_13BD50;
