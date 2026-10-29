/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D2B2
// Address: 0x0004D2B2

//----- (0004D2B2) --------------------------------------------------------
void __fastcall __noreturn sub_4D2B2(
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
        unsigned __int8 a23,
        int a24,
        void *a25,
        int a26,
        int a27)
{
  int *v27; // r7
  int v28; // r1
  int v29; // r2
  int v30; // r3

  if ( a23 == 5 )
  {
    sub_448A0((int)a25, &a23);
  }
  else if ( a23 == 7 )
  {
    if ( a25 )
    {
      a26 = 0;
      qfree(a25);
      a27 = 0;
      a25 = nullptr;
      Unwind_Resume(v27, v28, v29, v30);
    }
  }
  Unwind_Resume(v27, a2, a3, a4);
}
// 4D2D4: variable 'v27' is possibly undefined
// 4D2D4: variable 'v28' is possibly undefined
// 4D2D4: variable 'v29' is possibly undefined
// 4D2D4: variable 'v30' is possibly undefined
// 4D2E2: variable 'a2' is possibly undefined
// 4D2E2: variable 'a3' is possibly undefined
// 4D2E2: variable 'a4' is possibly undefined
