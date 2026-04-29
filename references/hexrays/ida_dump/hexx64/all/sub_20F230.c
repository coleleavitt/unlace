__int64 __fastcall sub_20F230(__int64 *a1, const char *p_endptr, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // r13
  __int64 v8; // rbx
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 tinfo_property; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  size_t v16; // r12
  bool v17; // r14
  char *v18; // r15
  unsigned int v19; // edi
  int v20; // eax
  char *v21; // rdi
  char v22; // r15
  unsigned int v23; // r12d
  __int64 v25; // r12
  int v26; // eax
  _BYTE *v27; // rax
  char v28; // dl
  _BYTE *v29; // rax
  const char *v30; // rcx
  __int64 *v31; // r14
  __int64 v32; // r12
  __int64 j; // rdx
  char v34; // al
  bool v35; // r15
  __int64 v36; // r12
  unsigned __int64 v37; // r13
  __int64 v38; // r14
  int v39; // eax
  int tinfo_size; // eax
  const char *v41; // rsi
  size_t v42; // r12
  __int64 v43; // r13
  size_t v44; // r14
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  __int64 v49; // rbx
  size_t v50; // r12
  __int64 v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdi
  int v55; // r12d
  char v56; // al
  __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r12
  unsigned __int64 v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rdi
  char v65; // al
  __int64 v66; // rdx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // r12
  unsigned __int64 v70; // r13
  __int64 v71; // rsi
  unsigned int v72; // edi
  __int64 v73; // rax
  __m128i v74; // xmm0
  __m128i v75; // xmm1
  __int64 v76; // rax
  __int64 v77; // rax
  _DWORD *v78; // rdi
  unsigned __int64 v79; // r13
  __int64 v80; // rax
  const void *v81; // r14
  char *v82; // r12
  __int64 v83; // rax
  char *v84; // rdi
  const char *v85; // r12
  __int64 v86; // rdx
  char *v87; // rdx
  const char *v88; // rdi
  int v89; // eax
  __int64 v90; // [rsp+8h] [rbp-168h]
  const char *v91; // [rsp+8h] [rbp-168h]
  char *s; // [rsp+10h] [rbp-160h]
  char *sa; // [rsp+10h] [rbp-160h]
  __int64 v95; // [rsp+28h] [rbp-148h] BYREF
  char *endptr; // [rsp+30h] [rbp-140h] BYREF
  __int64 v97; // [rsp+38h] [rbp-138h] BYREF
  char *v98; // [rsp+40h] [rbp-130h] BYREF
  __int128 v99; // [rsp+48h] [rbp-128h]
  char *s1; // [rsp+60h] [rbp-110h] BYREF
  __int64 v101; // [rsp+68h] [rbp-108h]
  __int64 v102; // [rsp+80h] [rbp-F0h] BYREF
  __int128 v103; // [rsp+88h] [rbp-E8h]
  _BYTE v104[24]; // [rsp+A0h] [rbp-D0h] BYREF
  __m128i v105; // [rsp+B8h] [rbp-B8h] BYREF
  __int64 v106; // [rsp+C8h] [rbp-A8h]
  __int128 v107; // [rsp+D0h] [rbp-A0h]
  _OWORD v108[3]; // [rsp+E0h] [rbp-90h] BYREF
  __int64 v109; // [rsp+110h] [rbp-60h]
  int v110; // [rsp+118h] [rbp-58h]
  __int64 v111; // [rsp+120h] [rbp-50h]
  char v112; // [rsp+128h] [rbp-48h]
  unsigned __int64 i; // [rsp+138h] [rbp-38h]

  v6 = (__int64)p_endptr;
  v8 = a4;
  v9 = *(_DWORD *)(a4 + 8);
  for ( i = __readfsqword(0x28u); v9 == 48; v9 = *(_DWORD *)(v8 + 8) )
    v8 = *(_QWORD *)(v8 + 24);
  switch ( v9 )
  {
    case '4':
      if ( !(unsigned __int8)sub_20F230(a1, p_endptr, a3, *(_QWORD *)(v8 + 24), a5 | 1) )
        return 0;
      if ( !a1 )
        return 1;
      if ( !sub_20CA50(a1) )
        return 0;
      v46 = a1[1];
      v47 = *a1;
      v48 = a1[2];
      if ( v46 )
      {
        v49 = v46 + 2;
        v50 = v46 - 1;
        v51 = v46 + 1;
        if ( v48 >= v46 + 2 )
          goto LABEL_94;
      }
      else
      {
        if ( v48 > 2 )
        {
          a1[1] = 3;
          *(_BYTE *)(v47 + 2) = 0;
LABEL_96:
          *(_WORD *)*a1 = 24432;
          return 1;
        }
        v50 = 0;
        v49 = 3;
        v51 = 2;
      }
      v80 = qvector_reserve(a1, v47, v49, 1);
      *a1 = v80;
      v47 = v80;
LABEL_94:
      a1[1] = v49;
      *(_BYTE *)(v47 + v51) = 0;
      if ( v50 )
        memmove((void *)(*a1 + 2), (const void *)*a1, v50);
      goto LABEL_96;
    case '9':
      memset(v104, 0, sizeof(v104));
      p_endptr = *(const char **)(v8 + 24);
      if ( *((_DWORD *)p_endptr + 2) != 68 )
        goto LABEL_50;
      if ( *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8LL) != 1 )
        goto LABEL_50;
      v91 = (const char *)((**((_BYTE **)p_endptr + 3) == 83) + *((_QWORD *)p_endptr + 3));
      p_endptr = *(const char **)(v8 + 24);
      if ( (int)strlen(v91) <= 5 )
        goto LABEL_50;
      v39 = *(unsigned __int8 *)v91;
      if ( v39 == 76 && v91[1] == 79 )
      {
        s = "_low";
      }
      else
      {
        if ( v39 != 72 || v91[1] != 73 )
          goto LABEL_50;
        s = "_high";
      }
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0);
      if ( tinfo_size > 4 || (tinfo_size & (tinfo_size - 1)) != 0 )
        goto LABEL_152;
      v41 = "BYTE";
      if ( tinfo_size != 1 )
      {
        v41 = "DWORD";
        if ( tinfo_size == 2 )
          v41 = "WORD";
      }
      if ( strcmp(v91 + 2, v41) || !(unsigned __int8)sub_20F230(a1, v6, a3, **(_QWORD **)(v8 + 32), a5) )
      {
LABEL_152:
        p_endptr = *(const char **)(v8 + 24);
LABEL_50:
        if ( (unsigned __int8)sub_20CED0((__int64 *)v104, (__int64)p_endptr) )
        {
          p_endptr = v104;
          if ( (unsigned __int8)sub_20DD40(a1, (__int64)v104, v8) )
            goto LABEL_60;
        }
        if ( a4 != v8 )
          goto LABEL_55;
        v30 = ::s1;
        if ( *(_QWORD *)&v104[8] )
          v30 = *(const char **)v104;
        p_endptr = (const char *)v6;
        if ( (unsigned __int8)sub_20D2E0((__int64)a1, v6, (__int64 *)(v8 + 48), v30, a5) )
        {
LABEL_60:
          v23 = 1;
          v35 = a1 == nullptr;
        }
        else
        {
LABEL_55:
          if ( (a5 & 0x10) == 0 )
          {
            if ( *(_QWORD *)v104 )
            {
              *(_QWORD *)&v104[8] = 0;
              qfree(*(_QWORD *)v104);
            }
            return 0;
          }
          v31 = *(__int64 **)(v8 + 32);
          v32 = *v31;
          for ( j = *v31; v32 != j + 72 * v31[1]; j = *v31 )
          {
            p_endptr = *(const char **)(v6 + 1504);
            v34 = sub_20E840((__int64)a1, (__int64)p_endptr, v32);
            v32 += 72;
            if ( v34 )
              goto LABEL_60;
          }
          v35 = 1;
          v23 = 0;
        }
        if ( *(_QWORD *)v104 )
        {
          *(_QWORD *)&v104[8] = 0;
          qfree(*(_QWORD *)v104);
        }
        goto LABEL_104;
      }
      if ( !a1 )
        return 1;
      v42 = strlen(s);
      v43 = (a1[1] == 0) + a1[1] - 1;
      v44 = v42 + (a1[1] == 0) + a1[1];
      if ( a1[2] < v44 )
        *a1 = qvector_reserve(a1, *a1, v44, 1);
      v45 = *a1;
      a1[1] = v44;
      *(_BYTE *)(v45 + v42 + v43) = 0;
      qmemcpy((void *)(*a1 + v43), s, (unsigned int)v42);
      p_endptr = &s[(unsigned int)v42];
      if ( *(_QWORD *)v104 )
      {
        *(_QWORD *)&v104[8] = 0;
        qfree(*(_QWORD *)v104);
      }
