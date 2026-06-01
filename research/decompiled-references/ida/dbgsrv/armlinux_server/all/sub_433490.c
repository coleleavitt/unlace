/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433490
// Address: 0x0000000000433490

//----- (0000000000433490) ----------------------------------------------------
__int64 __fastcall sub_433490(__int64 a1)
{
  _DWORD *v2; // x21
  _QWORD *v3; // x0
  size_t v4; // x20
  _QWORD *v5; // x19
  _QWORD *v6; // x0
  __int64 v7; // x3
  void *v9; // x0
  const void *v10; // x1

  v2 = sub_49E050(0x20u);
  *v2 = 1;
  v2[6] = 0;
  v3 = sub_49E050(0x18u);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  if ( v4 )
  {
    v9 = sub_491248(v4);
    v10 = *(const void **)(a1 + 40);
    *v5 = v9;
    v5[2] = v4;
    memcpy(v9, v10, v4);
    v5[1] = v4;
  }
  *((_QWORD *)v2 + 2) = v5;
  v6 = *(_QWORD **)(a1 + 344);
  v7 = *(_QWORD *)(a1 + 352);
  if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(a1 + 360) )
  {
    v6 = sub_491288(a1 + 344, *(void **)(a1 + 344), v7 + 1, 8u);
    *(_QWORD *)(a1 + 344) = v6;
    v7 = *(_QWORD *)(a1 + 352);
  }
  v6[v7] = v2;
  ++*(_QWORD *)(a1 + 352);
  return 0;
}
