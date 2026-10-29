unsigned __int64 __fastcall sub_4E77D0(_QWORD *a1)
{
  __int64 v1; // r12
  int v3; // r9d
  const char **v4; // r15
  const char **v5; // rbx
  const char *v6; // rdx
  __int64 v7; // rbp
  int v8; // r13d
  void *v9; // rbx
  char *v10; // r15
  const void *v11; // r14
  unsigned int v12; // edi
  char v13; // bl
  size_t v14; // rax
  size_t v15; // r9
  char *v16; // rbx
  char *v17; // r14
  unsigned int v18; // edi
  char i; // r15
  size_t v20; // rax
  size_t v21; // r8
  char *v22; // rbx
  char *v23; // r14
  unsigned int v24; // edi
  char j; // r15
  size_t v26; // rax
  size_t v27; // r15
  char *v28; // rbx
  unsigned int v29; // edi
  char k; // r14
  const char *m; // rax
  unsigned int v32; // edi
  const char *v33; // r14
  int v34; // ecx
  size_t v35; // rbx
  int v36; // r8d
  int v37; // r9d
  const char *v38; // rsi
  char *v39; // rdi
  char *v40; // rdi
  int v41; // eax
  char *v42; // rbx
  char *v43; // r15
  char *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // r14
  __int64 v47; // r15
  char *v48; // rax
  char *v49; // r15
  __int64 v50; // rbx
  char *v51; // rax
  void *v52; // rdi
  void *v53; // rdi
  char *v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r10
  __int64 v57; // rdx
  const char *v58; // r15
  int v59; // eax
  size_t v60; // rbx
  int v61; // r14d
  char *v62; // rdi
  __m128i v63; // xmm0
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rbx
  char *v67; // rdx
  char *v68; // rax
  __m128i v69; // xmm0
  void *v70; // rax
  __m128i v71; // xmm0
  void *v72; // rax
  __m128i v73; // xmm0
  char *v74; // rdi
  __int64 v75; // rdx
  size_t v76; // rax
  size_t v77; // rax
  char *v78; // rdi
  char *v79; // rdx
  __int64 v80; // rbx
  size_t v81; // rax
  size_t v82; // r8
  size_t v83; // r14
  __int64 v84; // rdx
  void *v85; // rdi
  char *v86; // rdx
  __int64 v87; // rbp
  char *v88; // rax
  void *v89; // rdi
  int v90; // edx
  char *s; // [rsp+10h] [rbp-1158h]
  char *sa; // [rsp+10h] [rbp-1158h]
  char *sc; // [rsp+10h] [rbp-1158h]
  char *sd; // [rsp+10h] [rbp-1158h]
  char *sf; // [rsp+10h] [rbp-1158h]
  char *se; // [rsp+10h] [rbp-1158h]
  char *sb; // [rsp+10h] [rbp-1158h]
  char *sg; // [rsp+10h] [rbp-1158h]
  char *src; // [rsp+20h] [rbp-1148h]
  unsigned __int64 srca; // [rsp+20h] [rbp-1148h]
  void *srcb; // [rsp+20h] [rbp-1148h]
  int v103; // [rsp+28h] [rbp-1140h]
  __int64 v104; // [rsp+28h] [rbp-1140h]
  __int64 v105; // [rsp+30h] [rbp-1138h]
  _QWORD *v106; // [rsp+38h] [rbp-1130h]
  size_t n; // [rsp+48h] [rbp-1120h]
  size_t nb; // [rsp+48h] [rbp-1120h]
  size_t na; // [rsp+48h] [rbp-1120h]
  void *v110; // [rsp+50h] [rbp-1118h] BYREF
  __int128 v111; // [rsp+58h] [rbp-1110h]
  void *v112; // [rsp+70h] [rbp-10F8h] BYREF
  __int128 v113; // [rsp+78h] [rbp-10F0h]
  void *ptr; // [rsp+90h] [rbp-10D8h] BYREF
  __m128i v115; // [rsp+98h] [rbp-10D0h] BYREF
  char *v116; // [rsp+B0h] [rbp-10B8h] BYREF
  __m128i v117; // [rsp+B8h] [rbp-10B0h]
  void *dest; // [rsp+C8h] [rbp-10A0h] BYREF
  __m128i v119; // [rsp+D0h] [rbp-1098h]
  void *v120; // [rsp+E0h] [rbp-1088h] BYREF
  __m128i v121; // [rsp+E8h] [rbp-1080h]
  char *nptr; // [rsp+F8h] [rbp-1070h] BYREF
  __int128 v123; // [rsp+100h] [rbp-1068h]
  int v124; // [rsp+110h] [rbp-1058h]
  _BYTE v125[4104]; // [rsp+120h] [rbp-1048h] BYREF
  unsigned __int64 v126; // [rsp+1128h] [rbp-40h]

  v126 = __readfsqword(0x28u);
  v1 = a1[7];
  if ( !v1 )
  {
    v110 = nullptr;
    v111 = 0;
    get_ida_subdirs(&v110, "plugins", 0);
    v4 = (const char **)v110;
    v5 = (const char **)((char *)v110 + 24 * v111);
    if ( v110 == v5 )
    {
LABEL_159:
      if ( v5 )
      {
        v87 = v111;
        if ( (_QWORD)v111 )
        {
          do
          {
            v88 = (char *)&v5[3 * v1];
            v89 = *(void **)v88;
            if ( *(_QWORD *)v88 )
            {
              *((_QWORD *)v88 + 1) = 0;
              qfree(v89);
              v4 = (const char **)v110;
            }
            ++v1;
            v5 = v4;
          }
          while ( v87 != v1 );
        }
        *(_QWORD *)&v111 = 0;
        qfree(v5);
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = haystack;
        if ( v4[1] )
          v6 = *v4;
        qmakepath((unsigned int)v125, 4096, (_DWORD)v6, (unsigned int)"plugins.cfg", 0, v3);
        v7 = fopenRT(v125);
        if ( v7 )
          break;
        v4 += 3;
        if ( v5 == v4 )
        {
          v5 = (const char **)v110;
          v4 = (const char **)v110;
          goto LABEL_159;
        }
      }
      v112 = nullptr;
      v113 = 0;
      v106 = a1 + 6;
      if ( a1[8] <= 0x1Fu )
        a1[6] = qvector_reserve(v106, a1[6], 32, 104);
      v8 = 0;
      while ( qgetline(&v112) >= 0 )
      {
        ++v8;
        if ( qcleanline(&v112, 59, 7) <= 0 )
          continue;
        v9 = v112;
        v116 = nullptr;
        v117 = 0;
        v116 = (char *)qvector_reserve(&v116, 0, 1, 1);
        v117.m128i_i64[0] = 1;
        *v116 = 0;
        dest = nullptr;
        v119 = 0;
        dest = (void *)qvector_reserve(&dest, 0, 1, 1);
        v119.m128i_i64[0] = 1;
        *(_BYTE *)dest = 0;
        v120 = nullptr;
        v121 = 0;
        v120 = (void *)qvector_reserve(&v120, 0, 2, 1);
        v121.m128i_i64[0] = 2;
        *(_BYTE *)v120 = 48;
        *((_BYTE *)v120 + 1) = 0;
        nptr = nullptr;
        v123 = 0;
        nptr = (char *)qvector_reserve(&nptr, 0, 2, 1);
        *(_QWORD *)&v123 = 2;
        *nptr = 48;
        nptr[1] = 0;
        v124 = 0;
        v10 = (char *)skip_spaces(v9);
        v11 = v10;
        do
        {
          while ( 1 )
          {
            v12 = *v10;
            v13 = *v10;
            if ( v12 <= 0x7F )
              break;
            ++v10;
          }
          if ( isspace(v12) )
          {
            *v10 = 0;
            if ( v11 && (v14 = strlen((const char *)v11), (v15 = v14) != 0) )
            {
              v78 = v116;
              v79 = (char *)(v14 + 1);
              if ( v117.m128i_i64[1] < v14 + 1 )
              {
                nb = v14;
                se = (char *)(v14 + 1);
                v116 = (char *)qvector_reserve(&v116, v116, v79, 1);
                v15 = nb;
                v78 = v116;
                v79 = se;
              }
              v117.m128i_i64[0] = (__int64)v79;
              sf = (char *)v15;
              memmove(v78, v11, v15);
              sf[(_QWORD)v116] = 0;
            }
            else
            {
              v117.m128i_i64[0] = 0;
            }
            v16 = (char *)skip_spaces(v10 + 1);
            v17 = v16;
            while ( 1 )
            {
              v18 = *v17;
              for ( i = *v17; v18 > 0x7F; i = v18 )
                v18 = *++v17;
              if ( isspace(v18) )
                break;
              ++v17;
              if ( !i )
                goto LABEL_57;
            }
            *v17 = 0;
            if ( v16 && (v20 = strlen(v16), (v21 = v20) != 0) )
            {
              v53 = dest;
              v54 = (char *)(v20 + 1);
              if ( v119.m128i_i64[1] < v20 + 1 )
              {
                na = v20;
                sb = (char *)(v20 + 1);
                dest = (void *)qvector_reserve(&dest, dest, v54, 1);
                v21 = na;
                v53 = dest;
                v54 = sb;
              }
              v119.m128i_i64[0] = (__int64)v54;
              sc = (char *)v21;
              memmove(v53, v16, v21);
              sc[(_QWORD)dest] = 0;
            }
            else
            {
              v119.m128i_i64[0] = 0;
            }
            v22 = (char *)skip_spaces(v17 + 1);
            v23 = v22;
            while ( 1 )
            {
              v24 = *v23;
              for ( j = *v23; v24 > 0x7F; j = v24 )
                v24 = *++v23;
              if ( isspace(v24) )
                break;
              ++v23;
              if ( !j )
                goto LABEL_57;
            }
            *v23 = 0;
            if ( v22 && (v26 = strlen(v22), (v27 = v26) != 0) )
            {
              v85 = v120;
              v86 = (char *)(v26 + 1);
              if ( v121.m128i_i64[1] < v26 + 1 )
              {
                sg = (char *)(v26 + 1);
                v120 = (void *)qvector_reserve(&v120, v120, v86, 1);
                v86 = sg;
                v85 = v120;
              }
              v121.m128i_i64[0] = (__int64)v86;
              memmove(v85, v22, v27);
              *((_BYTE *)v120 + v27) = 0;
            }
            else
            {
              v121.m128i_i64[0] = 0;
            }
            s = (char *)skip_spaces(v23 + 1);
            v28 = s;
            while ( 1 )
            {
              v29 = *v28;
              for ( k = *v28; v29 > 0x7F; k = v29 )
                v29 = *++v28;
              if ( isspace(v29) )
                break;
              ++v28;
              if ( !k )
                goto LABEL_105;
            }
            *v28 = 0;
            for ( m = (const char *)skip_spaces(v28 + 1); ; m = (const char *)skip_spaces(v58) )
            {
              v32 = *m;
              v33 = m;
              if ( !*m )
                break;
              if ( v32 > 0x7F )
                goto LABEL_41;
              v58 = m;
              do
              {
                if ( !isalpha(v32) )
                  break;
                v32 = *++v58;
              }
              while ( v32 <= 0x7F );
              v59 = (_DWORD)v58 - (_DWORD)v33;
              if ( (_DWORD)v58 == (_DWORD)v33 )
              {
LABEL_41:
                v124 |= 0x20u;
                v35 = strlen(s);
                goto LABEL_42;
              }
              v60 = 6;
              srca = v59;
              if ( (unsigned __int64)v59 <= 6 )
                v60 = v59;
              v103 = v124;
              if ( !strncmp(v33, "DEBUG", v60) )
              {
                v61 = v103 | 1;
              }
              else
              {
                v76 = 4;
                if ( srca <= 4 )
                  v76 = srca;
                n = v76;
                if ( !strncmp(v33, "WIN", v76) )
                {
                  v61 = v103 | 2;
                }
                else
                {
                  v77 = 7;
                  if ( srca <= 7 )
                    v77 = srca;
                  if ( !strncmp(v33, "SILENT", v77) )
                  {
                    v61 = v103 | 4;
                  }
                  else if ( !strncmp(v33, "MAC", n) )
                  {
                    v61 = v103 | 8;
                  }
                  else if ( !strncmp(v33, "LINUX", v60) )
                  {
                    v61 = v103 | 0x10;
                  }
                  else
                  {
                    v90 = strncmp(v33, "GUI", n);
                    v61 = v103 | 0x20;
                    if ( !v90 )
                      v61 = v103 | 0x40;
                  }
                }
              }
              v124 = v61;
            }
LABEL_105:
            v35 = strlen(s);
LABEL_42:
            if ( !v35 )
              goto LABEL_61;
            if ( s )
              goto LABEL_58;
            *(_QWORD *)&v123 = 0;
            if ( v121.m128i_i64[0] )
              goto LABEL_62;
LABEL_45:
            v38 = haystack;
LABEL_46:
            callui(50, (int)v38, (int)&callui, v34, v36, v37);
          }
          ++v10;
        }
        while ( v13 );
LABEL_57:
        v35 = 1;
        s = "0";
LABEL_58:
        v40 = nptr;
        if ( *((_QWORD *)&v123 + 1) < v35 + 1 )
        {
          nptr = (char *)qvector_reserve(&nptr, nptr, v35 + 1, 1);
          v40 = nptr;
        }
        *(_QWORD *)&v123 = v35 + 1;
        memmove(v40, s, v35);
        nptr[v35] = 0;
LABEL_61:
        if ( !v121.m128i_i64[0] )
          goto LABEL_45;
LABEL_62:
        LODWORD(v38) = (_DWORD)v120;
        if ( *(_BYTE *)v120 != 48 || *((_BYTE *)v120 + 1) )
          goto LABEL_46;
        if ( (_QWORD)v123 )
          v41 = strtol(nptr, nullptr, 10);
        else
          v41 = strtol(haystack, nullptr, 10);
        if ( v119.m128i_i64[0] <= 1uLL || !v41 && (!(_QWORD)v123 || *nptr != 48 || nptr[1]) || (v124 & 0x20) != 0 )
          sub_378D50();
        if ( (v124 & 0x1A) != 0 && (v124 & 0x10) == 0 )
        {
          if ( nptr )
          {
            *(_QWORD *)&v123 = 0;
            qfree(nptr);
          }
          if ( v120 )
          {
            v121.m128i_i64[0] = 0;
            qfree(v120);
          }
          if ( dest )
          {
            v119.m128i_i64[0] = 0;
            qfree(dest);
          }
          v39 = v116;
          if ( v116 )
          {
LABEL_54:
            v117.m128i_i64[0] = 0;
            qfree(v39);
          }
        }
        else
        {
          v42 = nullptr;
          ptr = nullptr;
          src = (char *)haystack;
          v115 = 0;
          if ( v117.m128i_i64[0] )
          {
            src = v116;
            v42 = strchr(v116, 95);
          }
          v43 = src;
          v44 = nullptr;
          while ( 2 )
          {
            if ( v42 )
            {
              if ( v42 != v43 )
              {
                v55 = v115.m128i_i64[0];
                v56 = v42 - v43;
                if ( v115.m128i_i64[0] )
                {
                  v55 = v115.m128i_i64[0] - 1;
                  v56 = v42 - v43 + v115.m128i_i64[0] - 1;
                }
                v57 = v56 + 1;
                if ( v115.m128i_i64[1] < (unsigned __int64)(v56 + 1) )
                {
                  v105 = v55;
                  v104 = v56;
                  sd = (char *)(v56 + 1);
                  ptr = (void *)qvector_reserve(&ptr, v44, v57, 1);
                  v55 = v105;
                  v44 = (char *)ptr;
                  v56 = v104;
                  v57 = (__int64)sd;
                }
                v115.m128i_i64[0] = v57;
                v44[v56] = 0;
                memmove((char *)ptr + v55, v43, v42 - v43);
                v44 = (char *)ptr;
              }
              v47 = v115.m128i_i64[0];
              if ( v115.m128i_i64[0] )
              {
                v45 = v115.m128i_i64[0] + 1;
                v46 = v115.m128i_i64[0];
                v47 = v115.m128i_i64[0] - 1;
                if ( v115.m128i_i64[1] < (unsigned __int64)(v115.m128i_i64[0] + 1) )
                  goto LABEL_83;
              }
              else
              {
                v45 = 2;
                v46 = 1;
                if ( v115.m128i_i64[1] < 2uLL )
                {
LABEL_83:
                  sa = (char *)v45;
                  ptr = (void *)qvector_reserve(&ptr, v44, v45, 1);
                  v45 = (__int64)sa;
                  v44 = (char *)ptr;
                }
              }
              v115.m128i_i64[0] = v45;
              v44[v46] = 0;
              *((_BYTE *)ptr + v47) = 32;
              v43 = v42 + 1;
              v48 = strchr(v42 + 1, 95);
              v44 = (char *)ptr;
              v42 = v48;
              continue;
            }
            break;
          }
          if ( v43 == src )
          {
            v62 = v44;
          }
          else
          {
            if ( *v43 && v43 )
            {
              v80 = v115.m128i_i64[0];
              v81 = strlen(v43);
              v82 = v81;
              v83 = v81;
              if ( v80 )
              {
                --v80;
                v83 = v81 + v80;
              }
              v84 = v83 + 1;
              if ( v115.m128i_i64[1] < v83 + 1 )
              {
                srcb = (void *)v81;
                ptr = (void *)qvector_reserve(&ptr, v44, v84, 1);
                v82 = (size_t)srcb;
                v44 = (char *)ptr;
                v84 = v83 + 1;
              }
              v115.m128i_i64[0] = v84;
              v44[v83] = 0;
              memmove((char *)ptr + v80, v43, v82);
              v44 = (char *)ptr;
            }
            v62 = v116;
            v116 = v44;
            v63 = _mm_loadu_si128(&v115);
            ptr = v62;
            v115.m128i_i64[1] = v117.m128i_i64[1];
            v117 = v63;
          }
          if ( v62 )
          {
            v115.m128i_i64[0] = 0;
            qfree(v62);
          }
          v64 = a1[7];
          v65 = a1[6];
          if ( a1[8] < (unsigned __int64)(v64 + 1) )
          {
            v65 = qvector_reserve(v106, v65, v64 + 1, 104);
            a1[6] = v65;
            v64 = a1[7];
          }
          v66 = v65 + 104 * v64;
          sub_4E71E0(v66);
          v67 = v116;
          ++a1[7];
          v68 = *(char **)v66;
          *(_QWORD *)v66 = v67;
          v69 = _mm_loadu_si128((const __m128i *)(v66 + 8));
          v116 = v68;
          *(_QWORD *)(v66 + 8) = v117.m128i_i64[0];
          v70 = *(void **)(v66 + 24);
          *(_QWORD *)(v66 + 16) = v117.m128i_i64[1];
          v117 = v69;
          v71 = _mm_loadu_si128((const __m128i *)(v66 + 32));
          *(_QWORD *)(v66 + 24) = dest;
          dest = v70;
          v72 = *(void **)(v66 + 48);
          *(__m128i *)(v66 + 32) = v119;
          v119 = v71;
          v73 = _mm_loadu_si128((const __m128i *)(v66 + 56));
          *(_QWORD *)(v66 + 48) = v120;
          v120 = v72;
          *(__m128i *)(v66 + 56) = v121;
          v121 = v73;
          v74 = *(char **)(v66 + 72);
          v75 = *(_QWORD *)(v66 + 88);
          *(_QWORD *)(v66 + 72) = nptr;
          nptr = v74;
          *(_OWORD *)(v66 + 80) = v123;
          *((_QWORD *)&v123 + 1) = v75;
          *(_DWORD *)(v66 + 96) = v124;
          if ( v74 )
          {
            *(_QWORD *)&v123 = 0;
            qfree(v74);
            v72 = v120;
          }
          if ( v72 )
          {
            v121.m128i_i64[0] = 0;
            qfree(v72);
          }
          if ( dest )
          {
            v119.m128i_i64[0] = 0;
            qfree(dest);
          }
          v39 = v116;
          if ( v116 )
            goto LABEL_54;
        }
      }
      qfclose(v7);
      if ( v112 )
      {
        *(_QWORD *)&v113 = 0;
        qfree(v112);
      }
      v49 = (char *)v110;
      if ( v110 )
      {
        v50 = v111;
        if ( (_QWORD)v111 )
        {
          do
          {
            v51 = &v49[24 * v1];
            v52 = *(void **)v51;
            if ( *(_QWORD *)v51 )
            {
              *((_QWORD *)v51 + 1) = 0;
              qfree(v52);
              v49 = (char *)v110;
            }
            ++v1;
          }
          while ( v50 != v1 );
        }
        *(_QWORD *)&v111 = 0;
        qfree(v49);
      }
    }
  }
  return v126 - __readfsqword(0x28u);
}
