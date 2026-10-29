/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A1F0
// Address: 0x0008A1F0

//----- (0008A1F0) --------------------------------------------------------
void __fastcall sub_8A1F0(
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
        _DWORD *a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int *a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        _DWORD *a33,
        int a34,
        int a35,
        int a36,
        int a37,
        _DWORD *a38,
        int a39)
{
  int v39; // r4
  _DWORD *v40; // r5
  int v41; // r6
  int v42; // r0
  int v43; // r2
  _DWORD *v44; // r3
  _DWORD *v45; // r1
  _DWORD *v46; // r0
  int v47; // r1
  unsigned int v48; // r4
  int v49; // r6
  _DWORD *v50; // r3
  unsigned __int8 *v51; // r1
  unsigned int v52; // r0
  int v53; // r0
  int v54; // r2
  int v55; // r1
  int v56; // r0
  int v57; // r2
  int v58; // r3

  v40[3] = a30;
  v40[4] = v39;
  *v40 = a4;
  v40[1] = a3;
  a38[15] = v41;
  a38[16] = a39;
  v42 = v40[4];
  if ( a38[11] )
    goto LABEL_33;
  v47 = a24;
  if ( a24 == v42 )
    goto LABEL_11;
  if ( *a33 < 0x3F51u && (a26 != 4 || *a33 < 0x3F4Eu) )
  {
LABEL_33:
    if ( sub_8A3E8((int)v40, v40[3], a24 - v42) )
    {
      v45 = a33;
      *a33 = 16210;
      v46 = (_DWORD *)(a29 - 3);
      goto LABEL_4;
    }
    v47 = v40[4];
  }
  else
  {
    v47 = v40[4];
  }
LABEL_11:
  v48 = a24 - v47;
  v40[5] += a24 - v47;
  v49 = a18 - v40[1];
  v40[2] += v49;
  v50 = a38;
  a38[8] += a24 - v47;
  if ( a24 != v47 && (a38[3] & 4) != 0 )
  {
    v51 = (unsigned __int8 *)(v40[3] - v48);
    v52 = a38[7];
    if ( a38[5] )
      v53 = sub_85468(v52, v51, v48);
    else
      v53 = sub_8EC00(v52, v51, v48);
    *a27 = v53;
    v40[12] = v53;
    v50 = a38;
  }
  v54 = v50[16];
  if ( v50[2] )
    v54 = v50[16] + 64;
  v55 = v54 + 128;
  v56 = v50[1];
  if ( v56 != a20 )
    v55 = v54;
  v57 = v55 + 256;
  v58 = v55 + 256;
  if ( v56 != 16194 )
    v58 = v55;
  if ( v56 != 16199 )
    v57 = v58;
  v40[11] = v57;
  v46 = (_DWORD *)(a29 - 4);
  v45 = (_DWORD *)(a29 - 4);
  v44 = a22;
  if ( v48 | v49 )
    v45 = a22;
  v43 = a26;
  if ( a26 != 4 )
    v46 = v45;
  if ( a22 )
    v46 = a22;
LABEL_4:
  sub_8A37C((int)v46, (int)v45, v43, (int)v44, a5, a6, a7, a8, a9);
}
// 8A27A: variable 'v40' is possibly undefined
// 8A27C: variable 'v39' is possibly undefined
// 8A284: variable 'v41' is possibly undefined
// 8A378: variable 'v43' is possibly undefined
// 8A378: variable 'v44' is possibly undefined