LABEL_105:
      if ( (unsigned __int64)a1[1] <= 1 )
        return 0;
      v52 = *a1;
      v53 = *a1;
      if ( *(_BYTE *)*a1 != 95 )
        goto LABEL_120;
      do
        v54 = (unsigned int)*(char *)++v53;
      while ( (_BYTE)v54 == 95 );
      if ( v52 == v53 )
        goto LABEL_120;
      v55 = v53 - v52;
      v56 = sub_32E500(v54, p_endptr, v52);
      v57 = a1[1];
      if ( v56 )
      {
        if ( v57 )
        {
          v67 = v55;
          v68 = v57 - 1;
          if ( v57 != 1 )
          {
            if ( v55 )
            {
              v69 = 1;
              v70 = 0;
              if ( v67 < v68 )
              {
                v70 = v68 - v67;
                v69 = v57 - v67;
                memmove((void *)*a1, (const void *)(*a1 + v67), v68 - v67);
              }
              v71 = *a1;
              if ( a1[2] < v69 )
              {
                v76 = qvector_reserve(a1, v71, v69, 1);
                *a1 = v76;
                v71 = v76;
              }
              a1[1] = v69;
              *(_BYTE *)(v71 + v70) = 0;
            }
          }
        }
        goto LABEL_120;
      }
      if ( !v57 )
        return 0;
      v58 = v55 - 1;
      v59 = v57 - 1;
      if ( v57 != 1 && v55 != 1 )
      {
        v60 = 1;
        v61 = 0;
        if ( v58 < v59 )
        {
          v61 = v59 - v58;
          v60 = v57 - v58;
          memmove((void *)*a1, (const void *)(*a1 + v58), v59 - v58);
        }
        v62 = *a1;
        if ( a1[2] < v60 )
        {
          v77 = qvector_reserve(a1, v62, v60, 1);
          *a1 = v77;
          v62 = v77;
        }
        a1[1] = v60;
        *(_BYTE *)(v62 + v61) = 0;
        v63 = a1[1];
        if ( !v63 )
          return 0;
        v59 = v63 - 1;
      }
      if ( v59 <= 2 )
        return 0;
