/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E6AE
// Address: 0x0005E6AE

//----- (0005E6AE) --------------------------------------------------------
void __fastcall sub_5E6AE(
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
        int *a30)
{
  int v30; // r7
  void *v31; // r0
  int v32; // r0
  void *v33; // r0

  v31 = *(void **)a29;
  if ( *(_DWORD *)a29 )
  {
    *(_DWORD *)(a29 + 4) = v30;
    qfree(v31);
    *(_DWORD *)(a29 + 8) = 0;
    *(_DWORD *)a29 = 0;
  }
  v32 = *a30;
  if ( *a30 >= a22 )
  {
    v33 = (void *)a30[2];
    if ( v33 )
    {
      a30[3] = v30;
      qfree(v33);
      a30[4] = 0;
      a30[2] = 0;
    }
    v32 = a22 - 1;
    *a30 = a22 - 1;
  }
  sub_5EA3A(v32, a2, a3, a4, a5, a6, a7, a8, a9);
}
// 5E6B8: variable 'v30' is possibly undefined
// 5E6CC: variable 'a2' is possibly undefined
// 5E6CC: variable 'a3' is possibly undefined
// 5E6CC: variable 'a4' is possibly undefined
