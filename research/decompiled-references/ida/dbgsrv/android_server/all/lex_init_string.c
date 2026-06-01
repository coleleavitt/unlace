/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_init_string
// Address: 0x000000000007D858

//----- (000000000007D858) ----------------------------------------------------
__int64 __fastcall lex_init_string(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 i; // x8
  __int64 v12; // x8
  __int64 v13; // x0
  int v14; // w9

  for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)(a1 + 64) )
  {
    v12 = i - 1;
    v13 = *(_QWORD *)(a1 + 56) + 56 * v12;
    *(_QWORD *)a1 = *(_QWORD *)(v13 + 24);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v13 + 32);
    v14 = *(_DWORD *)(v13 + 48);
    *(_QWORD *)(a1 + 64) = v12;
    *(_DWORD *)(a1 + 80) = v14;
    sub_39570(v13);
  }
  *(_QWORD *)(a1 + 216) = a2;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  *(_BYTE *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 324) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 200) = sub_7D9B8;
  *(_QWORD *)(a1 + 208) = a1 + 216;
  *(_BYTE *)(a1 + 128) = 0;
  if ( a3 )
  {
    sub_7D730(a1, a2, a3, a4, a5, a6, a7, a8);
    *(_QWORD *)(a1 + 624) = a3;
    *(_BYTE *)(a1 + 672) = 1;
  }
  return 0;
}
// 7D8E4: variable 'a2' is possibly undefined
// 7D8E4: variable 'a3' is possibly undefined
// 7D8E4: variable 'a4' is possibly undefined
// 7D8E4: variable 'a5' is possibly undefined
// 7D8E4: variable 'a6' is possibly undefined
// 7D8E4: variable 'a7' is possibly undefined
// 7D8E4: variable 'a8' is possibly undefined
