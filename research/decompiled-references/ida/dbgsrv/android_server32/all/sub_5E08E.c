/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E08E
// Address: 0x0005E08E

//----- (0005E08E) --------------------------------------------------------
int __fastcall sub_5E08E(
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
        int a30,
        int a31)
{
  const char *v31; // r5
  size_t v32; // r0
  int v33; // r0

  if ( !*(_DWORD *)(a29 + 4) )
  {
    v31 = &byte_B3CBE;
    if ( &byte_B3CBE )
      goto LABEL_4;
    goto LABEL_3;
  }
  v31 = *(const char **)a29;
  if ( !*(_DWORD *)a29 )
LABEL_3:
    v31 = &byte_A0742;
LABEL_4:
  v32 = strlen(v31);
  v33 = ((int (__fastcall *)(int, const char *, size_t))loc_30B84)(a31, v31, v32 + 1);
  return sub_5E0B4(v33);
}
// 5E0B4: using guessed type int __fastcall sub_5E0B4(_DWORD);
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
