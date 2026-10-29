/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A022
// Address: 0x0008A022

//----- (0008A022) --------------------------------------------------------
void __fastcall sub_8A022(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        int a10,
        int a11,
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
        int a24,
        int a25,
        int a26,
        int *a27,
        int a28,
        int a29,
        _BYTE *a30,
        int a31,
        int a32,
        int *a33,
        unsigned int a34,
        unsigned int *a35,
        int a36,
        int a37,
        _DWORD *a38,
        int a39)
{
  int v39; // r4
  int v40; // r5
  unsigned int v41; // r0
  unsigned int v42; // r0
  _BYTE *v43; // r0
  unsigned int v44; // r2
  unsigned int v45; // r3
  unsigned int v46; // r1
  unsigned int v47; // r1
  unsigned int v48; // r1
  unsigned int v49; // r2
  unsigned int v50; // r3
  unsigned int v51; // r2
  _BYTE *v52; // r3
  int v53; // r1
  int v54; // r4
  int *v55; // r3
  int v56; // r0
  __int64 v57; // r0
  int v58; // r2
  int v59; // r3

  *a33 = 16204;
  if ( !v39 )
  {
    sub_8A1F0(
      16204,
      (int)a33,
      a32,
      a4,
      a5,
      a6,
      a7,
      a8,
      (int)a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17,
      a18,
      (int)a19,
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
      (int)a30,
      a31,
      a32,
      a33,
      a34,
      (int)a35,
      a36,
      a37,
      a38,
      a39);
    return;
  }
  v41 = a38[18];
  if ( v41 <= a24 - v39 )
  {
    v43 = &a30[-v41];
    v44 = *a35;
    v45 = *a35;
LABEL_13:
    v48 = a34;
    if ( v45 <= a34 )
      v48 = v45;
    *a35 = v44 - v48;
    v49 = a29 - a34;
    v50 = a29 - v45;
    if ( a29 - a34 <= v50 )
      v49 = v50;
    v51 = v49 + 1;
    v52 = a30;
    do
    {
      *v52 = *v43;
      ++v51;
      ++v52;
      ++v43;
    }
    while ( v51 );
    a30 += v48;
    v53 = a34 - v48;
    if ( *a35 )
      ((void (*)(void))loc_88E40)();
    *a33 = 16200;
    v54 = v53;
    ((void (*)(void))loc_88E40)();
    *a33 = v54 - 4;
    ((void (*)(void))loc_88E40)();
    *a19 = a29;
    v56 = 16191;
    v55 = a33;
    goto LABEL_22;
  }
  v42 = v41 - (a24 - v39);
  if ( v42 <= a38[12] || !*a9 )
  {
    v46 = a38[13];
    if ( v42 > v46 )
    {
      v42 -= v46;
      v46 = a38[11];
    }
    v47 = v46 - v42;
    v44 = a38[17];
    v45 = v44;
    if ( v42 <= v44 )
      v45 = v42;
    v43 = (_BYTE *)(a38[14] + v47);
    goto LABEL_13;
  }
  *(_DWORD *)(v40 + 24) = "invalid distance too far back";
  v55 = a33;
  v56 = 16209;
LABEL_22:
  *v55 = v56;
  v57 = ((__int64 (*)(void))loc_88E40)();
  sub_8A11A(
    v57,
    SHIDWORD(v57),
    v58,
    v59,
    a5,
    a6,
    a7,
    a8,
    (int)a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    (int)a19,
    a20,
    a21,
    (int)a22,
    a23,
    a24,
    a25,
    a26,
    (int)a27,
    a28,
    a29,
    (int)a30,
    a31,
    a32,
    a33,
    a34,
    (int)a35,
    a36,
    a4,
    a38);
}
// 8A02E: variable 'v39' is possibly undefined
// 8A10A: variable 'v40' is possibly undefined
// 8A0E0: variable 'v53' is possibly undefined
// 8A117: variable 'v58' is possibly undefined
// 8A117: variable 'v59' is possibly undefined
