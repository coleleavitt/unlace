/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53AE0
// Address: 0x00053AE0

//----- (00053AE0) --------------------------------------------------------
int __cdecl sub_53AE0(int a1, char *s2)
{
  int v2; // edi
  int v3; // esi
  const char *v4; // eax
  pthread_mutex_t *v6; // [esp+Ch] [ebp-20h]
  int v7; // [esp+14h] [ebp-18h]
  unsigned int v8; // [esp+18h] [ebp-14h]

  if ( !s2 )
    return 0;
  v6 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v8 = *(_DWORD *)(a1 + 40);
  if ( v8 )
  {
    v7 = *(_DWORD *)(a1 + 36);
    v2 = 0;
    while ( 1 )
    {
      v3 = *(_DWORD *)(v7 + 4 * v2);
      v4 = byte_EF875;
      if ( *(_DWORD *)(v3 + 24) )
        v4 = *(const char **)(v3 + 20);
      if ( !strcmp(v4, s2) )
        break;
      if ( ++v2 >= v8 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v3 = 0;
  }
  qmutex_unlock(v6);
  return v3;
}
// 13BD5C: using guessed type int dword_13BD5C;
