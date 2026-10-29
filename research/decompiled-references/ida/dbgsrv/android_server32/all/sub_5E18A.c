/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E18A
// Address: 0x0005E18A

//----- (0005E18A) --------------------------------------------------------
void __fastcall sub_5E18A(
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
        void *a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        char a38,
        __int16 a39)
{
  signed int v39; // r6
  _BYTE *v40; // r0
  const char *v41; // r5
  size_t v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r3
  char *v46; // r0
  int v47; // r0
  int v48; // r1
  int v49; // r2
  int v50; // r3

  v40 = pack_dd(&a38, (unsigned int)&a39 + 1, v39);
  ((void (__fastcall *)(int, char *, int))loc_30B84)(a31, &a38, v40 - &a38);
  if ( v39 < 1 )
  {
    if ( *(_DWORD *)(a30 + 4) )
      v41 = *(const char **)a30;
    else
      v41 = &byte_B3CBE;
    if ( !v41 )
      v41 = &byte_A0742;
    v42 = strlen(v41);
    ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a31, v41, v42 + 1);
  }
  else
  {
    ((void (__fastcall *)(int, void *, signed int))loc_30B84)(a31, a23, v39);
  }
  operator delete[](a23);
  v46 = *(char **)a30;
  if ( *(_DWORD *)a30 )
  {
    *(_DWORD *)(a30 + 4) = 0;
    qfree(v46);
    sub_5E9A8(v47, v48, v49, v50, a5, a6, a7, a8, a9);
  }
  else
  {
    sub_5EA3A(0, v43, v44, v45, a5, a6, a7, a8, a9);
  }
}
// 5E190: variable 'v39' is possibly undefined
// 5E74A: variable 'v43' is possibly undefined
// 5E74A: variable 'v44' is possibly undefined
// 5E74A: variable 'v45' is possibly undefined
// 5E754: variable 'v47' is possibly undefined
// 5E754: variable 'v48' is possibly undefined
// 5E754: variable 'v49' is possibly undefined
// 5E754: variable 'v50' is possibly undefined
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
