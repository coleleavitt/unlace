/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A350
// Address: 0x0004A350

//----- (0004A350) --------------------------------------------------------
int __fastcall sub_4A350(
        int a1,
        int a2,
        size_t a3,
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
        void *a19,
        int a20,
        int a21)
{
  int v21; // r4
  _DWORD *v22; // r6
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3

  v22[1] = v21;
  *(_BYTE *)(a1 + a2) = 0;
  qmemcpy((void *)(*v22 + a4), a19, a3);
  return sub_4A3B2(v23, v24, v25, v26, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
}
// 4A350: variable 'v21' is possibly undefined
// 4A350: variable 'v22' is possibly undefined
// 4A360: variable 'v23' is possibly undefined
// 4A360: variable 'v24' is possibly undefined
// 4A360: variable 'v25' is possibly undefined
// 4A360: variable 'v26' is possibly undefined
