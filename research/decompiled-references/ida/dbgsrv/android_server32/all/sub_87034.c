/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87034
// Address: 0x00087034

//----- (00087034) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_87034(int a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r3
  int v17; // r0
  int v18; // r3
  int v19; // r2
  int v20; // r3
  int v21; // r0
  bool v22; // zf
  int v23; // r2
  const void *v24; // r1
  int v25; // r7
  size_t v26; // r0
  int v27; // r0
  size_t v28; // r2
  int v29; // r2
  int v30; // r7
  int v31; // r2
  unsigned __int8 *v32; // r1
  unsigned __int8 *v33; // r3
  int v34; // r7
  int v35; // r2
  int v36; // r2
  int v37; // r7
  int v38; // r2
  int v39; // r7
  int v40; // r2
  int v41; // r0
  int v42; // r2
  const void *v43; // r1
  _DWORD *v44; // r7
  int v45; // r7
  size_t v46; // r0
  int v47; // r3
  unsigned int v48; // r2
  char v49; // r7
  bool v50; // cf
  int v51; // r0
  int v52; // r1
  int v53; // r0
  int v54; // r2
  int v55; // r0
  int v56; // r2
  _DWORD *v57; // r0
  int v58; // r2
  int v59; // r3
  int v60; // r0
  const void *v61; // r1
  _DWORD *v62; // r0
  int v63; // r0
  const void *v64; // r1
  int v65; // r7
  int v66; // r6
  int v67; // r2
  size_t v68; // r7
  _DWORD *v69; // r6
  size_t v70; // r0
  unsigned int v71; // r1
  unsigned int v72; // r0
  int v73; // r7
  size_t v74; // r7
  size_t v75; // r0
  int v76; // r1
  int v77; // r0
  int v78; // r1
  int v79; // r0
  int v80; // r1
  int v81; // r1
  int v82; // r1
  int v83; // r0
  int v84; // r1
  int v85; // r1
  int v86; // r1
  int v87; // r0
  int v88; // r1
  int v89; // r1
  int v90; // r1
  int v91; // r1
  int v92; // r6
  size_t v93; // r7
  size_t v94; // r0
  int v95; // r0
  int v96; // r0
  size_t v97; // r7
  int v98; // r6
  size_t v99; // r7
  _DWORD *v100; // r6
  size_t v101; // r0
  unsigned int v102; // [sp-28h] [bp-28h]
  int v103; // [sp-24h] [bp-24h]
  size_t v104; // [sp-24h] [bp-24h]
  size_t v105; // [sp-20h] [bp-20h]
  int *v106; // [sp-20h] [bp-20h]
  int *v107; // [sp-1Ch] [bp-1Ch]
  int *v108; // [sp-1Ch] [bp-1Ch]
  int *v109; // [sp-18h] [bp-18h]
  _DWORD *v110; // [sp-18h] [bp-18h]
  _DWORD *v111; // [sp-14h] [bp-14h]
  int v112; // [sp-10h] [bp-10h]
  unsigned int v113; // [sp-10h] [bp-10h]
  int v114; // [sp-10h] [bp-10h]
  int v115; // [sp-10h] [bp-10h]
  int v116; // [sp-Ch] [bp-Ch]
  int v117; // [sp-8h] [bp-8h]
  int v118; // [sp-8h] [bp-8h]
  int v119; // [sp-8h] [bp-8h]
  int v120; // [sp-8h] [bp-8h]
  int v121; // [sp-8h] [bp-8h]
  _DWORD *v122; // [sp-8h] [bp-8h]
  int v123; // [sp-8h] [bp-8h]
  _DWORD *v124; // [sp-4h] [bp-4h]

  if ( !a4[29] && (!v11 || a4[1] == 666) )
    goto LABEL_109;
  v12 = a4[33];
  if ( !v12 )
  {
    v27 = sub_8793C(a4, v11);
    goto LABEL_90;
  }
  v13 = a4[34];
  if ( v13 != 3 )
  {
    if ( v13 != 2 )
    {
      v27 = ((int (__fastcall *)(_DWORD *, int))dword_DB2B8[3 * v12 + 2])(a4, v11);
      goto LABEL_90;
    }
    v109 = a4 + 1449;
    v107 = a4 + 1446;
    v111 = a4 + 1448;
    while ( 1 )
    {
      if ( !a4[29] )
      {
        sub_85CA0(a4);
        a4 = v124;
        if ( !v124[29] )
          break;
      }
      a4[24] = 0;
      v14 = *(unsigned __int8 *)(a4[14] + a4[27]);
      v117 = *v107;
      v15 = (*v111)++;
      *(_BYTE *)(v117 + v15) = 0;
      v118 = *v107;
      v16 = (*v111)++;
      *(_BYTE *)(v118 + v16) = 0;
      v17 = *v107;
      v18 = (*v111)++;
      *(_BYTE *)(v17 + v18) = v14;
      ++LOWORD(v124[v14 + 37]);
      v19 = *v109;
      v20 = *v111;
      --v124[29];
      v21 = v124[27] + 1;
      v124[27] = v21;
      v11 = v116;
      v22 = v20 == v19;
      a4 = v124;
      if ( v22 )
      {
        v23 = v124[23];
        v24 = nullptr;
        if ( v23 >= 0 )
          v24 = (const void *)(v124[14] + v23);
        sub_8B3C8((int)v124, v24, v21 - v23, 0);
        v124[23] = v124[27];
        v112 = *v124;
        v25 = *(_DWORD *)(*v124 + 28);
        sub_8B2BC(v25);
        v28 = *(_DWORD *)(v112 + 16);
        if ( *(_DWORD *)(v25 + 20) <= v28 )
          v28 = *(_DWORD *)(v25 + 20);
        if ( v28 )
        {
          v105 = v28;
          qmemcpy(*(void **)(v112 + 12), *(const void **)(v25 + 16), v28);
          v28 = v105;
          *(_DWORD *)(v112 + 12) += v105;
          *(_DWORD *)(v25 + 16) += v105;
          *(_DWORD *)(v112 + 16) -= v105;
          *(_DWORD *)(v112 + 20) += v105;
          v26 = *(_DWORD *)(v25 + 20) - v105;
          *(_DWORD *)(v25 + 20) = v26;
          if ( !v26 )
            *(_DWORD *)(v25 + 16) = *(_DWORD *)(v25 + 8);
        }
        a4 = v124;
        if ( !*(_DWORD *)(*v124 + 16) )
          goto LABEL_93;
      }
    }
    if ( v11 )
    {
      v61 = nullptr;
      v124[1453] = 0;
      if ( v11 == 4 )
        goto LABEL_80;
      v62 = v111;
LABEL_122:
      v11 = v116;
      if ( !*v62 )
        goto LABEL_96;
      v96 = v124[23];
      if ( v96 >= 0 )
        v61 = (const void *)(v124[14] + v96);
      sub_8B3C8((int)v124, v61, v124[27] - v96, 0);
      v124[23] = v124[27];
      v97 = *v124;
      v98 = *(_DWORD *)(*v124 + 28);
      sub_8B2BC(v98);
      v28 = v97;
      v99 = *(_DWORD *)(v97 + 16);
      v123 = v98;
      if ( *(_DWORD *)(v98 + 20) <= v99 )
        v99 = *(_DWORD *)(v98 + 20);
      if ( v99 )
      {
        v100 = (_DWORD *)v28;
        qmemcpy(*(void **)(v28 + 12), *(const void **)(v123 + 16), v99);
        v100[3] += v99;
        *(_DWORD *)(v123 + 16) += v99;
        v100[4] -= v99;
        v100[5] += v99;
        v101 = *(_DWORD *)(v123 + 20) - v99;
        *(_DWORD *)(v123 + 20) = v101;
        if ( !v101 )
          *(_DWORD *)(v123 + 16) = *(_DWORD *)(v123 + 8);
      }
      a4 = v124;
      v11 = v116;
      if ( *(_DWORD *)(*v124 + 16) )
        goto LABEL_96;
    }
LABEL_93:
    v71 = *(_DWORD *)(v10 + 16);
    v72 = 0;
    if ( !v71 )
      goto LABEL_94;
LABEL_132:
    JUMPOUT(0x86728);
  }
  v108 = a4 + 1449;
  v106 = a4 + 1446;
  v110 = a4 + 1448;
  while ( 1 )
  {
    while ( 1 )
    {
      v28 = a4[29];
      if ( v28 < 0x103 )
        break;
      a4[24] = 0;
LABEL_28:
      v113 = v28;
      v30 = a4[27];
      v29 = 0;
      if ( !v30 )
        goto LABEL_53;
      v119 = a4[14];
      v31 = *(unsigned __int8 *)(v119 + v30 + v9);
      v32 = (unsigned __int8 *)(v119 + v30 + v9);
      if ( v31 != v32[1] )
      {
        v29 = a4[27];
LABEL_52:
        a4 = v124;
        goto LABEL_53;
      }
      v103 = a4[27];
      if ( v31 != v32[2] || v31 != v32[3] )
      {
        v29 = a4[27];
        goto LABEL_52;
      }
      v102 = v119 + v30 + 258;
      do
      {
        v33 = (unsigned __int8 *)(v119 + v30);
        if ( v31 != *(unsigned __int8 *)(v119 + v30 + 3) )
        {
          v47 = (int)(v33 + 3);
          goto LABEL_63;
        }
        if ( v31 != v33[4] )
        {
          v47 = (int)(v33 + 4);
          goto LABEL_63;
        }
        if ( v31 != v33[5] )
        {
          v47 = (int)(v33 + 5);
          goto LABEL_63;
        }
        if ( v31 != v33[6] )
        {
          v47 = (int)(v33 + 6);
          goto LABEL_63;
        }
        if ( v31 != v33[7] )
        {
          v47 = (int)(v33 + 7);
          goto LABEL_63;
        }
        if ( v31 != v33[8] )
        {
          v47 = (int)(v33 + 8);
          goto LABEL_63;
        }
        if ( v31 != v33[9] )
        {
          v47 = (int)(v33 + 9);
          goto LABEL_63;
        }
        v119 += 8;
      }
      while ( (unsigned int)(v33 + 10) < v102 && v31 == v33[10] );
      v47 = v119 + v30 + 2;
LABEL_63:
      v48 = v113;
      if ( v47 - v102 + 258 <= v113 )
        v48 = v47 - v102 + 258;
      a4 = v124;
      v124[24] = v48;
      v49 = v48;
      v50 = v48 >= 3;
      v29 = v103;
      if ( !v50 )
        goto LABEL_53;
      v51 = *v106;
      v52 = (*v110)++;
      *(_BYTE *)(v51 + v52) = 1;
      v53 = *v106;
      v54 = (*v110)++;
      *(_BYTE *)(v53 + v54) = 0;
      v55 = *v106;
      v56 = (*v110)++;
      *(_BYTE *)(v55 + v56) = v49 - 3;
      v57 = &v124[*((unsigned __int8 *)&word_C8A12 + (unsigned __int8)(v49 - 3)) | 0x100];
      ++*((_WORD *)v57 + 76);
      ++*((_WORD *)v124 + 1220);
      v58 = *v108;
      v59 = *v110;
      v60 = v124[24];
      v124[24] = 0;
      v124[29] -= v60;
      v11 = v116;
      v41 = v124[27] + v60;
      v124[27] = v41;
      v22 = v59 == v58;
      a4 = v124;
      if ( v22 )
        goto LABEL_54;
    }
    sub_85CA0(a4);
    a4 = v124;
    v28 = v124[29];
    if ( !v11 && v28 < 0x103 )
      goto LABEL_93;
    if ( !v28 )
      break;
    v124[24] = 0;
    if ( v28 > 2 )
      goto LABEL_28;
    v29 = v124[27];
LABEL_53:
    v120 = *(unsigned __int8 *)(a4[14] + v29);
    v34 = *v106;
    v35 = (*v110)++;
    *(_BYTE *)(v34 + v35) = 0;
    v114 = *v106;
    v36 = (*v110)++;
    *(_BYTE *)(v114 + v36) = 0;
    v37 = *v106;
    v38 = (*v110)++;
    a4 = v124;
    *(_BYTE *)(v37 + v38) = v120;
    ++LOWORD(v124[v120 + 37]);
    v39 = *v108;
    v40 = *v110;
    --v124[29];
    v41 = v124[27] + 1;
    v124[27] = v41;
    if ( v40 == v39 )
    {
LABEL_54:
      v42 = a4[23];
      v43 = nullptr;
      if ( v42 >= 0 )
        v43 = (const void *)(a4[14] + v42);
      v44 = a4;
      sub_8B3C8((int)a4, v43, v41 - v42, 0);
      v44[23] = v44[27];
      v115 = *v44;
      v45 = *(_DWORD *)(*v44 + 28);
      sub_8B2BC(v45);
      v28 = *(_DWORD *)(v115 + 16);
      if ( *(_DWORD *)(v45 + 20) <= v28 )
        v28 = *(_DWORD *)(v45 + 20);
      if ( v28 )
      {
        v104 = v28;
        qmemcpy(*(void **)(v115 + 12), *(const void **)(v45 + 16), v28);
        v28 = v104;
        *(_DWORD *)(v115 + 12) += v104;
        *(_DWORD *)(v45 + 16) += v104;
        *(_DWORD *)(v115 + 16) -= v104;
        *(_DWORD *)(v115 + 20) += v104;
        v46 = *(_DWORD *)(v45 + 20) - v104;
        *(_DWORD *)(v45 + 20) = v46;
        if ( !v46 )
          *(_DWORD *)(v45 + 16) = *(_DWORD *)(v45 + 8);
      }
      a4 = v124;
      if ( !*(_DWORD *)(*v124 + 16) )
        goto LABEL_93;
    }
  }
  v61 = nullptr;
  v124[1453] = 0;
  if ( v11 != 4 )
  {
    v62 = v110;
    goto LABEL_122;
  }
