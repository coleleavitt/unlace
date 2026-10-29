/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4367E0
// Address: 0x00000000004367E0

//----- (00000000004367E0) ----------------------------------------------------
__int64 __fastcall sub_4367E0(__int64 a1)
{
  __int64 v2; // x21
  __int64 v3; // x1
  _BYTE *v4; // x0
  __int64 v5; // x1
  _DWORD *v6; // x0
  unsigned __int64 v7; // x0
  __int64 v8; // x2
  __int64 v9; // x1
  unsigned __int64 v10; // x2
  int v11; // w21
  _DWORD *v12; // x0

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
  ++*(_DWORD *)(a1 + 208);
  v5 = *(_QWORD *)(a1 + 304);
  if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(a1 + 312) )
  {
    v6 = sub_491288(a1 + 296, *(void **)(a1 + 296), v5 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v6;
    v5 = *(_QWORD *)(a1 + 304);
  }
  else
  {
    v6 = *(_DWORD **)(a1 + 296);
  }
  v6[v5] = 0;
  v8 = *(_QWORD *)(a1 + 304);
  v7 = *(_QWORD *)(a1 + 312);
  v9 = v8 + 1;
  *(_QWORD *)(a1 + 304) = v8 + 1;
  v10 = v8 + 2;
  v11 = *(_DWORD *)(a1 + 208);
  if ( v10 > v7 )
  {
    v12 = sub_491288(a1 + 296, *(void **)(a1 + 296), v10, 4u);
    *(_QWORD *)(a1 + 296) = v12;
    v9 = *(_QWORD *)(a1 + 304);
  }
  else
  {
    v12 = *(_DWORD **)(a1 + 296);
  }
  v12[v9] = v11;
  ++*(_QWORD *)(a1 + 304);
  sub_436010(a1, 0);
  sub_436010(a1, 0);
  return 0;
}
