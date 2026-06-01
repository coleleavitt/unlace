/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436510
// Address: 0x0000000000436510

//----- (0000000000436510) ----------------------------------------------------
__int64 __fastcall sub_436510(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x1
  _BYTE *v4; // x0
  int v5; // w21
  __int64 v6; // x0
  unsigned int v7; // w3
  __int64 v8; // x1
  _DWORD *v10; // x0

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
  sub_436010(a1, 0);
  sub_436010(a1, 0);
  v6 = *(_QWORD *)(a1 + 232);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 224) + 4 * v6 - 4);
  if ( v6 )
    *(_QWORD *)(a1 + 232) = v6 - 1;
  sub_43D210(*(_QWORD *)(a1 + 200), v7, *(_DWORD *)(a1 + 208) - 4 - v7);
  v8 = *(_QWORD *)(a1 + 232);
  if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(a1 + 240) )
  {
    v10 = sub_491288(a1 + 224, *(void **)(a1 + 224), v8 + 1, 4u);
    *(_QWORD *)(a1 + 224) = v10;
    v10[*(_QWORD *)(a1 + 232)] = v5;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 224) + 4 * v8) = v5;
  }
  ++*(_QWORD *)(a1 + 232);
  return 0;
}
