/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_533D0
// Address: 0x000533D0

//----- (000533D0) --------------------------------------------------------
int __cdecl sub_533D0(int a1, char *s2)
{
  int v2; // esi
  int v3; // edi
  int v4; // esi
  const char *v5; // eax
  pthread_mutex_t *v7; // [esp+14h] [ebp-18h]

  if ( !s2 )
    return 0;
  v7 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v2 = *(_DWORD *)(a1 + 52);
  if ( (v2 & 0x7FFFFFF) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 48) + 12;
    v4 = 32 * v2;
    while ( 1 )
    {
      v5 = byte_EF875;
      if ( *(_DWORD *)(v3 - 8) )
        v5 = *(const char **)(v3 - 12);
      if ( !strcmp(v5, s2) )
        break;
      v3 += 32;
      v4 -= 32;
      if ( !v4 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v3 = 0;
  }
  qmutex_unlock(v7);
  return v3;
}
// 13BD5C: using guessed type int dword_13BD5C;