LABEL_80:
  v63 = v124[23];
  v64 = nullptr;
  if ( v63 >= 0 )
    v64 = (const void *)(v124[14] + v63);
  sub_8B3C8((int)v124, v64, v124[27] - v63, 1);
  v124[23] = v124[27];
  v65 = *v124;
  v66 = *(_DWORD *)(*v124 + 28);
  sub_8B2BC(v66);
  v67 = v65;
  v68 = *(_DWORD *)(v65 + 16);
  v121 = v66;
  if ( *(_DWORD *)(v66 + 20) <= v68 )
    v68 = *(_DWORD *)(v66 + 20);
  if ( v68 )
  {
    v69 = (_DWORD *)v67;
    qmemcpy(*(void **)(v67 + 12), *(const void **)(v121 + 16), v68);
    v69[3] += v68;
    *(_DWORD *)(v121 + 16) += v68;
    v69[4] -= v68;
    v69[5] += v68;
    v70 = *(_DWORD *)(v121 + 20) - v68;
    *(_DWORD *)(v121 + 20) = v70;
    if ( !v70 )
      *(_DWORD *)(v121 + 16) = *(_DWORD *)(v121 + 8);
  }
  v28 = *(_DWORD *)(*v124 + 16);
  v27 = 2;
  if ( v28 )
    v27 = 3;
  v11 = v116;
