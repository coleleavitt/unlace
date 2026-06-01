/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89E6E
// Address: 0x00089E6E

//----- (00089E6E) --------------------------------------------------------
void __fastcall sub_89E6E(
        int a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        int a10,
        _DWORD *a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int *a19,
        int a20,
        int a21,
        _DWORD *a22,
        int a23,
        unsigned __int8 *a24,
        int a25,
        int a26,
        int *a27,
        int a28,
        int a29,
        unsigned __int8 *a30,
        unsigned __int8 **a31,
        int a32,
        int *a33,
        unsigned __int8 *a34,
        unsigned int *a35,
        int a36,
        int a37,
        _DWORD *a38,
        unsigned int a39)
{
  int v39; // r6
  int v40; // r7
  int v41; // r2
  int v42; // r0
  unsigned int v43; // r1
  int v44; // r4
  int v45; // r6
  int v46; // r2
  int v47; // r3
  unsigned __int8 v48; // r2
  int *v49; // r3
  int v50; // r0
  unsigned int v51; // r4
  _DWORD *v52; // r1
  int v53; // r2
  unsigned int v54; // r7
  int v55; // r2
  int v56; // r6
  unsigned int v57; // r2
  unsigned __int8 *v58; // r0
  int v59; // r2
  _DWORD *v60; // r3
  int *v61; // r1
  int *v62; // r0
  unsigned __int8 *v63; // r1
  unsigned int v64; // r4
  int v65; // r6
  _DWORD *v66; // r3
  unsigned __int8 *v67; // r1
  unsigned int v68; // r0
  unsigned __int8 *v69; // r0
  int v70; // r2
  int v71; // r1
  int v72; // r0
  unsigned __int8 *v73; // r2
  unsigned __int8 *v74; // r3
  int v75; // [sp+48h] [bp+48h]
  int v77; // [sp+7Ch] [bp+7Ch]
  unsigned int v79; // [sp+88h] [bp+88h]

  *a11 = a2;
  *a33 = 16202;
  v77 = ~(a29 << a38[23]);
  v41 = v39 & v77;
  v42 = a38[21];
  v43 = *(unsigned __int8 *)(v42 + 4 * (v39 & v77) + 1);
  if ( a39 < v43 )
  {
    v44 = v39;
    v45 = a3;
    while ( v45 )
    {
      v44 += *a4 << a39;
      v41 = v44 & v77;
      v43 = *(unsigned __int8 *)(a38[21] + 4 * (v44 & v77) + 1);
      ++a4;
      --v45;
      a39 += 8;
      if ( a39 >= v43 )
      {
        a3 = v45;
        v39 = v44;
        v42 = a38[21];
        goto LABEL_6;
      }
    }
    a31[3] = a30;
    a31[4] = a34;
    *a31 = a4;
    a31[1] = nullptr;
    a38[15] = v44;
    a38[16] = a39;
    v58 = a31[4];
    if ( a38[11] )
      goto LABEL_53;
    v63 = a24;
    if ( a24 == v58 )
      goto LABEL_29;
    if ( (unsigned int)*a33 < 0x3F51 && (a26 != 4 || (unsigned int)*a33 < 0x3F4E) )
    {
LABEL_53:
      if ( sub_8A3E8((int)a31, (int)a31[3], a24 - v58) )
      {
        v61 = a33;
        *a33 = 16210;
        v62 = (int *)(a29 - 3);
LABEL_22:
        sub_8A37C((int)v62, (int)v61, v59, (int)v60, a5, a6, a7, a8, (int)a9);
        return;
      }
      v63 = a31[4];
    }
    else
    {
      v63 = a31[4];
    }
LABEL_29:
    v64 = a24 - v63;
    a31[5] += a24 - v63;
    v65 = a18 - (_DWORD)a31[1];
    a31[2] += v65;
    v66 = a38;
    a38[8] += a24 - v63;
    if ( a24 != v63 && (a38[3] & 4) != 0 )
    {
      v67 = &a31[3][-v64];
      v68 = a38[7];
      if ( a38[5] )
        v69 = (unsigned __int8 *)sub_85468(v68, v67, v64);
      else
        v69 = (unsigned __int8 *)sub_8EC00(v68, v67, v64);
      *a27 = (int)v69;
      a31[12] = v69;
      v66 = a38;
    }
    v70 = v66[16];
    if ( v66[2] )
      v70 = v66[16] + 64;
    v71 = v70 + 128;
    v72 = v66[1];
    if ( v72 != a20 )
      v71 = v70;
    v73 = (unsigned __int8 *)(v71 + 256);
    v74 = (unsigned __int8 *)(v71 + 256);
    if ( v72 != 16194 )
      v74 = (unsigned __int8 *)v71;
    if ( v72 != 16199 )
      v73 = v74;
    a31[11] = v73;
    v62 = (int *)(a29 - 4);
    v61 = (int *)(a29 - 4);
    v60 = a22;
    if ( v64 | v65 )
      v61 = a22;
    v59 = a26;
    if ( a26 != 4 )
      v62 = v61;
    if ( a22 )
      v62 = a22;
    goto LABEL_22;
  }
LABEL_6:
  v46 = 4 * v41;
  v47 = *(unsigned __int16 *)(v42 + v46 + 2);
  v48 = *(_BYTE *)(v42 + v46);
  v75 = v47;
  if ( v48 >> 4 )
  {
    v49 = a19;
    v50 = *a19;
    v51 = v43;
    v52 = a38;
  }
  else
  {
    a21 = v40;
    v53 = a29 << (v43 + v48);
    v77 = v39;
    v54 = ((v39 & (unsigned int)~v53) >> v43) + v47;
    a7 = v42;
    v51 = *(unsigned __int8 *)(v42 + 4 * v54 + 1);
    v55 = ~v53;
    if ( v43 + v51 <= a39 )
    {
      v56 = a3;
    }
    else
    {
      v56 = a3;
      do
      {
        if ( !v56 )
          JUMPOUT(0x8A276);
        v77 += *a4 << a39;
        v54 = ((v77 & (unsigned int)v55) >> v43) + v47;
        v51 = *(unsigned __int8 *)(v42 + 4 * v54 + 1);
        ++a4;
        --v56;
        a39 += 8;
      }
      while ( v43 + v51 > a39 );
    }
    a3 = v56;
    v48 = *(_BYTE *)(v42 + 4 * v54);
    v75 = *(unsigned __int16 *)(v42 + 4 * v54 + 2);
    v50 = *a19 + v43;
    *a19 = v50;
    a39 -= v43;
    v49 = a19;
    v52 = a38;
  }
  *v49 = v50 + v51;
  v79 = a39 - v51;
  if ( (v48 & 0x40) != 0 )
    JUMPOUT(0x89FD0);
  v57 = v48 & 0xF;
  v52[18] = v75;
  v52[19] = v57;
  v52[1] = 16203;
  if ( v57 )
    sub_89FAA(
      16203,
      (int)v52,
      v57,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      (int)a11,
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
      v75,
      (int)a24,
      a25,
      a26,
      a27,
      a28,
      a29,
      a30,
      (int)a31,
      a3,
      a33,
      (unsigned int)a34,
      a35,
      v77,
      (int)a4,
      a38,
      v79);
  else
    sub_8A022(
      16203,
      (int)v52,
      0,
      (int)a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      (int)a11,
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
      v75,
      (int)a24,
      a25,
      a26,
      a27,
      a28,
      a29,
      a30,
      (int)a31,
      a3,
      a33,
      (unsigned int)a34,
      a35,
      v77,
      (int)a4,
      a38,
      v79);
}
// 8A274: control flows out of bounds to 8A276
// 89F90: control flows out of bounds to 89FD0
// 89E8E: variable 'v39' is possibly undefined
// 89EF4: variable 'v40' is possibly undefined
// 8A378: variable 'v59' is possibly undefined
// 8A378: variable 'v60' is possibly undefined
