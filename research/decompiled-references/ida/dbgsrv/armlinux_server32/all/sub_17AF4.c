/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_17AF4
// Address: 0x00017AF4

//----- (00017AF4) --------------------------------------------------------
void *__fastcall sub_17AF4(int a1, int a2)
{
  _DWORD *v2; // r3
  _DWORD *v4; // r1
  _DWORD *v6; // r0
  int v7; // r2
  int *v8; // r6
  void *v9; // r0
  unsigned int v10; // r3
  void *result; // r0
  unsigned int v12; // r2
  void *v13; // r1

  v2 = *(_DWORD **)(a1 + 1008);
  if ( !v2 )
    goto LABEL_11;
  v4 = (_DWORD *)(a1 + 1004);
  v6 = (_DWORD *)(a1 + 1004);
  do
  {
    v7 = v2[4];
    if ( v7 < a2 )
      v2 = (_DWORD *)v2[3];
    else
      v6 = v2;
    if ( v7 >= a2 )
      v2 = (_DWORD *)v2[2];
  }
  while ( v2 );
  if ( v4 == v6 || v6[4] > a2 )
  {
LABEL_11:
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(30064);
  }
  if ( *((_BYTE *)v6 + 45) )
    --*(_DWORD *)(a1 + 1108);
  v8 = sub_81644(v6, v4);
  v9 = (void *)v8[13];
  if ( v9 )
  {
    v8[14] = 0;
    sub_77F70(v9);
  }
  sub_809EC(v8);
  v10 = *(_DWORD *)(a1 + 1028);
  --*(_DWORD *)(a1 + 1020);
  if ( v10 > 9 )
  {
    memmove(*(void **)(a1 + 1024), (const void *)(*(_DWORD *)(a1 + 1024) + 4), 4 * v10 - 4);
    result = *(void **)(a1 + 1032);
    v13 = *(void **)(a1 + 1024);
    v10 = *(_DWORD *)(a1 + 1028) - 1;
    v12 = *(_DWORD *)(a1 + 1028);
    *(_DWORD *)(a1 + 1028) = v10;
    if ( v12 <= (unsigned int)result )
      goto LABEL_19;
    goto LABEL_20;
  }
  result = *(void **)(a1 + 1032);
  v12 = v10 + 1;
  v13 = *(void **)(a1 + 1024);
  if ( v10 + 1 > (unsigned int)result )
  {
LABEL_20:
    result = sub_78018(a1 + 1024, v13, v12, 4u);
    v10 = *(_DWORD *)(a1 + 1028);
    v13 = result;
    *(_DWORD *)(a1 + 1024) = result;
  }
LABEL_19:
  *((_DWORD *)v13 + v10) = a2;
  ++*(_DWORD *)(a1 + 1028);
  return result;
}
// D6C20: using guessed type char under_debugger;
