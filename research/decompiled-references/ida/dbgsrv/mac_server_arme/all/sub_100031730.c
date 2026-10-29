/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100031730
// Address: 0x0000000100031730

//----- (0000000100031730) ----------------------------------------------------
__int64 __fastcall sub_100031730(__int64 result, __int64 a2, __int64 a3)
{
  _QWORD *v3; // x21
  __int64 v4; // x19
  int v5; // w0
  char v6; // w23
  char *v7; // x25
  unsigned __int64 v8; // x23
  __int64 v9; // x8
  int v10; // w24
  __int64 v11; // x26
  __int64 v12; // x22
  unsigned __int64 v13; // x20
  char *v14; // x1
  __int64 v15; // x23
  __int64 v16; // x26
  __int64 v17; // x0
  char *v18; // x8
  char *v19; // x8
  unsigned __int64 v20; // x9
  char *v21; // x1
  char *v22; // x23
  char *v23; // x8
  __int64 v24; // x9
  __int64 v25; // x24
  __int64 v26; // x25
  __int64 v27; // x0
  int utf8_char; // w0
  char *v29; // x23
  char *v30; // x1
  __int64 v31; // x24
  __int64 v32; // x25
  __int64 v33; // x0
  int v34; // w0
  char *v35; // x2
  unsigned __int64 v36; // x8
  char *v37; // x24
  int v38; // w0
  _BYTE *v39; // x20
  int v40; // w0
  __int64 v41; // x20
  __int64 v42; // x26
  __int64 v43; // x8
  _QWORD *v44; // x22
  __int64 v45; // x23
  int v46; // w0
  _BOOL4 v47; // w8
  __int64 v48; // x27
  unsigned __int64 v49; // x22
  char *v50; // x27
  int v51; // w24
  void *v52; // x0
  char *v53; // x25
  __int64 v54; // x23
  __int64 v55; // x25
  __int64 v56; // x0
  char *v57; // x23
  __int64 v58; // x24
  __int64 v59; // x25
  __int64 v60; // x0
  __int64 v61; // x8
  int v62; // w24
  const char *v63; // x23
  const char **v64; // x27
  __int64 v65; // x26
  __int64 v66; // x20
  const char **v67; // x21
  __int64 v68; // x28
  char *v69; // x0
  __int64 v70; // x23
  __int64 v71; // x28
  char v72; // w8
  bool v73; // w20
  unsigned __int64 v74; // x26
  int v75; // w8
  bool v76; // zf
  char v77; // w23
  int v78; // w0
  int v79; // w0
  char *v80; // x23
  char *v81; // x1
  __int64 v82; // x24
  __int64 v83; // x25
  __int64 v84; // x0
  char *v85; // x23
  char *v86; // x1
  __int64 v87; // x24
  __int64 v88; // x0
  int v89; // w0
  char *v90; // x23
  char *v91; // x1
  __int64 v92; // x24
  __int64 v93; // x0
  __int64 v94; // x24
  char *v95; // x23
  __int64 v96; // x28
  __int64 v97; // x0
  __int64 v98; // x8
  _QWORD *v99; // x26
  __int64 v100; // x22
  __int64 v101; // x23
  char *v102; // x24
  char *v103; // x1
  __int64 v104; // x27
  __int64 v105; // x28
  __int64 v106; // x0
  char *v107; // x23
  char *v108; // x1
  __int64 v109; // x24
  __int64 v110; // x27
  __int64 v111; // x0
  int i; // w0
  int v113; // w0
  char *v114; // x8
  int v115; // w0
  int v116; // w0
  char v117; // w9
  unsigned __int64 v118; // x24
  int v119; // w0
  int v120; // w0
  bool v121; // cf
  char v122; // w8
  __int64 v123; // x22
  int v124; // w0
  int v125; // w0
  bool v126; // cf
  char v127; // w8
  char *v128; // x21
  char *v129; // x1
  __int64 v130; // x22
  __int64 v131; // x23
  __int64 v132; // x0
  unsigned int v133; // [xsp+0h] [xbp-C0h]
  unsigned int v134; // [xsp+4h] [xbp-BCh]
  _QWORD *v135; // [xsp+8h] [xbp-B8h]
  char *v136; // [xsp+18h] [xbp-A8h]
  size_t v137; // [xsp+20h] [xbp-A0h]
  __int64 v138; // [xsp+28h] [xbp-98h]
  int v139; // [xsp+30h] [xbp-90h]
  __int64 v140; // [xsp+30h] [xbp-90h]
  char *__s1; // [xsp+40h] [xbp-80h] BYREF
  void *v143; // [xsp+48h] [xbp-78h] BYREF
  size_t v144; // [xsp+50h] [xbp-70h]
  __int64 v145; // [xsp+58h] [xbp-68h]
  char *v146; // [xsp+60h] [xbp-60h] BYREF

  __s1 = *(char **)a3;
  v136 = __s1;
  if ( !__s1 )
    return result;
  v3 = (_QWORD *)a3;
  v4 = result;
  v137 = *(_QWORD *)(a3 + 8);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, 0);
  *(_QWORD *)(v4 + 160) = __s1;
  *(_QWORD *)(v4 + 168) = v136;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v5 < 1 )
  {
    *(_DWORD *)(v4 + 176) = 0;
    goto LABEL_10;
  }
  v6 = v5;
  if ( (v5 & 0xF) != 0 )
    sub_1000314DC(v4, a2, (v5 & 0xF) - 1, &__s1);
  if ( (v6 & 0x10) != 0 )
