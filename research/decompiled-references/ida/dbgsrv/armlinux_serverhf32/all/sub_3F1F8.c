/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F1F8
// Address: 0x0003F1F8

//----- (0003F1F8) --------------------------------------------------------
int __fastcall sub_3F1F8(int a1, const char *a2)
{
  pthread_mutex_t *v4; // r10
  int v5; // r8
  int v6; // r6
  int v7; // r4
  int v8; // r6
  int v9; // r5
  int v10; // t1

  if ( !a2 )
    return 0;
  v4 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  v5 = *(_DWORD *)(a1 + 44);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 40);
    v7 = 0;
    v8 = v6 - 4;
    do
    {
      v10 = *(_DWORD *)(v8 + 4);
      v8 += 4;
      v9 = v10;
      if ( *(_DWORD *)(v10 + 36) )
      {
        if ( !strcmp(*(const char **)(v9 + 32), a2) )
          goto LABEL_8;
      }
      else if ( !strcmp((const char *)&dword_8DA5C, a2) )
      {
        goto LABEL_8;
      }
      ++v7;
    }
    while ( v7 != v5 );
    v9 = 0;
  }
  else
  {
    v9 = 0;
  }
LABEL_8:
  sub_7A128(v4);
  return v9;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D3A90: using guessed type int dword_D3A90;
