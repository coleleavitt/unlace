/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425A20
// Address: 0x0000000000425A20

//----- (0000000000425A20) ----------------------------------------------------
__int64 __fastcall sub_425A20(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // w21
  unsigned int v5; // w0
  unsigned int v6; // w1
  __int64 v7; // x0
  unsigned __int64 v9; // x23
  __int64 v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x24
  size_t v14; // x0
  unsigned __int64 v15; // x25
  unsigned __int64 v16; // x4
  __int64 v17; // x1
  __int64 v18; // x0
  unsigned __int64 v19; // x23
  void **v20; // x25
  unsigned __int64 v21; // x0
  unsigned int v22; // w0
  char *v23; // x24
  unsigned __int64 v24; // x27
  __int64 v25; // x1
  char *v26; // x24
  __int64 v27; // x3
  char *v28; // x26
  int v29; // w25
  unsigned __int64 v30; // x28
  char *v31; // x0
  __int64 v32; // x4
  __int64 v33; // x28
  __int64 v34; // x4
  char *v35; // x0
  __int64 v36; // x1
  char *v37; // x6
  char *v38; // x5
  __int64 v39; // x3
  _QWORD *v40; // x25
  unsigned __int64 v41; // x0
  unsigned __int64 v42; // x1
  unsigned __int64 v43; // x27
  __int64 v44; // x1
  __int64 v45; // x5
  _QWORD *v46; // x2
  unsigned __int64 v47; // x26
  __int64 v48; // x27
  char v49; // w0
  int v50; // w1
  __int64 v51; // x0
  __int64 v52; // x27
  char v53; // w0
  __int64 v54; // x0
  __int64 v55; // x0
  unsigned __int64 v56; // x0
  unsigned __int64 v57; // x0
  unsigned __int64 v58; // x28
  unsigned __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x5
  _QWORD *v62; // x2
  __int64 v63; // x1
  char *v64; // x24
  __int64 v65; // x3
  __int64 v66; // x1
  __int64 v67; // x26
  __int64 v68; // x1
  __int64 v69; // x6
  __int64 v70; // x0
  _QWORD *v71; // x5
  char *v72; // x4
  __int64 v73; // x3
  unsigned __int64 v74; // x1
  __int64 v75; // x0
  _QWORD *v76; // x2
  __int64 v77; // x5
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x6
  __int64 v81; // x0
  _QWORD *v82; // x3
  char *v83; // x2
  __int64 v84; // x5
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x6
  _QWORD *v89; // x3
  char *v90; // x2
  __int64 v91; // x5
  unsigned __int64 v92; // x1
  __int64 v93; // x0
  __int64 v94; // x5
  _QWORD *v95; // x2
  char *v96; // x26
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x0
  __int64 v100; // x6
  _QWORD *v101; // x3
  char *v102; // x2
  __int64 v103; // x5
  char *v104; // x27
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x0
  __int64 v108; // x6
  _QWORD *v109; // x3
  char *v110; // x2
  __int64 v111; // x5
  __int64 v112; // [xsp+60h] [xbp-140h]
  char *v113; // [xsp+60h] [xbp-140h]
  __int64 v114; // [xsp+60h] [xbp-140h]
  __int64 v115; // [xsp+68h] [xbp-138h]
  __int64 v116; // [xsp+68h] [xbp-138h]
  char *v117; // [xsp+68h] [xbp-138h]
  __int64 v118; // [xsp+68h] [xbp-138h]
  __int64 v119; // [xsp+70h] [xbp-130h]
  __int64 v120; // [xsp+70h] [xbp-130h]
  __int64 v121; // [xsp+78h] [xbp-128h]
  unsigned __int64 v122; // [xsp+88h] [xbp-118h]
  char *v123; // [xsp+B0h] [xbp-F0h] BYREF
  __int64 v124; // [xsp+B8h] [xbp-E8h] BYREF
  __int64 v125; // [xsp+C0h] [xbp-E0h] BYREF
  __int64 v126; // [xsp+C8h] [xbp-D8h] BYREF
  __int64 v127; // [xsp+D0h] [xbp-D0h] BYREF
  __int64 v128; // [xsp+D8h] [xbp-C8h] BYREF
  __int64 v129; // [xsp+E0h] [xbp-C0h] BYREF
  __int64 v130; // [xsp+E8h] [xbp-B8h] BYREF
  __int64 v131; // [xsp+F0h] [xbp-B0h] BYREF
  __int64 v132; // [xsp+F8h] [xbp-A8h] BYREF
  __int64 v133; // [xsp+100h] [xbp-A0h] BYREF
  void *ptr; // [xsp+108h] [xbp-98h] BYREF
  unsigned __int64 v135; // [xsp+110h] [xbp-90h]
  unsigned __int64 v136; // [xsp+118h] [xbp-88h]
  char *v137; // [xsp+120h] [xbp-80h] BYREF
  char *v138; // [xsp+128h] [xbp-78h]
  int v139; // [xsp+130h] [xbp-70h]
  bool v140; // [xsp+134h] [xbp-6Ch]
  __int64 v141; // [xsp+138h] [xbp-68h] BYREF
  __int64 v142; // [xsp+140h] [xbp-60h]
  __int64 v143; // [xsp+148h] [xbp-58h]
  __int64 v144; // [xsp+150h] [xbp-50h] BYREF
  __int64 v145; // [xsp+158h] [xbp-48h]
  __int64 v146; // [xsp+160h] [xbp-40h]
  __int64 v147; // [xsp+168h] [xbp-38h] BYREF
  __int64 v148; // [xsp+170h] [xbp-30h]
  __int64 v149; // [xsp+178h] [xbp-28h]
  __int64 v150; // [xsp+180h] [xbp-20h]
  __int64 v151; // [xsp+188h] [xbp-18h]
  __int64 v152; // [xsp+190h] [xbp-10h]

  v4 = *(unsigned __int8 *)(a1 + 80);
  v6 = *(_DWORD *)(a1 + 72);
  v5 = *(_DWORD *)(a1 + 76);
  if ( !*(_BYTE *)(a1 + 80) )
  {
    if ( v5 > v6 )
      goto LABEL_20;
    v17 = *(_QWORD *)(a1 + 24);
    v18 = *(_QWORD *)(a1 + 64);
    v19 = v17 - v18;
    if ( v17 != v18 )
    {
      v20 = (void **)(a1 + 40);
      v21 = *(_QWORD *)(a1 + 48);
      if ( v19 != v21 )
      {
        v147 = 0;
        v148 = 0;
        v149 = 0;
        if ( v19 >= v21 )
        {
          if ( v19 > v21 )
          {
            v23 = *(char **)(a1 + 40);
            v24 = *(_QWORD *)(a1 + 56);
            if ( v23 <= (char *)&v147 && &v147 < (__int64 *)&v23[24 * v24] )
            {
              v150 = v147;
              v151 = v148;
              v152 = v149;
              if ( v19 <= v24 )
                goto LABEL_109;
              v23 = (char *)sub_491288(a1 + 40, nullptr, v19, 0x18u);
              v66 = *(_QWORD *)(a1 + 48);
              v67 = *(_QWORD *)(a1 + 56);
              *(_QWORD *)(a1 + 56) = v24;
              v68 = v66 - 1;
              v69 = *(_QWORD *)(a1 + 40);
              if ( v68 >= 0 )
              {
                v70 = 0;
                do
                {
                  v71 = (_QWORD *)(v69 + v70);
                  v72 = &v23[v70];
                  --v68;
                  v70 += 24;
                  v73 = v71[1];
                  *(_QWORD *)v72 = *v71;
                  *((_QWORD *)v72 + 1) = v73;
                  *((_QWORD *)v72 + 2) = v71[2];
                }
                while ( v68 != -1 );
              }
              j__free(*(void **)(a1 + 40));
              *(_QWORD *)(a1 + 40) = v23;
              *(_QWORD *)(a1 + 56) = v67;
              v21 = *(_QWORD *)(a1 + 48);
              if ( v19 > v21 )
              {
LABEL_109:
                v63 = 24 * v21;
                while ( 1 )
                {
                  v64 = &v23[v63];
                  ++v21;
                  v65 = v151;
                  *(_QWORD *)v64 = v150;
                  *((_QWORD *)v64 + 1) = v65;
                  v63 += 24;
                  *((_QWORD *)v64 + 2) = v152;
                  if ( v19 <= v21 )
                    break;
                  v23 = (char *)*v20;
                }
              }
            }
            else
            {
              if ( v19 <= v24 )
                goto LABEL_29;
              v23 = (char *)sub_491288(a1 + 40, nullptr, v19, 0x18u);
              v32 = *(_QWORD *)(a1 + 48);
              v33 = *(_QWORD *)(a1 + 56);
              *(_QWORD *)(a1 + 56) = v24;
              v34 = v32 - 1;
              v35 = *(char **)(a1 + 40);
              if ( v34 >= 0 )
              {
                v36 = 0;
                do
                {
                  v37 = &v35[v36];
                  v38 = &v23[v36];
                  --v34;
                  v36 += 24;
                  v39 = *((_QWORD *)v37 + 1);
                  *(_QWORD *)v38 = *(_QWORD *)v37;
                  *((_QWORD *)v38 + 1) = v39;
                  *((_QWORD *)v38 + 2) = *((_QWORD *)v37 + 2);
                }
                while ( v34 != -1 );
                v35 = *(char **)(a1 + 40);
              }
              j__free(v35);
              *(_QWORD *)(a1 + 40) = v23;
              *(_QWORD *)(a1 + 56) = v33;
              v21 = *(_QWORD *)(a1 + 48);
              if ( v19 > v21 )
              {
LABEL_29:
                v25 = 24 * v21;
                while ( 1 )
                {
                  v26 = &v23[v25];
                  ++v21;
                  v27 = v148;
                  *(_QWORD *)v26 = v147;
                  *((_QWORD *)v26 + 1) = v27;
                  v25 += 24;
                  *((_QWORD *)v26 + 2) = v149;
                  if ( v19 <= v21 )
                    break;
                  v23 = (char *)*v20;
                }
              }
            }
            *(_QWORD *)(a1 + 48) = v19;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 48) = v19;
        }
      }
      *(_DWORD *)(a1 + 72) = 0;
      v22 = sub_425548(a1, v19);
      *(_DWORD *)(a1 + 76) = v22;
      if ( v22 )
      {
        v6 = *(_DWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 64) += v22;
        if ( v22 > v6 )
        {
LABEL_20:
          v4 = 1;
          *a2 = *(_QWORD *)(a1 + 40) + 24LL * v6;
          ++*(_DWORD *)(a1 + 72);
        }
      }
    }
    return v4;
  }
  if ( v5 > v6 )
    goto LABEL_3;
  if ( v5 )
    return 0;
  ptr = nullptr;
  v135 = 0;
  v9 = *(_QWORD *)(a1 + 24);
  v136 = 0;
  if ( v9 )
  {
    ptr = sub_491288((__int64)&ptr, nullptr, v9, 1u);
    memset((char *)ptr + v135, 0, v9 - v135);
    v135 = v9;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = sub_48C428(*(_QWORD *)(v10 + 472), 0, 1);
  v12 = *(_QWORD *)(v10 + 480);
  v13 = v11 - v12;
  if ( sub_48C428(*(_QWORD *)(v10 + 472), v12 + *(_QWORD *)(a1 + 16), 0) == -1 )
    goto LABEL_12;
  v14 = sub_48C160(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 472LL), ptr, *(_QWORD *)(a1 + 24));
  v15 = v14;
  if ( *(_QWORD *)(a1 + 24) > v14 )
  {
    sub_40A690((int)"READ ERROR: read only %zd bytes instead of %lld bytes\n", v14);
    if ( (__int64)v15 > 8 )
    {
      v16 = v135;
      if ( v15 > v135 )
      {
        v31 = (char *)ptr;
        if ( v15 > v136 )
        {
          v31 = (char *)sub_491288((__int64)&ptr, ptr, v15, 1u);
          v16 = v135;
          ptr = v31;
        }
        memset(&v31[v16], 0, v15 - v16);
        v16 = v15;
        v135 = v15;
      }
      else if ( v15 < v135 )
      {
        v16 = v15;
        v135 = v15;
      }
      goto LABEL_11;
    }
LABEL_12:
    sub_48C428(*(_QWORD *)(v10 + 472), v13 + *(_QWORD *)(v10 + 480), 0);
    if ( !ptr )
      return 0;
    v135 = 0;
    j__free(ptr);
    return 0;
  }
  v16 = v135;
LABEL_11:
  if ( v16 <= 3 )
    goto LABEL_12;
  v123 = (char *)ptr;
  v28 = (char *)ptr + v16;
  v29 = *(_DWORD *)ptr;
  v123 = (char *)ptr + 4;
  if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, __int64, char **, char *))loc_48E7D8)(
                           &v124,
                           64,
                           1,
                           &v123,
                           (char *)ptr + v16) )
    goto LABEL_12;
  v30 = v124;
  if ( v124 <= 0 || *(_QWORD *)(a1 + 24) <= (unsigned __int64)v124 )
    goto LABEL_12;
  if ( v29 != 844320833 )
  {
    sub_41A868("The relocation packing method '%4.4s' is not supported yet.");
    goto LABEL_12;
  }
  v40 = (_QWORD *)(a1 + 40);
  v137 = v123;
  v138 = v28;
  v139 = 0;
  v140 = (unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64))loc_48E7D8)(&v125, 64) != 0;
  v41 = *(_QWORD *)(a1 + 48);
  v112 = v125;
  if ( v30 != v41 )
  {
    v144 = 0;
    v145 = 0;
    v146 = 0;
    if ( v30 >= v41 )
    {
      if ( v30 > v41 )
      {
        v42 = *(_QWORD *)(a1 + 40);
        v43 = *(_QWORD *)(a1 + 56);
        if ( v42 <= (unsigned __int64)&v144 && (unsigned __int64)&v144 < v42 + 24 * v43 )
        {
          v149 = v146;
          v147 = v144;
          v148 = v145;
          if ( v30 > v43 )
          {
            v96 = (char *)sub_491288(a1 + 40, nullptr, v30, 0x18u);
            v98 = *(_QWORD *)(a1 + 48);
            v97 = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(a1 + 56) = v43;
            v118 = v97;
            v99 = 0;
            v100 = *(_QWORD *)(a1 + 40);
            while ( --v98 >= 0 )
            {
              v101 = (_QWORD *)(v100 + v99);
              v102 = &v96[v99];
              v99 += 24;
              v103 = v101[1];
              *(_QWORD *)v102 = *v101;
              *((_QWORD *)v102 + 1) = v103;
              *((_QWORD *)v102 + 2) = v101[2];
            }
            j__free(*(void **)(a1 + 40));
            *(_QWORD *)(a1 + 40) = v96;
            *(_QWORD *)(a1 + 56) = v118;
          }
          v74 = *(_QWORD *)(a1 + 48);
          v75 = 24 * v74;
          while ( v30 > v74 )
          {
            ++v74;
            v76 = (_QWORD *)(*v40 + v75);
            v75 += 24;
            v77 = v148;
            *v76 = v147;
            v76[1] = v77;
            v76[2] = v149;
          }
        }
        else
        {
          if ( v30 <= v43 )
            goto LABEL_58;
          v117 = (char *)sub_491288(a1 + 40, nullptr, v30, 0x18u);
          v85 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 56) = v43;
          v120 = v85;
          v86 = 0;
          v87 = *(_QWORD *)(a1 + 48);
          v88 = *(_QWORD *)(a1 + 40);
          while ( --v87 >= 0 )
          {
            v89 = (_QWORD *)(v88 + v86);
            v90 = &v117[v86];
            v86 += 24;
            v91 = v89[1];
            *(_QWORD *)v90 = *v89;
            *((_QWORD *)v90 + 1) = v91;
            *((_QWORD *)v90 + 2) = v89[2];
          }
          j__free(*(void **)(a1 + 40));
          *(_QWORD *)(a1 + 40) = v117;
          *(_QWORD *)(a1 + 56) = v120;
          v41 = *(_QWORD *)(a1 + 48);
          if ( v30 > v41 )
          {
LABEL_58:
            v44 = 24 * v41;
            do
            {
              ++v41;
              v45 = v145;
              v46 = (_QWORD *)(*v40 + v44);
              v44 += 24;
              *v46 = v144;
              v46[1] = v45;
              v46[2] = v146;
            }
            while ( v30 > v41 );
          }
        }
        *(_QWORD *)(a1 + 48) = v30;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 48) = v30;
    }
  }
  v47 = 0;
  v119 = 0;
  v121 = 0;
  do
  {
LABEL_62:
    if ( !v140 )
      goto LABEL_105;
    if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, __int64, char **, char *))loc_48E7D8)(
                             &v126,
                             64,
                             1,
                             &v137,
                             v138) )
      v140 = 0;
    v48 = v126;
    if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, __int64, char **, char *))loc_48E7D8)(
                             &v127,
                             64,
                             1,
                             &v137,
                             v138) )
      v140 = 0;
    v115 = 0;
    v139 = v127;
    v49 = v127;
    if ( (v127 & 2) != 0 )
    {
      if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, __int64, char **, char *))loc_48E7D8)(
                               &v128,
                               64,
                               1,
                               &v137,
                               v138) )
        v140 = 0;
      v115 = v128;
      v49 = v139;
    }
    if ( (v49 & 1) != 0 )
    {
      if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, __int64, char **, char *))loc_48E7D8)(
                               &v129,
                               64,
                               1,
                               &v137,
                               v138) )
        v140 = 0;
      v121 = v129;
      v49 = v139;
    }
    v50 = v49 & 8;
    if ( (v49 & 0xC) == 0xC )
    {
      if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, __int64, char **, char *))loc_48E7D8)(
                               &v130,
                               64,
                               1,
                               &v137,
                               v138) )
        v140 = 0;
      v119 += v130;
    }
    else
    {
      v51 = v119;
      if ( !v50 )
        v51 = 0;
      v119 = v51;
    }
  }
  while ( v48 <= 0 );
  v122 = v48 + v47;
  v52 = 24 * v47;
  while ( 1 )
  {
    v53 = v139;
    if ( (v139 & 2) == 0 )
    {
      if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, __int64, char **, char *))loc_48E7D8)(
                               &v131,
                               64,
                               1,
                               &v137,
                               v138) )
        v140 = 0;
      v115 = v131;
      v53 = v139;
    }
    v112 += v115;
    if ( (v53 & 1) == 0 )
    {
      if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, __int64, char **, char *))loc_48E7D8)(
                               &v132,
                               64,
                               1,
                               &v137,
                               v138) )
        v140 = 0;
      v121 = v132;
      v53 = v139;
    }
    if ( (v53 & 8) != 0 && (v53 & 4) == 0 )
      break;
