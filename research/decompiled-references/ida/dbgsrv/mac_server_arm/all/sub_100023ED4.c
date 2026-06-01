/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100023ED4
// Address: 0x0000000100023ED4

//----- (0000000100023ED4) ----------------------------------------------------
__int64 __fastcall sub_100023ED4(__int64 a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x1
  __int64 v4; // x8
  _QWORD *v5; // x1
  __int64 v6; // x8
  int v7; // w20
  _QWORD *v8; // x1
  __int64 v9; // x8

  v3 = *(_QWORD **)(a1 + 248);
  v4 = *(_QWORD *)(a1 + 256);
  v2 = (_QWORD *)(a1 + 248);
  if ( v2[2] < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(v2, v3, v4 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v3;
    v4 = *(_QWORD *)(a1 + 256);
  }
  *((_DWORD *)v3 + v4) = -1;
  ++*(_QWORD *)(a1 + 256);
  v5 = *(_QWORD **)(a1 + 272);
  v6 = *(_QWORD *)(a1 + 280);
  if ( *(_QWORD *)(a1 + 288) < (unsigned __int64)(v6 + 1) )
  {
    v5 = qvector_reserve((_QWORD *)(a1 + 272), v5, v6 + 1, 4u);
    *(_QWORD *)(a1 + 272) = v5;
    v6 = *(_QWORD *)(a1 + 280);
  }
  *((_DWORD *)v5 + v6) = -1;
  ++*(_QWORD *)(a1 + 280);
  v7 = *(_DWORD *)(a1 + 208);
  v8 = *(_QWORD **)(a1 + 296);
  v9 = *(_QWORD *)(a1 + 304);
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v9 + 1) )
  {
    v8 = qvector_reserve((_QWORD *)(a1 + 296), v8, v9 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v8;
    v9 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v8 + v9) = v7;
  ++*(_QWORD *)(a1 + 304);
  return 0;
}
