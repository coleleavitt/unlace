/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E932
// Address: 0x0005E932

//----- (0005E932) --------------------------------------------------------
void __fastcall sub_5E932(
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
        int *a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        __int16 a39,
        int a40,
        _DWORD *a41)
{
  unsigned int v41; // r5
  _BYTE *v42; // r0
  const char *v43; // r4
  size_t v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r3
  void *v48; // r0
  char *v49; // r0
  int v50; // r0
  int v51; // r1
  int v52; // r2
  int v53; // r3

  v42 = pack_dd(&a38, (unsigned int)&a39 + 1, v41);
  ((void (__fastcall *)(int, int *, int))loc_30B84)(a31, &a38, v42 - (_BYTE *)&a38);
  if ( v41 == 1 )
  {
    sub_69518(a31, a41, a21, *a29);
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(a30 + 4) )
  {
    v43 = &byte_B3CBE;
    if ( &byte_B3CBE )
      goto LABEL_6;
    goto LABEL_5;
  }
  v43 = *(const char **)a30;
  if ( !*(_DWORD *)a30 )
LABEL_5:
    v43 = &byte_A0742;
LABEL_6:
  v44 = strlen(v43);
  ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a31, v43, v44 + 1);
LABEL_7:
  sub_5F79C((void **)&a41);
  v48 = (void *)*a29;
  if ( *a29 )
  {
    a29[1] = a22;
    qfree(v48);
    a29[2] = 0;
    *a29 = 0;
  }
  v49 = *(char **)a30;
  if ( *(_DWORD *)a30 )
  {
    *(_DWORD *)(a30 + 4) = a22;
    qfree(v49);
    sub_5E9A8(v50, v51, v52, v53, a5, a6, a7, a8, a9);
  }
  else
  {
    sub_5EA3A(0, v45, v46, v47, a5, a6, a7, a8, a9);
  }
}
// 5E938: variable 'v41' is possibly undefined
// 5E9A0: variable 'v45' is possibly undefined
// 5E9A0: variable 'v46' is possibly undefined
// 5E9A0: variable 'v47' is possibly undefined
// 5E9A5: variable 'v50' is possibly undefined
// 5E9A5: variable 'v51' is possibly undefined
// 5E9A5: variable 'v52' is possibly undefined
// 5E9A5: variable 'v53' is possibly undefined
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
