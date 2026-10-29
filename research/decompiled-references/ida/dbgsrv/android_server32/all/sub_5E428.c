/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E428
// Address: 0x0005E428

//----- (0005E428) --------------------------------------------------------
void __fastcall sub_5E428(
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
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30)
{
  int v30; // r7
  void *v31; // r0
  int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3

  v31 = *(void **)a30;
  if ( *(_DWORD *)a30 )
  {
    *(_DWORD *)(a30 + 4) = v30;
    qfree(v31);
    sub_5E9A8(v32, v33, v34, v35, a5, a6, a7, a8, a9);
  }
  else
  {
    sub_5EA3A(0, a2, a3, a4, a5, a6, a7, a8, a9);
  }
}
// 5E432: variable 'v30' is possibly undefined
// 5E438: variable 'v32' is possibly undefined
// 5E438: variable 'v33' is possibly undefined
// 5E438: variable 'v34' is possibly undefined
// 5E438: variable 'v35' is possibly undefined
