/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433670
// Address: 0x0000000000433670

//----- (0000000000433670) ----------------------------------------------------
__int64 __fastcall sub_433670(__int64 a1)
{
  __int64 v1; // x20
  unsigned __int64 v3; // x1
  __int64 v4; // x3
  void *v5; // x0
  __int64 v6; // x1
  _DWORD *v7; // x0
  __int64 v8; // x1
  int v9; // w21
  _DWORD *v11; // x0

  v1 = a1 + 248;
  v4 = *(_QWORD *)(a1 + 256);
  v3 = *(_QWORD *)(a1 + 264);
  v5 = *(void **)(a1 + 248);
  if ( v4 + 1 > v3 )
  {
    v5 = sub_491288(v1, v5, v4 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v5;
    v4 = *(_QWORD *)(v1 + 8);
  }
  *((_DWORD *)v5 + v4) = -1;
  ++*(_QWORD *)(v1 + 8);
  v6 = *(_QWORD *)(a1 + 280);
  if ( (unsigned __int64)(v6 + 1) > *(_QWORD *)(a1 + 288) )
  {
    v7 = sub_491288(a1 + 272, *(void **)(a1 + 272), v6 + 1, 4u);
    *(_QWORD *)(a1 + 272) = v7;
    v6 = *(_QWORD *)(a1 + 280);
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 272);
  }
  v7[v6] = -1;
  ++*(_QWORD *)(a1 + 280);
  v8 = *(_QWORD *)(a1 + 304);
  v9 = *(_DWORD *)(a1 + 208);
  if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(a1 + 312) )
  {
    v11 = sub_491288(a1 + 296, *(void **)(a1 + 296), v8 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v11;
    v11[*(_QWORD *)(a1 + 304)] = v9;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 296) + 4 * v8) = v9;
  }
  ++*(_QWORD *)(a1 + 304);
  return 0;
}
