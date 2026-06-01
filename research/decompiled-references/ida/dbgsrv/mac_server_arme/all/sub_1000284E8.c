/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000284E8
// Address: 0x00000001000284E8

//----- (00000001000284E8) ----------------------------------------------------
__int64 __fastcall sub_1000284E8(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x8
  char *v4; // x1
  _QWORD *v5; // x1
  int v6; // w20
  __int64 v7; // x8
  _QWORD *v8; // x1
  __int64 v9; // x8

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  if ( *(_DWORD *)v2 == 1 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    if ( *(_QWORD *)(v3 + 8) )
      v4 = *(char **)v3;
    else
      v4 = &byte_10007AE40;
  }
  else
  {
    v4 = &byte_1000931E5;
  }
  sub_1000285D0(a1 + 160, v4);
  v5 = *(_QWORD **)(a1 + 248);
  v6 = *(_DWORD *)(a1 + 208);
  v7 = *(_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v7 + 1) )
  {
    v5 = qvector_reserve((_QWORD *)(a1 + 248), v5, v7 + 1, 4u);
    *(_QWORD *)(a1 + 248) = v5;
    v7 = *(_QWORD *)(a1 + 256);
  }
  *((_DWORD *)v5 + v7) = v6;
  ++*(_QWORD *)(a1 + 256);
  v8 = *(_QWORD **)(a1 + 320);
  v9 = *(_QWORD *)(a1 + 328);
  if ( *(_QWORD *)(a1 + 336) < (unsigned __int64)(v9 + 1) )
  {
    v8 = qvector_reserve((_QWORD *)(a1 + 320), v8, v9 + 1, 2u);
    *(_QWORD *)(a1 + 320) = v8;
    v9 = *(_QWORD *)(a1 + 328);
  }
  *((_WORD *)v8 + v9) = 0;
  ++*(_QWORD *)(a1 + 328);
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000931E5: using guessed type char byte_1000931E5;
