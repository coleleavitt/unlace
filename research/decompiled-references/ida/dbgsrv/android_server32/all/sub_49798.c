/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49798
// Address: 0x00049798

//----- (00049798) --------------------------------------------------------
int __fastcall sub_49798(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        unsigned __int8 a17,
        int a18,
        int a19)
{
  int v19; // r5
  int v20; // r0
  __int64 v21; // r0
  __int64 v22; // r0
  int v23; // r2
  int v24; // r3

  v20 = *(_DWORD *)(v19 + 12);
  *(_DWORD *)(v19 + 12) = 0;
  *(_DWORD *)(v19 + 8) = (*(_DWORD *)(v19 + 8) | v20) == 0;
  v21 = sub_4A040();
  LODWORD(v21) = v21 + HIDWORD(v21);
  *(_DWORD *)(v21 + 12) = ~*(_DWORD *)(v21 + 12);
  *(_DWORD *)(v21 + 8) = ~*(_DWORD *)(v21 + 8);
  v22 = sub_4A040();
  return sub_497E0(v22, SHIDWORD(v22), v23, v24, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
}
// 49798: variable 'v19' is possibly undefined
// 497DD: variable 'v23' is possibly undefined
// 497DD: variable 'v24' is possibly undefined
// 4A040: using guessed type __int64 sub_4A040(void);
