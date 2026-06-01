/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000300CC
// Address: 0x00000001000300CC

//----- (00000001000300CC) ----------------------------------------------------
__int64 __fastcall sub_1000300CC(__int64 result, __int64 a2, __int64 a3)
{
  char **v3; // x21
  __int64 v4; // x19
  int v5; // w0
  char v6; // w23
  size_t v7; // x0
  char *v8; // x1
  char *v9; // x23
  __int64 v10; // x24
  __int64 v11; // x25
  __int64 v12; // x0
  int *v13; // x20
  int v14; // w8
  char *v15; // x25
  unsigned __int64 v16; // x23
  __int64 v17; // x8
  int v18; // w24
  __int64 v19; // x26
  __int64 v20; // x22
  unsigned __int64 v21; // x20
  char *v22; // x1
  __int64 v23; // x23
  __int64 v24; // x26
  __int64 v25; // x0
  char *v26; // x8
  char *v27; // x8
  unsigned __int64 v28; // x9
  char *v29; // x23
  char *v30; // x24
  char *v31; // x8
  __int64 v32; // x9
  __int64 v33; // x25
  __int64 v34; // x23
  __int64 v35; // x0
  char *v36; // x24
  __int64 v37; // x25
  __int64 v38; // x23
  __int64 v39; // x0
  _DWORD *v40; // x8
  int utf8_char; // w0
  char *v42; // x23
  char *v43; // x1
  __int64 v44; // x24
  __int64 v45; // x25
  __int64 v46; // x0
  int v47; // w0
  char *v48; // x2
  unsigned __int64 v49; // x8
  char *v50; // x24
  int v51; // w0
  char *v52; // x20
  int v53; // w0
  signed __int64 v54; // x26
  __int64 v55; // x20
  __int64 v56; // x8
  _QWORD *v57; // x22
  __int64 v58; // x20
  int v59; // w0
  _BOOL4 v60; // w8
  __int64 v61; // x27
  unsigned __int64 v62; // x22
  char *v63; // x27
  int v64; // w24
  void *v65; // x0
  char *v66; // x25
  __int64 v67; // x23
  __int64 v68; // x25
  __int64 v69; // x0
  char *v70; // x23
  __int64 v71; // x24
  __int64 v72; // x25
  __int64 v73; // x0
  __int64 v74; // x8
  int v75; // w24
  const char *v76; // x23
  const char **v77; // x27
  __int64 v78; // x26
  __int64 v79; // x20
  const char **v80; // x21
  __int64 v81; // x28
  char *v82; // x0
  __int64 v83; // x23
  __int64 v84; // x28
  char v85; // w8
  bool v86; // w20
  unsigned __int64 v87; // x26
  int v88; // w8
  bool v89; // zf
  char v90; // w23
  int v91; // w0
  int v92; // w0
  char *v93; // x23
  char *v94; // x1
  __int64 v95; // x24
  __int64 v96; // x25
  __int64 v97; // x0
  char *v98; // x23
  char *v99; // x1
  __int64 v100; // x24
  __int64 v101; // x0
  int v102; // w0
  char *v103; // x23
  char *v104; // x1
  __int64 v105; // x24
  __int64 v106; // x0
  __int64 v107; // x24
  char *v108; // x23
  __int64 v109; // x28
  __int64 v110; // x0
  __int64 v111; // x8
  _QWORD *v112; // x26
  __int64 v113; // x22
  __int64 v114; // x23
  char *v115; // x24
  char *v116; // x1
  __int64 v117; // x27
  __int64 v118; // x28
  __int64 v119; // x0
  char *v120; // x23
  char *v121; // x1
  __int64 v122; // x24
  __int64 v123; // x27
  __int64 v124; // x0
  int i; // w0
  int v126; // w0
  char *v127; // x8
  int v128; // w0
  int v129; // w0
  char v130; // w9
  unsigned __int64 v131; // x24
  int v132; // w0
  int v133; // w0
  bool v134; // cf
  char v135; // w8
  __int64 v136; // x22
  int v137; // w0
  int v138; // w0
  bool v139; // cf
  char v140; // w8
  char *v141; // x21
  char *v142; // x1
  __int64 v143; // x22
  __int64 v144; // x23
  __int64 v145; // x0
  unsigned int v146; // [xsp+0h] [xbp-D0h]
  unsigned int v147; // [xsp+4h] [xbp-CCh]
  char **v148; // [xsp+8h] [xbp-C8h]
  char *v149; // [xsp+18h] [xbp-B8h]
  size_t v150; // [xsp+20h] [xbp-B0h]
  signed __int64 v151; // [xsp+30h] [xbp-A0h]
  int v152; // [xsp+40h] [xbp-90h]
  __int64 v153; // [xsp+40h] [xbp-90h]
  char *__s; // [xsp+50h] [xbp-80h] BYREF
  void *v156; // [xsp+58h] [xbp-78h] BYREF
  size_t v157; // [xsp+60h] [xbp-70h]
  __int64 v158; // [xsp+68h] [xbp-68h]
  char *v159; // [xsp+70h] [xbp-60h] BYREF

  __s = *(char **)a3;
  v149 = __s;
  if ( !__s )
    return result;
  v3 = (char **)a3;
  v4 = result;
  v150 = *(_QWORD *)(a3 + 8);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 0);
  *(_QWORD *)(v4 + 160) = __s;
  *(_QWORD *)(v4 + 168) = v149;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v5 < 1 )
  {
    v14 = 0;
LABEL_13:
    *(_DWORD *)(v4 + 176) = v14;
    goto LABEL_16;
  }
  v6 = v5;
  if ( (v5 & 0xF) != 0 )
    sub_10002FFC4(v4, a2, (v5 & 0xF) - 1, &__s);
  if ( (v6 & 0x10) != 0 )
  {
    v7 = strlen(__s);
    v8 = *(char **)(v4 + 168);
    v9 = &__s[v7];
    __s = v9;
    if ( v8 < v9 )
    {
      v10 = *(unsigned int *)(v4 + 128);
      v11 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v8);
      v12 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v9);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v11, v12, v10);
      *(_QWORD *)(v4 + 168) = v9;
    }
    if ( *(v9 - 1) == *(_BYTE *)(v4 + 184) )
    {
      v13 = (int *)(v4 + 128);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, 16);
    }
    else
    {
      v13 = (int *)(v4 + 116);
    }
    v14 = *v13;
    goto LABEL_13;
  }
