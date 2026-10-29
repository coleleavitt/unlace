/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B460
// Address: 0x000000000044B460

//----- (000000000044B460) ----------------------------------------------------
__int64 __fastcall sub_44B460(__int64 *a1, unsigned __int8 a2)
{
  int v3; // w1
  unsigned int v4; // w19
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // w0
  __int64 v9; // x1
  __int64 *v10; // x23
  bool v11; // w19
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // w0
  __int64 v15; // x1
  __int64 *v16; // x23
  bool v17; // cc
  __int64 *v18; // x0
  unsigned __int8 v19; // w19
  __int64 v20; // x0
  __int64 v21; // x1
  int v22; // w0
  __int64 v23; // x1
  bool v24; // zf
  __int64 v25; // x0
  __int64 v26; // x1
  int v27; // w0
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x1
  int v31; // w0
  __int64 v32; // x1
  __int64 v33; // x0
  __int64 v34; // x1
  int v35; // w0
  __int64 v36; // x1
  __int64 *v37; // x23
  unsigned int v38; // w19
  unsigned __int8 *v39; // x2
  int v40; // w0
  __int64 v41; // x0
  __int64 v42; // x1
  int v43; // w0
  __int64 v44; // x1
  __int64 *v45; // x23
  int v46; // w0
  __int64 v47; // x0
  __int64 v48; // x1
  int v49; // w0
  __int64 v50; // x1
  __int64 *v51; // x23
  int v52; // w0
  __int64 v53; // x22
  __int64 v54; // x19
  __int64 *v55; // x20
  __int64 *v56; // x0
  int v57; // w0
  __int64 v58; // x0
  __int64 v59; // x1
  int v60; // w0
  __int64 v61; // x1
  __int64 *v62; // x23
  int v63; // w0
  __int64 v64; // x0
  __int64 v65; // x1
  int v66; // w0
  __int64 v67; // x1
  __int64 *v68; // x23
  int v69; // w0
  unsigned int v70; // w0
  unsigned __int8 *v71; // x2
  int v72; // w0
  __int64 v73; // x0
  __int64 v74; // x1
  int v75; // w0
  __int64 v76; // x1
  __int64 *v77; // x23
  int v78; // w0
  __int64 v79; // x0
  __int64 v80; // x1
  int v81; // w0
  __int64 v82; // x1
  __int64 *v83; // x23
  int v84; // w0
  __int64 v85; // x0
  __int64 v86; // x1
  int v87; // w0
  __int64 v88; // x1
  __int64 *v89; // x23
  int v90; // w0
  __int64 v91; // x0
  __int64 v92; // x1
  int v93; // w0
  __int64 v94; // x1
  __int64 *v95; // x23
  int v96; // w0
  __int64 v97; // x0
  __int64 v98; // x1
  int v99; // w0
  __int64 v100; // x1
  __int64 *v101; // x2
  __int64 *v102; // x0
  __int64 *v103; // x22
  int v104; // w0
  __int64 v105; // x0
  __int64 v106; // x1
  int v107; // w0
  __int64 v108; // x1
  __int64 *v109; // x23
  int v110; // w0
  __int64 v111; // x0
  __int64 v112; // x1
  int v113; // w0
  __int64 v114; // x1
  int v115; // w0
  __int64 v116; // x0
  __int64 v117; // x1
  int v118; // w0
  __int64 v119; // x1
  __int64 *v120; // x23
  int v121; // w0
  _BOOL8 v122; // x0
  __int64 *v123; // x1
  __int64 v124; // x1
  __int64 v125; // x1
  __int64 v126; // x0
  __int64 *v127; // x1
  __int64 v128; // x1
  __int64 v129; // x1
  __int64 v130; // x0
  __int64 *v131; // x1
  __int64 v132; // x1
  __int64 v133; // x1
  __int64 v134; // x0
  __int64 *v135; // x1
  __int64 v136; // x1
  __int64 v137; // x1
  __int64 v138; // x0
  __int64 *v139; // x1
  __int64 v140; // x1
  __int64 v141; // x1
  __int64 v142; // x0
  __int64 *v143; // x1
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x0
  __int64 *v147; // x1
  __int64 v148; // x1
  __int64 v149; // x1
  __int64 v150; // x0
  __int64 *v151; // x1
  __int64 v152; // x1
  __int64 v153; // x1
  __int64 v154; // x0
  __int64 *v155; // x1
  __int64 v156; // x1
  __int64 v157; // x1
  __int64 v158; // x0
  __int64 *v159; // x1
  __int64 v160; // x1
  __int64 v161; // x1
  __int64 v162; // x0
  __int64 *v163; // x1
  __int64 v164; // x1
  __int64 v165; // x1
  __int64 v166; // x0
  __int64 *v167; // x1
  __int64 v168; // x1
  __int64 v169; // x1
  __int64 v170; // x0
  __int64 *v171; // x1
  __int64 v172; // x1
  __int64 v173; // x1
  __int64 v174; // x0
  __int64 *v175; // x1
  __int64 v176; // x1
  __int64 v177; // x1
  __int64 v178; // x0
  __int64 *v179; // x1
  __int64 v180; // x1
  __int64 v181; // x1
  __int64 v182; // x0
  __int64 *v183; // x1
  __int64 v184; // x1
  __int64 v185; // x1
  __int64 v186; // x0
  __int64 *v187; // x1
  __int64 v188; // x1
  __int64 v189; // x1
  __int64 v190; // x0
  __int64 *v191; // x1
  __int64 v192; // x1
  __int64 v193; // x1
  __int64 v194; // x0
  size_t v195; // x19
  __int64 v196; // x23
  __int64 v197; // x23
  size_t v198; // x26
  _BYTE *v199; // x0
  const char **v200; // x22
  const char **v201; // x19
  int v202; // w0
  int v203; // w0
  __int64 v204; // [xsp+58h] [xbp-48h] BYREF
  void *src; // [xsp+60h] [xbp-40h] BYREF
  __int64 v206; // [xsp+68h] [xbp-38h]
  __int64 v207; // [xsp+70h] [xbp-30h]
  __int64 v208; // [xsp+78h] [xbp-28h] BYREF
  __int64 v209; // [xsp+80h] [xbp-20h]
  __int64 v210; // [xsp+88h] [xbp-18h]
  __int64 v211; // [xsp+90h] [xbp-10h]

  v3 = a2 - 176;
  while ( 2 )
  {
    switch ( v3 )
    {
      case 0:
        v98 = *a1;
        v97 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v99 = sub_449520(&v204, (__int64 *)(v98 + 32 * v97 - 32));
        v100 = 32 * a1[1] - 32;
        v101 = (__int64 *)(*a1 + v100);
        if ( !v99 )
        {
          v155 = (__int64 *)(*a1 + v100);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v155);
          v156 = a1[1];
          if ( v156 )
          {
            v157 = v156 - 1;
            v158 = *a1;
            a1[1] = v157;
            sub_448310((__int64 *)(v158 + 32 * v157));
          }
          sub_448310(&v208);
          v101 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v102 = sub_448A08(v101, 2);
        v103 = v102;
        if ( *(_BYTE *)v102 != 7 )
        {
          v104 = sub_449C18(v102, &v204);
          if ( v104 != 6 )
          {
            if ( v104 <= 6 )
            {
              if ( v104 == 3 )
              {
                v203 = sub_487E08((__int64)(v103 + 1), (__int64)&src, v103 + 1, 0);
                if ( v203 != 1 )
                  sub_443E38(v203);
                goto LABEL_92;
              }
              if ( v104 == 5 )
              {
                if ( !(unsigned int)sub_44A290(v103, v103) )
                  sub_448EA0(v103[1], *((_QWORD *)src + 3), (__int64)src + 8);
                goto LABEL_92;
              }
              if ( v104 != 2 )
              {
LABEL_92:
                v4 = 0;
                sub_448310(&v204);
                return v4;
              }
LABEL_208:
              v103[1] += (__int64)src;
              goto LABEL_92;
            }
            if ( v104 != 8 )
            {
              if ( v104 < 8 )
              {
                if ( (unsigned int)sub_4498D8(v103) || (unsigned int)sub_4498D8(&v204) )
                  goto LABEL_92;
              }
              else if ( v104 != 9 )
              {
                goto LABEL_92;
              }
              goto LABEL_208;
            }
          }
          sub_4869C8(1531);
          goto LABEL_92;
        }
        v4 = sub_448E00(&v204);
        if ( !v4 )
        {
          if ( v206 )
          {
            v195 = v206 - 1;
            if ( v206 != 1 )
            {
              v196 = v103[2];
              if ( v196 )
              {
                v197 = v196 - 1;
                v198 = v195 + v197;
              }
              else
              {
                v198 = v206 - 1;
                v197 = 0;
              }
              v199 = (_BYTE *)v103[1];
              if ( v198 + 1 > v103[3] )
              {
                v199 = sub_491288((__int64)(v103 + 1), (void *)v103[1], v198 + 1, 1u);
                v103[1] = (__int64)v199;
              }
              v103[2] = v198 + 1;
              v199[v198] = 0;
              memcpy((void *)(v103[1] + v197), src, v195);
            }
          }
          goto LABEL_92;
        }
        goto LABEL_108;
      case 1:
        v92 = *a1;
        v91 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v93 = sub_449520(&v204, (__int64 *)(v92 + 32 * v91 - 32));
        v94 = 32 * a1[1] - 32;
        v95 = (__int64 *)(*a1 + v94);
        if ( !v93 )
        {
          v123 = (__int64 *)(*a1 + v94);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v123);
          v124 = a1[1];
          if ( v124 )
          {
            v125 = v124 - 1;
            v126 = *a1;
            a1[1] = v125;
            sub_448310((__int64 *)(v126 + 32 * v125));
          }
          sub_448310(&v208);
          v95 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v96 = sub_449C18(v95, &v204);
        if ( v96 == 6 )
          goto LABEL_203;
        if ( v96 > 6 )
        {
          if ( v96 == 8 )
            goto LABEL_203;
          if ( v96 < 8 )
          {
            v4 = sub_4498D8(v95);
            if ( v4 )
              goto LABEL_108;
            v4 = sub_4498D8(&v204);
            if ( v4 )
              goto LABEL_108;
          }
          else if ( v96 != 9 )
          {
            goto LABEL_83;
          }
LABEL_117:
          v4 = 0;
          v95[1] -= (__int64)src;
          goto LABEL_108;
        }
        if ( v96 != 3 )
        {
          if ( v96 != 5 )
          {
            if ( v96 != 2 )
            {
LABEL_83:
              v4 = 0;
              goto LABEL_108;
            }
            goto LABEL_117;
          }
          v4 = sub_44A290(v95, v95);
          if ( !v4 )
          {
            v200 = (const char **)((char *)src + 8);
            v201 = *((const char ***)src + 3);
            if ( v201 != (const char **)((char *)src + 8) )
            {
              do
              {
                sub_44A400(v95[1], v201 + 4);
                v201 = (const char **)sub_49F748(v201);
              }
              while ( v201 != v200 );
            }
            goto LABEL_83;
          }
          goto LABEL_108;
        }
        v202 = sub_487E08((__int64)(v95 + 1), (__int64)&src, v95 + 1, 1u);
        if ( v202 == 1 )
          goto LABEL_83;
        goto LABEL_222;
      case 2:
        v117 = *a1;
        v116 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v118 = sub_449520(&v204, (__int64 *)(v117 + 32 * v116 - 32));
        v119 = 32 * a1[1] - 32;
        v120 = (__int64 *)(*a1 + v119);
        if ( !v118 )
        {
          v191 = (__int64 *)(*a1 + v119);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v191);
          v192 = a1[1];
          if ( v192 )
          {
            v193 = v192 - 1;
            v194 = *a1;
            a1[1] = v193;
            sub_448310((__int64 *)(v194 + 32 * v193));
          }
          sub_448310(&v208);
          v120 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v121 = sub_449C18(v120, &v204);
        if ( v121 == 6 )
          goto LABEL_203;
        if ( v121 > 6 )
        {
          if ( v121 == 8 )
            goto LABEL_203;
          if ( v121 < 8 )
          {
            v4 = sub_4498D8(v120);
            if ( v4 )
              goto LABEL_108;
            v4 = sub_4498D8(&v204);
            if ( v4 )
              goto LABEL_108;
          }
          else if ( v121 != 9 )
          {
LABEL_107:
            v4 = 0;
            goto LABEL_108;
          }
          goto LABEL_113;
        }
        if ( v121 != 3 )
        {
          if ( v121 == 5 )
            goto LABEL_203;
          if ( v121 != 2 )
            goto LABEL_107;
LABEL_113:
          v4 = 0;
          v120[1] *= (_QWORD)src;
          goto LABEL_108;
        }
        v202 = sub_488350((__int64)(v120 + 1), (__int64)&src, v120 + 1);
        v4 = 0;
        if ( v202 != 1 )
          goto LABEL_222;
        goto LABEL_108;
      case 3:
        v86 = *a1;
        v85 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v87 = sub_449520(&v204, (__int64 *)(v86 + 32 * v85 - 32));
        v88 = 32 * a1[1] - 32;
        v89 = (__int64 *)(*a1 + v88);
        if ( !v87 )
        {
          v167 = (__int64 *)(*a1 + v88);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v167);
          v168 = a1[1];
          if ( v168 )
          {
            v169 = v168 - 1;
            v170 = *a1;
            a1[1] = v169;
            sub_448310((__int64 *)(v170 + 32 * v169));
          }
          sub_448310(&v208);
          v89 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v90 = sub_449C18(v89, &v204);
        if ( v90 == 6 )
          goto LABEL_203;
        if ( v90 > 6 )
        {
          if ( v90 == 8 )
          {
LABEL_203:
            v4 = sub_4869C8(1531);
            goto LABEL_108;
          }
          if ( v90 < 8 )
          {
            v4 = sub_4498D8(v89);
            if ( v4 )
              goto LABEL_108;
            v4 = sub_4498D8(&v204);
            if ( v4 )
              goto LABEL_108;
          }
          else if ( v90 != 9 )
          {
LABEL_75:
            v4 = 0;
            goto LABEL_108;
          }
          if ( src )
          {
            v4 = 0;
            v89[1] /= (__int64)src;
            goto LABEL_108;
          }
          goto LABEL_231;
        }
        if ( v90 != 3 )
        {
          if ( v90 == 5 )
            goto LABEL_203;
          if ( v90 != 2 )
            goto LABEL_75;
          if ( src )
          {
            v4 = 0;
            v89[1] /= (__int64)src;
            goto LABEL_108;
          }
LABEL_231:
          v4 = sub_4869C8(86);
          goto LABEL_108;
        }
        v202 = sub_488448((__int64)(v89 + 1), (__int64)&src, v89 + 1);
        v4 = 0;
        if ( v202 != 1 )
LABEL_222:
          v4 = sub_443E38(v202);
LABEL_108:
        sub_448310(&v204);
        return v4;
      case 4:
        v65 = *a1;
        v64 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v66 = sub_449520(&v204, (__int64 *)(v65 + 32 * v64 - 32));
        v67 = 32 * a1[1] - 32;
        v68 = (__int64 *)(*a1 + v67);
        if ( !v66 )
        {
          v147 = (__int64 *)(*a1 + v67);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v147);
          v148 = a1[1];
          if ( v148 )
          {
            v149 = v148 - 1;
            v150 = *a1;
            a1[1] = v149;
            sub_448310((__int64 *)(v150 + 32 * v149));
          }
          sub_448310(&v208);
          v68 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v69 = sub_449C18(v68, &v204);
        if ( v69 == 2 || v69 == 9 )
        {
          if ( src )
          {
            v4 = 0;
            v68[1] %= (__int64)src;
            sub_448310(&v204);
            return v4;
          }
          v70 = sub_4869C8(86);
        }
        else
        {
          v70 = sub_4869C8(61);
        }
        v4 = v70;
        sub_448310(&v204);
        return v4;
      case 5:
        v59 = *a1;
        v58 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v60 = sub_449520(&v204, (__int64 *)(v59 + 32 * v58 - 32));
        v61 = 32 * a1[1] - 32;
        v62 = (__int64 *)(*a1 + v61);
        if ( !v60 )
        {
          v131 = (__int64 *)(*a1 + v61);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v131);
          v132 = a1[1];
          if ( v132 )
          {
            v133 = v132 - 1;
            v134 = *a1;
            a1[1] = v133;
            sub_448310((__int64 *)(v134 + 32 * v133));
          }
          sub_448310(&v208);
          v62 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v63 = sub_449C18(v62, &v204);
        if ( v63 != 2 && v63 != 9 )
          goto LABEL_100;
        v122 = 1;
        if ( !v62[1] )
          v122 = src != nullptr;
        goto LABEL_127;
      case 6:
        v112 = *a1;
        v111 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v113 = sub_449520(&v204, (__int64 *)(v112 + 32 * v111 - 32));
        v114 = 32 * a1[1] - 32;
        v62 = (__int64 *)(*a1 + v114);
        if ( !v113 )
        {
          v163 = (__int64 *)(*a1 + v114);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v163);
          v164 = a1[1];
          if ( v164 )
          {
            v165 = v164 - 1;
            v166 = *a1;
            a1[1] = v165;
            sub_448310((__int64 *)(v166 + 32 * v165));
          }
          sub_448310(&v208);
          v62 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v115 = sub_449C18(v62, &v204);
        if ( v115 != 2 && v115 != 9 )
          goto LABEL_100;
        v122 = 0;
        if ( v62[1] )
          v122 = src != nullptr;
LABEL_127:
        v62[1] = v122;
        v4 = 0;
        sub_448310(&v204);
        return v4;
      case 7:
        v53 = *a1;
        v54 = 32 * a1[1] - 32;
        v55 = (__int64 *)(*a1 + v54);
        v56 = sub_448A08(v55, 0);
        if ( v56 && *(_BYTE *)v56 == 5 )
        {
          sub_448310((__int64 *)(v53 + v54));
          v55[1] = 1;
        }
        v57 = *(unsigned __int8 *)(v53 + v54);
        if ( v57 != 2 && v57 != 9 )
          return (unsigned int)sub_4869C8(61);
        v4 = 0;
        v55[1] = v55[1] == 0;
        return v4;
      case 8:
        v80 = *a1;
        v79 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v81 = sub_449520(&v204, (__int64 *)(v80 + 32 * v79 - 32));
        v82 = 32 * a1[1] - 32;
        v83 = (__int64 *)(*a1 + v82);
        if ( !v81 )
        {
          v139 = (__int64 *)(*a1 + v82);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v139);
          v140 = a1[1];
          if ( v140 )
          {
            v141 = v140 - 1;
            v142 = *a1;
            a1[1] = v141;
            sub_448310((__int64 *)(v142 + 32 * v141));
          }
          sub_448310(&v208);
          v83 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v84 = sub_449C18(v83, &v204);
        if ( v84 != 2 && v84 != 9 )
          goto LABEL_100;
        v4 = 0;
        v83[1] |= (unsigned __int64)src;
        sub_448310(&v204);
        return v4;
      case 9:
        v74 = *a1;
        v73 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v75 = sub_449520(&v204, (__int64 *)(v74 + 32 * v73 - 32));
        v76 = 32 * a1[1] - 32;
        v77 = (__int64 *)(*a1 + v76);
        if ( !v75 )
        {
          v143 = (__int64 *)(*a1 + v76);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v143);
          v144 = a1[1];
          if ( v144 )
          {
            v145 = v144 - 1;
            v146 = *a1;
            a1[1] = v145;
            sub_448310((__int64 *)(v146 + 32 * v145));
          }
          sub_448310(&v208);
          v77 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v78 = sub_449C18(v77, &v204);
        if ( v78 != 2 && v78 != 9 )
          goto LABEL_100;
        v4 = 0;
        v77[1] &= (unsigned __int64)src;
        sub_448310(&v204);
        return v4;
      case 10:
        v106 = *a1;
        v105 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v107 = sub_449520(&v204, (__int64 *)(v106 + 32 * v105 - 32));
        v108 = 32 * a1[1] - 32;
        v109 = (__int64 *)(*a1 + v108);
        if ( !v107 )
        {
          v159 = (__int64 *)(*a1 + v108);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v159);
          v160 = a1[1];
          if ( v160 )
          {
            v161 = v160 - 1;
            v162 = *a1;
            a1[1] = v161;
            sub_448310((__int64 *)(v162 + 32 * v161));
          }
          sub_448310(&v208);
          v109 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v110 = sub_449C18(v109, &v204);
        if ( v110 != 2 && v110 != 9 )
          goto LABEL_100;
        v4 = 0;
        v109[1] ^= (unsigned __int64)src;
        sub_448310(&v204);
        return v4;
      case 11:
        v71 = (unsigned __int8 *)(*a1 + 32 * a1[1] - 32);
        v72 = *v71;
        if ( v72 != 2 && v72 != 9 )
          return (unsigned int)sub_4869C8(61);
        v4 = 0;
        *((_QWORD *)v71 + 1) = ~*((_QWORD *)v71 + 1);
        return v4;
      case 12:
        v48 = *a1;
        v47 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v49 = sub_449520(&v204, (__int64 *)(v48 + 32 * v47 - 32));
        v50 = 32 * a1[1] - 32;
        v51 = (__int64 *)(*a1 + v50);
        if ( !v49 )
        {
          v135 = (__int64 *)(*a1 + v50);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v135);
          v136 = a1[1];
          if ( v136 )
          {
            v137 = v136 - 1;
            v138 = *a1;
            a1[1] = v137;
            sub_448310((__int64 *)(v138 + 32 * v137));
          }
          sub_448310(&v208);
          v51 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v52 = sub_449C18(v51, &v204);
        if ( v52 != 2 && v52 != 9 )
          goto LABEL_100;
        v4 = 0;
        v51[1] >>= (char)src;
        sub_448310(&v204);
        return v4;
      case 13:
        v42 = *a1;
        v41 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v43 = sub_449520(&v204, (__int64 *)(v42 + 32 * v41 - 32));
        v44 = 32 * a1[1] - 32;
        v45 = (__int64 *)(*a1 + v44);
        if ( !v43 )
        {
          v151 = (__int64 *)(*a1 + v44);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v151);
          v152 = a1[1];
          if ( v152 )
          {
            v153 = v152 - 1;
            v154 = *a1;
            a1[1] = v153;
            sub_448310((__int64 *)(v154 + 32 * v153));
          }
          sub_448310(&v208);
          v45 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v46 = sub_449C18(v45, &v204);
        if ( v46 == 2 || v46 == 9 )
        {
          v4 = 0;
          v45[1] <<= (char)src;
          sub_448310(&v204);
        }
        else
        {
LABEL_100:
          v4 = sub_4869C8(61);
          sub_448310(&v204);
        }
        return v4;
      case 14:
        v39 = (unsigned __int8 *)(*a1 + 32 * a1[1] - 32);
        v40 = *v39;
        if ( v40 == 3 )
        {
          v4 = 0;
          if ( *((_WORD *)v39 + 11) )
            *((_WORD *)v39 + 11) ^= 0x8000u;
        }
        else if ( v40 == 2 || v40 == 9 )
        {
          v4 = 0;
          *((_QWORD *)v39 + 1) = -*((_QWORD *)v39 + 1);
        }
        else
        {
          return (unsigned int)sub_4869C8(61);
        }
        return v4;
      case 15:
        return (unsigned int)sub_448E00((__int64 *)(*a1 + 32 * a1[1] - 32));
      case 24:
        v26 = *a1;
        v25 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v27 = sub_449520(&v204, (__int64 *)(v26 + 32 * v25 - 32));
        v28 = 32 * a1[1] - 32;
        v16 = (__int64 *)(*a1 + v28);
        if ( !v27 )
        {
          v183 = (__int64 *)(*a1 + v28);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v183);
          v184 = a1[1];
          if ( v184 )
          {
            v185 = v184 - 1;
            v186 = *a1;
            a1[1] = v185;
            sub_448310((__int64 *)(v186 + 32 * v185));
          }
          sub_448310(&v208);
          v16 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v24 = (unsigned int)sub_449DD8(v16, &v204) == 0;
        v18 = v16;
        v19 = v24;
        goto LABEL_26;
      case 25:
        v21 = *a1;
        v20 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v22 = sub_449520(&v204, (__int64 *)(v21 + 32 * v20 - 32));
        v23 = 32 * a1[1] - 32;
        v16 = (__int64 *)(*a1 + v23);
        if ( !v22 )
        {
          v171 = (__int64 *)(*a1 + v23);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v171);
          v172 = a1[1];
          if ( v172 )
          {
            v173 = v172 - 1;
            v174 = *a1;
            a1[1] = v173;
            sub_448310((__int64 *)(v174 + 32 * v173));
          }
          sub_448310(&v208);
          v16 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v24 = (unsigned int)sub_449DD8(v16, &v204) == 0;
        v18 = v16;
        v19 = !v24;
        goto LABEL_26;
      case 26:
        v13 = *a1;
        v12 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v14 = sub_449520(&v204, (__int64 *)(v13 + 32 * v12 - 32));
        v15 = 32 * a1[1] - 32;
        v16 = (__int64 *)(*a1 + v15);
        if ( !v14 )
        {
          v127 = (__int64 *)(*a1 + v15);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v127);
          v128 = a1[1];
          if ( v128 )
          {
            v129 = v128 - 1;
            v130 = *a1;
            a1[1] = v129;
            sub_448310((__int64 *)(v130 + 32 * v129));
          }
          sub_448310(&v208);
          v16 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v17 = (int)sub_449DD8(v16, &v204) <= 0;
        v18 = v16;
        v19 = v17;
        goto LABEL_26;
      case 27:
        v7 = *a1;
        v6 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v8 = sub_449520(&v204, (__int64 *)(v7 + 32 * v6 - 32));
        v9 = 32 * a1[1] - 32;
        v10 = (__int64 *)(*a1 + v9);
        if ( !v8 )
        {
          v175 = (__int64 *)(*a1 + v9);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v175);
          v176 = a1[1];
          if ( v176 )
          {
            v177 = v176 - 1;
            v178 = *a1;
            a1[1] = v177;
            sub_448310((__int64 *)(v178 + 32 * v177));
          }
          sub_448310(&v208);
          v10 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v11 = (int)sub_449DD8(v10, &v204) >= 0;
        sub_448310(v10);
        sub_448310(&v204);
        v10[1] = v11;
        v4 = 0;
        sub_448310(&v204);
        return v4;
      case 28:
        v34 = *a1;
        v33 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v35 = sub_449520(&v204, (__int64 *)(v34 + 32 * v33 - 32));
        v36 = 32 * a1[1] - 32;
        v37 = (__int64 *)(*a1 + v36);
        if ( !v35 )
        {
          v187 = (__int64 *)(*a1 + v36);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v187);
          v188 = a1[1];
          if ( v188 )
          {
            v189 = v188 - 1;
            v190 = *a1;
            a1[1] = v189;
            sub_448310((__int64 *)(v190 + 32 * v189));
          }
          sub_448310(&v208);
          v37 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v38 = (unsigned int)sub_449DD8(v37, &v204) >> 31;
        sub_448310(v37);
        sub_448310(&v204);
        v37[1] = (unsigned __int8)v38;
        v4 = 0;
        sub_448310(&v204);
        return v4;
      case 29:
        v30 = *a1;
        v29 = a1[1];
        LOBYTE(v204) = 2;
        src = nullptr;
        v206 = 0;
        v207 = 0;
        v31 = sub_449520(&v204, (__int64 *)(v30 + 32 * v29 - 32));
        v32 = 32 * a1[1] - 32;
        v16 = (__int64 *)(*a1 + v32);
        if ( !v31 )
        {
          v179 = (__int64 *)(*a1 + v32);
          LOBYTE(v208) = 2;
          v209 = 0;
          v210 = 0;
          v211 = 0;
          sub_4488B8(&v208, v179);
          v180 = a1[1];
          if ( v180 )
          {
            v181 = v180 - 1;
            v182 = *a1;
            a1[1] = v181;
            sub_448310((__int64 *)(v182 + 32 * v181));
          }
          sub_448310(&v208);
          v16 = (__int64 *)(*a1 + 32 * a1[1] - 32);
        }
        v17 = (int)sub_449DD8(v16, &v204) <= 0;
        v18 = v16;
        v19 = !v17;
LABEL_26:
        sub_448310(v18);
        sub_448310(&v204);
        v16[1] = v19;
        v4 = 0;
        sub_448310(&v204);
        return v4;
      case 30:
        return (unsigned int)sub_4497A0((__int64 *)(*a1 + 32 * a1[1] - 32));
      case 32:
        return (unsigned int)sub_449AF8((__int64 *)(*a1 + 32 * a1[1] - 32));
      case 33:
        return (unsigned int)sub_4498D8((__int64 *)(*a1 + 32 * a1[1] - 32));
      default:
        if ( !under_debugger )
          sub_492270(1448);
        __break(0x3E8u);
        continue;
    }
  }
}
// 44B460: could not find valid save-restore pair for x23
// 49F748: using guessed type __int64 __fastcall sub_49F748(_QWORD);
// 52451C: using guessed type char under_debugger;