LABEL_9:
    sub_10003162C(v4, a2, (const char **)&__s1);
LABEL_10:
  while ( 1 )
  {
    v143 = __s1;
    result = get_utf8_char((char **)&v143);
    if ( (unsigned int)result <= 0x7F )
    {
      if ( (_DefaultRuneLocale.__runetype[(unsigned int)result] & 0x4000) != 0 )
        goto LABEL_21;
      if ( !(_DWORD)result )
        break;
    }
    v7 = __s1;
    v8 = *(_QWORD *)(v4 + 96);
    if ( v8 )
    {
      v9 = 0;
      v10 = 0;
      v11 = *(_QWORD *)(v4 + 88);
      while ( 1 )
      {
        v12 = v11 + 48 * v9;
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 >= 2 && !strncmp(v7, *(const char **)v12, v13 - 1) )
          break;
        v9 = ++v10;
        if ( v8 <= v10 )
          goto LABEL_20;
      }
      v14 = *(char **)(v4 + 168);
      if ( v14 >= v7 )
      {
        v18 = v7;
      }
      else
      {
        v15 = *(unsigned int *)(v4 + 176);
        v16 = sub_1000311EC(*(_BYTE **)(v4 + 160), v14);
        v17 = sub_1000311EC(*(_BYTE **)(v4 + 168), v7);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v16, v17, v15);
        *(_QWORD *)(v4 + 168) = v7;
        v13 = *(_QWORD *)(v12 + 8);
        v18 = __s1;
      }
      v20 = v13 - 1;
      if ( !v13 )
        v20 = 0;
      __s1 = &v18[v20];
      sub_1000314DC(v4, a2, v10, &__s1);
      v19 = __s1;
    }
    else
    {
LABEL_20:
      v19 = v7;
    }
    v143 = v19;
    if ( (unsigned int)get_utf8_char((char **)&v143) == *(char *)(v4 + 185) )
    {
      v21 = *(char **)(v4 + 168);
      v22 = __s1;
      if ( v21 == (char *)*v3 || (v23 = *(char **)(v4 + 168), v21 == __s1) )
      {
LABEL_33:
        if ( v21 < __s1 )
        {
          v25 = *(unsigned int *)(v4 + 176);
          v26 = sub_1000311EC(*(_BYTE **)(v4 + 160), v21);
          v27 = sub_1000311EC(*(_BYTE **)(v4 + 168), v22);
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v26, v27, v25);
          *(_QWORD *)(v4 + 168) = v22;
        }
        goto LABEL_9;
      }
      while ( 1 )
      {
        v24 = *v23;
        if ( v24 < 0 || (_DefaultRuneLocale.__runetype[v24] & 0x4000) == 0 )
          break;
        if ( ++v23 == __s1 )
          goto LABEL_33;
      }
    }
    else
    {
      v22 = __s1;
    }
    v143 = v22;
    utf8_char = get_utf8_char((char **)&v143);
    if ( utf8_char == *(char *)(v4 + 182) || utf8_char == *(char *)(v4 + 180) )
    {
      *(_BYTE *)(v4 + 112) = utf8_char;
      v29 = __s1;
      v30 = *(char **)(v4 + 168);
      if ( v30 < __s1 )
      {
        v31 = *(unsigned int *)(v4 + 176);
        v32 = sub_1000311EC(*(_BYTE **)(v4 + 160), v30);
        v33 = sub_1000311EC(*(_BYTE **)(v4 + 168), v29);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v32, v33, v31);
        *(_QWORD *)(v4 + 168) = v29;
      }
      v34 = get_utf8_char(&__s1);
      v35 = __s1;
      if ( v34 == -1 )
        v35 = ++__s1;
      result = (__int64)sub_100031330(v4, a2, v35, *(char *)(v4 + 112));
      __s1 = (char *)result;
      if ( !result )
        return result;
    }
    else
    {
      v36 = *(_QWORD *)(v4 + 72);
      v37 = __s1;
      if ( v36 >= 2 && !strncmp(__s1, *(const char **)(v4 + 64), v36 - 1) )
      {
        v53 = *(char **)(v4 + 168);
        if ( v53 < v37 )
        {
          v54 = *(unsigned int *)(v4 + 176);
          v55 = sub_1000311EC(*(_BYTE **)(v4 + 160), *(_BYTE **)(v4 + 168));
          v56 = sub_1000311EC(*(_BYTE **)(v4 + 168), v37);
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v55, v56, v54);
          *(_QWORD *)(v4 + 168) = v37;
          v53 = v37;
          v37 = __s1;
        }
        v57 = &v37[strlen(v37)];
        __s1 = v57;
        if ( v53 < v57 )
        {
          v58 = *(unsigned int *)(v4 + 120);
          v59 = sub_1000311EC(*(_BYTE **)(v4 + 160), v53);
          v60 = sub_1000311EC(*(_BYTE **)(v4 + 168), v57);
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v59, v60, v58);
          *(_QWORD *)(v4 + 168) = v57;
        }
        *(_DWORD *)(v4 + 176) = *(_DWORD *)(v4 + 116);
      }
      else
      {
        v143 = v37;
        v38 = get_utf8_char((char **)&v143);
        if ( v38 != 95 && (v38 & 0xFFFFFFDF) - 65 > 0x19 )
          goto LABEL_59;
        do
        {
          do
          {
            v39 = v143;
            v40 = get_utf8_char((char **)&v143);
          }
          while ( (unsigned int)(v40 - 48) < 0xA );
        }
        while ( v40 == 95 || (v40 & 0xFFFFFFDF) - 65 < 0x1A );
        v41 = v39 - v37;
        if ( v41 )
        {
          v143 = nullptr;
          v144 = 0;
          v145 = 0;
          sub_1000122F4((_QWORD **)&v143, v41);
          qstrncpy((const char *)v143, (unsigned __int8 *)__s1, v41 + 1);
          v42 = *(unsigned int *)(v4 + 176);
          LODWORD(v146) = *(_DWORD *)(v4 + 176);
          v43 = *(_QWORD *)(v4 + 144);
          v138 = v41;
          if ( (v43 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
          {
            v44 = *(_QWORD **)(v4 + 136);
            v45 = 8 * v43 - 8;
            do
            {
              v46 = (*(__int64 (__fastcall **)(_QWORD, char **, void **))(*(_QWORD *)*v44 + 24LL))(*v44, &v146, &v143);
              ++v44;
              v47 = v45 != 0;
              v45 -= 8;
            }
            while ( (v47 & ~v46 & 1) != 0 );
            v42 = *(unsigned int *)(v4 + 176);
            v48 = (unsigned int)v146;
            if ( (_DWORD)v42 == (_DWORD)v146 )
            {
              v49 = *(_QWORD *)(v4 + 48);
              if ( v49 )
              {
LABEL_70:
                v133 = v48;
                v134 = v42;
                v135 = v3;
                v61 = 0;
                v62 = 0;
                v140 = *(_QWORD *)(v4 + 40);
                if ( v144 )
                  v63 = (const char *)v143;
                else
                  v63 = &byte_10007AE40;
                while ( 1 )
                {
                  v65 = v140 + 32 * v61;
                  v67 = *(const char ***)v65;
                  v66 = *(_QWORD *)(v65 + 8);
                  if ( (v66 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
                  {
                    v68 = 8 * v66;
                    v64 = *(const char ***)v65;
                    while ( strcmp(v63, *v64) )
                    {
                      ++v64;
                      v68 -= 8;
                      if ( !v68 )
                        goto LABEL_75;
                    }
                  }
                  else
                  {
                    v64 = *(const char ***)v65;
                  }
                  if ( v64 != &v67[v66] )
                    break;
LABEL_75:
                  v61 = ++v62;
                  if ( v49 <= v62 )
                  {
                    v3 = v135;
                    v41 = v138;
                    v48 = v133;
                    v42 = v134;
                    if ( v134 == v133 )
                      goto LABEL_126;
                    goto LABEL_121;
                  }
                }
                v48 = *(unsigned int *)(v65 + 24);
                LODWORD(v146) = v48;
                v3 = v135;
                v41 = v138;
                v42 = v134;
                if ( v134 == (_DWORD)v48 )
                  goto LABEL_126;
LABEL_121:
                v90 = __s1;
                v91 = *(char **)(v4 + 168);
                if ( v91 >= __s1 )
                {
                  v94 = v48;
                }
                else
                {
                  v92 = sub_1000311EC(*(_BYTE **)(v4 + 160), v91);
                  v93 = sub_1000311EC(*(_BYTE **)(v4 + 168), v90);
                  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v92, v93, v42);
                  *(_QWORD *)(v4 + 168) = v90;
                  v91 = v90;
                  v90 = __s1;
                  v94 = (unsigned int)v146;
                }
                v95 = &v90[v41];
                __s1 = v95;
                if ( v91 < v95 )
                {
                  v96 = sub_1000311EC(*(_BYTE **)(v4 + 160), v91);
                  v97 = sub_1000311EC(*(_BYTE **)(v4 + 168), v95);
                  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v96, v97, v94);
                  *(_QWORD *)(v4 + 168) = v95;
                }
                goto LABEL_126;
              }
            }
          }
          else
          {
            v48 = v42;
            v49 = *(_QWORD *)(v4 + 48);
            if ( v49 )
              goto LABEL_70;
          }
          if ( (_DWORD)v42 != (_DWORD)v48 )
            goto LABEL_121;
LABEL_126:
          if ( v143 )
          {
            v144 = 0;
            qfree(v143);
          }
          if ( (_DWORD)v42 == (_DWORD)v48 )
          {
            v139 = 0;
            v50 = __s1;
            if ( !__s1 )
              goto LABEL_130;
LABEL_60:
            v143 = v50;
            v51 = get_utf8_char((char **)&v143);
            if ( !v51 )
              goto LABEL_130;
            v143 = nullptr;
            v144 = 0;
            v145 = 0;
            if ( v137
              && (v137 == -1 ? (v52 = nullptr) : (v52 = qvector_reserve(&v143, nullptr, v137 + 1, 1u), v143 = v52),
                  v144 = v137 + 1,
                  memmove(v52, v136, v137),
                  *((_BYTE *)v143 + v137) = 0,
                  v144) )
            {
              v69 = (char *)v143;
            }
            else
            {
              v69 = &byte_10007AE40;
            }
            v70 = qustrlen(v69);
            if ( (unsigned int)(v51 - 48) >= 0xA )
            {
              v71 = 0;
              v72 = v51 - 43;
              if ( (unsigned int)(v51 - 43) > 0x3A )
                goto LABEL_107;
              if ( ((1LL << v72) & 0x400000004000008LL) == 0 )
              {
                if ( ((1LL << v72) & 5) == 0 )
                  goto LABEL_107;
                if ( v50 != v136 )
                {
                  v146 = v50;
                  prev_utf8_char(nullptr, (unsigned __int64 *)&v146, (unsigned __int64)v136);
                  v89 = get_utf8_char(&v146);
                  v71 = 0;
                  if ( v89 == 46 || (unsigned int)(v89 - 58) > 0xFFFFFFF5 || (v89 & 0xFFFFFFDF) - 91 > 0xFFFFFFE5 )
                    goto LABEL_107;
                }
              }
            }
            v73 = v51 == 46;
            v146 = v50;
            skip_utf8(&v146, 1);
            v74 = v70 + 1;
            v75 = get_utf8_char(&v146) & 0xFFFFFFDF;
            v76 = v51 == 48 && v75 == 88;
            v77 = !v76;
            if ( !v76 )
            {
              v71 = 1;
              if ( ((1LL << ((unsigned __int8)v51 - 43)) & 0x400000004000005LL) != 0 )
              {
                if ( v74 < 2 )
                  goto LABEL_106;
                v146 = v50;
                skip_utf8(&v146, 1);
                v78 = get_utf8_char(&v146);
                if ( v78 == 46 || (unsigned int)(v78 - 58) > 0xFFFFFFF5 )
                {
                  v71 = 1;
                  goto LABEL_156;
                }
                v71 = 1;
                if ( (v78 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
                  goto LABEL_106;
              }
LABEL_155:
              if ( v71 >= v74 )
                goto LABEL_107;
              while ( 1 )
              {
LABEL_156:
                v146 = v50;
                if ( v71 < 1 )
                {
                  if ( v71 < 0 )
                  {
LABEL_214:
                    if ( under_debugger != 1 )
                      goto LABEL_215;
                    goto LABEL_216;
                  }
                }
                else
                {
                  skip_utf8(&v146, v71);
                }
                v115 = get_utf8_char(&v146);
                if ( v115 != 46 && (unsigned int)(v115 - 58) <= 0xFFFFFFF5 && (v115 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
                  goto LABEL_107;
                v146 = v50;
                if ( v71 >= 1 )
                  skip_utf8(&v146, v71);
                v116 = get_utf8_char(&v146);
                if ( (unsigned int)(v116 - 48) < 0xA )
                  v117 = 1;
                else
                  v117 = v77;
                if ( (v117 & 1) != 0 )
                {
                  if ( (unsigned int)(v116 - 48) <= 9 )
                    goto LABEL_154;
                }
                else if ( (v116 & 0xFFFFFFDF) - 65 < 6 )
                {
LABEL_154:
                  ++v71;
                  goto LABEL_155;
                }
                if ( v116 != 46 )
                {
                  if ( (v116 & 0xFFFFFFDF) == 0x45 )
                  {
                    v146 = v50;
                    if ( (unsigned __int64)v71 <= 0x7FFFFFFFFFFFFFFELL )
                    {
                      v118 = v71 + 1;
                      skip_utf8(&v146, v71 + 1);
                      v119 = get_utf8_char(&v146);
                      if ( v119 == 43 || v119 == 45 )
                        v118 = v71 + 2;
                      v71 = v118;
                      if ( v118 < v74 )
                      {
                        while ( 1 )
                        {
                          v146 = v50;
                          if ( v71 <= 0 )
                          {
                            if ( v71 < 0 )
                              goto LABEL_214;
                          }
                          else
                          {
                            skip_utf8(&v146, v71);
                          }
                          v120 = get_utf8_char(&v146);
                          if ( v120 != 46
                            && (unsigned int)(v120 - 58) <= 0xFFFFFFF5
                            && (v120 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
                          {
                            break;
                          }
                          v146 = v50;
                          if ( v71 >= 1 )
                            skip_utf8(&v146, v71);
                          v116 = get_utf8_char(&v146);
                          v121 = (unsigned int)(v116 - 48) >= 0xA;
                          if ( (unsigned int)(v116 - 48) < 0xA )
                            v122 = 1;
                          else
                            v122 = v77;
                          if ( (v122 & 1) == 0 )
                            v121 = (v116 & 0xFFFFFFDF) - 65 >= 6;
                          if ( v121 )
                          {
                            if ( v116 != 46 )
                              goto LABEL_199;
                            if ( v73 )
                              goto LABEL_106;
                            ++v71;
                            v73 = 1;
                            if ( v71 >= v74 )
                              goto LABEL_107;
                          }
                          else if ( ++v71 >= v74 )
                          {
                            goto LABEL_107;
                          }
                        }
                      }
                      goto LABEL_107;
                    }
                    if ( under_debugger != 1 )
LABEL_215:
                      interr(1834);
LABEL_216:
                    __break(1u);
                  }
LABEL_199:
                  v123 = v71;
                  if ( v116 == 76 )
                  {
                    ++v71;
                    if ( v123 + 1 >= v74
                      || (sub_1000327B4(v50, v123 + 1, 0), v124 != 46)
                      && (unsigned int)(v124 - 58) <= 0xFFFFFFF5
                      && (v124 & 0xFFFFFFDF) - 91 <= 0xFFFFFFE5 )
                    {
                      sub_1000327B4(v50, v123 - 1, (unsigned __int64)v136);
                      v126 = (unsigned int)(v125 - 48) >= 0xA;
                      if ( (unsigned int)(v125 - 48) < 0xA )
                        v127 = 1;
                      else
                        v127 = v77;
                      if ( (v127 & 1) == 0 )
                        v126 = (v125 & 0xFFFFFFDF) - 65 >= 6;
                      if ( !v126 )
                        goto LABEL_107;
                    }
                  }
LABEL_106:
                  v71 = 0;
                  goto LABEL_107;
                }
                if ( v73 )
                  goto LABEL_106;
                ++v71;
                v73 = 1;
                if ( v71 >= v74 )
                  goto LABEL_107;
              }
            }
            v146 = v50;
            skip_utf8(&v146, 2);
            v79 = get_utf8_char(&v146);
            if ( v79 != 46 && (unsigned int)(v79 - 58) <= 0xFFFFFFF5 )
            {
              v71 = 2;
              if ( (v79 & 0xFFFFFFDF) - 91 < 0xFFFFFFE6 )
                goto LABEL_106;
              goto LABEL_155;
            }
            v71 = 2;
            if ( v74 > 2 )
              goto LABEL_156;
LABEL_107:
            if ( v143 )
            {
              v144 = 0;
              qfree(v143);
            }
            if ( !v71 )
              goto LABEL_130;
            v80 = __s1;
            v81 = *(char **)(v4 + 168);
            if ( v81 < __s1 )
            {
              v82 = *(unsigned int *)(v4 + 176);
              v83 = sub_1000311EC(*(_BYTE **)(v4 + 160), v81);
              v84 = sub_1000311EC(*(_BYTE **)(v4 + 168), v80);
              (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v83, v84, v82);
              *(_QWORD *)(v4 + 168) = v80;
            }
            skip_utf8(&__s1, v71);
            v85 = __s1;
            v86 = *(char **)(v4 + 168);
            if ( v86 < __s1 )
            {
              v87 = sub_1000311EC(*(_BYTE **)(v4 + 160), v86);
              v88 = sub_1000311EC(*(_BYTE **)(v4 + 168), v85);
              (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v87, v88, 7);
              *(_QWORD *)(v4 + 168) = v85;
            }
          }
        }
        else
        {
LABEL_59:
          v138 = 0;
          v139 = 1;
          v50 = __s1;
          if ( __s1 )
            goto LABEL_60;
LABEL_130:
          v98 = *(_QWORD *)(v4 + 144);
          if ( (v98 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
          {
            v99 = *(_QWORD **)(v4 + 136);
            v100 = 8 * v98;
            do
            {
              v101 = (*(__int64 (__fastcall **)(_QWORD, void **, char *))(*(_QWORD *)*v99 + 16LL))(*v99, &v143, __s1);
              if ( v101 >= 1 )
              {
                v102 = __s1;
                v103 = *(char **)(v4 + 168);
                if ( v103 < __s1 )
                {
                  v104 = *(unsigned int *)(v4 + 176);
                  v105 = sub_1000311EC(*(_BYTE **)(v4 + 160), v103);
                  v106 = sub_1000311EC(*(_BYTE **)(v4 + 168), v102);
                  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(
                    a2,
                    v105,
                    v106,
                    v104);
                  *(_QWORD *)(v4 + 168) = v102;
                }
                skip_utf8(&__s1, v101);
                v107 = __s1;
                v108 = *(char **)(v4 + 168);
                if ( v108 < __s1 )
                {
                  v109 = (unsigned int)v143;
                  v110 = sub_1000311EC(*(_BYTE **)(v4 + 160), v108);
                  v111 = sub_1000311EC(*(_BYTE **)(v4 + 168), v107);
                  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(
                    a2,
                    v110,
                    v111,
                    v109);
                  *(_QWORD *)(v4 + 168) = v107;
                }
                *(_DWORD *)(v4 + 176) = *(_DWORD *)(v4 + 116);
              }
              ++v99;
              v100 -= 8;
            }
            while ( v100 );
          }
          if ( v139 )
          {
            v143 = __s1;
            for ( i = get_utf8_char((char **)&v143);
                  i == 46 || (unsigned int)(i - 58) > 0xFFFFFFF5 || (i & 0xFFFFFFDF) - 91 >= 0xFFFFFFE6;
                  i = get_utf8_char((char **)&v143) )
            {
              v113 = get_utf8_char(&__s1);
              v114 = __s1;
              if ( v113 == -1 )
                v114 = ++__s1;
              v143 = v114;
            }
          }
          else
          {
            __s1 += v138;
          }
          if ( v7 == __s1 )
          {
LABEL_21:
            if ( (unsigned int)get_utf8_char(&__s1) == -1 )
              ++__s1;
          }
        }
      }
    }
  }
  v128 = __s1;
  v129 = *(char **)(v4 + 168);
  if ( v129 < __s1 )
  {
    v130 = *(unsigned int *)(v4 + 176);
    v131 = sub_1000311EC(*(_BYTE **)(v4 + 160), v129);
    v132 = sub_1000311EC(*(_BYTE **)(v4 + 168), v128);
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(
               a2,
               v131,
               v132,
               v130);
    *(_QWORD *)(v4 + 168) = v128;
  }
  return result;
}
// 100031F04: conditional instruction was optimized away because w24.4 is in (2B..65)
// 100032410: conditional instruction was optimized away because x26.8>=2u
// 100032614: variable 'v124' is possibly undefined
// 100032644: variable 'v125' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A590D: using guessed type char under_debugger;
