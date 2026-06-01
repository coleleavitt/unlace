/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E290
// Address: 0x0005E290

//----- (0005E290) --------------------------------------------------------
void __fastcall sub_5E290(
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
        void **a29,
        int a30,
        int a31)
{
  int v31; // r5
  const char *v32; // r4
  size_t v33; // r0
  __int64 v34; // r0
  int v35; // r2
  int v36; // r3

  if ( !*(_DWORD *)(v31 + 4) )
  {
    v32 = &byte_B3CBE;
    if ( &byte_B3CBE )
      goto LABEL_4;
    goto LABEL_3;
  }
  v32 = *(const char **)v31;
  if ( !*(_DWORD *)v31 )
LABEL_3:
    v32 = &byte_A0742;
LABEL_4:
  v33 = strlen(v32);
  v34 = ((__int64 (__fastcall *)(int, const char *, size_t))loc_30B84)(a31, v32, v33 + 1);
  sub_5E2B2(
    v34,
    SHIDWORD(v34),
    v35,
    v36,
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
    a29);
}
// 5E290: variable 'v31' is possibly undefined
// 5E2AF: variable 'v35' is possibly undefined
// 5E2AF: variable 'v36' is possibly undefined
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
