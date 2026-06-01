/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432C30
// Address: 0x0000000000432C30

//----- (0000000000432C30) ----------------------------------------------------
__int64 __fastcall sub_432C30(__int64 a1)
{
  __int64 v2; // x22
  __int64 v3; // x0
  __int64 v4; // x3
  __int64 v5; // x21
  char *v6; // x1
  char *v7; // x0
  char *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15[4]; // [xsp+38h] [xbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 144);
  v4 = *(_QWORD *)(v2 + 72);
  if ( v4 )
    goto LABEL_8;
  v5 = v2 + 64;
  *(_DWORD *)(a1 + 448) = v3 - 1;
  v4 = *(_QWORD *)(v2 + 72);
  while ( 1 )
  {
    v6 = *(char **)(v2 + 64);
    if ( (unsigned __int64)(v4 + 1) > *(_QWORD *)(v5 + 16) )
    {
      v9 = (char *)sub_491288(v5, v6, v4 + 1, 0x20u);
      *(_QWORD *)(v2 + 64) = v9;
      v6 = v9;
      v4 = *(_QWORD *)(v5 + 8);
    }
    v4 *= 32;
    v2 = 2;
    v7 = &v6[v4];
    v6[v4] = 2;
    *((_QWORD *)v7 + 1) = 0;
    *((_QWORD *)v7 + 2) = 0;
    *((_QWORD *)v7 + 3) = 0;
    ++*(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(a1 + 432) == 1 )
      break;
    v3 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(1437);
    __break(0x3E8u);
LABEL_8:
    v5 = v2 + 64;
    if ( v4 + *(_DWORD *)(a1 + 448) + 1 != v3 )
      return sub_4869C8(1268);
  }
  sub_444078((unsigned __int64)v7, *(_QWORD **)(a1 + 424));
  LOBYTE(v15[0]) = 2;
  v11 = *(_QWORD *)(a1 + 424);
  v10 = *(_QWORD *)(a1 + 432);
  memset(&v15[1], 0, 24);
  sub_4488B8(v15, (__int64 *)(v11 + 32 * v10 - 32));
  v12 = *(_QWORD *)(a1 + 432);
  if ( v12 )
  {
    v13 = v12 - 1;
    v14 = *(_QWORD *)(a1 + 424);
    *(_QWORD *)(a1 + 432) = v13;
    sub_448310((__int64 *)(v14 + 32 * v13));
  }
  sub_448310(v15);
  return 0;
}
// 52451C: using guessed type char under_debugger;