LABEL_90:
  a4 = v124;
  if ( (v27 | 1) == 3 )
    v124[1] = 666;
  if ( (v27 | 2) == 2 )
    goto LABEL_93;
  if ( v27 != 1 )
  {
LABEL_109:
    if ( v11 == 4 )
    {
      v76 = a4[6];
      if ( v76 >= 1 )
      {
        v77 = *(_DWORD *)(v10 + 48);
        if ( v76 == 2 )
        {
          v78 = a4[5];
          a4[5] = v78 + 1;
          *(_BYTE *)(a4[2] + v78) = v77;
          v79 = *(_DWORD *)(v10 + 48);
          v80 = a4[5];
          a4[5] = v80 + 1;
          *(_BYTE *)(a4[2] + v80) = BYTE1(v79);
          LOWORD(v79) = *(_WORD *)(v10 + 50);
          v81 = a4[5];
          a4[5] = v81 + 1;
          *(_BYTE *)(a4[2] + v81) = v79;
          LOBYTE(v79) = *(_BYTE *)(v10 + 51);
          v82 = a4[5];
          a4[5] = v82 + 1;
          *(_BYTE *)(a4[2] + v82) = v79;
          v83 = *(_DWORD *)(v10 + 8);
          v84 = a4[5];
          a4[5] = v84 + 1;
          *(_BYTE *)(a4[2] + v84) = v83;
          v87 = *(_DWORD *)(v10 + 8);
          v85 = a4[5];
          a4[5] = v85 + 1;
          *(_BYTE *)(a4[2] + v85) = BYTE1(v87);
          LOWORD(v87) = *(_WORD *)(v10 + 10);
          v86 = a4[5];
          a4[5] = v86 + 1;
          *(_BYTE *)(a4[2] + v86) = v87;
          LOBYTE(v87) = *(_BYTE *)(v10 + 11);
        }
        else
        {
          v89 = a4[5];
          a4[5] = v89 + 1;
          *(_BYTE *)(a4[2] + v89) = HIBYTE(v77);
          v90 = a4[5];
          a4[5] = v90 + 1;
          *(_BYTE *)(a4[2] + v90) = BYTE2(v77);
          v87 = *(_DWORD *)(v10 + 48);
          v91 = a4[5];
          a4[5] = v91 + 1;
          *(_BYTE *)(a4[2] + v91) = BYTE1(v87);
        }
        v88 = a4[5];
        a4[5] = v88 + 1;
        *(_BYTE *)(a4[2] + v88) = v87;
        v92 = *(_DWORD *)(v10 + 28);
        sub_8B2BC(v92);
        v93 = *(_DWORD *)(v10 + 16);
        if ( *(_DWORD *)(v92 + 20) <= v93 )
          v93 = *(_DWORD *)(v92 + 20);
        if ( v93 )
        {
          qmemcpy(*(void **)(v10 + 12), *(const void **)(v92 + 16), v93);
          *(_DWORD *)(v10 + 12) += v93;
          *(_DWORD *)(v92 + 16) += v93;
          *(_DWORD *)(v10 + 16) -= v93;
          *(_DWORD *)(v10 + 20) += v93;
          v94 = *(_DWORD *)(v92 + 20) - v93;
          *(_DWORD *)(v92 + 20) = v94;
          if ( !v94 )
            *(_DWORD *)(v92 + 16) = *(_DWORD *)(v92 + 8);
        }
        v95 = v124[6];
        if ( v95 >= 1 )
          v124[6] = -v95;
        __asm { POP             {R4-R7,PC} }
      }
    }
    goto LABEL_132;
  }
