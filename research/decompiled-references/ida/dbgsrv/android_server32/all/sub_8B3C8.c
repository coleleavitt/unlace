/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B3C8
// Address: 0x0008B3C8

//----- (0008B3C8) --------------------------------------------------------
_DWORD *__fastcall sub_8B3C8(int a1, const void *a2, size_t a3, int a4)
{
  const void *v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r0
  _WORD *v8; // r1
  unsigned int v9; // r2
  int v10; // r3
  int v11; // r4
  _WORD *v12; // r2
  unsigned int v13; // r3
  int v14; // r7
  unsigned int v15; // r5
  int v16; // r1
  unsigned int v17; // r3
  int v18; // r0
  int v19; // r4
  int v20; // r1
  int v21; // r5
  unsigned __int16 *v22; // r4
  int v23; // r7
  int v24; // r6
  int v25; // r2
  int v26; // r3
  _WORD *v27; // r2
  __int16 v28; // r1
  int v29; // r3
  int v30; // r2
  int v31; // r4
  int v32; // r5
  unsigned __int16 *v33; // r1
  int v34; // r7
  int v35; // r6
  int v36; // r0
  _WORD *v37; // r5
  __int16 v38; // r4
  int v39; // r5
  int v40; // r4
  int v41; // r3
  int v42; // r7
  int v43; // r4
  unsigned int v44; // r0
  int v45; // r2
  int v46; // r3
  char v47; // r2
  int v48; // r3
  int *v49; // r4
  int v50; // r2
  int v51; // r2
  int v52; // r0
  _WORD *v53; // r5
  int v54; // r2
  char v55; // r0
  int v56; // r2
  int *v57; // r2
  int v58; // r4
  int v59; // r1
  int v60; // r4
  char *v61; // r1
  __int16 *v62; // r2
  int v63; // r0
  int v64; // r0
  int v65; // r1
  char v66; // r0
  int v67; // r1
  int *v68; // r7
  int v69; // r4
  int v70; // r2
  int v71; // r4
  int v72; // r0
  int v73; // r2
  char v74; // r0
  int v75; // r2
  int v76; // r4
  int v77; // r1
  int v78; // r4
  int *v79; // r2
  unsigned int v80; // r3
  int v81; // r0
  int v82; // r1
  char v83; // r0
  int v84; // r1
  int v85; // r7
  int v86; // r3
  int v87; // r5
  int v88; // r7
  int v89; // r0
  int *v90; // r1
  unsigned int v91; // r2
  int v92; // r3
  char v93; // r4
  int v94; // r3
  int *v95; // r4
  int v96; // r7
  int v97; // r2
  char *v98; // r4
  int v99; // r5
  _DWORD *result; // r0
  int v101; // r2
  int v102; // r1
  int v103; // r3
  _WORD *v104; // r1
  char v105; // r2
  int v106; // [sp+8h] [bp-28h]
  int v107; // [sp+Ch] [bp-24h]
  _DWORD *v109; // [sp+14h] [bp-1Ch]
  char v111; // [sp+18h] [bp-18h]
  size_t v112; // [sp+1Ch] [bp-14h]
  int v113; // [sp+1Ch] [bp-14h]
  int v114; // [sp+1Ch] [bp-14h]
  int v115; // [sp+1Ch] [bp-14h]
  int *v116; // [sp+20h] [bp-10h]
  int v117; // [sp+24h] [bp-Ch]
  _WORD *v118; // [sp+24h] [bp-Ch]
  int v119; // [sp+28h] [bp-8h]
  int v120; // [sp+28h] [bp-8h]
  int *v121; // [sp+28h] [bp-8h]

  v4 = a2;
  v5 = a1;
  v6 = a1;
  if ( *(int *)(a1 + 132) >= 1 )
  {
    v112 = a3;
    v7 = *(_DWORD *)a1;
    if ( *(_DWORD *)(*(_DWORD *)v5 + 44) == 2 )
    {
      v8 = (_WORD *)(v5 + 148);
      v9 = -201342849;
      v10 = 0;
      while ( 1 )
      {
        if ( v9 << 31 )
        {
          v11 = 0;
          v5 = v6;
          if ( *v8 )
            break;
        }
        v8 += 2;
        v9 >>= 1;
        if ( (unsigned int)++v10 >= 0x20 )
        {
          if ( !*(_WORD *)(v5 + 184) && !*(_WORD *)(v5 + 188) && !*(_WORD *)(v5 + 200) )
          {
            v12 = (_WORD *)(v5 + 276);
            v13 = 32;
            while ( 1 )
            {
              ++v13;
              if ( *v12 )
                break;
              v12 += 2;
              v11 = 0;
              if ( v13 > 0xFF )
                goto LABEL_16;
            }
          }
          v11 = 1;
          break;
        }
      }
LABEL_16:
      *(_DWORD *)(v7 + 44) = v11;
    }
    sub_8BA18(v5, (_DWORD *)(v5 + 2840));
    sub_8BA18(v5, (_DWORD *)(v5 + 2852));
    v18 = *(unsigned __int16 *)(v5 + 150);
    v19 = *(_DWORD *)(v5 + 2844);
    *(_WORD *)(v5 + 4 * v19 + 154) = -1;
    v117 = -1;
    v119 = v19;
    if ( v19 >= 0 )
    {
      v20 = 138;
      if ( v18 )
        v20 = 7;
      v21 = 3;
      if ( v18 )
        v21 = 4;
      v22 = (unsigned __int16 *)(a1 + 154);
      v23 = 0;
      v24 = 0;
      v25 = -1;
      do
      {
        v26 = v18;
        ++v23;
        v18 = *v22;
        ++v24;
        if ( v23 >= v20 || v26 != v18 )
        {
          if ( v23 >= v21 )
          {
            if ( v26 )
            {
              if ( v26 != v25 )
                ++*(_WORD *)(a1 + 4 * v26 + 2684);
              v27 = (_WORD *)(a1 + 2748);
            }
            else if ( v23 > 10 )
            {
              v27 = (_WORD *)(a1 + 2756);
            }
            else
            {
              v27 = (_WORD *)(a1 + 2752);
            }
            v28 = *v27 + 1;
          }
          else
          {
            v27 = (_WORD *)(a1 + 4 * v26 + 2684);
            v28 = *v27 + v23;
          }
          *v27 = v28;
          v21 = 3;
          v20 = 138;
          v23 = 0;
          if ( v18 )
          {
            v21 = 3;
            if ( v26 != v18 )
              v21 = 4;
            v20 = 6;
            if ( v26 != v18 )
              v20 = 7;
            v23 = 0;
          }
          v25 = v26;
        }
        v22 += 2;
      }
      while ( v24 <= v119 );
    }
    v29 = *(unsigned __int16 *)(a1 + 2442);
    v30 = *(_DWORD *)(a1 + 2856);
    *(_WORD *)(a1 + 4 * v30 + 2446) = -1;
    if ( v30 >= 0 )
    {
      v31 = 138;
      if ( v29 )
        v31 = 7;
      v32 = 3;
      if ( v29 )
        v32 = 4;
      v33 = (unsigned __int16 *)(a1 + 2446);
      v34 = 0;
      v35 = 0;
      v120 = v30;
      do
      {
        v36 = v29;
        ++v34;
        v29 = *v33;
        ++v35;
        if ( v34 >= v31 || v36 != v29 )
        {
          if ( v34 >= v32 )
          {
            if ( v36 )
            {
              if ( v36 != v117 )
              {
                ++*(_WORD *)(a1 + 4 * v36 + 2684);
                v30 = v120;
              }
              v37 = (_WORD *)(a1 + 2748);
            }
            else if ( v34 > 10 )
            {
              v37 = (_WORD *)(a1 + 2756);
            }
            else
            {
              v37 = (_WORD *)(a1 + 2752);
            }
            v38 = *v37 + 1;
          }
          else
          {
            v37 = (_WORD *)(a1 + 4 * v36 + 2684);
            v30 = v120;
            v38 = *v37 + v34;
          }
          *v37 = v38;
          v32 = 3;
          v31 = 138;
          v34 = 0;
          if ( v29 )
          {
            v32 = 3;
            if ( v36 != v29 )
              v32 = 4;
            v31 = 6;
            if ( v36 != v29 )
              v31 = 7;
            v34 = 0;
          }
          v117 = v36;
        }
        v33 += 2;
      }
      while ( v35 <= v30 );
    }
    v39 = a1;
    sub_8BA18(a1, (_DWORD *)(a1 + 2864));
    v40 = 18;
    if ( !*(_WORD *)(a1 + 2746) )
    {
      v40 = 17;
      if ( !*(_WORD *)(a1 + 2690) )
      {
        v40 = 16;
        if ( !*(_WORD *)(a1 + 2742) )
        {
          v40 = 15;
          if ( !*(_WORD *)(a1 + 2694) )
          {
            v40 = 14;
            if ( !*(_WORD *)(a1 + 2738) )
            {
              v40 = 13;
              if ( !*(_WORD *)(a1 + 2698) )
              {
                v40 = 12;
                if ( !*(_WORD *)(a1 + 2734) )
                {
                  v40 = 11;
                  if ( !*(_WORD *)(a1 + 2702) )
                  {
                    v40 = 10;
                    if ( !*(_WORD *)(a1 + 2730) )
                    {
                      v40 = 9;
                      if ( !*(_WORD *)(a1 + 2706) )
                      {
                        v40 = 8;
                        if ( !*(_WORD *)(a1 + 2726) )
                        {
                          v40 = 7;
                          if ( !*(_WORD *)(a1 + 2710) )
                          {
                            v40 = 6;
                            if ( !*(_WORD *)(a1 + 2722) )
                            {
                              v40 = 5;
                              if ( !*(_WORD *)(a1 + 2714) )
                              {
                                v40 = 4;
                                if ( !*(_WORD *)(a1 + 2718) )
                                {
                                  v40 = 2;
                                  if ( *(_WORD *)(a1 + 2686) )
                                    v40 = 3;
                                  v39 = a1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v16 = v40;
    v41 = 3 * v40 + *(_DWORD *)(v39 + 5800);
    *(_DWORD *)(v39 + 5800) = v41 + 17;
    v17 = (unsigned int)(v41 + 27) >> 3;
    v42 = v39;
    v15 = (unsigned int)(*(_DWORD *)(v39 + 5804) + 10) >> 3;
    a3 = v112;
    if ( v15 <= v17 )
    {
      v6 = v42;
    }
    else
    {
      v6 = v42;
      if ( *(_DWORD *)(v42 + 136) != 4 )
        goto LABEL_92;
    }
    v17 = v15;
LABEL_92:
    v14 = a4;
    v4 = a2;
    goto LABEL_93;
  }
  v14 = a4;
  v15 = a3 + 5;
  v16 = 0;
  v17 = a3 + 5;
LABEL_93:
  if ( v4 && a3 + 4 <= v17 )
  {
    sub_8B1CC(v6, v4, a3, v14);
  }
  else
  {
    v113 = v16;
    v43 = *(_DWORD *)(v6 + 5820);
    v121 = (int *)(v6 + 5820);
    if ( v15 == v17 )
    {
      v44 = (unsigned __int16)(a4 + 2);
      v45 = (v44 << v43) | *(unsigned __int16 *)(v6 + 5816);
      *(_WORD *)(v6 + 5816) = v45;
      if ( v43 < 14 )
      {
        v51 = v43 + 3;
        v49 = (int *)(v6 + 5820);
      }
      else
      {
        v46 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v46 + 1;
        *(_BYTE *)(*(_DWORD *)(v6 + 8) + v46) = v45;
        v47 = *(_BYTE *)(v6 + 5817);
        v48 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v48 + 1;
        *(_BYTE *)(*(_DWORD *)(v6 + 8) + v48) = v47;
        v49 = (int *)(v6 + 5820);
        v50 = *v121;
        *(_WORD *)(v6 + 5816) = v44 >> (16 - *(_BYTE *)v121);
        v51 = v50 - 13;
      }
      *v49 = v51;
      v61 = (char *)&off_C8B10 + 2;
      v62 = &word_C8F92;
      v63 = v6;
    }
    else
    {
      v52 = ((unsigned __int16)(a4 + 4) << v43) | *(unsigned __int16 *)(v6 + 5816);
      *(_WORD *)(v6 + 5816) = v52;
      v53 = (_WORD *)(v6 + 5816);
      if ( v43 < 14 )
      {
        v60 = v43 + 3;
        v59 = v52;
        v57 = (int *)(v6 + 5820);
      }
      else
      {
        v54 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v54 + 1;
        *(_BYTE *)(*(_DWORD *)(v6 + 8) + v54) = v52;
        v55 = *(_BYTE *)(v6 + 5817);
        v56 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v56 + 1;
        *(_BYTE *)(*(_DWORD *)(v6 + 8) + v56) = v55;
        v57 = (int *)(v6 + 5820);
        v58 = *v121;
        v59 = (unsigned __int16)(a4 + 4) >> (16 - *(_BYTE *)v121);
        *v53 = v59;
        v60 = v58 - 13;
      }
      *v57 = v60;
      v107 = *(_DWORD *)(v6 + 2856);
      v106 = *(_DWORD *)(v6 + 2844);
      v64 = ((unsigned __int16)(v106 - 256) << v60) | v59;
      *v53 = v64;
      if ( v60 < 12 )
      {
        v71 = v60 + 5;
        v70 = v64;
        v68 = (int *)(v6 + 5820);
      }
      else
      {
        v65 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v65 + 1;
        *(_BYTE *)(*(_DWORD *)(v6 + 8) + v65) = v64;
        v66 = *(_BYTE *)(v6 + 5817);
        v67 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v67 + 1;
        *(_BYTE *)(*(_DWORD *)(v6 + 8) + v67) = v66;
        v68 = (int *)(v6 + 5820);
        v69 = *v121;
        v70 = (unsigned __int16)(v106 - 256) >> (16 - *(_BYTE *)v121);
        *v53 = v70;
        v71 = v69 - 11;
      }
      *v68 = v71;
      v72 = ((unsigned __int16)v107 << v71) | v70;
      *v53 = ((_WORD)v107 << v71) | v70;
      if ( v71 < 12 )
      {
        v78 = v71 + 5;
        v77 = v72;
      }
      else
      {
        v73 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v73 + 1;
        *(_BYTE *)(*(_DWORD *)(v6 + 8) + v73) = v72;
        v74 = *(_BYTE *)(v6 + 5817);
        v75 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v75 + 1;
        *(_BYTE *)(*(_DWORD *)(v6 + 8) + v75) = v74;
        v76 = *v68;
        v77 = (unsigned __int16)v107 >> (16 - *(_BYTE *)v68);
        *v53 = v77;
        v78 = v76 - 11;
      }
      v79 = v68;
      *v68 = v78;
      v80 = (unsigned __int16)(v113 - 3);
      v81 = (v80 << v78) | v77;
      *v53 = v81;
      v118 = (_WORD *)(v6 + 5816);
      if ( v78 < 13 )
      {
        v87 = v6;
        v109 = (_DWORD *)(v6 + 20);
        v116 = (int *)(v6 + 8);
        v88 = v78 + 4;
        v86 = (v80 << v78) | v77;
      }
      else
      {
        v82 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v82 + 1;
        *(_BYTE *)(*(_DWORD *)(v6 + 8) + v82) = v81;
        v83 = *(_BYTE *)(v6 + 5817);
        v84 = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(v6 + 20) = v84 + 1;
        *(_BYTE *)(*(_DWORD *)(v6 + 8) + v84) = v83;
        v85 = *v68;
        v86 = v80 >> (16 - *v79);
        *v53 = v86;
        v87 = v6;
        v109 = (_DWORD *)(v6 + 20);
        v116 = (int *)(v6 + 8);
        v88 = v85 - 12;
      }
      *v79 = v88;
      v89 = v113 + 1;
      v90 = dword_C9144;
      do
      {
        v91 = *(unsigned __int16 *)(v87 + 4 * *(unsigned __int8 *)v90 + 2686);
        v86 |= v91 << v88;
        *v118 = v86;
        if ( v88 < 14 )
        {
          v88 += 3;
          v95 = (int *)(v6 + 5820);
        }
        else
        {
          v114 = *v116;
          v111 = v86;
          v92 = (*v109)++;
          *(_BYTE *)(v114 + v92) = v111;
          v115 = *v116;
          v93 = *(_BYTE *)(v6 + 5817);
          v94 = (*v109)++;
          v87 = a1;
          *(_BYTE *)(v115 + v94) = v93;
          v95 = (int *)(v6 + 5820);
          v96 = *v121;
          v97 = v91 >> (16 - *v121);
          *v118 = v97;
          v88 = v96 - 13;
          v86 = v97;
        }
        *v95 = v88;
        v90 = (int *)((char *)v90 + 1);
        --v89;
      }
      while ( v89 );
      v98 = (char *)(v87 + 148);
      sub_8C460(v87, v87 + 148, v106);
      v6 = v87;
      v99 = v87 + 2440;
      sub_8C460(v6, v99, v107);
      v63 = v6;
      v61 = v98;
      v62 = (__int16 *)v99;
    }
    sub_8C0E8(v63, (int)v61, (int)v62);
    v14 = a4;
  }
  result = (_DWORD *)sub_8B01C(v6);
  if ( v14 )
  {
    v101 = *(_DWORD *)(v6 + 5820);
    result = (_DWORD *)(v6 + 5820);
    if ( v101 < 9 )
    {
      v104 = (_WORD *)(v6 + 5816);
      if ( v101 < 1 )
      {
LABEL_126:
        *v104 = 0;
        *result = 0;
        return result;
      }
      v105 = *(_BYTE *)v104;
      v103 = *(_DWORD *)(v6 + 20);
      *(_DWORD *)(v6 + 20) = v103 + 1;
    }
    else
    {
      v102 = *(_DWORD *)(v6 + 20);
      *(_DWORD *)(v6 + 20) = v102 + 1;
      *(_BYTE *)(*(_DWORD *)(v6 + 8) + v102) = *(_BYTE *)(v6 + 5816);
      v103 = *(_DWORD *)(v6 + 20);
      *(_DWORD *)(v6 + 20) = v103 + 1;
      v104 = (_WORD *)(v6 + 5816);
      v105 = *(_BYTE *)(v6 + 5817);
    }
    *(_BYTE *)(*(_DWORD *)(v6 + 8) + v103) = v105;
    goto LABEL_126;
  }
  return result;
}
// C8B10: using guessed type _UNKNOWN *off_C8B10;
// C8F92: using guessed type __int16 word_C8F92;
// C9144: using guessed type int dword_C9144[5];
