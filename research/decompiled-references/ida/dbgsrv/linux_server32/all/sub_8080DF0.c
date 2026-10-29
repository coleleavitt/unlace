/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080DF0
// Address: 0x08080DF0

//----- (08080DF0) --------------------------------------------------------
int __cdecl sub_8080DF0(int a1, char *s2)
{
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  const char *v5; // eax
  int v6; // edi
  int v8; // [esp+4h] [ebp-24h]
  pthread_mutex_t *mutex; // [esp+8h] [ebp-20h]

  if ( !s2 )
    return 0;
  mutex = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  if ( *(_DWORD *)(a1 + 40) )
  {
    v2 = *(_DWORD *)(a1 + 36);
    v8 = *(_DWORD *)(a1 + 40);
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_DWORD *)(v2 + 4 * v3);
      v5 = (const char *)&dword_80DDFD8;
      if ( *(_DWORD *)(v4 + 36) )
        v5 = *(const char **)(v4 + 32);
      if ( !strcmp(v5, s2) )
        break;
      if ( ++v3 == v8 )
        goto LABEL_10;
    }
    v6 = v4;
  }
  else
  {
LABEL_10:
    v6 = 0;
  }
  sub_80D1600(mutex);
  return v6;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E6F8: using guessed type int dword_811E6F8;
