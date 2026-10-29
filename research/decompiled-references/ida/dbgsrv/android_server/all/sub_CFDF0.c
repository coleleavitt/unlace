/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CFDF0
// Address: 0x00000000000CFDF0

//----- (00000000000CFDF0) ----------------------------------------------------
void __fastcall sub_CFDF0(__int64 a1, const void *a2, size_t a3, int a4)
{
  unsigned __int64 v8; // x9
  _WORD *v9; // x10
  unsigned __int64 v10; // x11
  int v11; // w10
  int v12; // w9
  int v13; // w8
  unsigned __int64 v14; // x9
  int v15; // w9
  unsigned int v16; // w11
  int v17; // w18
  int v18; // w10
  int v19; // w2
  int v20; // w0
  int v21; // w1
  unsigned int v22; // w17
  __int64 v23; // x0
  __int16 v24; // w1
  _WORD *v25; // x0
  __int16 v26; // w18
  __int16 v27; // w18
  int v28; // w9
  unsigned int v29; // w10
  int v30; // w17
  int v31; // w8
  int v32; // w1
  int v33; // w18
  int v34; // w0
  unsigned int v35; // w16
  __int64 v36; // x18
  __int16 v37; // w0
  _WORD *v38; // x18
  __int16 v39; // w17
  __int16 v40; // w17
  __int64 v41; // x11
  unsigned __int64 v42; // x10
  int v43; // w11
  unsigned int v44; // w8
  __int16 v45; // w9
  __int64 v46; // x10
  __int64 v47; // x11
  __int64 v48; // x9
  __int64 v49; // x11
  int v50; // w8
  unsigned int v51; // w10
  int v52; // w9
  __int64 v53; // x11
  __int64 v54; // x12
  __int64 v55; // x9
  __int64 v56; // x12
  int v57; // w10
  __int64 *v58; // x1
  __int64 *v59; // x2
  __int64 v60; // x0
  int v61; // w2
  int v62; // w21
  unsigned int v63; // w11
  int v64; // w9
  __int64 v65; // x10
  __int64 v66; // x12
  __int64 v67; // x9
  __int64 v68; // x12
  int v69; // w12
  int v70; // w10
  __int64 v71; // x9
  __int64 v72; // x12
  __int64 v73; // x9
  char v74; // w10
  __int64 v75; // x12
  int v76; // w12
  __int64 v77; // x9
  unsigned int v78; // w11
  int v79; // w8
  __int64 v80; // x10
  __int64 v81; // x12
  __int64 v82; // x8
  __int64 v83; // x12
  int v84; // w11
  __int64 *v85; // x10
  unsigned int v86; // w14
  __int64 v87; // x11
  __int64 v88; // x15
  __int64 v89; // x8
  __int64 v90; // x15
  int v91; // w8
  __int64 v92; // x9
  __int64 v93; // x10
  char v94; // w8
  __int64 v95; // x9
  __int64 v96; // x8
  __int64 v97; // x10
  char v98; // w8

  if ( *(int *)(a1 + 196) < 1 )
  {
    v13 = 0;
    v14 = a3 + 5;
LABEL_111:
    v42 = v14;
    goto LABEL_112;
  }
  if ( *(_DWORD *)(*(_QWORD *)a1 + 88LL) == 2 )
  {
    v8 = 0;
    v9 = (_WORD *)(a1 + 212);
    v10 = 4093624447LL;
    do
    {
      if ( (v10 & 1) != 0 && *v9 )
      {
        v12 = 0;
        goto LABEL_17;
      }
      ++v8;
      v10 >>= 1;
      v9 += 2;
    }
    while ( v8 < 0x20 );
    if ( !*(_WORD *)(a1 + 248) && !*(_WORD *)(a1 + 252) && !*(_WORD *)(a1 + 264) )
    {
      v11 = 32;
      while ( 1 )
      {
        v12 = *(unsigned __int16 *)(a1 + 4LL * v11 + 212);
        if ( *(_WORD *)(a1 + 4LL * v11 + 212) )
          break;
        if ( (unsigned int)++v11 > 0xFF )
          goto LABEL_17;
      }
    }
    v12 = 1;
LABEL_17:
    *(_DWORD *)(*(_QWORD *)a1 + 88LL) = v12;
  }
  sub_D0600(a1, (__int64 *)(a1 + 2904));
  sub_D0600(a1, (__int64 *)(a1 + 2928));
  v15 = *(_DWORD *)(a1 + 2912);
  v16 = *(unsigned __int16 *)(a1 + 214);
  *(_WORD *)(a1 + 4LL * (v15 + 1) + 214) = -1;
  if ( (v15 & 0x80000000) == 0 )
  {
    v17 = 0;
    v18 = 0;
    v19 = -1;
    if ( v16 )
      v20 = 4;
    else
      v20 = 3;
    if ( v16 )
      v21 = 7;
    else
      v21 = 138;
    do
    {
      ++v18;
      v22 = v16;
      v16 = *(unsigned __int16 *)(a1 + 4LL * v18 + 214);
      if ( ++v17 < v21 && v22 == v16 )
      {
        v22 = v19;
      }
      else
      {
        if ( v17 >= v20 )
        {
          if ( v22 )
          {
            if ( v22 != v19 )
              ++*(_WORD *)(a1 + 4LL * v22 + 2748);
            v27 = *(_WORD *)(a1 + 2812);
            v25 = (_WORD *)(a1 + 2812);
          }
          else if ( v17 > 10 )
          {
            v27 = *(_WORD *)(a1 + 2820);
            v25 = (_WORD *)(a1 + 2820);
          }
          else
          {
            v27 = *(_WORD *)(a1 + 2816);
            v25 = (_WORD *)(a1 + 2816);
          }
          v26 = v27 + 1;
        }
        else
        {
          v23 = a1 + 4LL * v22;
          v24 = *(_WORD *)(v23 + 2748);
          v25 = (_WORD *)(v23 + 2748);
          v26 = v24 + v17;
        }
        *v25 = v26;
        v17 = 0;
        if ( v16 )
        {
          if ( v22 == v16 )
            v21 = 6;
          else
            v21 = 7;
          if ( v22 == v16 )
            v20 = 3;
          else
            v20 = 4;
        }
        else
        {
          v20 = 3;
          v21 = 138;
        }
      }
      v19 = v22;
    }
    while ( v18 <= v15 );
  }
  v28 = *(_DWORD *)(a1 + 2936);
  v29 = *(unsigned __int16 *)(a1 + 2506);
  *(_WORD *)(a1 + 4LL * (v28 + 1) + 2506) = -1;
  if ( (v28 & 0x80000000) == 0 )
  {
    v30 = 0;
    v31 = 0;
    v32 = -1;
    if ( v29 )
      v33 = 4;
    else
      v33 = 3;
    if ( v29 )
      v34 = 7;
    else
      v34 = 138;
    do
    {
      ++v31;
      v35 = v29;
      v29 = *(unsigned __int16 *)(a1 + 4LL * v31 + 2506);
      if ( ++v30 < v34 && v35 == v29 )
      {
        v35 = v32;
      }
      else
      {
        if ( v30 >= v33 )
        {
          if ( v35 )
          {
            if ( v35 != v32 )
              ++*(_WORD *)(a1 + 4LL * v35 + 2748);
            v40 = *(_WORD *)(a1 + 2812);
            v38 = (_WORD *)(a1 + 2812);
          }
          else if ( v30 > 10 )
          {
            v40 = *(_WORD *)(a1 + 2820);
            v38 = (_WORD *)(a1 + 2820);
          }
          else
          {
            v40 = *(_WORD *)(a1 + 2816);
            v38 = (_WORD *)(a1 + 2816);
          }
          v39 = v40 + 1;
        }
        else
        {
          v36 = a1 + 4LL * v35;
          v37 = *(_WORD *)(v36 + 2748);
          v38 = (_WORD *)(v36 + 2748);
          v39 = v37 + v30;
        }
        *v38 = v39;
        v30 = 0;
        if ( v29 )
        {
          if ( v35 == v29 )
            v34 = 6;
          else
            v34 = 7;
          if ( v35 == v29 )
            v33 = 3;
          else
            v33 = 4;
        }
        else
        {
          v33 = 3;
          v34 = 138;
        }
      }
      v32 = v35;
    }
    while ( v31 <= v28 );
  }
  sub_D0600(a1, (__int64 *)(a1 + 2952));
  if ( *(_WORD *)(a1 + 2810) )
  {
    v13 = 18;
  }
  else if ( *(_WORD *)(a1 + 2754) )
  {
    v13 = 17;
  }
  else if ( *(_WORD *)(a1 + 2806) )
  {
    v13 = 16;
  }
  else if ( *(_WORD *)(a1 + 2758) )
  {
    v13 = 15;
  }
  else if ( *(_WORD *)(a1 + 2802) )
  {
    v13 = 14;
  }
  else if ( *(_WORD *)(a1 + 2762) )
  {
    v13 = 13;
  }
  else if ( *(_WORD *)(a1 + 2798) )
  {
    v13 = 12;
  }
  else if ( *(_WORD *)(a1 + 2766) )
  {
    v13 = 11;
  }
  else if ( *(_WORD *)(a1 + 2794) )
  {
    v13 = 10;
  }
  else if ( *(_WORD *)(a1 + 2770) )
  {
    v13 = 9;
  }
  else if ( *(_WORD *)(a1 + 2790) )
  {
    v13 = 8;
  }
  else if ( *(_WORD *)(a1 + 2774) )
  {
    v13 = 7;
  }
  else if ( *(_WORD *)(a1 + 2786) )
  {
    v13 = 6;
  }
  else if ( *(_WORD *)(a1 + 2778) )
  {
    v13 = 5;
  }
  else if ( *(_WORD *)(a1 + 2782) )
  {
    v13 = 4;
  }
  else if ( *(_WORD *)(a1 + 2750) )
  {
    v13 = 3;
  }
  else
  {
    v13 = 2;
  }
  v41 = *(_QWORD *)(a1 + 5912) + (unsigned int)(3 * v13 + 17);
  v42 = (unsigned __int64)(v41 + 10) >> 3;
  v14 = (unsigned __int64)(*(_QWORD *)(a1 + 5920) + 10LL) >> 3;
  *(_QWORD *)(a1 + 5912) = v41;
  if ( v14 <= v42 || *(_DWORD *)(a1 + 200) == 4 )
    goto LABEL_111;
LABEL_112:
  if ( a2 && a3 + 4 <= v42 )
  {
    sub_CFA98((char *)a1, a2, a3, a4);
  }
  else
  {
    v43 = *(_DWORD *)(a1 + 5940);
    if ( v14 == v42 )
    {
      v44 = (unsigned __int16)(a4 + 2);
      v45 = *(_WORD *)(a1 + 5936) | (v44 << v43);
      *(_WORD *)(a1 + 5936) = v45;
      if ( v43 < 14 )
      {
        v50 = v43 + 3;
      }
      else
      {
        v46 = *(_QWORD *)(a1 + 40);
        v47 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v46 + 1;
        *(_BYTE *)(v47 + v46) = v45;
        v48 = *(_QWORD *)(a1 + 40);
        LOBYTE(v46) = *(_BYTE *)(a1 + 5937);
        v49 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v48 + 1;
        *(_BYTE *)(v49 + v48) = v46;
        LODWORD(v48) = *(_DWORD *)(a1 + 5940);
        *(_WORD *)(a1 + 5936) = v44 >> (16 - v48);
        v50 = v48 - 13;
      }
      *(_DWORD *)(a1 + 5940) = v50;
      v58 = qword_11F860;
      v59 = qword_11FCE0;
      v60 = a1;
    }
    else
    {
      v51 = (unsigned __int16)(a4 + 4);
      v52 = *(unsigned __int16 *)(a1 + 5936) | (v51 << v43);
      *(_WORD *)(a1 + 5936) |= v51 << v43;
      if ( v43 < 14 )
      {
        v57 = v43 + 3;
      }
      else
      {
        v53 = *(_QWORD *)(a1 + 40);
        v54 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v53 + 1;
        *(_BYTE *)(v54 + v53) = v52;
        v55 = *(_QWORD *)(a1 + 40);
        LOBYTE(v53) = *(_BYTE *)(a1 + 5937);
        v56 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v55 + 1;
        *(_BYTE *)(v56 + v55) = v53;
        LODWORD(v53) = *(_DWORD *)(a1 + 5940);
        v52 = v51 >> (16 - v53);
        *(_WORD *)(a1 + 5936) = v52;
        v57 = v53 - 13;
      }
      v61 = *(_DWORD *)(a1 + 2912);
      v62 = *(_DWORD *)(a1 + 2936);
      v63 = (unsigned __int16)(v61 - 256);
      v64 = v52 | (v63 << v57);
      *(_DWORD *)(a1 + 5940) = v57;
      *(_WORD *)(a1 + 5936) = v64;
      if ( v57 < 12 )
      {
        v69 = v57 + 5;
      }
      else
      {
        v65 = *(_QWORD *)(a1 + 40);
        v66 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v65 + 1;
        *(_BYTE *)(v66 + v65) = v64;
        v67 = *(_QWORD *)(a1 + 40);
        LOBYTE(v65) = *(_BYTE *)(a1 + 5937);
        v68 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v67 + 1;
        *(_BYTE *)(v68 + v67) = v65;
        LODWORD(v65) = *(_DWORD *)(a1 + 5940);
        v64 = v63 >> (16 - v65);
        *(_WORD *)(a1 + 5936) = v64;
        v69 = v65 - 11;
      }
      v70 = v64 | ((unsigned __int16)v62 << v69);
      *(_DWORD *)(a1 + 5940) = v69;
      *(_WORD *)(a1 + 5936) = v64 | ((_WORD)v62 << v69);
      if ( v69 < 12 )
      {
        v76 = v69 + 5;
      }
      else
      {
        v71 = *(_QWORD *)(a1 + 40);
        v72 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v71 + 1;
        *(_BYTE *)(v72 + v71) = v70;
        v73 = *(_QWORD *)(a1 + 40);
        v74 = *(_BYTE *)(a1 + 5937);
        v75 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v73 + 1;
        *(_BYTE *)(v75 + v73) = v74;
        LODWORD(v73) = *(_DWORD *)(a1 + 5940);
        v70 = (unsigned __int16)v62 >> (16 - v73);
        *(_WORD *)(a1 + 5936) = v70;
        v76 = v73 - 11;
      }
      LODWORD(v77) = v13 + 1;
      v78 = (unsigned __int16)(v13 - 3);
      v79 = v70 | (v78 << v76);
      *(_DWORD *)(a1 + 5940) = v76;
      *(_WORD *)(a1 + 5936) = v70 | ((_WORD)v78 << v76);
      if ( v76 < 13 )
      {
        v84 = v76 + 4;
      }
      else
      {
        v80 = *(_QWORD *)(a1 + 40);
        v81 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v80 + 1;
        *(_BYTE *)(v81 + v80) = v79;
        v82 = *(_QWORD *)(a1 + 40);
        LOBYTE(v80) = *(_BYTE *)(a1 + 5937);
        v83 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v82 + 1;
        *(_BYTE *)(v83 + v82) = v80;
        LODWORD(v80) = *(_DWORD *)(a1 + 5940);
        v79 = v78 >> (16 - v80);
        *(_WORD *)(a1 + 5936) = v79;
        v84 = v80 - 12;
      }
      v77 = (unsigned int)v77;
      v85 = qword_11FE90;
      *(_DWORD *)(a1 + 5940) = v84;
      do
      {
        v86 = *(unsigned __int16 *)(a1 + 4LL * *(unsigned __int8 *)v85 + 2750);
        v79 |= v86 << v84;
        *(_WORD *)(a1 + 5936) = v79;
        if ( v84 < 14 )
        {
          v84 += 3;
        }
        else
        {
          v87 = *(_QWORD *)(a1 + 40);
          v88 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v87 + 1;
          *(_BYTE *)(v88 + v87) = v79;
          v89 = *(_QWORD *)(a1 + 40);
          LOBYTE(v87) = *(_BYTE *)(a1 + 5937);
          v90 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v89 + 1;
          *(_BYTE *)(v90 + v89) = v87;
          LODWORD(v87) = *(_DWORD *)(a1 + 5940);
          v79 = v86 >> (16 - v87);
          *(_WORD *)(a1 + 5936) = v79;
          v84 = v87 - 13;
        }
        --v77;
        v85 = (__int64 *)((char *)v85 + 1);
        *(_DWORD *)(a1 + 5940) = v84;
      }
      while ( v77 );
      sub_D12D8(a1, a1 + 212, v61);
      sub_D12D8(a1, a1 + 2504, v62);
      v60 = a1;
      v58 = (__int64 *)(a1 + 212);
      v59 = (__int64 *)(a1 + 2504);
    }
    sub_D0E48(v60, (__int64)v58, (__int64)v59);
  }
  sub_CF998(a1);
  if ( a4 )
  {
    v91 = *(_DWORD *)(a1 + 5940);
    if ( v91 < 9 )
    {
      if ( v91 < 1 )
      {
LABEL_145:
        *(_WORD *)(a1 + 5936) = 0;
        *(_DWORD *)(a1 + 5940) = 0;
        return;
      }
      v95 = *(_QWORD *)(a1 + 40);
      v96 = 5936;
    }
    else
    {
      v92 = *(_QWORD *)(a1 + 40);
      v93 = *(_QWORD *)(a1 + 16);
      v94 = *(_BYTE *)(a1 + 5936);
      *(_QWORD *)(a1 + 40) = v92 + 1;
      *(_BYTE *)(v93 + v92) = v94;
      v95 = *(_QWORD *)(a1 + 40);
      v96 = 5937;
    }
    v97 = *(_QWORD *)(a1 + 16);
    v98 = *(_BYTE *)(a1 + v96);
    *(_QWORD *)(a1 + 40) = v95 + 1;
    *(_BYTE *)(v97 + v95) = v98;
    goto LABEL_145;
  }
}
// 11F860: using guessed type __int64 qword_11F860[144];
// 11FCE0: using guessed type __int64 qword_11FCE0[15];
// 11FE90: using guessed type __int64 qword_11FE90[2];
