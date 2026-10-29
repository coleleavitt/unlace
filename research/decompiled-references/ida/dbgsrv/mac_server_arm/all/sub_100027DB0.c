/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027DB0
// Address: 0x0000000100027DB0

//----- (0000000100027DB0) ----------------------------------------------------
__int64 __fastcall sub_100027DB0(__int64 a1)
{
  __int64 v2; // x8
  char *v3; // x1
  bool v4; // cf
  size_t v5; // x8
  size_t v6; // x2
  __int64 v7; // x20
  _QWORD *v8; // x1
  __int64 v9; // x8

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    v3 = *(char **)(a1 + 40);
  else
    v3 = &byte_100075A30;
  v4 = v2 != 0;
  v5 = v2 - 1;
  if ( v4 )
    v6 = v5;
  else
    v6 = 0;
  sub_1000219A4(a1, v3, v6);
  *(_BYTE *)(a1 + 212) = -80;
  v7 = *(_QWORD *)(a1 + 200);
  v8 = *(_QWORD **)v7;
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
  {
    v8 = qvector_reserve(*(_QWORD **)(a1 + 200), v8, v9 + 1, 1u);
    *(_QWORD *)v7 = v8;
    v9 = *(_QWORD *)(v7 + 8);
  }
  *((_BYTE *)v8 + v9) = -80;
  ++*(_QWORD *)(v7 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
