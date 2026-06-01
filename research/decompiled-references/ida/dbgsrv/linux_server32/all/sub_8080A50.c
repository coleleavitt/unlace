/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080A50
// Address: 0x08080A50

//----- (08080A50) --------------------------------------------------------
int __cdecl sub_8080A50(int a1, char *s2)
{
  int v2; // edx
  int v3; // esi
  int v4; // ebp
  const char *v5; // eax
  int v6; // esi
  pthread_mutex_t *mutex; // [esp+4h] [ebp-20h]

  if ( !s2 )
    return 0;
  mutex = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v2 = *(_DWORD *)(a1 + 48);
  v3 = v2 + 32 * *(_DWORD *)(a1 + 52);
  if ( v3 == v2 )
  {
LABEL_10:
    v6 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 48);
    while ( 1 )
    {
      v5 = (const char *)&dword_80DDFD8;
      if ( *(_DWORD *)(v4 + 4) )
        v5 = *(const char **)v4;
      if ( !strcmp(v5, s2) )
        break;
      v4 += 32;
      if ( v3 == v4 )
        goto LABEL_10;
    }
    v6 = v4 + 12;
  }
  sub_80D1600(mutex);
  return v6;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E6F8: using guessed type int dword_811E6F8;
