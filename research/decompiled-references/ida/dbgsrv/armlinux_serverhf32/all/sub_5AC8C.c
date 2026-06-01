/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AC8C
// Address: 0x0005AC8C

//----- (0005AC8C) --------------------------------------------------------
int __fastcall sub_5AC8C(int a1, int a2, __int64 a3, char a4)
{
  __int64 v7; // r0
  int v8; // r4
  unsigned int v10; // r3
  int v11; // r3
  void *v12; // r6
  size_t v13; // r0
  void *v14; // r0
  unsigned int v15; // r3
  unsigned int v16; // [sp+10h] [bp-Ch] BYREF

  if ( a3 )
  {
    LODWORD(v7) = sub_74C30(a2, a3, 0);
    if ( a3 != v7 )
      return 0;
  }
  if ( sub_74A28(a2, &v16, 4) != 4 )
    return 0;
  v10 = v16;
  if ( a4 )
  {
    v10 = bswap32(v16);
    v16 = v10;
  }
  if ( v10 <= 4 )
    return 0;
  sub_74C30(a2, -4, 1);
  v8 = sub_5ABE8(a2, &v16, 1u, v11, -1, -1);
  if ( !v8 )
    return 0;
  v12 = sub_77D94(v16 + 1);
  if ( !v12 )
    return 0;
  v13 = sub_74A28(a2, v12, v16);
  if ( v13 == v16 )
  {
    *((_BYTE *)v12 + v13) = 0;
    v14 = *(void **)a1;
    if ( *(_DWORD *)a1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      sub_77E08(v14);
    }
    v15 = v16;
    *(_DWORD *)a1 = v12;
    *(_DWORD *)(a1 + 4) = ++v15;
    *(_DWORD *)(a1 + 8) = v15;
  }
  else
  {
    v8 = 0;
    sub_77E08(v12);
  }
  return v8;
}
// 5ACC2: variable 'v7' is possibly undefined
// 5AD1A: variable 'v11' is possibly undefined
