/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027E4C
// Address: 0x0000000100027E4C

//----- (0000000100027E4C) ----------------------------------------------------
__int64 __fastcall sub_100027E4C(__int64 a1)
{
  __int64 v2; // x20
  _QWORD *v3; // x1
  __int64 v4; // x8
  __int64 v5; // x8
  char *v6; // x1
  bool v7; // cf
  size_t v8; // x8
  size_t v9; // x2
  __int64 v10; // x20
  _QWORD *v11; // x1
  __int64 v12; // x8

  *(_BYTE *)(a1 + 212) = -86;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(*(_QWORD **)(a1 + 200), v3, v4 + 1, 1u);
    *(_QWORD *)v2 = v3;
    v4 = *(_QWORD *)(v2 + 8);
  }
  *((_BYTE *)v3 + v4) = -86;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
    v6 = *(char **)(a1 + 40);
  else
    v6 = &byte_100075A30;
  v7 = v5 != 0;
  v8 = v5 - 1;
  if ( v7 )
    v9 = v8;
  else
    v9 = 0;
  sub_1000219A4(a1, v6, v9);
  *(_BYTE *)(a1 + 212) = 1;
  v10 = *(_QWORD *)(a1 + 200);
  v11 = *(_QWORD **)v10;
  v12 = *(_QWORD *)(v10 + 8);
  if ( *(_QWORD *)(v10 + 16) < (unsigned __int64)(v12 + 1) )
  {
    v11 = qvector_reserve(*(_QWORD **)(a1 + 200), v11, v12 + 1, 1u);
    *(_QWORD *)v10 = v11;
    v12 = *(_QWORD *)(v10 + 8);
  }
  *((_BYTE *)v11 + v12) = 1;
  ++*(_QWORD *)(v10 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
