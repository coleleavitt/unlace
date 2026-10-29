/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BA18
// Address: 0x0008BA18

//----- (0008BA18) --------------------------------------------------------
int __fastcall sub_8BA18(int a1, _DWORD *a2)
{
  int *v3; // r0
  int v4; // r4
  int v5; // r2
  int *v6; // r6
  int v7; // r1
  int v8; // r2
  _WORD *v9; // r5
  int v10; // r4
  int v11; // r5
  int v12; // r2
  int v13; // r4
  int v14; // r3
  int v15; // r2
  int v16; // r0
  _DWORD *v17; // r1
  int v18; // r5
  int v19; // r1
  int v20; // r2
  unsigned int v21; // r0
  int *v22; // r3
  unsigned int v23; // r6
  bool v24; // cf
  bool v25; // zf
  int v26; // r3
  unsigned int v27; // r0
  unsigned int v28; // r4
  int v29; // r5
  int v30; // r3
  int *v31; // r0
  int v32; // r1
  int v33; // r6
  int v34; // r2
  unsigned int v35; // r0
  int *v36; // r5
  unsigned int v37; // r3
  int v38; // r3
  unsigned int v39; // r0
  unsigned int v40; // r4
  int v41; // r1
  int v42; // r0
  int v43; // r3
  int v44; // r0
  int v45; // r3
  unsigned int v46; // r1
  int *v47; // r0
  int v48; // r2
  int v49; // r3
  int v50; // r5
  int v51; // r2
  int v52; // r1
  unsigned int v53; // r6
  int *v54; // r7
  unsigned int v55; // r4
  bool v56; // zf
  int v57; // r2
  unsigned int v58; // r0
  unsigned int v59; // r3
  int v60; // r0
  int v61; // r1
  _WORD *v62; // r6
  int *v63; // r1
  int v64; // r0
  int v65; // r6
  int *v66; // r3
  int v67; // r0
  int v68; // r7
  int v69; // r5
  int v70; // r4
  int v71; // r0
  int v72; // r5
  _WORD *v73; // r3
  unsigned __int16 *v74; // r4
  unsigned __int16 *v75; // r2
  int v76; // r6
  int v77; // r3
  int v78; // r1
  int v79; // r0
  int v80; // r6
  int *v81; // r0
  int v82; // r4
  int v84; // r4
  int v85; // r7
  int i; // r0
  _WORD *v87; // r1
  int v88; // r2
  unsigned int v89; // r1
  int v90; // r2
  int v91; // r3
  int v92; // r4
  int v95; // [sp+10h] [bp-68h]
  int v96; // [sp+14h] [bp-64h]
  _WORD *v97; // [sp+18h] [bp-60h]
  int *v98; // [sp+1Ch] [bp-5Ch]
  int v99; // [sp+20h] [bp-58h]
  int v100; // [sp+20h] [bp-58h]
  int v101; // [sp+24h] [bp-54h]
  _DWORD *v102; // [sp+24h] [bp-54h]
  int v103; // [sp+28h] [bp-50h]
  int *v104; // [sp+28h] [bp-50h]
  int v105; // [sp+28h] [bp-50h]
  int v106; // [sp+2Ch] [bp-4Ch]
  int v107; // [sp+2Ch] [bp-4Ch]
  unsigned __int8 *v108; // [sp+30h] [bp-48h]
  int v109; // [sp+30h] [bp-48h]
  int v110; // [sp+34h] [bp-44h]
  int v111; // [sp+34h] [bp-44h]
  unsigned __int8 *v112; // [sp+38h] [bp-40h]
  _DWORD *v113; // [sp+38h] [bp-40h]
  int v114; // [sp+38h] [bp-40h]
  _DWORD *v115; // [sp+38h] [bp-40h]
  _DWORD *v116; // [sp+40h] [bp-38h]
  unsigned __int16 *v117; // [sp+40h] [bp-38h]
  _DWORD *v118; // [sp+40h] [bp-38h]
  int v119; // [sp+40h] [bp-38h]
  int v120; // [sp+44h] [bp-34h]
  unsigned __int16 *v121; // [sp+44h] [bp-34h]
  int v122; // [sp+44h] [bp-34h]
  _WORD *v123; // [sp+44h] [bp-34h]
  int *v124; // [sp+48h] [bp-30h]
  int v125; // [sp+48h] [bp-30h]
  int v126; // [sp+4Ch] [bp-2Ch]
  _WORD *v127; // [sp+50h] [bp-28h]
  unsigned __int16 v128[1]; // [sp+54h] [bp-24h]
  __int16 v129; // [sp+56h] [bp-22h]
  __int16 v130; // [sp+58h] [bp-20h]
  __int16 v131; // [sp+5Ah] [bp-1Eh]
  __int16 v132; // [sp+5Ch] [bp-1Ch]
  __int16 v133; // [sp+5Eh] [bp-1Ah]
  __int16 v134; // [sp+60h] [bp-18h]
  __int16 v135; // [sp+62h] [bp-16h]
  __int16 v136; // [sp+64h] [bp-14h]
  __int16 v137; // [sp+66h] [bp-12h]
  __int16 v138; // [sp+68h] [bp-10h]
  __int16 v139; // [sp+6Ah] [bp-Eh]
  __int16 v140; // [sp+6Ch] [bp-Ch]
  __int16 v141; // [sp+6Eh] [bp-Ah]
  __int16 v142; // [sp+70h] [bp-8h]
  __int16 v143; // [sp+72h] [bp-6h]
  int v144; // [sp+74h] [bp-4h]

  v127 = (_WORD *)*a2;
  v3 = (int *)a2[2];
  v4 = v3[3];
  v120 = *v3;
  v95 = 573;
  *(_DWORD *)(a1 + 5204) = 573;
  v5 = 0;
  *(_DWORD *)(a1 + 5200) = 0;
  v98 = (int *)(a1 + 5204);
  v6 = (int *)(a1 + 5200);
  v7 = -1;
  v110 = v4;
  v126 = a1;
  v124 = (int *)(a1 + 5200);
  if ( v4 < 1 )
    goto LABEL_8;
  v8 = 0;
  v9 = v127;
  v7 = -1;
  do
  {
    if ( *v9 )
    {
      v10 = *v6 + 1;
      *v6 = v10;
      *(_DWORD *)(a1 + 4 * v10 + 2908) = v8;
      *(_BYTE *)(a1 + 5208 + v8) = 0;
      v7 = v8;
    }
    else
    {
      v9[1] = 0;
    }
    v9 += 2;
    ++v8;
  }
  while ( v110 != v8 );
  v5 = *v6;
  if ( *v6 <= 1 )
  {
LABEL_8:
    v11 = v7;
    do
    {
      v12 = v5 + 1;
      *v6 = v12;
      v13 = v11 + 1;
      if ( v11 >= 2 )
        v13 = 0;
      *(_DWORD *)(a1 + 4 * v12 + 2908) = v13;
      v127[2 * v13] = 1;
      *(_BYTE *)(a1 + v13 + 5208) = 0;
      --*(_DWORD *)(a1 + 5800);
      v7 = v11 + 1;
      if ( v11 >= 2 )
        v7 = v11;
      v6 = (int *)(a1 + 5200);
      if ( v120 )
        *(_DWORD *)(a1 + 5804) -= *(unsigned __int16 *)(v120 + 4 * v13 + 2);
      v5 = *v124;
      v11 = v7;
    }
    while ( *v124 < 2 );
  }
  v96 = v7;
  a2[1] = v7;
  v14 = *v6;
  if ( *v6 < 2 )
    goto LABEL_40;
  v15 = (unsigned int)v14 >> 1;
  while ( 2 )
  {
    v16 = *(_DWORD *)(a1 + 4 * v15 + 2908);
    v112 = (unsigned __int8 *)(a1 + v16 + 5208);
    v17 = (_DWORD *)(a1 + 4 * v15 + 2908);
    v18 = 2 * v15;
    if ( v14 < 2 * v15 )
      goto LABEL_38;
    v103 = *(_DWORD *)(a1 + 4 * v15 + 2908);
    v121 = &v127[2 * v16];
    v106 = v15;
    v19 = v15;
    while ( 1 )
    {
      if ( v18 >= v14 )
      {
        v22 = (int *)(a1 + 4 * v18 + 2908);
      }
      else
      {
        v116 = (_DWORD *)(a1 + 2908 + 4 * (v18 | 1));
        v21 = (unsigned __int16)v127[2 * *v116];
        v22 = (int *)(a1 + 2908 + 4 * v18);
        v23 = (unsigned __int16)v127[2 * *v22];
        v24 = v21 >= v23;
        v25 = v21 == v23;
        v6 = v124;
        if ( !v24 )
          goto LABEL_27;
        if ( v25 )
        {
          v20 = v18;
          if ( *(unsigned __int8 *)(v126 + 5208 + *v116) > (unsigned int)*(unsigned __int8 *)(v126 + 5208 + *v22) )
            goto LABEL_30;
LABEL_27:
          v22 = (int *)(a1 + 2908 + 4 * (v18 | 1));
          v20 = v18 | 1;
          goto LABEL_30;
        }
      }
      v20 = v18;
LABEL_30:
      v26 = *v22;
      v27 = (unsigned __int16)v127[2 * v26];
      v28 = *v121;
      if ( v28 < v27 )
      {
        v20 = v19;
        a1 = v126;
        goto LABEL_37;
      }
      a1 = v126;
      if ( v28 == v27 && *v112 <= (unsigned int)*(unsigned __int8 *)(v126 + v26 + 5208) )
        break;
      *(_DWORD *)(v126 + 4 * v19 + 2908) = v26;
      v18 = 2 * v20;
      v14 = *v6;
      v19 = v20;
      if ( *v6 < 2 * v20 )
        goto LABEL_37;
    }
    v20 = v19;
LABEL_37:
    v17 = (_DWORD *)(a1 + 4 * v20 + 2908);
    v15 = v106;
    v16 = v103;
LABEL_38:
    *v17 = v16;
    if ( v15 >= 2 )
    {
      v14 = *v6;
      --v15;
      continue;
    }
    break;
  }
  v14 = *v6;
LABEL_40:
  v104 = (int *)(a1 + 2912);
  while ( 2 )
  {
    v99 = *v104;
    v29 = v14 - 1;
    *v6 = v14 - 1;
    v30 = *(_DWORD *)(a1 + 4 * v14 + 2908);
    *v104 = v30;
    v108 = (unsigned __int8 *)(a1 + v30 + 5208);
    v31 = v104;
    if ( v29 < 2 )
      goto LABEL_60;
    v117 = &v127[2 * v30];
    v32 = 1;
    v33 = 2;
    v122 = v30;
    while ( 2 )
    {
      if ( v33 >= v29 )
      {
        v36 = (int *)(a1 + 4 * v33 + 2908);
LABEL_50:
        v34 = v33;
        goto LABEL_51;
      }
      v113 = (_DWORD *)(a1 + 2908 + 4 * (v33 | 1));
      v35 = (unsigned __int16)v127[2 * *v113];
      v36 = (int *)(a1 + 2908 + 4 * v33);
      v37 = (unsigned __int16)v127[2 * *v36];
      if ( v35 < v37 )
        goto LABEL_48;
      if ( v35 != v37 )
        goto LABEL_50;
      v34 = v33;
      if ( *(unsigned __int8 *)(v126 + 5208 + *v113) <= (unsigned int)*(unsigned __int8 *)(v126 + 5208 + *v36) )
      {
LABEL_48:
        v36 = (int *)(a1 + 2908 + 4 * (v33 | 1));
        v34 = v33 | 1;
      }
LABEL_51:
      v38 = *v36;
      v39 = (unsigned __int16)v127[2 * *v36];
      v40 = *v117;
      if ( v40 < v39 )
      {
        v34 = v32;
        a1 = v126;
        goto LABEL_58;
      }
      a1 = v126;
      if ( v40 != v39 || *v108 > (unsigned int)*(unsigned __int8 *)(v126 + v38 + 5208) )
      {
        *(_DWORD *)(v126 + 4 * v32 + 2908) = v38;
        v33 = 2 * v34;
        v29 = *v124;
        v32 = v34;
        v30 = v122;
        if ( *v124 < 2 * v34 )
          goto LABEL_59;
        continue;
      }
      break;
    }
    v34 = v32;
LABEL_58:
    v30 = v122;
LABEL_59:
    v31 = (int *)(a1 + 4 * v34 + 2908);
LABEL_60:
    *v31 = v30;
    v41 = *v104;
    v42 = *v98 - 1;
    *v98 = v42;
    v43 = a1 + 2908;
    *(_DWORD *)(v43 + 4 * v42) = v99;
    v44 = *v98 - 1;
    *v98 = v44;
    v114 = a1 + 2908;
    *(_DWORD *)(v43 + 4 * v44) = v41;
    v45 = 2 * v41;
    v127[2 * v110] = v127[2 * v41] + v127[2 * v99];
    v46 = *(unsigned __int8 *)(a1 + 5208 + v41);
    v101 = a1 + 5208;
    if ( *(unsigned __int8 *)(a1 + 5208 + v99) >= v46 )
      LOBYTE(v46) = *(_BYTE *)(a1 + 5208 + v99);
    *(_BYTE *)(v101 + v110) = v46 + 1;
    v127[v45 + 1] = v110;
    v127[2 * v99 + 1] = v110;
    v47 = v104;
    *v104 = v110;
    v48 = v110 + 1;
    v6 = v124;
    v49 = *v124;
    if ( *v124 < 2 )
      goto LABEL_81;
    v50 = 1;
    v51 = 2;
    while ( 2 )
    {
      if ( v51 >= v49 )
      {
        v54 = (int *)(a1 + 4 * v51 + 2908);
        goto LABEL_72;
      }
      v118 = (_DWORD *)(v114 + 4 * (v51 | 1));
      v53 = (unsigned __int16)v127[2 * *v118];
      v54 = (int *)(v114 + 4 * v51);
      v55 = (unsigned __int16)v127[2 * *v54];
      v24 = v53 >= v55;
      v56 = v53 == v55;
      v6 = v124;
      if ( !v24 )
        goto LABEL_70;
      if ( v56 )
      {
        v52 = v51;
        if ( *(unsigned __int8 *)(v101 + *v118) <= (unsigned int)*(unsigned __int8 *)(v101 + *v54) )
        {
LABEL_70:
          v54 = (int *)(v114 + 4 * (v51 | 1));
          v52 = v51 | 1;
        }
      }
      else
      {
LABEL_72:
        v52 = v51;
      }
      v57 = *v54;
      v58 = (unsigned __int16)v127[2 * *v54];
      v59 = (unsigned __int16)v127[2 * v110];
      if ( v59 < v58 )
      {
        v52 = v50;
        a1 = v126;
        goto LABEL_80;
      }
      a1 = v126;
      if ( v59 != v58 || *(unsigned __int8 *)(v101 + v110) > (unsigned int)*(unsigned __int8 *)(v126 + v57 + 5208) )
      {
        *(_DWORD *)(v126 + 4 * v50 + 2908) = v57;
        v51 = 2 * v52;
        v49 = *v6;
        v50 = v52;
        if ( *v6 < 2 * v52 )
          goto LABEL_80;
        continue;
      }
      break;
    }
    v52 = v50;
LABEL_80:
    v47 = (int *)(a1 + 4 * v52 + 2908);
    v48 = v110 + 1;
LABEL_81:
    *v47 = v110;
    v14 = *v6;
    v110 = v48;
    if ( *v6 > 1 )
      continue;
    break;
  }
  v60 = *v104;
  v61 = *v98 - 1;
  *v98 = v61;
  *(_DWORD *)(v114 + 4 * v61) = v60;
  v62 = (_WORD *)*a2;
  v111 = a2[1];
  v63 = (int *)a2[2];
  v109 = v63[4];
  v107 = *v63;
  v100 = v63[1];
  v105 = v63[2];
  v97 = (_WORD *)(a1 + 2876);
  memset((void *)(a1 + 2876), 0, 0x20u);
  v123 = v62;
  v62[2 * *(_DWORD *)(v114 + 4 * *v98) + 1] = 0;
  v64 = *v98;
  if ( *v98 + 1 < 573 )
  {
    v102 = (_DWORD *)(a1 + 5804);
    v115 = (_DWORD *)(a1 + 5800);
    v65 = 572 - v64;
    v66 = (int *)(a1 + 4 * v64 + 2912);
    v125 = 0;
    do
    {
      v67 = *v66;
      v119 = 2 * *v66;
      v68 = (unsigned __int16)v123[2 * (unsigned __int16)v123[v119 + 1] + 1];
      v69 = v68 + 1;
      if ( v109 <= v68 )
        v69 = v109;
      v123[v119 + 1] = v69;
      v125 += v109 <= v68;
      a1 = v126;
      if ( v67 <= v111 )
      {
        ++*(_WORD *)(v126 + 2 * v69 + 2876);
        v70 = 0;
        if ( v67 >= v105 )
          v70 = *(_DWORD *)(v100 + 4 * (v67 - v105));
        v71 = (unsigned __int16)v123[v119];
        *v115 += (v70 + v69) * v71;
        if ( v107 )
          *v102 += v71 * (v70 + *(unsigned __int16 *)(v107 + v119 * 2 + 2));
      }
      ++v66;
      --v65;
    }
    while ( v65 );
    v72 = v111;
    if ( v125 )
    {
      v73 = (_WORD *)(v126 + 2 * v109 + 2876);
      do
      {
        v74 = (unsigned __int16 *)(v126 + 2 * v109 + 2874);
        do
        {
          v75 = v74 - 1;
          v76 = *v74--;
        }
        while ( !v76 );
        v75[1] = v76 - 1;
        v75[2] += 2;
        LOWORD(v75) = *v73 - 1;
        *v73 = (_WORD)v75;
        v125 -= 2;
      }
      while ( v125 > 0 );
      v77 = v109;
      if ( v109 )
      {
        v78 = v126 + 2904;
        while ( 2 )
        {
          v75 = (unsigned __int16 *)(unsigned __int16)v75;
          v79 = v95;
          v80 = v95;
LABEL_102:
          v95 = v79;
          v81 = (int *)(v78 + 4 * v79);
          while ( v75 )
          {
            v82 = *v81;
            --v80;
            if ( *v81-- <= v72 )
            {
              v84 = 2 * v82;
              v85 = (unsigned __int16)v123[v84 + 1];
              if ( v77 != v85 )
              {
                v72 = v111;
                *v115 += (unsigned __int16)v123[v84] * (v77 - v85);
                v78 = v126 + 2904;
                v123[v84 + 1] = v77;
              }
              v75 = (unsigned __int16 *)((char *)v75 - 1);
              v79 = v80;
              goto LABEL_102;
            }
          }
          --v77;
          a1 = v126;
          if ( v77 )
          {
            LOWORD(v75) = *(_WORD *)(v126 + 2 * v77 + 2876);
            continue;
          }
          break;
        }
      }
    }
  }
  v129 = 2 * *v97;
  v130 = 2 * (v129 + *(_WORD *)(a1 + 2878));
  v131 = 2 * (v130 + *(_WORD *)(a1 + 2880));
  v132 = 2 * (v131 + *(_WORD *)(a1 + 2882));
  v133 = 2 * (v132 + *(_WORD *)(a1 + 2884));
  v134 = 2 * (v133 + *(_WORD *)(a1 + 2886));
  v135 = 2 * (v134 + *(_WORD *)(a1 + 2888));
  v136 = 2 * (v135 + *(_WORD *)(a1 + 2890));
  v137 = 2 * (v136 + *(_WORD *)(a1 + 2892));
  v138 = 2 * (v137 + *(_WORD *)(a1 + 2894));
  v139 = 2 * (v138 + *(_WORD *)(a1 + 2896));
  v140 = 2 * (v139 + *(_WORD *)(a1 + 2898));
  v141 = 2 * (*(_WORD *)(a1 + 2900) + v140);
  v142 = 2 * (*(_WORD *)(a1 + 2902) + v141);
  v143 = 2 * (v142 + *(_WORD *)(a1 + 2904));
  if ( v96 >= 0 )
  {
    for ( i = 0; i <= v96; ++i )
    {
      v87 = &v127[2 * i];
      v88 = (unsigned __int16)v87[1];
      if ( v87[1] )
      {
        v89 = v128[v88];
        v128[v88] = v89 + 1;
        v90 = v88 + 1;
        v91 = 0;
        do
        {
          v92 = v89 & 1 | v91;
          v91 = 2 * v92;
          --v90;
          v89 >>= 1;
        }
        while ( v90 > 1 );
        v127[2 * i] = v92;
      }
    }
  }
  return _stack_chk_guard - v144;
}
