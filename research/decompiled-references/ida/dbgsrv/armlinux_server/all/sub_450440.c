/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450440
// Address: 0x0000000000450440

//----- (0000000000450440) ----------------------------------------------------
__int64 __fastcall sub_450440(__int64 a1)
{
  FILE *v2; // x0
  __int64 v3; // x2
  __int64 v4; // x1

  v2 = *(FILE **)(a1 + 288);
  if ( v2 )
    sub_4906A0(v2);
  j__free(*(void **)(a1 + 296));
  *(_QWORD *)(a1 + 296) = 0;
  v3 = *(_QWORD *)(a1 + 272);
  v4 = *(_QWORD *)(a1 + 264) + 40 * v3 - 40;
  *(_QWORD *)(a1 + 288) = *(_QWORD *)(v4 + 8);
  *(_DWORD *)(a1 + 304) = *(_DWORD *)(v4 + 32);
  *(_QWORD *)(a1 + 296) = *(_QWORD *)v4;
  *(_BYTE *)(a1 + 144) = *(_BYTE *)(v4 + 36);
  *(_QWORD *)(a1 + 216) = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(v4 + 24);
  if ( v3 )
    *(_QWORD *)(a1 + 272) = v3 - 1;
  return 1;
}
