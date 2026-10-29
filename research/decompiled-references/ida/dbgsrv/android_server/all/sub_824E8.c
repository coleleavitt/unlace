/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_824E8
// Address: 0x00000000000824E8

//----- (00000000000824E8) ----------------------------------------------------
__int64 __fastcall sub_824E8(__int64 a1)
{
  FILE *v2; // x0
  __int64 v3; // x9
  __int64 v4; // x10
  __int64 v5; // x10

  if ( !*(_QWORD *)(a1 + 256) )
    return 0;
  v2 = *(FILE **)(a1 + 272);
  if ( v2 )
    qfclose(v2);
  qfree(*(void **)(a1 + 280));
  v4 = *(_QWORD *)(a1 + 248);
  v3 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 280) = 0;
  v5 = v4 + 40 * (v3 - 1);
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(v5 + 8);
  *(_DWORD *)(a1 + 288) = *(_DWORD *)(v5 + 32);
  *(_QWORD *)(a1 + 280) = *(_QWORD *)v5;
  *(_BYTE *)(a1 + 128) = *(_BYTE *)(v5 + 36);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(v5 + 16);
  *(_QWORD *)(a1 + 208) = *(_QWORD *)(v5 + 24);
  if ( v3 )
    *(_QWORD *)(a1 + 256) = v3 - 1;
  return 1;
}
