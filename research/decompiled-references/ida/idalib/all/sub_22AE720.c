__int64 __fastcall sub_22AE720(__int64 a1, _BYTE *a2, unsigned __int64 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int64 v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // r8
  const char *v10; // rax
  __int32 v12; // r14d
  size_t v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rcx
  unsigned __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // r12
  __int64 v24; // rbp
  void *v25; // rdi
  __int64 v26; // r13
  size_t v27; // rax
  char **v28; // r14
  size_t v29; // rdx
  unsigned __int64 v30; // r15
  _BYTE *v31; // rsi
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r15
  char *v35; // rax
  __int64 v36; // rax
  __m128i *v37; // r14
  __int64 v38; // rax
  const char **v39; // rbp
  const char **v40; // r13
  char *v41; // r12
  size_t v42; // rsi
  __int32 v43; // edx
  _QWORD *v44; // r15
  __m128i *v45; // rax
  unsigned __int64 v46; // r13
  size_t v47; // rbp
  __int8 *v48; // r13
  unsigned __int64 v49; // rbx
  _BYTE *v50; // rax
  unsigned __int64 v51; // rdx
  std::_V2 *v52; // r12
  _QWORD *v53; // rbp
  __int64 v54; // r8
  __int64 v55; // r9
  char v56; // dl
  char v57; // bp
  __int8 v58; // bp
  char *v59; // rax
  char *v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // r15
  char *v64; // r14
  unsigned __int64 v65; // rbp
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  size_t v69; // rax
  char *v70; // r9
  int v71; // edx
  __int64 i; // r15
  char v73; // cl
  unsigned __int64 v74; // rax
  int v75; // esi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  size_t v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __m128i *v89; // rax
  __m128i *v90; // r14
  const __m128i *v91; // rdx
  const __m128i *v92; // rsi
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int8 v96; // al
  __int64 v97; // r12
  __m128i *v98; // r15
  char *v99; // r13
  char *v100; // rbp
  size_t v101; // rax
  __int32 v102; // edx
  _QWORD *v103; // r13
  __m128i *v104; // rax
  char *v107; // [rsp+10h] [rbp-1F8h]
  size_t v108; // [rsp+28h] [rbp-1E0h]
  const char *v109; // [rsp+30h] [rbp-1D8h]
  void *s1; // [rsp+40h] [rbp-1C8h] BYREF
  size_t v111; // [rsp+48h] [rbp-1C0h]
  char v112; // [rsp+57h] [rbp-1B1h] BYREF
  __int64 v113; // [rsp+58h] [rbp-1B0h] BYREF
  unsigned int v114; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v115; // [rsp+64h] [rbp-1A4h] BYREF
  unsigned int v116; // [rsp+6Ch] [rbp-19Ch] BYREF
  void *v117; // [rsp+70h] [rbp-198h] BYREF
  __int64 v118; // [rsp+78h] [rbp-190h] BYREF
  __m128i v119; // [rsp+80h] [rbp-188h] BYREF
  const char *v120; // [rsp+90h] [rbp-178h]
  size_t v121; // [rsp+98h] [rbp-170h]
  __int16 v122; // [rsp+A0h] [rbp-168h]
  __m128i v123[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int16 v124; // [rsp+D0h] [rbp-138h]
  __m128i v125; // [rsp+E0h] [rbp-128h] BYREF
  const char *v126; // [rsp+F0h] [rbp-118h]
  __int16 v127; // [rsp+100h] [rbp-108h]
  __m128i v128[2]; // [rsp+110h] [rbp-F8h] BYREF
  __int16 v129; // [rsp+130h] [rbp-D8h]
  __m128i v130; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v131; // [rsp+150h] [rbp-B8h]
  __int64 v132; // [rsp+158h] [rbp-B0h]
  __int16 v133; // [rsp+160h] [rbp-A8h]
  __m128i v134; // [rsp+170h] [rbp-98h] BYREF
  _BYTE v135[16]; // [rsp+180h] [rbp-88h] BYREF
  __int16 v136; // [rsp+190h] [rbp-78h]
  __m128i v137; // [rsp+1A0h] [rbp-68h] BYREF
  _BYTE v138[16]; // [rsp+1B0h] [rbp-58h] BYREF
  __int16 v139; // [rsp+1C0h] [rbp-48h]

  v7 = a1;
  s1 = a2;
  v111 = a3;
  v8 = sub_22A8490(a2, &a2[a3]);
  if ( v8 != v9 )
  {
    v10 = "string may only contain [a-z0-9_]";
LABEL_3:
    v137.m128i_i64[0] = (__int64)v10;
    v139 = 259;
    sub_22A8430((std::_V2 *)&v134, &v137);
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v134.m128i_i64[0];
    return v7;
  }
  v12 = 32;
  v13 = j__strlen("rv32");
  if ( !(unsigned __int8)sub_11899B0((const void **)&s1, "rv32", v13) )
  {
    v12 = 64;
    v27 = j__strlen("rv64");
    if ( !(unsigned __int8)sub_11899B0((const void **)&s1, "rv64", v27) )
    {
      v28 = (char **)sub_22A85B0((__int64)(&off_2BF3DE0 - 40), (__int64)&off_2BF3DE0, (__int64)&s1);
      if ( v28 != &off_2BF3CA0 )
      {
        v29 = (size_t)*(v28 - 3);
        v30 = v111;
        if ( v111 >= v29 && (!v29 || !memcmp(s1, *(v28 - 4), v29)) )
          goto LABEL_24;
      }
      v28 = (char **)sub_22A85B0((__int64)(&off_2BF3CA0 - 4), (__int64)&off_2BF3CA0, (__int64)&s1);
      if ( v28 != &off_2BF3C80 )
      {
        v80 = (size_t)*(v28 - 3);
        v30 = v111;
        if ( v111 >= v80 && (!v80 || !memcmp(s1, *(v28 - 4), v80)) )
        {
          if ( !a4 )
          {
            v134.m128i_i64[0] = (__int64)"'";
            v136 = 259;
            v133 = 1283;
            v130.m128i_i64[0] = (__int64)"requires '-menable-experimental-extensions' for profile '";
            v131 = (__int64)*(v28 - 4);
            v132 = (__int64)*(v28 - 3);
            sub_A41580(&v137, &v130, &v134, v77, v78, v79);
            sub_22A8430((std::_V2 *)v128, &v137);
            v81 = v128[0].m128i_i64[0];
            *(_BYTE *)(a1 + 8) |= 1u;
            *(_QWORD *)a1 = v81;
            return v7;
          }
LABEL_24:
          v31 = *(v28 - 2);
          if ( v31 )
          {
            v32 = (__int64)&(*(v28 - 1))[(_QWORD)v31];
            v134.m128i_i64[0] = (__int64)v135;
            sub_22A8AD0(&v134, v31, v32);
            v30 = v111;
          }
          else
          {
            v135[0] = 0;
            v134.m128i_i64[0] = (__int64)v135;
            v134.m128i_i64[1] = 0;
          }
          v33 = (unsigned __int64)*(v28 - 3);
          if ( v33 <= v30 )
          {
            v34 = v30 - v33;
            v35 = (char *)s1 + v33;
            if ( v34 == -1 || v34 )
            {
              if ( *v35 != 95 )
              {
                v137.m128i_i64[0] = (__int64)"additional extensions must be after separator '_'";
                v139 = 259;
                sub_22A8430((std::_V2 *)&v130, &v137);
                v36 = v130.m128i_i64[0];
                *(_BYTE *)(a1 + 8) |= 1u;
                *(_QWORD *)a1 = v36;
                goto LABEL_30;
              }
              v137.m128i_i64[0] = (__int64)v138;
              sub_22A8AD0(&v137, v35, (__int64)&v35[v34]);
              sub_9EE560(&v134, v137.m128i_i64[0], v137.m128i_u64[1]);
              if ( (_BYTE *)v137.m128i_i64[0] != v138 )
                operator delete((void *)v137.m128i_i64[0]);
            }
          }
          sub_22AE720(a1, v134.m128i_i64[0], v134.m128i_i64[1], a4, a5);
LABEL_30:
          if ( (_BYTE *)v134.m128i_i64[0] != v135 )
            operator delete((void *)v134.m128i_i64[0]);
          return v7;
        }
      }
LABEL_7:
      v10 = "string must begin with rv32{i,e,g}, rv64{i,e,g}, or a supported profile name";
      goto LABEL_3;
    }
  }
  if ( !v111 )
    goto LABEL_7;
  v14 = (_QWORD *)operator new(0x48u);
  v17 = (char *)s1;
  *(_DWORD *)v14 = v12;
  v14[6] = v14 + 4;
  v14[7] = v14 + 4;
  v18 = v111;
  *(_QWORD *)((char *)v14 + 4) = 0;
  *(_QWORD *)((char *)v14 + 12) = 0;
  *((_DWORD *)v14 + 8) = 0;
  v14[5] = 0;
  v14[8] = 0;
  v117 = v14;
  v19 = *v17;
  v112 = *v17;
  if ( v18 )
  {
    --v18;
    ++v17;
  }
  s1 = v17;
  v111 = v18;
  if ( v19 == 103 )
  {
    if ( v18 && (unsigned __int8)(*v17 - 48) <= 9u )
    {
      v137.m128i_i64[0] = (__int64)"version not supported for 'g'";
      v139 = 259;
      sub_22A8430((std::_V2 *)&v134, &v137);
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v134.m128i_i64[0];
      goto LABEL_14;
    }
    v114 = 0;
    v39 = (const char **)&off_2CCB1A0;
    v37 = &v137;
    v40 = (const char **)(&off_2CCB1A0 + 5);
    do
    {
      while ( 1 )
      {
        v41 = (char *)*v39;
        v42 = 0;
        if ( *v39 )
          v42 = j__strlen(*v39);
        v134.m128i_i64[0] = (__int64)sub_22A8BD0(v41, v42);
        v134.m128i_i32[2] = v43;
        v44 = (char *)v117 + 24;
        sub_22A8B90(&v137, v41);
        v45 = sub_22ABDA0(v44, &v137);
        v45->m128i_i64[0] = v134.m128i_i64[0];
        if ( (_BYTE *)v137.m128i_i64[0] == v138 )
          break;
        operator delete((void *)v137.m128i_i64[0]);
        if ( ++v39 == v40 )
          goto LABEL_43;
      }
      ++v39;
    }
    while ( v40 != v39 );
  }
  else
  {
    if ( v19 != 105 && v19 != 101 )
    {
      v134.m128i_i64[0] = (__int64)"' should be 'e', 'i' or 'g'";
      v128[0].m128i_i64[0] = (__int64)"first letter after 'rv";
      v129 = 259;
      v136 = 259;
      v127 = 265;
      v125.m128i_i32[0] = v12;
      sub_A41580(&v130, v128, &v125, (__int64)v17, v15, v16);
      sub_A41580(&v137, &v130, &v134, v20, v21, v22);
      sub_22A8430((std::_V2 *)v123, &v137);
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v123[0].m128i_i64[0];
      goto LABEL_14;
    }
    v37 = &v137;
    sub_22AD6D0((std::_V2 *)&v137, &v112, 1u, (char *)s1, v111, (int *)&v113, (int *)&v113 + 1, &v114, a4, a5);
    v38 = v137.m128i_i64[0];
    if ( v137.m128i_i64[0] )
    {
LABEL_35:
      *(_BYTE *)(v7 + 8) |= 1u;
      *(_QWORD *)v7 = v38;
      goto LABEL_14;
    }
    v137.m128i_i64[1] = 1;
    v137.m128i_i64[0] = (__int64)v138;
    v138[1] = 0;
    v138[0] = v112;
    v89 = sub_22ABDA0((_QWORD *)v117 + 3, &v137);
    v89->m128i_i64[0] = v113;
    if ( (_BYTE *)v137.m128i_i64[0] != v138 )
      operator delete((void *)v137.m128i_i64[0]);
  }
LABEL_43:
  if ( v114 > v111 )
  {
    s1 = (char *)s1 + v111;
    v111 = 0;
    goto LABEL_112;
  }
  v46 = v111 - v114;
  s1 = (char *)s1 + v114;
  v111 = v46;
  if ( !v46 )
    goto LABEL_112;
  v47 = v46;
  while ( 2 )
  {
    v48 = (__int8 *)s1;
    if ( *(_BYTE *)s1 == 95 )
    {
      if ( v47 == 1 || *((_BYTE *)s1 + 1) == 95 )
      {
        v7 = a1;
        v137.m128i_i64[0] = (__int64)"extension name missing after separator '_'";
        v139 = 259;
        sub_22A8430((std::_V2 *)&v134, v37);
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v134.m128i_i64[0];
        goto LABEL_14;
      }
      --v47;
      s1 = (char *)s1 + 1;
      v48 = (__int8 *)s1;
      v111 = v47;
      v50 = memchr(s1, 95, v47);
      if ( !v50 )
        goto LABEL_110;
    }
    else
    {
      v49 = -1;
      v50 = memchr(s1, 95, v47);
      if ( !v50 )
        goto LABEL_49;
    }
    v49 = v50 - v48;
LABEL_49:
    v51 = v47 - v49;
    if ( v47 < v49 )
    {
LABEL_110:
      v49 = v47;
      v51 = 0;
    }
    v111 = v51;
    v52 = (std::_V2 *)v37;
    s1 = &v48[v49];
    while ( 1 )
    {
      v58 = *v48;
      v59 = (char *)memchr("mafdqlcbkjtpvnh", *v48, 0xFu);
      if ( !v59 || v59 == "" )
      {
        if ( (v58 & 0xFD) != 0x78 && v58 != 115 )
        {
          v134.m128i_i64[0] = (__int64)"'";
          v7 = a1;
          v90 = (__m128i *)v52;
          v91 = &v125;
          v136 = 259;
          v96 = *v48;
          v92 = v128;
          v129 = 259;
          v125.m128i_i8[0] = v96;
          v127 = 264;
          v128[0].m128i_i64[0] = (__int64)"invalid standard user-level extension '";
          goto LABEL_127;
        }
        if ( v49 )
        {
          if ( v58 == 115 )
          {
            v69 = j__strlen("s");
            v108 = 35;
            v70 = (char *)"s";
            v109 = "standard supervisor-level extension";
          }
          else if ( v58 == 120 )
          {
            v69 = j__strlen("x");
            v108 = 33;
            v70 = (char *)"x";
            v109 = "non-standard user-level extension";
          }
          else
          {
            v69 = j__strlen("z");
            v108 = 29;
            v70 = "z";
            v109 = "standard user-level extension";
          }
          v71 = v49 - 1;
          i = (int)v49 - 1;
          if ( (int)v49 - 1 > 0 )
          {
            v73 = v48[v71];
            if ( (unsigned __int8)(v73 - 48) > 9u )
            {
LABEL_87:
              if ( v73 == 112 )
              {
                v75 = v71 - 1;
                if ( (unsigned __int8)(v48[v71 - 1] - 48) <= 9u )
                {
                  v76 = v71 - 2;
                  if ( v75 )
                  {
                    while ( (_DWORD)v76 )
                    {
                      if ( (unsigned __int8)(v48[v76] - 48) > 9u )
                      {
                        v63 = v76 + 1;
                        goto LABEL_80;
                      }
                      --v76;
                    }
                  }
                  v63 = 1;
                  goto LABEL_80;
                }
              }
            }
            else
            {
              for ( i = v71 - 1LL; --v71; --i )
              {
                v73 = v48[i];
                if ( (unsigned __int8)(v73 - 48) > 9u )
                  goto LABEL_87;
              }
            }
          }
        }
        else
        {
          v69 = 0;
          v70 = nullptr;
          v108 = 0;
          i = -1;
          v109 = nullptr;
        }
        v63 = i + 1;
LABEL_80:
        if ( v49 <= v63 )
          v63 = v49;
        v64 = &v48[v63];
        v65 = v49 - v63;
        if ( v69 != v63 )
        {
          v107 = nullptr;
          v49 = 0;
          goto LABEL_61;
        }
        v128[0].m128i_i64[1] = v69;
        v90 = (__m128i *)v52;
        v60 = "'";
        v61 = 261;
        v128[0].m128i_i64[0] = (__int64)v70;
        v62 = 773;
        v125.m128i_i64[0] = (__int64)v109;
        v91 = v128;
        v134.m128i_i64[0] = (__int64)"'";
        v7 = a1;
        v92 = &v125;
        v125.m128i_i64[1] = v108;
        v136 = 259;
        v129 = 261;
        v127 = 773;
        v126 = " name missing after '";
LABEL_127:
        sub_A41580(&v130, v92, v91, (__int64)v60, v61, v62);
        sub_A41580(v90, &v130, &v134, v93, v94, v95);
        sub_22A8430((std::_V2 *)v123, v90);
        *(_BYTE *)(v7 + 8) |= 1u;
        *(_QWORD *)v7 = v123[0].m128i_i64[0];
        goto LABEL_14;
      }
      if ( v49 > 1 || (v107 = v48, v63 = 0, v49) )
      {
        --v49;
        v63 = 1;
        v107 = v48 + 1;
      }
      v64 = v107;
      v65 = v49;
      v108 = j__strlen("standard user-level extension");
      v109 = "standard user-level extension";
LABEL_61:
      sub_22AD6D0(v52, v48, v63, v64, v65, (int *)&v115, (int *)&v115 + 1, &v116, a4, a5);
      v38 = v137.m128i_i64[0];
      if ( v137.m128i_i64[0] )
      {
        v7 = a1;
        goto LABEL_35;
      }
      if ( v63 == 1 )
      {
        v74 = v116;
        if ( v116 > v49 )
        {
          v74 = v49;
          v49 = 0;
        }
        else
        {
          v49 -= v116;
        }
        v107 += v74;
      }
      if ( !(unsigned __int8)sub_22A9170(v48, v63) )
      {
        v7 = a1;
        sub_22A8EB0(v52, v48, v63, v66, v67);
        v68 = v137.m128i_i64[0];
        v23 = v117;
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v68;
        if ( v23 )
          goto LABEL_15;
        return v7;
      }
      v53 = v117;
      v134.m128i_i64[0] = v115;
      v137.m128i_i64[0] = (__int64)v52 + 16;
      sub_22A8AD0(v52, v48, (__int64)&v48[v63]);
      sub_22AAB40(v53 + 3, (__m128i *)v52, v134.m128i_i64);
      v57 = v56;
      if ( (std::_V2 *)v137.m128i_i64[0] != (std::_V2 *)((char *)v52 + 16) )
        operator delete((void *)v137.m128i_i64[0]);
      if ( !v57 )
      {
        v134.m128i_i64[0] = (__int64)"'";
        v136 = 259;
        v7 = a1;
        v123[0].m128i_i64[0] = (__int64)" '";
        v119.m128i_i64[0] = (__int64)"duplicated ";
        v129 = 261;
        v120 = v109;
        v122 = 1283;
        v121 = v108;
        v124 = 259;
        v128[0].m128i_i64[0] = (__int64)v48;
        v128[0].m128i_i64[1] = v63;
        sub_A41580(&v125, &v119, v123, 259, v54, v55);
        sub_A41580(&v130, &v125, v128, v82, v83, v84);
        sub_A41580((__m128i *)v52, &v130, &v134, v85, v86, v87);
        sub_22A8430((std::_V2 *)&v118, (_QWORD **)v52);
        v88 = v118;
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v88;
        goto LABEL_14;
      }
      if ( !v49 )
        break;
      v48 = v107;
    }
    v47 = v111;
    v37 = (__m128i *)v52;
    if ( v111 )
      continue;
    break;
  }
  v7 = a1;
LABEL_112:
  if ( v112 == 103 )
  {
    v97 = 0;
    v98 = v37 + 1;
    do
    {
      v99 = (char *)v117;
      v100 = off_2CCB180[v97];
      sub_22A8B90(v37, v100);
      if ( v99 + 32 == (char *)sub_22A98A0((__int64)(v99 + 24), (__int64)v37) )
      {
        if ( (__m128i *)v137.m128i_i64[0] != v98 )
          operator delete((void *)v137.m128i_i64[0]);
        v101 = 0;
        if ( v100 )
          v101 = j__strlen(v100);
        v134.m128i_i64[0] = (__int64)sub_22A8BD0(v100, v101);
        v134.m128i_i32[2] = v102;
        v103 = (char *)v117 + 24;
        sub_22A8B90(v37, v100);
        v104 = sub_22ABDA0(v103, v37);
        v104->m128i_i64[0] = v134.m128i_i64[0];
      }
      if ( (__m128i *)v137.m128i_i64[0] != v98 )
        operator delete((void *)v137.m128i_i64[0]);
      ++v97;
    }
    while ( v97 != 2 );
  }
  sub_22AD270(v7, (__int64 *)&v117);
LABEL_14:
  v23 = v117;
  if ( v117 )
  {
LABEL_15:
    v24 = v23[5];
    if ( v24 )
    {
      while ( 1 )
      {
        sub_1050CC0((__int64)(v23 + 3), *(_QWORD **)(v24 + 24));
        v25 = *(void **)(v24 + 32);
        v26 = *(_QWORD *)(v24 + 16);
        if ( v25 == (void *)(v24 + 48) )
        {
          operator delete((void *)v24);
          if ( !v26 )
            break;
        }
        else
        {
          operator delete(v25);
          operator delete((void *)v24);
          if ( !v26 )
            break;
        }
        v24 = v26;
      }
    }
    operator delete(v23, 0x48u);
  }
  return v7;
}
