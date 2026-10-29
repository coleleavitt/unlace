/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436708
// Address: 0x0000000000436708

//----- (0000000000436708) ----------------------------------------------------
__int64 __fastcall sub_436708(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x1
  _BYTE *v4; // x0
  int v5; // w20
  __int64 v6; // x1
  _DWORD *v7; // x0

  *(_BYTE *)(a1 + 212) = -85;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD *)(v2 + 8);
  if ( (unsigned __int64)(v3 + 1) > *(_QWORD *)(v2 + 16) )
  {
    v4 = sub_491288(v2, *(void **)v2, v3 + 1, 1u);
    *(_QWORD *)v2 = v4;
    v3 = *(_QWORD *)(v2 + 8);
  }
  else
  {
    v4 = *(_BYTE **)v2;
  }
  v4[v3] = -85;
  ++*(_QWORD *)(v2 + 8);
  v5 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v5;
  v6 = *(_QWORD *)(a1 + 304);
  if ( (unsigned __int64)(v6 + 1) > *(_QWORD *)(a1 + 312) )
  {
    v7 = sub_491288(a1 + 296, *(void **)(a1 + 296), v6 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v7;
    v6 = *(_QWORD *)(a1 + 304);
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 296);
  }
  v7[v6] = v5;
  ++*(_QWORD *)(a1 + 304);
  sub_436010(a1, 0);
  sub_436010(a1, 0);
  return 0;
}