LABEL_16:
  while ( 1 )
  {
    v156 = __s;
    result = get_utf8_char((char **)&v156);
    if ( (unsigned int)result <= 0x7F )
    {
      if ( (_DefaultRuneLocale.__runetype[(unsigned int)result] & 0x4000) != 0 )
        goto LABEL_27;
      if ( !(_DWORD)result )
        break;
    }
    v15 = __s;
    v16 = *(_QWORD *)(v4 + 96);
    if ( v16 )
    {
      v17 = 0;
      v18 = 0;
      v19 = *(_QWORD *)(v4 + 88);
      while ( 1 )
      {
        v20 = v19 + 48 * v17;
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 >= 2 && !strncmp(v15, *(const char **)v20, v21 - 1) )
          break;
        v17 = ++v18;
        if ( v16 <= v18 )
          goto LABEL_26;
      }
      v22 = *(char **)(v4 + 168);
      if ( v22 >= v15 )
      {
        v26 = v15;
      }
      else
      {
        v23 = *(unsigned int *)(v4 + 176);
        v24 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v22);
        v25 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v15);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v24, v25, v23);
        *(_QWORD *)(v4 + 168) = v15;
        v21 = *(_QWORD *)(v20 + 8);
        v26 = __s;
      }
      v28 = v21 - 1;
      if ( !v21 )
        v28 = 0;
      __s = &v26[v28];
      sub_10002FFC4(v4, a2, v18, &__s);
      v27 = __s;
    }
    else
    {
LABEL_26:
      v27 = v15;
    }
    v156 = v27;
    if ( (unsigned int)get_utf8_char((char **)&v156) == *(char *)(v4 + 185) )
    {
      v29 = *(char **)(v4 + 168);
      v30 = __s;
      if ( v29 != *v3 )
      {
        v31 = *(char **)(v4 + 168);
        if ( v29 != __s )
        {
          do
          {
            v32 = *v31;
            if ( v32 < 0 || (_DefaultRuneLocale.__runetype[v32] & 0x4000) == 0 )
              goto LABEL_46;
          }
          while ( ++v31 != __s );
        }
      }
      if ( v29 < __s )
      {
        v33 = *(unsigned int *)(v4 + 176);
        v34 = sub_10002FD0C(*(_BYTE **)(v4 + 160), *(_BYTE **)(v4 + 168));
        v35 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v30);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v34, v35, v33);
        *(_QWORD *)(v4 + 168) = v30;
        v29 = v30;
        v30 = __s;
      }
      v36 = &v30[strlen(v30)];
      __s = v36;
      if ( v29 < v36 )
      {
        v37 = *(unsigned int *)(v4 + 128);
        v38 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v29);
        v39 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v36);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v38, v39, v37);
        *(_QWORD *)(v4 + 168) = v36;
        v36 = __s;
      }
      v40 = (_DWORD *)(v4 + 116);
      if ( *(v36 - 1) == *(_BYTE *)(v4 + 184) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, 16);
        v40 = (_DWORD *)(v4 + 128);
      }
      *(_DWORD *)(v4 + 176) = *v40;
    }
    else
    {
      v30 = __s;
LABEL_46:
      v156 = v30;
      utf8_char = get_utf8_char((char **)&v156);
      if ( utf8_char == *(char *)(v4 + 182) || utf8_char == *(char *)(v4 + 180) )
      {
        *(_BYTE *)(v4 + 112) = utf8_char;
        v42 = __s;
        v43 = *(char **)(v4 + 168);
        if ( v43 < __s )
        {
          v44 = *(unsigned int *)(v4 + 176);
          v45 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v43);
          v46 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v42);
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v45, v46, v44);
          *(_QWORD *)(v4 + 168) = v42;
        }
        v47 = get_utf8_char(&__s);
        v48 = __s;
        if ( v47 == -1 )
          v48 = ++__s;
        result = (__int64)sub_10002FE4C(v4, a2, v48, *(char *)(v4 + 112));
        __s = (char *)result;
        if ( !result )
          return result;
      }
      else
      {
        v49 = *(_QWORD *)(v4 + 72);
        v50 = __s;
        if ( v49 >= 2 && !strncmp(__s, *(const char **)(v4 + 64), v49 - 1) )
        {
          v66 = *(char **)(v4 + 168);
          if ( v66 < v50 )
          {
            v67 = *(unsigned int *)(v4 + 176);
            v68 = sub_10002FD0C(*(_BYTE **)(v4 + 160), *(_BYTE **)(v4 + 168));
            v69 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v50);
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v68, v69, v67);
            *(_QWORD *)(v4 + 168) = v50;
            v66 = v50;
            v50 = __s;
          }
          v70 = &v50[strlen(v50)];
          __s = v70;
          if ( v66 < v70 )
          {
            v71 = *(unsigned int *)(v4 + 120);
            v72 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v66);
            v73 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v70);
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v72, v73, v71);
            *(_QWORD *)(v4 + 168) = v70;
          }
          *(_DWORD *)(v4 + 176) = *(_DWORD *)(v4 + 116);
        }
        else
        {
          v156 = v50;
          v51 = get_utf8_char((char **)&v156);
          if ( v51 != 95 && (v51 & 0xFFFFFFDF) - 65 > 0x19 )
            goto LABEL_69;
          do
          {
            do
            {
              v52 = (char *)v156;
              v53 = get_utf8_char((char **)&v156);
            }
            while ( (unsigned int)(v53 - 48) < 0xA );
          }
          while ( v53 == 95 || (v53 & 0xFFFFFFDF) - 65 < 0x1A );
          v54 = v52 - v50;
          if ( v52 == v50 )
          {
LABEL_69:
            v151 = 0;
            v152 = 1;
            v63 = __s;
            if ( __s )
              goto LABEL_70;
LABEL_140:
            v111 = *(_QWORD *)(v4 + 144);
            if ( (v111 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
            {
              v112 = *(_QWORD **)(v4 + 136);
              v113 = 8 * v111;
              do
              {
                v114 = (*(__int64 (__fastcall **)(_QWORD, void **, char *))(*(_QWORD *)*v112 + 16LL))(*v112, &v156, __s);
                if ( v114 >= 1 )
                {
                  v115 = __s;
                  v116 = *(char **)(v4 + 168);
                  if ( v116 < __s )
                  {
                    v117 = *(unsigned int *)(v4 + 176);
                    v118 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v116);
                    v119 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v115);
                    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(
                      a2,
                      v118,
                      v119,
                      v117);
                    *(_QWORD *)(v4 + 168) = v115;
                  }
                  skip_utf8(&__s, v114);
                  v120 = __s;
                  v121 = *(char **)(v4 + 168);
                  if ( v121 < __s )
                  {
                    v122 = (unsigned int)v156;
                    v123 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v121);
                    v124 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v120);
                    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(
                      a2,
                      v123,
                      v124,
                      v122);
                    *(_QWORD *)(v4 + 168) = v120;
                  }
                  *(_DWORD *)(v4 + 176) = *(_DWORD *)(v4 + 116);
                }
                ++v112;
                v113 -= 8;
              }
              while ( v113 );
            }
            if ( v152 )
            {
              v156 = __s;
              for ( i = get_utf8_char((char **)&v156);
                    i == 46 || (unsigned int)(i - 58) > 0xFFFFFFF5 || (i & 0xFFFFFFDF) - 91 >= 0xFFFFFFE6;
                    i = get_utf8_char((char **)&v156) )
              {
                v126 = get_utf8_char(&__s);
                v127 = __s;
                if ( v126 == -1 )
                  v127 = ++__s;
                v156 = v127;
              }
            }
            else
            {
              __s += v151;
            }
            if ( v15 == __s )
            {
LABEL_27:
              if ( (unsigned int)get_utf8_char(&__s) == -1 )
                ++__s;
            }
          }
          else
          {
            v156 = nullptr;
            v157 = 0;
            v158 = 0;
            sub_10001115C((_QWORD **)&v156, v52 - v50);
            qstrncpy((const char *)v156, (unsigned __int8 *)__s, v54 + 1);
            v55 = *(unsigned int *)(v4 + 176);
            LODWORD(v159) = *(_DWORD *)(v4 + 176);
            v56 = *(_QWORD *)(v4 + 144);
            v151 = v54;
            if ( (v56 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
            {
              v57 = *(_QWORD **)(v4 + 136);
              v58 = 8 * v56 - 8;
              do
              {
                v59 = (*(__int64 (__fastcall **)(_QWORD, char **, void **))(*(_QWORD *)*v57 + 24LL))(*v57, &v159, &v156);
                ++v57;
                v60 = v58 != 0;
                v58 -= 8;
              }
              while ( (v60 & ~v59 & 1) != 0 );
              v55 = *(unsigned int *)(v4 + 176);
              v61 = (unsigned int)v159;
              if ( (_DWORD)v55 == (_DWORD)v159 )
              {
                v62 = *(_QWORD *)(v4 + 48);
                if ( v62 )
                {
LABEL_80:
                  v146 = v61;
                  v147 = v55;
                  v148 = v3;
                  v74 = 0;
                  v75 = 0;
                  v153 = *(_QWORD *)(v4 + 40);
                  if ( v157 )
                    v76 = (const char *)v156;
                  else
                    v76 = &byte_100075A30;
                  while ( 1 )
                  {
                    v78 = v153 + 32 * v74;
                    v80 = *(const char ***)v78;
                    v79 = *(_QWORD *)(v78 + 8);
                    if ( (v79 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
                    {
                      v81 = 8 * v79;
                      v77 = *(const char ***)v78;
                      while ( strcmp(v76, *v77) )
                      {
                        ++v77;
                        v81 -= 8;
                        if ( !v81 )
                          goto LABEL_85;
                      }
                    }
                    else
                    {
                      v77 = *(const char ***)v78;
                    }
                    if ( v77 != &v80[v79] )
                      break;
LABEL_85:
                    v74 = ++v75;
                    if ( v62 <= v75 )
                    {
                      v3 = v148;
                      v54 = v151;
                      v61 = v146;
                      v55 = v147;
                      if ( v147 == v146 )
                        goto LABEL_136;
                      goto LABEL_131;
                    }
                  }
                  v61 = *(unsigned int *)(v78 + 24);
                  LODWORD(v159) = v61;
                  v3 = v148;
                  v54 = v151;
                  v55 = v147;
                  if ( v147 == (_DWORD)v61 )
                    goto LABEL_136;
LABEL_131:
                  v103 = __s;
                  v104 = *(char **)(v4 + 168);
                  if ( v104 >= __s )
                  {
                    v107 = v61;
                  }
                  else
                  {
                    v105 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v104);
                    v106 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v103);
                    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(
                      a2,
                      v105,
                      v106,
                      v55);
                    *(_QWORD *)(v4 + 168) = v103;
                    v104 = v103;
                    v103 = __s;
                    v107 = (unsigned int)v159;
                  }
                  v108 = &v103[v54];
                  __s = v108;
                  if ( v104 < v108 )
                  {
                    v109 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v104);
                    v110 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v108);
                    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(
                      a2,
                      v109,
                      v110,
                      v107);
                    *(_QWORD *)(v4 + 168) = v108;
                  }
                  goto LABEL_136;
                }
              }
            }
            else
            {
              v61 = v55;
              v62 = *(_QWORD *)(v4 + 48);
              if ( v62 )
                goto LABEL_80;
            }
            if ( (_DWORD)v55 != (_DWORD)v61 )
              goto LABEL_131;
LABEL_136:
            if ( v156 )
            {
              v157 = 0;
              qfree(v156);
            }
            if ( (_DWORD)v55 == (_DWORD)v61 )
            {
              v152 = 0;
              v63 = __s;
              if ( !__s )
                goto LABEL_140;
LABEL_70:
              v156 = v63;
              v64 = get_utf8_char((char **)&v156);
              if ( !v64 )
                goto LABEL_140;
              v156 = nullptr;
              v157 = 0;
              v158 = 0;
              if ( v150
                && (v150 == -1 ? (v65 = nullptr) : (v65 = qvector_reserve(&v156, nullptr, v150 + 1, 1u), v156 = v65),
                    v157 = v150 + 1,
                    memmove(v65, v149, v150),
                    *((_BYTE *)v156 + v150) = 0,
                    v157) )
              {
                v82 = (char *)v156;
              }
              else
              {
                v82 = &byte_100075A30;
              }
              v83 = qustrlen(v82);
              if ( (unsigned int)(v64 - 48) >= 0xA )
              {
                v84 = 0;
                v85 = v64 - 43;
                if ( (unsigned int)(v64 - 43) > 0x3A )
                  goto LABEL_117;
                if ( ((1LL << v85) & 0x400000004000008LL) == 0 )
                {
                  if ( ((1LL << v85) & 5) == 0 )
                    goto LABEL_117;
                  if ( v63 != v149 )
                  {
                    v159 = v63;
                    prev_utf8_char(nullptr, (unsigned __int64 *)&v159, (unsigned __int64)v149);
                    v102 = get_utf8_char(&v159);
                    v84 = 0;
                    if ( v102 == 46 || (unsigned int)(v102 - 58) > 0xFFFFFFF5 || (v102 & 0xFFFFFFDF) - 91 > 0xFFFFFFE5 )
                      goto LABEL_117;
                  }
                }
              }
              v86 = v64 == 46;
              v159 = v63;
              skip_utf8(&v159, 1);
              v87 = v83 + 1;
              v88 = get_utf8_char(&v159) & 0xFFFFFFDF;
              v89 = v64 == 48 && v88 == 88;
              v90 = !v89;
              if ( !v89 )
              {
                v84 = 1;
                if ( ((1LL << ((unsigned __int8)v64 - 43)) & 0x400000004000005LL) != 0 )
                {
                  if ( v87 < 2 )
                    goto LABEL_116;
                  v159 = v63;
                  skip_utf8(&v159, 1);
                  v91 = get_utf8_char(&v159);
                  if ( v91 == 46 || (unsigned int)(v91 - 58) > 0xFFFFFFF5 )
                  {
                    v84 = 1;
                    goto LABEL_166;
                  }
                  v84 = 1;
                  if ( (v91 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
                    goto LABEL_116;
                }
LABEL_165:
                if ( v84 >= v87 )
                  goto LABEL_117;
                while ( 1 )
                {
LABEL_166:
                  v159 = v63;
                  if ( v84 < 1 )
                  {
                    if ( v84 < 0 )
                    {
LABEL_224:
                      if ( under_debugger != 1 )
                        goto LABEL_225;
                      goto LABEL_226;
                    }
                  }
                  else
                  {
                    skip_utf8(&v159, v84);
                  }
                  v128 = get_utf8_char(&v159);
                  if ( v128 != 46 && (unsigned int)(v128 - 58) <= 0xFFFFFFF5 && (v128 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
                    goto LABEL_117;
                  v159 = v63;
                  if ( v84 >= 1 )
                    skip_utf8(&v159, v84);
                  v129 = get_utf8_char(&v159);
                  if ( (unsigned int)(v129 - 48) < 0xA )
                    v130 = 1;
                  else
                    v130 = v90;
                  if ( (v130 & 1) != 0 )
                  {
                    if ( (unsigned int)(v129 - 48) <= 9 )
                      goto LABEL_164;
                  }
                  else if ( (v129 & 0xFFFFFFDF) - 65 < 6 )
                  {
LABEL_164:
                    ++v84;
                    goto LABEL_165;
                  }
                  if ( v129 != 46 )
                  {
                    if ( (v129 & 0xFFFFFFDF) == 0x45 )
                    {
                      v159 = v63;
                      if ( (unsigned __int64)v84 <= 0x7FFFFFFFFFFFFFFELL )
                      {
                        v131 = v84 + 1;
                        skip_utf8(&v159, v84 + 1);
                        v132 = get_utf8_char(&v159);
                        if ( v132 == 43 || v132 == 45 )
                          v131 = v84 + 2;
                        v84 = v131;
                        if ( v131 < v87 )
                        {
                          while ( 1 )
                          {
                            v159 = v63;
                            if ( v84 <= 0 )
                            {
                              if ( v84 < 0 )
                                goto LABEL_224;
                            }
                            else
                            {
                              skip_utf8(&v159, v84);
                            }
                            v133 = get_utf8_char(&v159);
                            if ( v133 != 46
                              && (unsigned int)(v133 - 58) <= 0xFFFFFFF5
                              && (v133 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
                            {
                              break;
                            }
                            v159 = v63;
                            if ( v84 >= 1 )
                              skip_utf8(&v159, v84);
                            v129 = get_utf8_char(&v159);
                            v134 = (unsigned int)(v129 - 48) >= 0xA;
                            if ( (unsigned int)(v129 - 48) < 0xA )
                              v135 = 1;
                            else
                              v135 = v90;
                            if ( (v135 & 1) == 0 )
                              v134 = (v129 & 0xFFFFFFDF) - 65 >= 6;
                            if ( v134 )
                            {
                              if ( v129 != 46 )
                                goto LABEL_209;
                              if ( v86 )
                                goto LABEL_116;
                              ++v84;
                              v86 = 1;
                              if ( v84 >= v87 )
                                goto LABEL_117;
                            }
                            else if ( ++v84 >= v87 )
                            {
                              goto LABEL_117;
                            }
                          }
                        }
                        goto LABEL_117;
                      }
                      if ( under_debugger != 1 )
LABEL_225:
                        interr(1834);
LABEL_226:
                      __break(1u);
                    }
LABEL_209:
                    v136 = v84;
                    if ( v129 == 76 )
                    {
                      ++v84;
                      if ( v136 + 1 >= v87
                        || (sub_1000310F0(v63, v136 + 1, 0), v137 != 46)
                        && (unsigned int)(v137 - 58) <= 0xFFFFFFF5
                        && (v137 & 0xFFFFFFDF) - 91 <= 0xFFFFFFE5 )
                      {
                        sub_1000310F0(v63, v136 - 1, (unsigned __int64)v149);
                        v139 = (unsigned int)(v138 - 48) >= 0xA;
                        if ( (unsigned int)(v138 - 48) < 0xA )
                          v140 = 1;
                        else
                          v140 = v90;
                        if ( (v140 & 1) == 0 )
                          v139 = (v138 & 0xFFFFFFDF) - 65 >= 6;
                        if ( !v139 )
                          goto LABEL_117;
                      }
                    }
LABEL_116:
                    v84 = 0;
                    goto LABEL_117;
                  }
                  if ( v86 )
                    goto LABEL_116;
                  ++v84;
                  v86 = 1;
                  if ( v84 >= v87 )
                    goto LABEL_117;
                }
              }
              v159 = v63;
              skip_utf8(&v159, 2);
              v92 = get_utf8_char(&v159);
              if ( v92 != 46 && (unsigned int)(v92 - 58) <= 0xFFFFFFF5 )
              {
                v84 = 2;
                if ( (v92 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
                  goto LABEL_116;
                goto LABEL_165;
              }
              v84 = 2;
              if ( v87 > 2 )
                goto LABEL_166;
LABEL_117:
              if ( v156 )
              {
                v157 = 0;
                qfree(v156);
              }
              if ( !v84 )
                goto LABEL_140;
              v93 = __s;
              v94 = *(char **)(v4 + 168);
              if ( v94 < __s )
              {
                v95 = *(unsigned int *)(v4 + 176);
                v96 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v94);
                v97 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v93);
                (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v96, v97, v95);
                *(_QWORD *)(v4 + 168) = v93;
              }
              skip_utf8(&__s, v84);
              v98 = __s;
              v99 = *(char **)(v4 + 168);
              if ( v99 < __s )
              {
                v100 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v99);
                v101 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v98);
                (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v100, v101, 7);
                *(_QWORD *)(v4 + 168) = v98;
              }
            }
          }
        }
      }
    }
  }
  v141 = __s;
  v142 = *(char **)(v4 + 168);
  if ( v142 < __s )
  {
    v143 = *(unsigned int *)(v4 + 176);
    v144 = sub_10002FD0C(*(_BYTE **)(v4 + 160), v142);
    v145 = sub_10002FD0C(*(_BYTE **)(v4 + 168), v141);
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(
               a2,
               v144,
               v145,
               v143);
    *(_QWORD *)(v4 + 168) = v141;
  }
  return result;
}
// 100030900: conditional instruction was optimized away because w24.4 is in (2B..65)
// 100030D64: conditional instruction was optimized away because x26.8>=2u
// 100030F68: variable 'v137' is possibly undefined
// 100030F98: variable 'v138' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009D90D: using guessed type char under_debugger;