LABEL_96:
  if ( v11 != 5 )
  {
    if ( v11 == 1 )
    {
      sub_8B318((int)v124);
    }
    else
    {
      sub_8B1CC((int)v124, nullptr, 0, 0);
      if ( v11 == 3 )
      {
        *(_WORD *)(v124[17] + 2 * v124[19] - 2) = 0;
        memset((void *)v124[17], 0, 2 * v124[19] - 2);
        v11 = v116;
        if ( !v124[29] )
        {
          v124[1453] = 0;
          v124[23] = 0;
          v124[27] = 0;
        }
      }
    }
  }
  v73 = *(_DWORD *)(v10 + 28);
  sub_8B2BC(v73);
  v28 = v73;
  v72 = *(_DWORD *)(v10 + 16);
  v71 = *(_DWORD *)(v73 + 20);
  v74 = v72;
  if ( v71 <= v72 )
    v74 = v71;
  if ( v74 )
  {
    v122 = (_DWORD *)v28;
    qmemcpy(*(void **)(v10 + 12), *(const void **)(v28 + 16), v74);
    v71 = (unsigned int)v122;
    *(_DWORD *)(v10 + 12) += v74;
    v122[4] += v74;
    *(_DWORD *)(v10 + 16) -= v74;
    *(_DWORD *)(v10 + 20) += v74;
    v75 = v122[5] - v74;
    v122[5] = v75;
    if ( !v75 )
      v122[4] = v122[2];
    v72 = *(_DWORD *)(v10 + 16);
  }
  a4 = v124;
  if ( v72 )
    goto LABEL_109;
LABEL_94:
  sub_87616(v72, v71, v28, (int)a4, a5, a6, a7, a8, a9);
}
// 876AC: positive sp value 2C has been found
// 874E4: control flows out of bounds to 86728
// 8716A: variable 'v11' is possibly undefined
// 87076: variable 'v124' is possibly undefined
// 870DE: variable 'v116' is possibly undefined
// 871C4: variable 'v9' is possibly undefined
// 874DC: variable 'v10' is possibly undefined
// 874E8: variable 'v28' is possibly undefined
// C8A12: using guessed type __int16 word_C8A12;
// DB2B8: using guessed type int dword_DB2B8[2];
