/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A1C0
// Address: 0x0008A1C0

//----- (0008A1C0) --------------------------------------------------------
void __fastcall sub_8A1C0(
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
        unsigned int *a27,
        int a28,
        int a29,
        int a30,
        _DWORD *a31,
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
  int v40; // r5
  int v41; // r6
  int v42; // r2
  int v43; // r3
  int v44; // r1
  int v45; // r0
  int v46; // r1
  unsigned int v47; // r4
  int v48; // r6
  _DWORD *v49; // r3
  unsigned __int8 *v50; // r1
  unsigned int v51; // r0
  unsigned int v52; // r0
  int v53; // r2
  int v54; // r1
  int v55; // r0
  int v56; // r2
  int v57; // r3

  v42 = *(_DWORD *)(v40 + 4);
  if ( v42 )
    goto LABEL_2;
  sub_88D96();
  a31[3] = a30;
  a31[4] = v39;
  *a31 = v43;
  a31[1] = v44;
  a38[15] = v41;
  a38[16] = a39;
  v45 = a31[4];
  if ( a38[11] )
    goto LABEL_4;
  v46 = a24;
  if ( a24 != v45 )
  {
    if ( *a33 < 0x3F51u && (a26 != 4 || *a33 < 0x3F4Eu) )
    {
LABEL_4:
      if ( sub_8A3E8((int)a31, a31[3], a24 - v45) )
      {
        a2 = (int)a33;
        *a33 = 16210;
        a1 = a29 - 3;
        goto LABEL_2;
      }
      v46 = a31[4];
      goto LABEL_12;
    }
    v46 = a31[4];
  }
LABEL_12:
  v47 = a24 - v46;
  a31[5] += a24 - v46;
  v48 = a18 - a31[1];
  a31[2] += v48;
  v49 = a38;
  a38[8] += a24 - v46;
  if ( a24 != v46 && (a38[3] & 4) != 0 )
  {
    v50 = (unsigned __int8 *)(a31[3] - v47);
    v51 = a38[7];
    if ( a38[5] )
      v52 = sub_85468(v51, v50, v47);
    else
      v52 = sub_8EC00(v51, v50, v47);
    *a27 = v52;
    a31[12] = v52;
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
  a31[11] = v56;
  a1 = a29 - 4;
  a2 = a29 - 4;
  a4 = a22;
  if ( v47 | v48 )
    a2 = a22;
  v42 = a26;
  if ( a26 != 4 )
    a1 = a2;
  if ( a22 )
    a1 = a22;
LABEL_2:
  sub_8A37C(a1, a2, v42, a4, a5, a6, a7, a8, a9);
}
// 8A1C0: variable 'v40' is possibly undefined
// 8A1C6: variable 'v42' is possibly undefined
// 8A1C6: variable 'a4' is possibly undefined
// 8A27C: variable 'v39' is possibly undefined
// 8A27E: variable 'v43' is possibly undefined
// 8A280: variable 'v44' is possibly undefined
// 8A284: variable 'v41' is possibly undefined
// 88D96: using guessed type int sub_88D96(void);
