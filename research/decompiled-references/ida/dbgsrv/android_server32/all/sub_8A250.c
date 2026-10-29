/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A250
// Address: 0x0008A250

//----- (0008A250) --------------------------------------------------------
void __fastcall sub_8A250(
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
  _DWORD *v39; // r5
  int v40; // r6
  int v41; // r0
  int v42; // r2
  _DWORD *v43; // r3
  _DWORD *v44; // r1
  _DWORD *v45; // r0
  int v46; // r1
  unsigned int v47; // r4
  int v48; // r6
  _DWORD *v49; // r3
  unsigned __int8 *v50; // r1
  unsigned int v51; // r0
  int v52; // r0
  int v53; // r2
  int v54; // r1
  int v55; // r0
  int v56; // r2
  int v57; // r3

  v39[3] = a30;
  v39[4] = a34;
  *v39 = a4;
  v39[1] = a3;
  a38[15] = v40;
  a38[16] = a39;
  v41 = v39[4];
  if ( a38[11] )
    goto LABEL_33;
  v46 = a24;
  if ( a24 == v41 )
    goto LABEL_11;
  if ( *a33 < 0x3F51u && (a26 != 4 || *a33 < 0x3F4Eu) )
  {
LABEL_33:
    if ( sub_8A3E8((int)v39, v39[3], a24 - v41) )
    {
      v44 = a33;
      *a33 = 16210;
      v45 = (_DWORD *)(a29 - 3);
      goto LABEL_4;
    }
    v46 = v39[4];
  }
  else
  {
    v46 = v39[4];
  }
LABEL_11:
  v47 = a24 - v46;
  v39[5] += a24 - v46;
  v48 = a18 - v39[1];
  v39[2] += v48;
  v49 = a38;
  a38[8] += a24 - v46;
  if ( a24 != v46 && (a38[3] & 4) != 0 )
  {
    v50 = (unsigned __int8 *)(v39[3] - v47);
    v51 = a38[7];
    if ( a38[5] )
      v52 = sub_85468(v51, v50, v47);
    else
      v52 = sub_8EC00(v51, v50, v47);
    *a27 = v52;
    v39[12] = v52;
    v49 = a38;
  }
  v53 = v49[16];
  if ( v49[2] )
    v53 = v49[16] + 64;
  v54 = v53 + 128;
  v55 = v49[1];
  if ( v55 != a20 )
    v54 = v53;
  v56 = v54 + 256;
  v57 = v54 + 256;
  if ( v55 != 16194 )
    v57 = v54;
  if ( v55 != 16199 )
    v56 = v57;
  v39[11] = v56;
  v45 = (_DWORD *)(a29 - 4);
  v44 = (_DWORD *)(a29 - 4);
  v43 = a22;
  if ( v47 | v48 )
    v44 = a22;
  v42 = a26;
  if ( a26 != 4 )
    v45 = v44;
  if ( a22 )
    v45 = a22;
LABEL_4:
  sub_8A37C((int)v45, (int)v44, v42, (int)v43, a5, a6, a7, a8, a9);
}
// 8A27A: variable 'v39' is possibly undefined
// 8A284: variable 'v40' is possibly undefined
// 8A378: variable 'v42' is possibly undefined
// 8A378: variable 'v43' is possibly undefined
