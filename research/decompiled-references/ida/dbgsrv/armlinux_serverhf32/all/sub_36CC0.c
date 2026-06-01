/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36CC0
// Address: 0x00036CC0

//----- (00036CC0) --------------------------------------------------------
int __fastcall sub_36CC0(_DWORD *a1, int a2)
{
  pthread_mutex_t *v4; // r8
  int *v5; // r0
  unsigned __int8 *v6; // r1
  FILE *v7; // r4
  _DWORD *v8; // r1
  int v9; // r3
  int v11; // [sp+0h] [bp-8h] BYREF

  v4 = (pthread_mutex_t *)dword_D3A90;
  sub_7A100((pthread_mutex_t *)dword_D3A90);
  if ( a1[3] )
    v5 = (int *)a1[2];
  else
    v5 = &dword_8DA5C;
  if ( a1[9] )
    v6 = (unsigned __int8 *)a1[8];
  else
    v6 = (unsigned __int8 *)&dword_8DA5C;
  v7 = sub_75BE8((int)v5, v6);
  if ( !v7 )
    goto LABEL_10;
  v9 = dword_D39D0;
  v8 = (_DWORD *)dword_D39CC;
  if ( !dword_D39D0 )
  {
    v11 = 0;
    if ( dword_D39CC <= (unsigned int)&v11 && (unsigned int)&v11 < dword_D39CC + 4 * dword_D39D4 )
    {
      if ( dword_D39D4 )
        goto LABEL_17;
    }
    else if ( dword_D39D4 )
    {
LABEL_17:
      v8[v9] = 0;
      v8 = (_DWORD *)dword_D39CC;
      v9 = ++dword_D39D0;
      goto LABEL_7;
    }
    v8 = sub_77EB0((int)&dword_D39CC, (void *)dword_D39CC, 1u, 4u);
    v9 = dword_D39D0;
    dword_D39CC = (int)v8;
    goto LABEL_17;
  }
LABEL_7:
  *(_DWORD *)(a2 + 8) = v9;
  if ( v9 + 1 > (unsigned int)dword_D39D4 )
  {
    v8 = sub_77EB0((int)&dword_D39CC, v8, v9 + 1, 4u);
    v9 = dword_D39D0;
    dword_D39CC = (int)v8;
  }
  v8[v9] = v7;
  ++dword_D39D0;
LABEL_10:
  sub_7A128(v4);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D39CC: using guessed type int dword_D39CC;
// D39D0: using guessed type int dword_D39D0;
// D39D4: using guessed type int dword_D39D4;
// D3A90: using guessed type int dword_D3A90;
