__int64 __fastcall sub_3870F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // rax
  int v8; // ebx
  _BYTE *v9; // rax
  int v10; // ecx
  void *v11; // r12
  const char *v12; // rdi
  char *v13; // rsi
  char *v14; // rax
  __int64 *v15; // r14
  size_t v16; // rax
  size_t v17; // r13
  const char *v18; // r13
  char *file_ext; // rax
  char v20; // r14
  size_t v21; // r15
  const char *v22; // r15
  __int64 v23; // rsi
  const char *v24; // r15
  const char *v25; // rsi
  __int64 v26; // rdx
  int v27; // eax
  unsigned int v28; // ebx
  __m128i v29; // xmm0
  void *v30; // rdi
  __int64 v31; // rax
  size_t v33; // rax
  size_t v34; // r15
  const char *v35; // rdx
  char *v36; // rdi
  size_t v37; // r14
  void *v38; // rdi
  size_t v39; // r15
  char v40; // al
  char *v41; // rax
  unsigned __int64 v42; // rdx
  size_t v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  const char *v48; // rbx
  void *v49; // rdi
  __int64 v50; // rax
  size_t v51; // rdx
  void *v52; // rdi
  char *v53; // rax
  void *v54; // r13
  const char *v55; // rsi
  __int64 *v56; // r12
  size_t v57; // r15
  char *v58; // rsi
  char v59; // al
  _UNKNOWN **v60; // r14
  char *v61; // rcx
  size_t v62; // rax
  size_t v63; // r14
  const char *v64; // rdi
  __int64 v65; // rax
  char *v66; // rax
  __int64 v67; // rax
  const char *v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rcx
  const char *v71; // rsi
  void *v72; // rdi
  size_t v73; // rdx
  const char *v74; // rdi
  const char *v75; // rax
  const char *v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  const char *v79; // rdi
  void *v80; // rbx
  __int64 **v81; // rax
  const char *v82; // rbx
  size_t v83; // rax
  size_t v84; // r13
  size_t v85; // r12
  const char *v86; // rsi
  __int64 v87; // rax
  char v88; // [rsp+0h] [rbp-20D0h]
  char *v89; // [rsp+8h] [rbp-20C8h]
  char *v90; // [rsp+18h] [rbp-20B8h]
  size_t v91; // [rsp+20h] [rbp-20B0h]
  char *v92; // [rsp+28h] [rbp-20A8h]
  int v93; // [rsp+30h] [rbp-20A0h]
  size_t v94; // [rsp+30h] [rbp-20A0h]
  void *dest; // [rsp+40h] [rbp-2090h] BYREF
  __m128i v97; // [rsp+48h] [rbp-2088h] BYREF
  void *ptr; // [rsp+60h] [rbp-2070h] BYREF
  __int128 v99; // [rsp+68h] [rbp-2068h]
  char v100[16]; // [rsp+80h] [rbp-2050h] BYREF
  char s[4096]; // [rsp+90h] [rbp-2040h] BYREF
  char src[4104]; // [rsp+1090h] [rbp-1040h] BYREF
  unsigned __int64 v103; // [rsp+2098h] [rbp-38h]

  v6 = a1[24];
  v103 = __readfsqword(0x28u);
  v7 = a1[23];
  v8 = v7;
  if ( (int)v7 <= 1 )
  {
    v93 = 1;
    v90 = nullptr;
    v92 = nullptr;
    if ( *((_DWORD *)a1 + 55) )
      goto LABEL_11;
    if ( (_DWORD)v7 == 1 )
      goto LABEL_83;
LABEL_92:
    qstrncpy(s, *(_QWORD *)(v6 + 8), 4096);
    if ( strchr(s, 63) || strchr(s, 42) )
      callui();
    goto LABEL_11;
  }
  v92 = nullptr;
  v90 = nullptr;
  v93 = 1;
  while ( 2 )
  {
    while ( 1 )
    {
      v9 = *(_BYTE **)(v6 + 8);
      if ( *v9 == 45 )
        break;
      if ( *v9 )
      {
        if ( *((_DWORD *)a1 + 55) )
          goto LABEL_11;
        goto LABEL_92;
      }
LABEL_4:
      --v8;
      v6 += 8;
      if ( v8 == 1 )
        goto LABEL_10;
    }
    v10 = (unsigned __int8)v9[1];
    v11 = v9 + 2;
    switch ( (char)v10 )
    {
      case 'A':
        batch[0] = 1;
        goto LABEL_4;
      case 'B':
        sub_386720("analysis.idc");
        batch[0] = 1;
        qword_2CA1648 = 0;
        goto LABEL_54;
      case 'C':
        a1[25] = v11;
        goto LABEL_4;
      case 'c':
LABEL_54:
        v93 = 0;
        goto LABEL_4;
      case 'o':
        if ( !v9[2] )
          sub_375400();
        v92 = v9 + 2;
        goto LABEL_4;
      case 'p':
        *(_BYTE *)(*a1 + 157LL) = 1;
        v33 = strlen(v9 + 2);
        v34 = v33;
        if ( v33 )
        {
          v51 = v33 + 1;
          v52 = (void *)a1[5];
          if ( a1[7] < v33 + 1 )
          {
            v91 = v33 + 1;
            v67 = qvector_reserve(a1 + 5, a1[5], v51, 1);
            v51 = v91;
            v52 = (void *)v67;
            a1[5] = v67;
          }
          a1[6] = v51;
          memmove(v52, v11, v34);
          v90 = (char *)v11;
          *(_BYTE *)(a1[5] + v34) = 0;
        }
        else
        {
          v90 = (char *)v11;
          a1[6] = 0;
        }
        goto LABEL_4;
      case 'r':
        a1[9] = v11;
        goto LABEL_4;
      case 't':
        *((_BYTE *)a1 + 232) = 1;
        goto LABEL_4;
      case 'z':
        if ( (unsigned int)qsscanf((int)v11, (int)"%X", (int)&debug, v10, a5, a6, v88) != 1 )
        {
          *(_DWORD *)&debug = -1;
          goto LABEL_9;
        }
        if ( debug >= 0 )
          goto LABEL_4;
LABEL_9:
        --v8;
        v6 += 8;
        sub_49FA10(*a1);
        if ( v8 != 1 )
          continue;
LABEL_10:
        if ( *((_DWORD *)a1 + 55) )
          goto LABEL_11;
LABEL_83:
        if ( !*((_BYTE *)a1 + 232) && !a1[9] )
          callui();
        byte_2CA15CA = 1;
        v8 = 1;
        s[0] = 0;
        sub_384BF0((__int64)a1, s, 4096, v92);
LABEL_11:
        if ( !s[0] )
          return (unsigned int)-2;
        if ( !byte_2CA15CA )
          callui();
        set_database_flag(1, 1);
        dest = nullptr;
        v97 = 0;
        while ( 2 )
        {
          v12 = (const char *)a1[9];
          if ( !v12 || (v13 = (char *)&dword_40, (v14 = strchr(v12, 64)) == nullptr) || !v14[1] )
          {
            v13 = (_BYTE *)(elf_gnu_hash_bucket + 1368);
            qmake_full_path(s, 4096, s);
          }
          v15 = (__int64 *)*a1;
          v16 = strlen(s);
          v17 = v16;
          if ( v16 )
          {
            v38 = (void *)*v15;
            v39 = v16 + 1;
            if ( v15[2] < v16 + 1 )
            {
              v50 = qvector_reserve(v15, *v15, v16 + 1, 1);
              *v15 = v50;
              v38 = (void *)v50;
            }
            v15[1] = v39;
            v13 = s;
            memmove(v38, s, v17);
            *(_BYTE *)(*v15 + v17) = 0;
          }
          else
          {
            v15[1] = 0;
          }
          v18 = haystack;
          if ( *(_QWORD *)(*a1 + 8LL) )
            v18 = *(const char **)*a1;
          file_ext = (char *)get_file_ext(v18);
          v20 = is_database_ext(file_ext);
          if ( v20 )
          {
            if ( batch[0] && (v93 & 1) == 0 && (unsigned __int8)qfileexist(v18, v13) )
              sub_375400();
            v92 = nullptr;
          }
          ptr = nullptr;
          v99 = 0;
          if ( v18 )
          {
            v21 = strlen(v18);
            ptr = (void *)qvector_reserve(&ptr, 0, v21 + 1, 1);
            *(_QWORD *)&v99 = v21 + 1;
            memmove(ptr, v18, v21);
            *((_BYTE *)ptr + v21) = 0;
          }
          sub_3847D0((__int64)a1, (__int64 *)&dest, nullptr, v92, (__int64)&ptr, 0);
          if ( ptr )
          {
            *(_QWORD *)&v99 = 0;
            qfree(ptr);
          }
          v22 = haystack;
          v23 = v93 ^ 1u;
          if ( v97.m128i_i64[0] )
            v22 = (const char *)dest;
          if ( !*((_BYTE *)a1 + 225) || (v40 = qfileexist(v22, v23), LOBYTE(v23) = v93 ^ 1, !v40) )
          {
            v24 = (const char *)sub_383B80((__int64)v22, v23);
            if ( v8 == 1 )
            {
              if ( *((_BYTE *)a1 + 232) )
                goto LABEL_63;
              v35 = (const char *)a1[9];
              if ( v35 )
                goto LABEL_60;
            }
            goto LABEL_34;
          }
          v24 = &byte_22CD811;
          if ( v8 != 1 )
            goto LABEL_35;
          if ( *((_BYTE *)a1 + 232) )
          {
LABEL_64:
            v93 = 2;
          }
          else
          {
            v35 = (const char *)a1[9];
            if ( !v35 )
              goto LABEL_35;
LABEL_60:
            v89 = (char *)v35;
            v36 = strchr(v35, 64);
            if ( !v36 )
              v36 = v89;
            if ( strchr(v36, 43) )
            {
LABEL_63:
              if ( !v24 )
                goto LABEL_96;
              goto LABEL_64;
            }
LABEL_34:
            if ( !v24 )
              goto LABEL_96;
LABEL_35:
            if ( v20 )
            {
LABEL_36:
              if ( v93 != 1 )
                goto LABEL_96;
              v25 = haystack;
              v26 = *((unsigned __int8 *)a1 + 225);
              if ( v97.m128i_i64[0] )
                v25 = (const char *)dest;
              goto LABEL_39;
            }
          }
          sub_57A620(s);
          if ( get_file_ext(v18) || v92 != nullptr || v93 == 2 )
            sub_383E70();
          v37 = strlen(s);
          if ( v37 )
          {
            v49 = dest;
            if ( v97.m128i_i64[1] < v37 + 1 )
            {
              dest = (void *)qvector_reserve(&dest, dest, v37 + 1, 1);
              v49 = dest;
            }
            v97.m128i_i64[0] = v37 + 1;
            memmove(v49, s, v37);
            *((_BYTE *)dest + v37) = 0;
            goto LABEL_36;
          }
          v97.m128i_i64[0] = 0;
          if ( v93 != 1 )
          {
LABEL_96:
            if ( v90 || (v65 = get_file_ext(v18), v66 = (char *)sub_5E3FC0(v65), (v90 = v66) != nullptr) && *v66 )
            {
              v41 = strchr(v90, 58);
              if ( v41 )
              {
                v42 = v41 - v90 + 1;
                if ( v42 > 0x10 )
                  v42 = 16;
              }
              else
              {
                v42 = strlen(v90) + 1;
                if ( v42 > 0x10 )
                  v42 = 16;
              }
            }
            else
            {
              v42 = 7;
              v90 = "metapc";
            }
            qstrncpy(v100, v90, v42);
            v43 = strlen(v100);
            setinf_buf(1, v100, v43);
            if ( !*((_BYTE *)a1 + 232) )
            {
              v48 = (const char *)a1[9];
              if ( !v48 || !strchr((const char *)a1[9], 43) && ((v53 = strchr(v48, 64)) == nullptr || !v53[1]) )
              {
                v54 = nullptr;
                v55 = haystack;
                v56 = (__int64 *)*a1;
                v57 = *(_QWORD *)(*a1 + 8LL);
                if ( v57 )
                {
                  v54 = (void *)qalloc_or_throw(*(_QWORD *)(*a1 + 8LL), haystack, v44, v45, v46, v47);
                  memcpy(v54, (const void *)*v56, v57);
                  if ( v56[1] )
                    v55 = (const char *)*v56;
                  else
                    v55 = haystack;
                }
                qstrncpy(src, v55, 4096);
                v58 = (_BYTE *)(elf_gnu_hash_bucket + 1368);
                v59 = sub_5E4040(src, 4096);
                v60 = &off_2AFCA20;
                v61 = "zip";
                if ( !v59 )
                {
                  do
                  {
                    v58 = (_BYTE *)(elf_gnu_hash_bucket + 1368);
                    set_file_ext(src, 4096, src, v61);
                    if ( (unsigned __int8)qfileexist(src, 4096) )
                      break;
                    v61 = (char *)v60[1];
                    ++v60;
                  }
                  while ( v61 );
                }
                v62 = strlen(src);
                v63 = v62;
                if ( !v62 )
                {
                  v56[1] = 0;
                  goto LABEL_126;
                }
                v72 = (void *)*v56;
                v73 = v62 + 1;
                if ( v56[2] < v62 + 1 )
                {
                  v94 = v62 + 1;
                  v87 = qvector_reserve(v56, *v56, v73, 1);
                  *v56 = v87;
                  v73 = v94;
                  v72 = (void *)v87;
                }
                v56[1] = v73;
                v58 = src;
                memmove(v72, src, v63);
                *(_BYTE *)(*v56 + v63) = 0;
                if ( v56[1] )
                  v64 = (const char *)*v56;
                else
LABEL_126:
                  v64 = haystack;
                if ( (unsigned __int8)qisdir(v64) )
                {
                  if ( batch[0] )
                    callui();
                  sub_375400();
                }
                v68 = haystack;
                if ( v56[1] )
                  v68 = (const char *)*v56;
                if ( !(unsigned __int8)qfileexist(v68, v58) )
                  goto LABEL_140;
                v74 = haystack;
                if ( v56[1] )
                  v74 = (const char *)*v56;
                v75 = (const char *)get_file_ext(v74);
                v76 = v75;
                if ( v75 && (!strcasecmp(v75, "idb") || !strcasecmp(v76, "i64") || (unsigned __int8)sub_577AD0(v76)) )
                {
                  v86 = haystack;
                  if ( v56[1] )
                    v86 = (const char *)*v56;
                  sub_384000(1432, (__int64)v86, v77, v78);
                }
                v79 = haystack;
                if ( v56[1] )
                  v79 = (const char *)*v56;
                v80 = (void *)open_linput(v79, 0);
                if ( !v80 )
                {
LABEL_140:
                  if ( batch[0] )
                    callui();
                  v71 = haystack;
                  if ( v57 )
                    v71 = (const char *)v54;
                  sub_384000(1437, (__int64)v71, v69, v70);
                }
                a1[8] = build_loaders_list();
                close_linput(v80);
                v81 = (__int64 **)a1[8];
                if ( v81 )
                {
                  do
                  {
                    if ( ((_BYTE)v81[11] & 1) != 0 )
                    {
                      if ( v54 )
                        qfree(v54);
                      v82 = haystack;
                      if ( *(_QWORD *)(*a1 + 8LL) )
                        v82 = *(const char **)*a1;
                      ptr = nullptr;
                      v99 = 0;
                      if ( v82 )
                      {
                        v83 = strlen(v82);
                        v84 = v83 + 1;
                        v85 = v83;
                        ptr = (void *)qvector_reserve(&ptr, 0, v83 + 1, 1);
                        *(_QWORD *)&v99 = v84;
                        memmove(ptr, v82, v85);
                        *((_BYTE *)ptr + v85) = 0;
                      }
                      sub_3847D0((__int64)a1, (__int64 *)&dest, (_BYTE *)a1 + 231, v92, (__int64)&ptr, 1);
                      if ( ptr )
                      {
                        *(_QWORD *)&v99 = 0;
                        qfree(ptr);
                      }
                      goto LABEL_103;
                    }
                    v81 = (__int64 **)*v81;
                  }
                  while ( v81 );
                  if ( !v54 )
                    goto LABEL_103;
                }
                else if ( !v54 )
                {
                  goto LABEL_103;
                }
                qfree(v54);
              }
            }
LABEL_103:
            v28 = 1;
LABEL_43:
            v29 = _mm_loadu_si128(&v97);
            v30 = (void *)a1[2];
            v31 = a1[4];
            a1[2] = dest;
            *(__m128i *)(a1 + 3) = v29;
            dest = v30;
            v97.m128i_i64[1] = v31;
            goto LABEL_44;
          }
          v25 = haystack;
          v26 = *((unsigned __int8 *)a1 + 225);
LABEL_39:
          v27 = sub_57EAD0(*a1, v25, v26);
          if ( v27 != 2 )
          {
            if ( v27 == 3 )
            {
              qstrncpy(s, v18, 4096);
              v93 = 0;
            }
            else
            {
              if ( v27 )
              {
                v28 = 0;
                goto LABEL_43;
              }
              v93 = 1;
            }
            *((_BYTE *)a1 + 226) = 0;
            continue;
          }
          break;
        }
        v30 = dest;
        v28 = -4;
LABEL_44:
        if ( v30 )
        {
          v97.m128i_i64[0] = 0;
          qfree(v30);
        }
        return v28;
      default:
        goto LABEL_4;
    }
  }
}

