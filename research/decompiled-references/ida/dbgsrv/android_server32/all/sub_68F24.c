/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68F24
// Address: 0x00068F24

//----- (00068F24) --------------------------------------------------------
int __fastcall sub_68F24(int a1, unsigned int *a2)
{
  unsigned int v4; // r0
  int v5; // r6
  unsigned int v6; // r1
  char *v7; // r0
  int v8; // r7
  char *v9; // r5
  char *v10; // r5
  int v12; // [sp+8h] [bp-18h]
  _DWORD v13[5]; // [sp+Ch] [bp-14h] BYREF

  v4 = unpack_dd(a2, a2[1]);
  v5 = v4;
  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 < v4 )
  {
    if ( *(_DWORD *)(a1 + 8) >= v4 )
    {
      v7 = *(char **)a1;
    }
    else
    {
      v7 = (char *)qvector_reserve(a1, *(void **)a1, v4, 0x10u);
      *(_DWORD *)a1 = v7;
      v6 = *(_DWORD *)(a1 + 4);
    }
    memset(&v7[16 * v6], 0, 16 * (v5 - v6));
    *(_DWORD *)(a1 + 4) = v5;
LABEL_9:
    if ( v5 < 1 )
      return _stack_chk_guard - v13[4];
    goto LABEL_10;
  }
  if ( v6 == v4 )
    goto LABEL_9;
  memset(v13, 0, 16);
  sub_696F4((char **)a1, v4, (char *)v13);
  if ( v5 < 1 )
    return _stack_chk_guard - v13[4];
LABEL_10:
  v8 = 0;
  v12 = a1;
  do
  {
    v9 = *(char **)a1;
    *(_DWORD *)&v9[v8] = unpack_dq(a2, a2[1]) - 1;
    v10 = &v9[v8];
    *((_DWORD *)v10 + 1) = unpack_dq(a2, a2[1]) - 1;
    *((_DWORD *)v10 + 2) = unpack_dq(a2, a2[1]) - 1;
    v10[12] = unpack_dd(a2, a2[1]) != 0;
    v8 += 16;
    --v5;
    a1 = v12;
  }
  while ( v5 );
  return _stack_chk_guard - v13[4];
}