LABEL_120:
      if ( *(_DWORD *)(v8 + 8) != 64 && !sub_20CA50(a1) )
        return 0;
      v64 = *a1;
      if ( *(_BYTE *)*a1 == 118 )
      {
        v65 = *(_BYTE *)(v64 + 1);
        if ( v65 )
        {
          v66 = v64 + 1;
          while ( (unsigned __int8)(v65 - 48) <= 9u )
          {
            v65 = *(_BYTE *)++v66;
            if ( !v65 )
              return 0;
          }
        }
      }
      return sub_32E490();
    case ';':
    case '<':
      v11 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v11 + 8) == 65 && *(_DWORD *)(v11 + 32) == a3 )
        return 0;
      v12 = *(_QWORD *)(v11 + 48);
      v95 = 0;
      tinfo_property = get_tinfo_property(v12, 10);
      v112 = 0;
      p_endptr = (const char *)&v95;
      v106 = 0;
      v109 = 1;
      v110 = -1;
      v111 = 0;
      memset(v104, 0, sizeof(v104));
      v105 = 0;
      v107 = 0;
      v108[0] = 0;
      v14 = *(unsigned int *)(v8 + 32);
      v95 = tinfo_property;
      if ( (int)sub_263270(v104, &v95, v14, 0) <= 0 )
        goto LABEL_98;
      if ( (a5 & 0x200) != 0 )
        goto LABEL_141;
      v15 = v105.m128i_i64[0];
      if ( v105.m128i_i64[0] > 1uLL )
      {
        v72 = *(char *)(*(_QWORD *)&v104[16] + v105.m128i_i64[0] - 2);
        v90 = *(_QWORD *)&v104[16];
        if ( v72 > 0x7F || !isxdigit(v72) )
          goto LABEL_141;
      }
      else
      {
        if ( !isxdigit(0) )
          goto LABEL_141;
        if ( !v15 )
        {
          LODWORD(v16) = -1;
          v90 = *(_QWORD *)&v104[16];
LABEL_12:
          v17 = v15 != 0;
          v18 = (char *)(v90 + (int)v16 - 1);
          while ( (int)v16 > 0 )
          {
            if ( (_DWORD)v16 == 1 && !v17 )
            {
              LODWORD(v16) = isxdigit(0) == 0;
              break;
            }
            v19 = *v18;
            if ( v19 > 0x7F )
              break;
            --v18;
            if ( !isxdigit(v19) )
              break;
            LODWORD(v16) = v16 - 1;
          }
          v16 = (int)v16;
          p_endptr = (const char *)&endptr;
          v20 = strtol((const char *)((int)v16 + v90), &endptr, 16);
          if ( v20 == *(_QWORD *)v104 >> 3 && !*endptr )
          {
            if ( !v105.m128i_i64[0] )
            {
              v98 = nullptr;
              v99 = 0;
              goto LABEL_21;
            }
            v98 = nullptr;
            v81 = *(const void **)&v104[16];
            v99 = 0;
            if ( v105.m128i_i64[0] - 1 <= (unsigned __int64)(int)v16 )
              v16 = v105.m128i_i64[0] - 1;
            if ( v16 )
            {
              v98 = (char *)qvector_reserve(&v98, 0, v16 + 1, 1);
              *(_QWORD *)&v99 = v16 + 1;
              memmove(v98, v81, v16);
              v98[v16] = 0;
              if ( (_QWORD)v99 )
              {
                v82 = v98;
                p_endptr = "field_";
                if ( !strcmp(v98, "field_") )
                {
                  if ( !v82 )
                    goto LABEL_98;
                  goto LABEL_173;
                }
                p_endptr = "field_0x";
                if ( !strcmp(v82, "field_0x") || (p_endptr = "gap", !strcmp(v82, "gap")) )
                {
                  if ( !v82 )
                    goto LABEL_98;
LABEL_173:
                  *(_QWORD *)&v99 = 0;
                  qfree(v82);
                  goto LABEL_98;
                }
              }
            }
LABEL_21:
            sub_32BAA0(&s1, v108);
            if ( v105.m128i_i64[0] )
            {
              p_endptr = *(const char **)&v104[16];
              v21 = (char *)::s1;
              if ( !v101 )
                goto LABEL_24;
            }
            else
            {
              p_endptr = ::s1;
              if ( !v101 )
                goto LABEL_178;
            }
            v21 = s1;
LABEL_24:
            if ( strcmp(v21, p_endptr) )
            {
              v97 = 0;
              copy_tinfo_t(&v97, v108);
              while ( (unsigned __int8)((get_tinfo_property(v97, 2) & 0xF) - 10) <= 1u )
              {
                v102 = 0;
                v102 = get_tinfo_property(v97, 13);
                copy_tinfo_t(&v97, &v102);
                clear_tinfo_t(&v102);
              }
              p_endptr = (const char *)&word_2;
              if ( (get_tinfo_property(v97, 2) & 0x2F) == 0xD )
              {
LABEL_29:
                v22 = 0;
                goto LABEL_30;
              }
              set_tinfo_property(&v97, 6, 192);
              v102 = 0;
              v103 = 0;
              p_endptr = nullptr;
              v22 = print_tinfo(&v102, 0, 0, 0, 0, &v97, 0, 0);
              if ( !v22 )
              {
                v86 = v102;
                goto LABEL_191;
              }
              if ( (_QWORD)v99 )
              {
                p_endptr = v98;
                if ( !(_QWORD)v103 )
                {
                  v87 = (char *)v102;
                  v88 = ::s1;
                  goto LABEL_197;
                }
              }
              else
              {
                if ( !(_QWORD)v103 )
                {
                  v86 = v102;
                  goto LABEL_198;
                }
                p_endptr = ::s1;
              }
              v87 = (char *)v102;
              v88 = (const char *)v102;
LABEL_197:
              sa = v87;
              v89 = strcmp(v88, p_endptr);
              v86 = (__int64)sa;
              if ( v89 )
              {
LABEL_191:
                if ( v86 )
                {
                  *(_QWORD *)&v103 = 0;
                  qfree(v86);
                }
                goto LABEL_29;
              }
LABEL_198:
              if ( v86 )
              {
                *(_QWORD *)&v103 = 0;
                qfree(v86);
              }
LABEL_30:
              clear_tinfo_t(&v97);
              if ( s1 )
              {
                v101 = 0;
                qfree(s1);
              }
              if ( v98 )
              {
                *(_QWORD *)&v99 = 0;
                qfree(v98);
              }
              if ( !v22 )
                goto LABEL_141;
LABEL_98:
              v35 = 1;
              v23 = 0;
              goto LABEL_99;
            }
LABEL_178:
            if ( s1 )
            {
              v101 = 0;
              qfree(s1);
              v84 = v98;
              if ( !v98 )
                goto LABEL_98;
            }
            else
            {
              v84 = v98;
              if ( !v98 )
                goto LABEL_98;
            }
            *(_QWORD *)&v99 = 0;
            qfree(v84);
            goto LABEL_98;
          }
LABEL_141:
          if ( a1 )
          {
            v73 = *a1;
            v74 = _mm_loadu_si128((const __m128i *)(a1 + 1));
            v75 = _mm_loadu_si128(&v105);
            *a1 = *(_QWORD *)&v104[16];
            *(_QWORD *)&v104[16] = v73;
            *(__m128i *)(a1 + 1) = v75;
            v105 = v74;
          }
          v23 = 1;
          v35 = a1 == nullptr;
LABEL_99:
          clear_tinfo_t(v108);
          if ( v106 )
          {
            *(_QWORD *)&v107 = 0;
            qfree(v106);
          }
          if ( *(_QWORD *)&v104[16] )
          {
            v105.m128i_i64[0] = 0;
            qfree(*(_QWORD *)&v104[16]);
          }
          clear_tinfo_t(&v95);
LABEL_104:
          if ( v35 )
            return v23;
          goto LABEL_105;
        }
        v90 = *(_QWORD *)&v104[16];
      }
      LODWORD(v16) = v15 - 2;
      goto LABEL_12;
    case '@':
      if ( (a5 & 0x10) != 0 )
      {
        p_endptr = *((const char **)p_endptr + 188);
        if ( (unsigned __int8)sub_20E840((__int64)a1, (__int64)p_endptr, v8) )
        {
          if ( a1 )
            goto LABEL_105;
          return 1;
        }
      }
      if ( (a5 & 2) == 0
        || (get_flags_ex(*(_QWORD *)(v8 + 24), 4) & 0x4000) == 0
        || !(unsigned __int8)sub_20CED0(a1, v8) )
      {
        return 0;
      }
      if ( !a1 )
        return 1;
      v36 = a1[1];
      if ( v36 )
      {
        v37 = v36 + 1;
        v38 = a1[1];
        --v36;
      }
      else
      {
        v38 = 1;
        v37 = 2;
      }
      p_endptr = (const char *)*a1;
      if ( a1[2] < v37 )
      {
        v83 = qvector_reserve(a1, p_endptr, v37, 1);
        *a1 = v83;
        p_endptr = (const char *)v83;
      }
      a1[1] = v37;
      p_endptr[v36] = 95;
      *(_BYTE *)(*a1 + v38) = 0;
      goto LABEL_105;
    case 'A':
      if ( (a5 & 1) == 0 )
        return 0;
      v25 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 432LL) + 104LL * *(int *)(v8 + 32);
      v26 = *(_DWORD *)(v25 + 24);
      if ( (v26 & 4) == 0 )
        return 0;
      if ( (v26 & 0x100) != 0 )
      {
        v78 = *((_DWORD **)p_endptr + 188);
        p_endptr = (const char *)(v25 + 32);
        if ( (unsigned __int8)sub_20D980(v78, v25 + 32, *(_DWORD *)(v25 + 88)) )
          return 0;
      }
      else if ( *(_QWORD *)(v25 + 40) )
      {
        v27 = *(_BYTE **)(v25 + 32);
        if ( *v27 == 118 )
        {
          v28 = v27[1];
          if ( v28 )
          {
            v29 = v27 + 1;
            while ( (unsigned __int8)(v28 - 48) <= 9u )
            {
              v28 = *++v29;
              if ( !v28 )
                return 0;
            }
          }
        }
      }
      if ( !a1 )
        return 1;
      if ( a1 == (__int64 *)(v25 + 32) )
        goto LABEL_105;
      v79 = *(_QWORD *)(v25 + 40);
      if ( v79 <= 1 )
      {
        a1[1] = 0;
        return 0;
      }
      v85 = *(const char **)(v25 + 32);
      if ( a1[2] < v79 )
        *a1 = qvector_reserve(a1, *a1, v79, 1);
      p_endptr = v85;
      a1[1] = v79;
      memmove((void *)*a1, v85, v79 - 1);
      *(_BYTE *)(*a1 + v79 - 1) = 0;
      goto LABEL_105;
    default:
      return 0;
  }
}
