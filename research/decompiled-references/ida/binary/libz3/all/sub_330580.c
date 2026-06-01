__int64 __fastcall sub_330580(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  int *v4; // rbx
  int v5; // eax
  size_t v6; // r13
  size_t v7; // rcx
  char *v8; // rax
  char *v9; // r8
  char *v10; // rax
  size_t v11; // rdx
  size_t v12; // rdx
  char *v13; // rsi
  size_t v14; // r15
  _BYTE *v15; // r12
  size_t v16; // r15
  size_t v17; // rcx
  char *v18; // rax
  char *v19; // r8
  char *v20; // rbx
  size_t v21; // r12
  _BYTE *v22; // rdi
  size_t v23; // rdx
  size_t v24; // rcx
  _BYTE *v25; // r15
  size_t v26; // rdx
  unsigned __int64 v28; // rdi
  size_t v29; // r13
  char *v30; // rsi
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rcx
  int v34; // esi
  unsigned __int64 v35; // rdi
  char *v36; // rax
  _QWORD *v37; // r9
  char *v38; // rax
  unsigned __int64 v39; // rdi
  _BYTE *v40; // rax
  _BYTE *v41; // r8
  size_t v42; // r12
  unsigned __int64 v43; // rdi
  char *v44; // rax
  _BYTE *v45; // r9
  char *v46; // rax
  unsigned __int64 v47; // rdi
  char *v48; // rax
  size_t v49; // rdx
  _BYTE *v50; // r15
  size_t v51; // r8
  char *v52; // r9
  char *v53; // rdi
  size_t v54; // rbx
  unsigned __int64 v55; // rdi
  _BYTE *v56; // rax
  _BYTE *v57; // r8
  __int64 v58; // rax
  char *v59; // rax
  int v60; // r8d
  __int64 v61; // rax
  char *v62; // rax
  __int64 v63; // rax
  int v64; // esi
  _DWORD *v65; // rdi
  _BYTE *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  int v70; // eax
  _DWORD *v71; // rdi
  char *v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rsi
  size_t v78; // [rsp+10h] [rbp-B8h]
  size_t v79; // [rsp+10h] [rbp-B8h]
  size_t v80; // [rsp+10h] [rbp-B8h]
  size_t v81; // [rsp+10h] [rbp-B8h]
  size_t v82; // [rsp+10h] [rbp-B8h]
  size_t v83; // [rsp+10h] [rbp-B8h]
  size_t v84; // [rsp+10h] [rbp-B8h]
  size_t v85; // [rsp+10h] [rbp-B8h]
  size_t v86; // [rsp+10h] [rbp-B8h]
  size_t v87; // [rsp+10h] [rbp-B8h]
  size_t v88; // [rsp+18h] [rbp-B0h]
  size_t v89; // [rsp+18h] [rbp-B0h]
  size_t v90; // [rsp+18h] [rbp-B0h]
  size_t v91; // [rsp+18h] [rbp-B0h]
  size_t v92; // [rsp+18h] [rbp-B0h]
  size_t v93; // [rsp+18h] [rbp-B0h]
  size_t v94; // [rsp+18h] [rbp-B0h]
  size_t v95; // [rsp+18h] [rbp-B0h]
  size_t v96; // [rsp+18h] [rbp-B0h]
  size_t v97; // [rsp+18h] [rbp-B0h]
  size_t v98; // [rsp+20h] [rbp-A8h]
  size_t v99; // [rsp+20h] [rbp-A8h]
  char *v100; // [rsp+20h] [rbp-A8h]
  size_t v101; // [rsp+20h] [rbp-A8h]
  size_t v102; // [rsp+20h] [rbp-A8h]
  size_t v103; // [rsp+20h] [rbp-A8h]
  size_t v104; // [rsp+28h] [rbp-A0h]
  size_t v105; // [rsp+28h] [rbp-A0h]
  char *dest; // [rsp+30h] [rbp-98h]
  unsigned __int64 v107; // [rsp+38h] [rbp-90h]
  char v108[16]; // [rsp+40h] [rbp-88h] BYREF
  void *v109; // [rsp+50h] [rbp-78h]
  size_t v110; // [rsp+58h] [rbp-70h]
  _BYTE v111[9]; // [rsp+60h] [rbp-68h] BYREF
  void *src; // [rsp+70h] [rbp-58h] BYREF
  size_t n; // [rsp+78h] [rbp-50h]
  _QWORD v114[9]; // [rsp+80h] [rbp-48h] BYREF

  v2 = 0;
  v3 = *a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      if ( v2 >= *(_DWORD *)(v3 - 4) )
        return a1;
      v4 = (int *)(96LL * v2 + v3);
      v5 = *v4;
      if ( !*v4 )
      {
        sub_2FD7A0((char **)&src, (__int64)(v4 + 8));
        goto LABEL_47;
      }
      v108[0] = 0;
      dest = v108;
      v107 = 0;
      if ( (v4[1] & 1) == 0 )
      {
        if ( v5 == 1 )
        {
          if ( (v4[5] & 1) == 0 && v4[4] == 1 )
          {
            v60 = v4[8];
            strcpy(v108, "oo");
            v107 = 2;
            if ( v60 )
            {
              v12 = 2;
              v109 = v111;
              goto LABEL_120;
            }
            v12 = 2;
            goto LABEL_186;
          }
        }
        else if ( v5 == -1 && (v4[5] & 1) == 0 && v4[4] == 1 )
        {
          v34 = v4[8];
          *(_DWORD *)v108 = 7302957;
          v107 = 3;
          if ( v34 )
          {
            v12 = 3;
            v109 = v111;
LABEL_120:
            v14 = v12 + 1;
            v110 = 1;
            strcpy(v111, "(");
            v13 = v108;
            goto LABEL_57;
          }
          v12 = 3;
LABEL_186:
          if ( v4[16] )
          {
            v13 = v108;
            v110 = 1;
            v109 = v111;
            strcpy(v111, "(");
            goto LABEL_21;
          }
          src = v114;
          goto LABEL_173;
        }
      }
      sub_1850940(&src, qword_1C7F2C0, v4);
      v6 = n;
      if ( 0x7FFFFFFFFFFFFFFFLL - n <= 2 )
        std::__throw_length_error("basic_string::append");
      v7 = n + 3;
      if ( src == v114 )
        break;
      if ( v114[0] >= v7 )
        goto LABEL_10;
      if ( (v7 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v80 = 2LL * v114[0];
      if ( v7 < 2LL * v114[0] )
      {
        if ( (v114[0] & 0x4000000000000000LL) != 0 )
LABEL_141:
          std::__throw_bad_alloc();
        v35 = 2LL * v114[0] + 1;
      }
      else
      {
        v35 = n + 4;
        if ( (__int64)(n + 4) < 0 )
          goto LABEL_141;
        v80 = n + 3;
      }
      v36 = (char *)operator new(v35);
      v37 = src;
      v7 = v6 + 3;
      v9 = v36;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          *v36 = *(_BYTE *)src;
          goto LABEL_72;
        }
        goto LABEL_115;
      }
LABEL_72:
      v38 = &v9[v6];
      *(_WORD *)v38 = 28458;
      v38[2] = 111;
      if ( v37 != v114 )
      {
        v98 = v7;
        v88 = (size_t)v9;
        operator delete(v37, v114[0] + 1LL);
        v7 = v98;
        v9 = (char *)v88;
      }
      src = v9;
      v114[0] = v80;
LABEL_11:
      n = v7;
      v9[v6 + 3] = 0;
      v10 = v108;
      v11 = n;
      if ( n <= 0xF )
      {
        if ( !n )
          goto LABEL_13;
      }
      else
      {
        if ( (n & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_create");
        if ( n > 0x1D )
        {
          v28 = n + 1;
          if ( (__int64)(n + 1) < 0 )
            std::__throw_bad_alloc();
          v29 = n;
        }
        else
        {
          v28 = 31;
          v29 = 30;
        }
        v78 = n;
        v10 = (char *)operator new(v28);
        v11 = v78;
        dest = v10;
        *(_QWORD *)v108 = v29;
      }
      if ( v11 == 1 )
      {
        *v10 = *(_BYTE *)src;
        v10 = dest;
      }
      else
      {
        v79 = v11;
        memcpy(v10, src, v11);
        v10 = dest;
        v11 = v79;
      }
LABEL_13:
      v107 = v11;
      v10[v11] = 0;
      if ( src != v114 )
        operator delete(src, v114[0] + 1LL);
      v12 = v107;
      v13 = dest;
      if ( v4[8] || v4[16] )
      {
        v110 = 1;
        v109 = v111;
        strcpy(v111, "(");
        if ( v107 > 0x7FFFFFFFFFFFFFFELL )
          std::__throw_length_error("basic_string::append");
LABEL_21:
        v14 = v12 + 1;
        if ( v12 + 1 > 0xF )
        {
          if ( v14 <= 0x1D )
          {
            v81 = 30;
            v39 = 31;
          }
          else
          {
            v39 = v12 + 2;
            if ( (__int64)(v12 + 2) < 0 )
              std::__throw_bad_alloc();
            v81 = v12 + 1;
          }
          v99 = v12;
          v40 = (_BYTE *)operator new(v39);
          v41 = v109;
          v15 = v40;
          *v40 = *(_BYTE *)v109;
          if ( v13 )
          {
            v95 = (size_t)v41;
            memcpy(v40 + 1, v13, v99);
            v41 = (_BYTE *)v95;
          }
          if ( v41 != v111 )
            operator delete(v41, *(_QWORD *)v111 + 1LL);
          v109 = v15;
          *(_QWORD *)v111 = v81;
        }
        else
        {
          if ( !v12 )
          {
            v14 = 1;
            goto LABEL_24;
          }
          if ( v12 == 1 )
          {
            v14 = 2;
            v111[1] = *v13;
          }
          else
          {
LABEL_57:
            if ( (unsigned int)v12 < 8 )
            {
              if ( (v12 & 4) != 0 )
              {
                *(_DWORD *)&v111[1] = *(_DWORD *)v13;
                *(_DWORD *)&v111[(unsigned int)v12 - 3] = *(_DWORD *)&v13[(unsigned int)v12 - 4];
              }
              else if ( (_DWORD)v12 )
              {
                v111[1] = *v13;
                if ( (v12 & 2) != 0 )
                  *(_WORD *)&v111[(unsigned int)v12 - 1] = *(_WORD *)&v13[(unsigned int)v12 - 2];
              }
            }
            else
            {
              *(_QWORD *)&v111[1] = *(_QWORD *)v13;
              *(_QWORD *)&v111[(unsigned int)v12 - 7] = *(_QWORD *)&v13[(unsigned int)v12 - 8];
              v30 = &v13[-(&v111[1] - &v111[8])];
              if ( (((_DWORD)v12 + (unsigned int)(&v111[1] - &v111[8])) & 0xFFFFFFF8) >= 8 )
              {
                v31 = (v12 + &v111[1] - &v111[8]) & 0xFFFFFFF8;
                v32 = 0;
                do
                {
                  v33 = v32;
                  v32 += 8;
                  *(_QWORD *)&v111[v33 + 8] = *(_QWORD *)&v30[v33];
                }
                while ( v32 < v31 );
              }
            }
          }
LABEL_24:
          v15 = v111;
        }
        v110 = v14;
        v15[v14] = 0;
        v16 = v110;
        if ( 0x7FFFFFFFFFFFFFFFLL - v110 <= 2 )
          std::__throw_length_error("basic_string::append");
        v17 = v110 + 3;
        if ( v109 == v111 )
        {
          if ( v17 <= 0xF )
          {
LABEL_28:
            v18 = (char *)v109 + v110;
            *(_WORD *)v18 = 11040;
            v18[2] = 32;
            v19 = (char *)v109;
            goto LABEL_29;
          }
          v61 = operator new(0x1Fu);
          v45 = v109;
          v17 = v16 + 3;
          v19 = (char *)v61;
          v42 = 30;
        }
        else
        {
          if ( *(_QWORD *)v111 >= v17 )
            goto LABEL_28;
          if ( (v17 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v42 = 2LL * *(_QWORD *)v111;
          if ( v17 < 2LL * *(_QWORD *)v111 )
          {
            if ( (*(_QWORD *)v111 & 0x4000000000000000LL) != 0 )
LABEL_144:
              std::__throw_bad_alloc();
            v43 = v42 + 1;
          }
          else
          {
            v43 = v110 + 4;
            if ( (__int64)(v110 + 4) < 0 )
              goto LABEL_144;
            v42 = v110 + 3;
          }
          v44 = (char *)operator new(v43);
          v45 = v109;
          v17 = v16 + 3;
          v19 = v44;
          if ( !v16 )
          {
LABEL_88:
            v46 = &v19[v16];
            *(_WORD *)v46 = 11040;
            v46[2] = 32;
            if ( v45 != v111 )
            {
              v89 = v17;
              v82 = (size_t)v19;
              operator delete(v45, *(_QWORD *)v111 + 1LL);
              v17 = v89;
              v19 = (char *)v82;
            }
            v109 = v19;
            *(_QWORD *)v111 = v42;
LABEL_29:
            v110 = v17;
            v19[v16 + 3] = 0;
            sub_2FD7A0((char **)&src, (__int64)(v4 + 8));
            if ( 0x7FFFFFFFFFFFFFFFLL - v110 < n )
              std::__throw_length_error("basic_string::append");
            v20 = (char *)v109;
            v21 = n + v110;
            if ( v109 == v111 )
            {
              if ( v21 <= 0xF )
                goto LABEL_32;
              if ( (v21 & 0x8000000000000000LL) != 0LL )
LABEL_197:
                std::__throw_length_error("basic_string::_M_create");
              if ( v21 > 0x1D )
                goto LABEL_93;
              v83 = 30;
              v47 = 31;
            }
            else
            {
              if ( *(_QWORD *)v111 >= v21 )
              {
LABEL_32:
                if ( n )
                {
                  v22 = (char *)v109 + v110;
                  if ( n == 1 )
                    *v22 = *(_BYTE *)src;
                  else
                    memcpy(v22, src, n);
                  v20 = (char *)v109;
                }
                goto LABEL_36;
              }
              if ( (v21 & 0x8000000000000000LL) != 0LL )
                goto LABEL_197;
              v83 = 2LL * *(_QWORD *)v111;
              if ( v21 < 2LL * *(_QWORD *)v111 )
              {
                if ( (*(_QWORD *)v111 & 0x4000000000000000LL) != 0 )
LABEL_146:
                  std::__throw_bad_alloc();
                v47 = 2LL * *(_QWORD *)v111 + 1;
              }
              else
              {
LABEL_93:
                v47 = v21 + 1;
                if ( (__int64)(v21 + 1) < 0 )
                  goto LABEL_146;
                v83 = n + v110;
              }
            }
            v104 = v110;
            v100 = (char *)src;
            v90 = n;
            v48 = (char *)operator new(v47);
            v49 = v104;
            v50 = v109;
            v20 = v48;
            v51 = v90;
            v52 = v100;
            if ( v104 )
            {
              if ( v104 == 1 )
              {
                *v48 = *(_BYTE *)v109;
              }
              else
              {
                v105 = (size_t)v100;
                v101 = v90;
                v91 = v49;
                memcpy(v48, v109, v49);
                v52 = (char *)v105;
                v51 = v101;
                v49 = v91;
              }
            }
            if ( v52 && v51 )
            {
              v53 = &v20[v49];
              if ( v51 == 1 )
                *v53 = *v52;
              else
                memcpy(v53, v52, v51);
            }
            if ( v50 != v111 )
              operator delete(v50, *(_QWORD *)v111 + 1LL);
            v109 = v20;
            *(_QWORD *)v111 = v83;
LABEL_36:
            v110 = v21;
            v20[v21] = 0;
            if ( src != v114 )
              operator delete(src, v114[0] + 1LL);
            v23 = v110;
            if ( v110 == 0x7FFFFFFFFFFFFFFFLL )
              std::__throw_length_error("basic_string::append");
            v24 = v110 + 1;
            if ( v109 == v111 )
            {
              if ( v110 != 15 )
              {
LABEL_41:
                *((_BYTE *)v109 + v110) = 41;
                v25 = v109;
LABEL_42:
                v110 = v24;
                v25[v23 + 1] = 0;
                src = v114;
                v26 = v110;
                if ( v109 == v111 )
                {
                  v64 = v110 + 1;
                  v65 = v114;
                  v66 = v111;
                  if ( (unsigned int)(v110 + 1) >= 8 )
                  {
                    LODWORD(v68) = 0;
                    do
                    {
                      v69 = (unsigned int)v68;
                      v68 = (unsigned int)(v68 + 8);
                      *(_QWORD *)((char *)v114 + v69) = *(_QWORD *)&v111[v69];
                    }
                    while ( (unsigned int)v68 < (v64 & 0xFFFFFFF8) );
                    v65 = (_DWORD *)((char *)v114 + v68);
                    v66 = &v111[v68];
                  }
                  v67 = 0;
                  if ( (v64 & 4) != 0 )
                  {
                    *v65 = *(_DWORD *)v66;
                    v67 = 4;
                  }
                  if ( (v64 & 2) != 0 )
                  {
                    *(_WORD *)((char *)v65 + v67) = *(_WORD *)&v66[v67];
                    v67 += 2;
                  }
                  if ( (v64 & 1) != 0 )
                    *((_BYTE *)v65 + v67) = v66[v67];
                }
                else
                {
                  src = v109;
                  v114[0] = *(_QWORD *)v111;
                }
                n = v26;
                if ( dest != v108 )
                  operator delete(dest, *(_QWORD *)v108 + 1LL);
                goto LABEL_47;
              }
              v63 = operator new(0x1Fu);
              v57 = v109;
              v23 = 15;
              v25 = (_BYTE *)v63;
              v54 = 30;
              v24 = 16;
            }
            else
            {
              if ( *(_QWORD *)v111 >= v24 )
                goto LABEL_41;
              if ( (v24 & 0x8000000000000000LL) != 0LL )
                std::__throw_length_error("basic_string::_M_create");
              v54 = 2LL * *(_QWORD *)v111;
              if ( v24 < 2LL * *(_QWORD *)v111 )
              {
                if ( (*(_QWORD *)v111 & 0x4000000000000000LL) != 0 )
LABEL_148:
                  std::__throw_bad_alloc();
                v55 = v54 + 1;
              }
              else
              {
                v55 = v110 + 2;
                if ( (__int64)(v110 + 2) < 0 )
                  goto LABEL_148;
                v54 = v110 + 1;
              }
              v92 = v110 + 1;
              v84 = v110;
              v56 = (_BYTE *)operator new(v55);
              v23 = v84;
              v57 = v109;
              v25 = v56;
              v24 = v92;
              if ( !v84 )
              {
LABEL_110:
                v25[v23] = 41;
                if ( v57 != v111 )
                {
                  v93 = v24;
                  v85 = v23;
                  operator delete(v57, *(_QWORD *)v111 + 1LL);
                  v24 = v93;
                  v23 = v85;
                }
                v109 = v25;
                *(_QWORD *)v111 = v54;
                goto LABEL_42;
              }
              if ( v84 == 1 )
              {
                *v56 = *(_BYTE *)v109;
                goto LABEL_110;
              }
            }
            v103 = v24;
            v97 = v23;
            v87 = (size_t)v57;
            memcpy(v25, v57, v23);
            v24 = v103;
            v23 = v97;
            v57 = (_BYTE *)v87;
            goto LABEL_110;
          }
          if ( v16 == 1 )
          {
            *v44 = *(_BYTE *)v109;
            goto LABEL_88;
          }
        }
        v96 = v17;
        v86 = (size_t)v45;
        v62 = (char *)memcpy(v19, v45, v16);
        v17 = v96;
        v45 = (_BYTE *)v86;
        v19 = v62;
        goto LABEL_88;
      }
      if ( dest == v108 )
      {
        src = v114;
LABEL_173:
        v70 = v12 + 1;
        v71 = v114;
        v72 = v108;
        if ( (unsigned int)(v12 + 1) >= 8 )
        {
          LODWORD(v74) = 0;
          do
          {
            v75 = (unsigned int)v74;
            v74 = (unsigned int)(v74 + 8);
            *(_QWORD *)((char *)v114 + v75) = *(_QWORD *)&v108[v75];
          }
          while ( (unsigned int)v74 < (v70 & 0xFFFFFFF8) );
          v71 = (_DWORD *)((char *)v114 + v74);
          v72 = &v108[v74];
        }
        v73 = 0;
        if ( (v70 & 4) != 0 )
        {
          *v71 = *(_DWORD *)v72;
          v73 = 4;
        }
        if ( (v70 & 2) != 0 )
        {
          *(_WORD *)((char *)v71 + v73) = *(_WORD *)&v72[v73];
          v73 += 2;
        }
        if ( (v70 & 1) != 0 )
          *((_BYTE *)v71 + v73) = v72[v73];
        goto LABEL_19;
      }
      src = dest;
      v114[0] = *(_QWORD *)v108;
LABEL_19:
      n = v12;
LABEL_47:
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( src != v114 )
        operator delete(src, v114[0] + 1LL);
      ++v2;
      std::__ostream_insert<char,std::char_traits<char>>();
      v3 = *a2;
      if ( !*a2 )
        return a1;
    }
    if ( v7 <= 0xF )
    {
LABEL_10:
      v8 = (char *)src + n;
      *(_WORD *)v8 = 28458;
      v8[2] = 111;
      v9 = (char *)src;
      goto LABEL_11;
    }
    v58 = operator new(0x1Fu);
    v37 = src;
    v7 = v6 + 3;
    v9 = (char *)v58;
    v80 = 30;
LABEL_115:
    v102 = v7;
    v94 = (size_t)v37;
    v59 = (char *)memcpy(v9, v37, v6);
    v7 = v102;
    v37 = (_QWORD *)v94;
    v9 = v59;
    goto LABEL_72;
  }
  return a1;
}

