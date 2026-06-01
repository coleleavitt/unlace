/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0600
// Address: 0x00000000000D0600

//----- (00000000000D0600) ----------------------------------------------------
__int64 __fastcall sub_D0600(__int64 result, __int64 *a2)
{
  __int64 *v2; // x10
  __int64 v3; // x9
  __int64 v4; // x13
  __int64 v5; // x11
  int *v6; // x12
  __int64 v7; // x14
  _WORD *v8; // x15
  int v9; // w10
  int v10; // w10
  int v11; // w16
  int v12; // w17
  int v13; // w10
  int v14; // w18
  unsigned __int64 v15; // x18
  __int64 v16; // x13
  __int64 v17; // x16
  int v18; // w15
  int v19; // w3
  int v20; // w2
  int v21; // w4
  __int64 v22; // x5
  int *v23; // x18
  __int64 v24; // x4
  __int64 v25; // x7
  unsigned int v26; // w20
  unsigned int v27; // w19
  int v28; // w18
  unsigned int v29; // w3
  unsigned int v30; // w5
  int v31; // w6
  int v32; // w16
  int v33; // w17
  __int64 v34; // x15
  bool v35; // nf
  _DWORD *v36; // x18
  int v37; // w3
  int v38; // w4
  int v39; // w5
  __int64 v40; // x7
  int *v41; // x6
  __int64 v42; // x5
  __int64 v43; // x20
  unsigned int v44; // w22
  unsigned int v45; // w21
  int v46; // w4
  unsigned int v47; // w6
  unsigned int v48; // w7
  __int64 v49; // x2
  _WORD *v50; // x3
  int v51; // w17
  _WORD *v52; // x4
  int v53; // w16
  _WORD *v54; // x16
  unsigned int v55; // w15
  _BYTE *v56; // x17
  int v57; // w4
  int v58; // w18
  int v59; // w2
  int v60; // w3
  __int64 v61; // x5
  int *v62; // x4
  __int64 v63; // x3
  __int64 v64; // x7
  unsigned int v65; // w20
  unsigned int v66; // w19
  int v67; // w2
  unsigned int v68; // w4
  unsigned int v69; // w5
  int v70; // w12
  int v71; // w11
  __int64 *v72; // x13
  __int64 v73; // x18
  __int64 v74; // x11
  int v75; // w12
  __int64 v76; // x15
  __int64 v77; // x16
  int v78; // w17
  int v79; // w13
  int v80; // w2
  int v81; // w14
  int *v82; // x1
  int v83; // w2
  __int64 v84; // x3
  __int64 v85; // x5
  int v86; // w4
  bool v87; // cc
  int v88; // w4
  int v89; // w5
  __int64 v90; // x6
  unsigned __int16 *v91; // x15
  int v92; // w17
  __int64 v93; // x18
  unsigned __int16 v94; // w17
  int v95; // w14
  int v96; // w15
  int v97; // w16
  __int64 v98; // x17
  __int64 v99; // x14
  _WORD *v100; // x14
  __int64 v101; // x18
  unsigned int v102; // t1
  int v103; // w12
  __int64 v104; // x13
  __int64 v105; // x15
  __int64 v106; // x16
  unsigned int v107; // w14
  int v108; // w13
  int v109; // w15
  int v110; // w16
  unsigned __int16 v111[1]; // [xsp+8h] [xbp-58h]
  __int16 v112; // [xsp+Ah] [xbp-56h]
  __int16 v113; // [xsp+Ch] [xbp-54h]
  __int16 v114; // [xsp+Eh] [xbp-52h]
  __int16 v115; // [xsp+10h] [xbp-50h]
  __int16 v116; // [xsp+12h] [xbp-4Eh]
  __int16 v117; // [xsp+14h] [xbp-4Ch]
  __int16 v118; // [xsp+16h] [xbp-4Ah]
  __int16 v119; // [xsp+18h] [xbp-48h]
  __int16 v120; // [xsp+1Ah] [xbp-46h]
  __int16 v121; // [xsp+1Ch] [xbp-44h]
  __int16 v122; // [xsp+1Eh] [xbp-42h]
  __int16 v123; // [xsp+20h] [xbp-40h]
  __int16 v124; // [xsp+22h] [xbp-3Eh]
  __int16 v125; // [xsp+24h] [xbp-3Ch]
  __int16 v126; // [xsp+26h] [xbp-3Ah]
  __int64 v127; // [xsp+28h] [xbp-38h]

  v127 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (__int64 *)a2[2];
  v3 = *a2;
  v4 = *v2;
  v5 = *((unsigned int *)v2 + 5);
  v6 = (int *)(result + 5300);
  *(_QWORD *)(result + 5300) = 0x23D00000000LL;
  if ( (int)v5 < 1 )
  {
    v11 = 0;
    v9 = -1;
  }
  else
  {
    v7 = 0;
    v8 = (_WORD *)(v3 + 2);
    v9 = -1;
    do
    {
      if ( *(v8 - 1) )
      {
        v10 = *(_DWORD *)(result + 5300) + 1;
        *(_DWORD *)(result + 5300) = v10;
        *(_DWORD *)(result + 4LL * v10 + 3008) = v7;
        *(_BYTE *)(result + 5308 + v7) = 0;
        v9 = v7;
      }
      else
      {
        *v8 = 0;
      }
      ++v7;
      v8 += 2;
    }
    while ( v5 != v7 );
    v11 = *v6;
    if ( *v6 > 1 )
      goto LABEL_20;
  }
  v12 = v9;
  do
  {
    v13 = v11 + 1;
    if ( v12 < 2 )
      v14 = v12 + 1;
    else
      v14 = 0;
    *(_DWORD *)(result + 5300) = v13;
    *(_DWORD *)(result + 4LL * v13 + 3008) = v14;
    *(_WORD *)(v3 + 4LL * v14) = 1;
    *(_BYTE *)(result + v14 + 5308) = 0;
    if ( v12 >= 2 )
      v9 = v12;
    else
      v9 = v12 + 1;
    --*(_QWORD *)(result + 5912);
    if ( v4 )
      *(_QWORD *)(result + 5920) -= *(unsigned __int16 *)(v4 + 4LL * v14 + 2);
    v11 = *v6;
    v12 = v9;
  }
  while ( *v6 < 2 );
LABEL_20:
  *((_DWORD *)a2 + 2) = v9;
  v15 = (unsigned int)*v6;
  if ( (int)v15 < 2 )
    goto LABEL_42;
  v16 = v15 >> 1;
  while ( 2 )
  {
    v17 = result + 4 * v16;
    v18 = *(_DWORD *)(v17 + 3008);
    v19 = 2 * v16;
    if ( 2 * (int)v16 > (int)v15 )
      goto LABEL_40;
    v20 = v16;
    while ( 1 )
    {
      if ( v19 >= (int)v15 )
      {
        v23 = (int *)(result + 4LL * v19 + 3008);
LABEL_32:
        v21 = v19;
        goto LABEL_33;
      }
      v22 = v19 | 1LL;
      v23 = (int *)(result + 3008 + 4LL * v19);
      v24 = *v23;
      v25 = *(int *)(result + 3008 + 4 * v22);
      v26 = *(unsigned __int16 *)(v3 + 4 * v25);
      v27 = *(unsigned __int16 *)(v3 + 4 * v24);
      if ( v26 < v27 )
        goto LABEL_30;
      if ( v26 != v27 )
        goto LABEL_32;
      v87 = *(unsigned __int8 *)(result + 5308 + v25) > (unsigned int)*(unsigned __int8 *)(result + 5308 + v24);
      v21 = v19;
      if ( !v87 )
      {
LABEL_30:
        v23 = (int *)(result + 3008 + 4 * v22);
        v21 = v19 | 1;
      }
LABEL_33:
      v28 = *v23;
      v29 = *(unsigned __int16 *)(v3 + 4LL * v18);
      v30 = *(unsigned __int16 *)(v3 + 4LL * v28);
      if ( v29 < v30
        || v29 == v30
        && *(unsigned __int8 *)(result + v18 + 5308) <= (unsigned int)*(unsigned __int8 *)(result + v28 + 5308) )
      {
        break;
      }
      *(_DWORD *)(result + 4LL * v20 + 3008) = v28;
      LODWORD(v15) = *(_DWORD *)(result + 5300);
      v19 = 2 * v21;
      v20 = v21;
      if ( 2 * v21 > (int)v15 )
        goto LABEL_39;
    }
    v21 = v20;
LABEL_39:
    v17 = result + 4LL * v21;
LABEL_40:
    *(_DWORD *)(v17 + 3008) = v18;
    if ( v16 >= 2 )
    {
      LODWORD(v15) = *v6;
      --v16;
      continue;
    }
    break;
  }
  LODWORD(v15) = *v6;
LABEL_42:
  while ( 2 )
  {
    v31 = v15 - 1;
    v32 = *(_DWORD *)(result + 3012);
    *(_DWORD *)(result + 5300) = v15 - 1;
    v33 = *(_DWORD *)(result + 4LL * (int)v15 + 3008);
    v34 = v32;
    v35 = (int)v15 - 3 < 0;
    v36 = (_DWORD *)(result + 3012);
    *(_DWORD *)(result + 3012) = v33;
    if ( v35 != __OFSUB__(v31, 2) )
      goto LABEL_59;
    v37 = 1;
    v38 = 2;
    while ( 2 )
    {
      if ( v38 >= v31 )
      {
        v41 = (int *)(result + 4LL * v38 + 3008);
LABEL_51:
        v39 = v38;
        goto LABEL_52;
      }
      v40 = v38 | 1LL;
      v41 = (int *)(result + 3008 + 4LL * v38);
      v42 = *v41;
      v43 = *(int *)(result + 3008 + 4 * v40);
      v44 = *(unsigned __int16 *)(v3 + 4 * v43);
      v45 = *(unsigned __int16 *)(v3 + 4 * v42);
      if ( v44 < v45 )
        goto LABEL_49;
      if ( v44 != v45 )
        goto LABEL_51;
      v87 = *(unsigned __int8 *)(result + 5308 + v43) > (unsigned int)*(unsigned __int8 *)(result + 5308 + v42);
      v39 = v38;
      if ( !v87 )
      {
LABEL_49:
        v41 = (int *)(result + 3008 + 4 * v40);
        v39 = v38 | 1;
      }
LABEL_52:
      v46 = *v41;
      v47 = *(unsigned __int16 *)(v3 + 4LL * v33);
      v48 = *(unsigned __int16 *)(v3 + 4LL * v46);
      if ( v47 >= v48
        && (v47 != v48
         || *(unsigned __int8 *)(result + v33 + 5308) > (unsigned int)*(unsigned __int8 *)(result + v46 + 5308)) )
      {
        *(_DWORD *)(result + 4LL * v37 + 3008) = v46;
        v31 = *(_DWORD *)(result + 5300);
        v38 = 2 * v39;
        v37 = v39;
        if ( 2 * v39 > v31 )
          goto LABEL_58;
        continue;
      }
      break;
    }
    v39 = v37;
LABEL_58:
    v36 = (_DWORD *)(result + 4LL * v39 + 3008);
LABEL_59:
    *v36 = v33;
    v49 = *(int *)(result + 3012);
    v50 = (_WORD *)(v3 + 4LL * v32);
    v51 = *(_DWORD *)(result + 5304) - 1;
    *(_DWORD *)(result + 5304) = v51;
    *(_DWORD *)(result + 3008 + 4LL * v51) = v32;
    v52 = (_WORD *)(v3 + 4 * v49);
    v53 = *(_DWORD *)(result + 5304) - 1;
    *(_DWORD *)(result + 5304) = v53;
    *(_DWORD *)(result + 3008 + 4LL * v53) = v49;
    v54 = (_WORD *)(v3 + 4LL * (int)v5);
    *v54 = *v52 + *v50;
    v55 = *(unsigned __int8 *)(result + 5308 + v34);
    v56 = (_BYTE *)(result + 5308 + (int)v5);
    if ( v55 < *(unsigned __int8 *)(result + 5308 + v49) )
      LOBYTE(v55) = *(_BYTE *)(result + 5308 + v49);
    *v56 = v55 + 1;
    v52[1] = v5;
    v50[1] = v5;
    v57 = *(_DWORD *)(result + 5300);
    v15 = result + 3012;
    *(_DWORD *)(result + 3012) = v5;
    if ( v57 < 2 )
      goto LABEL_78;
    v58 = 1;
    v59 = 2;
    while ( 2 )
    {
      if ( v59 >= v57 )
      {
        v62 = (int *)(result + 4LL * v59 + 3008);
LABEL_70:
        v60 = v59;
        goto LABEL_71;
      }
      v61 = v59 | 1LL;
      v62 = (int *)(result + 3008 + 4LL * v59);
      v63 = *v62;
      v64 = *(int *)(result + 3008 + 4 * v61);
      v65 = *(unsigned __int16 *)(v3 + 4 * v64);
      v66 = *(unsigned __int16 *)(v3 + 4 * v63);
      if ( v65 < v66 )
        goto LABEL_68;
      if ( v65 != v66 )
        goto LABEL_70;
      v87 = *(unsigned __int8 *)(result + 5308 + v64) > (unsigned int)*(unsigned __int8 *)(result + 5308 + v63);
      v60 = v59;
      if ( !v87 )
      {
LABEL_68:
        v62 = (int *)(result + 3008 + 4 * v61);
        v60 = v59 | 1;
      }
LABEL_71:
      v67 = *v62;
      v68 = (unsigned __int16)*v54;
      v69 = *(unsigned __int16 *)(v3 + 4LL * v67);
      if ( v68 >= v69 && (v68 != v69 || (unsigned __int8)*v56 > (unsigned int)*(unsigned __int8 *)(result + v67 + 5308)) )
      {
        *(_DWORD *)(result + 4LL * v58 + 3008) = v67;
        v57 = *(_DWORD *)(result + 5300);
        v59 = 2 * v60;
        v58 = v60;
        if ( 2 * v60 > v57 )
          goto LABEL_77;
        continue;
      }
      break;
    }
    v60 = v58;
LABEL_77:
    v15 = result + 4LL * v60 + 3008;
LABEL_78:
    *(_DWORD *)v15 = v5;
    LODWORD(v15) = *v6;
    LODWORD(v5) = v5 + 1;
    if ( *v6 > 1 )
      continue;
    break;
  }
  v70 = *(_DWORD *)(result + 3012);
  v71 = *(_DWORD *)(result + 5304) - 1;
  *(_DWORD *)(result + 5304) = v71;
  *(_DWORD *)(result + 3008 + 4LL * v71) = v70;
  v72 = (__int64 *)a2[2];
  v73 = *(int *)(result + 5304);
  v74 = *a2;
  v75 = *((_DWORD *)a2 + 2);
  v76 = *v72;
  v77 = v72[1];
  v78 = *((_DWORD *)v72 + 4);
  v79 = *((_DWORD *)v72 + 6);
  *(_OWORD *)(result + 2992) = 0u;
  *(_OWORD *)(result + 2976) = 0u;
  *(_WORD *)(v74 + 4LL * *(int *)(result + 3008 + 4 * v73) + 2) = 0;
  v80 = *(_DWORD *)(result + 5304);
  if ( v80 + 1 <= 572 )
  {
    v81 = 0;
    v82 = (int *)(result + 4LL * (v80 + 1) + 3008);
    v83 = 572 - v80;
    do
    {
      v84 = *v82;
      v85 = v74 + 4 * v84;
      v86 = *(unsigned __int16 *)(v74 + 4LL * *(unsigned __int16 *)(v85 + 2) + 2);
      v87 = v79 <= v86;
      if ( v79 > v86 )
        v88 = v86 + 1;
      else
        v88 = v79;
      if ( v87 )
        ++v81;
      *(_WORD *)(v85 + 2) = v88;
      if ( (int)v84 <= v75 )
      {
        ++*(_WORD *)(result + 2LL * v88 + 2976);
        v89 = (int)v84 >= v78 ? *(_DWORD *)(v77 + 4LL * ((int)v84 - v78)) : 0;
        v90 = *(unsigned __int16 *)(v74 + 4 * v84);
        *(_QWORD *)(result + 5912) += v90 * (unsigned int)(v89 + v88);
        if ( v76 )
          *(_QWORD *)(result + 5920) += (v89 + (unsigned int)*(unsigned __int16 *)(v76 + 4 * v84 + 2)) * v90;
      }
      --v83;
      ++v82;
    }
    while ( v83 );
    if ( v81 )
    {
      v91 = (unsigned __int16 *)(result + 2LL * v79 + 2976);
      do
      {
        v92 = v79 + 1;
        do
        {
          v93 = result + 2LL * (v92 - 2);
          --v92;
        }
        while ( !*(_WORD *)(v93 + 2976) );
        --*(_WORD *)(v93 + 2976);
        v81 -= 2;
        *(_WORD *)(result + 2LL * v92 + 2976) += 2;
        v94 = *v91 - 1;
        *v91 = v94;
      }
      while ( v81 > 0 );
      if ( v79 )
      {
        v95 = 573;
        while ( 1 )
        {
          v96 = v94;
          v97 = v95;
          while ( v96 )
          {
            v98 = *(int *)(result + 4LL * --v97 + 3008);
            if ( (int)v98 <= v75 )
            {
              v99 = v74 + 4 * v98;
              v102 = *(unsigned __int16 *)(v99 + 2);
              v100 = (_WORD *)(v99 + 2);
              v101 = v102;
              if ( v79 != v102 )
              {
                *(_QWORD *)(result + 5912) += (v79 - v101) * *(unsigned __int16 *)(v74 + 4 * v98);
                *v100 = v79;
              }
              --v96;
              v95 = v97;
            }
          }
          if ( !--v79 )
            break;
          v94 = *(_WORD *)(result + 2LL * v79 + 2976);
        }
      }
    }
  }
  v112 = 2 * *(_WORD *)(result + 2976);
  v113 = 2 * (v112 + *(_WORD *)(result + 2978));
  v114 = 2 * (v113 + *(_WORD *)(result + 2980));
  v115 = 2 * (v114 + *(_WORD *)(result + 2982));
  v116 = 2 * (v115 + *(_WORD *)(result + 2984));
  v117 = 2 * (v116 + *(_WORD *)(result + 2986));
  v118 = 2 * (v117 + *(_WORD *)(result + 2988));
  v119 = 2 * (v118 + *(_WORD *)(result + 2990));
  v120 = 2 * (v119 + *(_WORD *)(result + 2992));
  v121 = 2 * (v120 + *(_WORD *)(result + 2994));
  v122 = 2 * (v121 + *(_WORD *)(result + 2996));
  v123 = 2 * (v122 + *(_WORD *)(result + 2998));
  v124 = 2 * (*(_WORD *)(result + 3000) + v123);
  v125 = 2 * (*(_WORD *)(result + 3002) + v124);
  v126 = 2 * (v125 + *(_WORD *)(result + 3004));
  if ( (v9 & 0x80000000) == 0 )
  {
    v103 = 0;
    do
    {
      v104 = v3 + 4LL * v103;
      v105 = *(unsigned __int16 *)(v104 + 2);
      if ( *(_WORD *)(v104 + 2) )
      {
        v106 = v105;
        v107 = v111[v105];
        v108 = 0;
        v109 = v105 + 1;
        v111[v106] = v107 + 1;
        do
        {
          --v109;
          v110 = v108 | v107 & 1;
          v107 >>= 1;
          v108 = 2 * v110;
        }
        while ( v109 > 1 );
        *(_WORD *)(v3 + 4LL * v103) = v110;
      }
      ++v103;
    }
    while ( v103 <= v9 );
  }
  return result;
}