LABEL_79:
    if ( !v140 )
      goto LABEL_94;
    if ( v30 == v47 )
      goto LABEL_105;
    ++v47;
    v54 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(v54 + v52) = v112;
    v55 = v54 + v52;
    v52 += 24;
    *(_QWORD *)(v55 + 8) = v121;
    *(_QWORD *)(v55 + 16) = v119;
    if ( v47 == v122 )
      goto LABEL_62;
  }
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64 *, __int64, __int64, char **, char *))loc_48E7D8)(
                          &v133,
                          64,
                          1,
                          &v137,
                          v138) )
  {
    v119 += v133;
    goto LABEL_79;
  }
  v140 = 0;
LABEL_94:
  v56 = *(_QWORD *)(a1 + 48);
  if ( v47 != v56 )
  {
    v141 = 0;
    v142 = 0;
    v143 = 0;
    if ( v47 < v56 )
    {
      *(_QWORD *)(a1 + 48) = v47;
      goto LABEL_105;
    }
    if ( v47 > v56 )
    {
      v57 = *(_QWORD *)(a1 + 40);
      v58 = *(_QWORD *)(a1 + 56);
      if ( v57 <= (unsigned __int64)&v141 && (unsigned __int64)&v141 < v57 + 24 * v58 )
      {
        v150 = v141;
        v151 = v142;
        v152 = v143;
        if ( v47 > v58 )
        {
          v104 = (char *)sub_491288(a1 + 40, nullptr, v47, 0x18u);
          v106 = *(_QWORD *)(a1 + 48);
          v105 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 56) = v58;
          v114 = v105;
          v107 = 0;
          v108 = *(_QWORD *)(a1 + 40);
          while ( --v106 >= 0 )
          {
            v109 = (_QWORD *)(v108 + v107);
            v110 = &v104[v107];
            v107 += 24;
            v111 = v109[1];
            *(_QWORD *)v110 = *v109;
            *((_QWORD *)v110 + 1) = v111;
            *((_QWORD *)v110 + 2) = v109[2];
          }
          j__free(*(void **)(a1 + 40));
          *(_QWORD *)(a1 + 40) = v104;
          *(_QWORD *)(a1 + 56) = v114;
        }
        v92 = *(_QWORD *)(a1 + 48);
        v93 = 24 * v92;
        while ( v47 > v92 )
        {
          ++v92;
          v94 = v151;
          v95 = (_QWORD *)(*v40 + v93);
          v93 += 24;
          *v95 = v150;
          v95[1] = v94;
          v95[2] = v152;
        }
      }
      else
      {
        if ( v47 <= v58 )
        {
          v59 = *(_QWORD *)(a1 + 48);
          goto LABEL_102;
        }
        v113 = (char *)sub_491288(a1 + 40, nullptr, v47, 0x18u);
        v78 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 56) = v58;
        v79 = *(_QWORD *)(a1 + 48);
        v80 = *(_QWORD *)(a1 + 40);
        v116 = v78;
        v81 = 0;
        while ( --v79 >= 0 )
        {
          v82 = (_QWORD *)(v80 + v81);
          v83 = &v113[v81];
          v81 += 24;
          v84 = v82[1];
          *(_QWORD *)v83 = *v82;
          *((_QWORD *)v83 + 1) = v84;
          *((_QWORD *)v83 + 2) = v82[2];
        }
        j__free(*(void **)(a1 + 40));
        *(_QWORD *)(a1 + 40) = v113;
        *(_QWORD *)(a1 + 56) = v116;
        v59 = *(_QWORD *)(a1 + 48);
        if ( v47 > v59 )
        {
LABEL_102:
          v60 = 24 * v59;
          do
          {
            ++v59;
            v61 = v142;
            v62 = (_QWORD *)(*v40 + v60);
            v60 += 24;
            *v62 = v141;
            v62[1] = v61;
            v62[2] = v143;
          }
          while ( v47 != v59 );
        }
      }
      *(_QWORD *)(a1 + 48) = v47;
    }
  }
LABEL_105:
  *(_DWORD *)(a1 + 76) = v124;
  sub_48C428(*(_QWORD *)(v10 + 472), v13 + *(_QWORD *)(v10 + 480), 0);
  if ( ptr )
  {
    v135 = 0;
    j__free(ptr);
  }
  v6 = *(_DWORD *)(a1 + 72);
LABEL_3:
  v7 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 72) = v6 + 1;
  *a2 = v7 + 24LL * v6;
  return v4;
}
