/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E694
// Address: 0x0005E694

//----- (0005E694) --------------------------------------------------------
void __fastcall sub_5E694(
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
        int *a30,
        int a31)
{
  const char *v31; // r4
  size_t v32; // r0
  __int64 v33; // r0
  int v34; // r2
  int v35; // r3

  if ( !v31 )
    v31 = &byte_A0742;
  v32 = strlen(v31);
  v33 = ((__int64 (__fastcall *)(int, const char *, size_t))loc_30B84)(a31, v31, v32 + 1);
  sub_5E6AE(
    v33,
    SHIDWORD(v33),
    v34,
    v35,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30);
}
// 5E698: variable 'v31' is possibly undefined
// 5E6AB: variable 'v34' is possibly undefined
// 5E6AB: variable 'v35' is possibly undefined
// A0742: using guessed type char byte_A0742;
