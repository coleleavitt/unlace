__int64 __fastcall sub_38B9C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
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
  char *file_ext; // r15
  char v20; // r14
  size_t v21; // r15
  const char *v22; // r15
  __int64 v23; // r15
  const char *v24; // rsi
  int v25; // eax
  unsigned int v26; // ebx
  __m128i v27; // xmm0
  void *v28; // rdi
  __int64 v29; // rax
  size_t v31; // rax
  size_t v32; // r15
  void *v33; // rdi
  size_t v34; // r15
  size_t v35; // r14
  char *v36; // rax
  unsigned __int64 v37; // rdx
  size_t v38; // rax
  const char *v39; // rbx
  void *v40; // rdi
  size_t v41; // rdx
  void *v42; // rdi
  __int64 v43; // rax
  char *v44; // rax
  void *v45; // r13
  const char *v46; // rsi
  __int64 *v47; // r12
  size_t v48; // r15
  char *v49; // rsi
  char v50; // al
  _UNKNOWN **v51; // r14
  char *v52; // rcx
  size_t v53; // rax
  size_t v54; // r14
  const char *v55; // rdi
  __int64 v56; // rax
  char *v57; // rax
  __int64 v58; // rax
  const char *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  const char *v62; // rsi
  void *v63; // rdi
  size_t v64; // rdx
  const char *v65; // rdi
  const char *v66; // rax
  const char *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  const char *v70; // rdi
  __int64 v71; // rax
  void *v72; // rbx
  const char *v73; // rsi
  __int64 **v74; // rax
  const char *v75; // rbx
  size_t v76; // rax
  size_t v77; // r13
  size_t v78; // r12
  const char *v79; // rsi
  __int64 v80; // rax
  char *v81; // [rsp+18h] [rbp-20B8h]
  size_t v82; // [rsp+20h] [rbp-20B0h]
  char *v83; // [rsp+28h] [rbp-20A8h]
  int v84; // [rsp+30h] [rbp-20A0h]
  size_t v85; // [rsp+30h] [rbp-20A0h]
  void *dest; // [rsp+40h] [rbp-2090h] BYREF
  __m128i v88; // [rsp+48h] [rbp-2088h] BYREF
  void *ptr; // [rsp+60h] [rbp-2070h] BYREF
  __int128 v90; // [rsp+68h] [rbp-2068h]
  char v91[16]; // [rsp+80h] [rbp-2050h] BYREF
  char s[4096]; // [rsp+90h] [rbp-2040h] BYREF
  char src[4104]; // [rsp+1090h] [rbp-1040h] BYREF
  unsigned __int64 v94; // [rsp+2098h] [rbp-38h]

  v6 = a1[30];
  v94 = __readfsqword(0x28u);
  v7 = a1[29];
  v8 = v7;
  if ( (int)v7 <= 1 )
  {
    v84 = 1;
    v81 = nullptr;
    v83 = nullptr;
    if ( !*((_DWORD *)a1 + 67) )
    {
      if ( (_DWORD)v7 == 1 )
        goto LABEL_69;
      goto LABEL_94;
    }
LABEL_11:
    if ( a1[17] <= 1u )
    {
      if ( !under_debugger )
        interr(2856);
      BUG();
    }
    qstrncpy(s, a1[16], 4096);
    goto LABEL_13;
  }
  v83 = nullptr;
  v81 = nullptr;
  v84 = 1;
  while ( 2 )
  {
    while ( 1 )
    {
      v9 = *(_BYTE **)(v6 + 8);
      if ( *v9 == 45 )
        break;
      if ( *v9 )
      {
        if ( !*((_DWORD *)a1 + 67) )
        {
LABEL_94:
          qstrncpy(s, *(_QWORD *)(v6 + 8), 4096);
          if ( strchr(s, 63) || strchr(s, 42) )
            callui();
          goto LABEL_13;
        }
        goto LABEL_11;
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
        sub_38AB20("analysis.idc");
        batch[0] = 1;
        qword_2CCB548 = 0;
        goto LABEL_64;
      case 'C':
        a1[31] = v11;
        goto LABEL_4;
      case 'c':
LABEL_64:
        v84 = 0;
        goto LABEL_4;
      case 'o':
        if ( !v9[2] )
          sub_378D50();
        v83 = v9 + 2;
        goto LABEL_4;
      case 'p':
        *(_BYTE *)(*a1 + 157LL) = 1;
        v31 = strlen(v9 + 2);
        v32 = v31;
        if ( v31 )
        {
          v41 = v31 + 1;
          v42 = (void *)a1[5];
          if ( a1[7] < v31 + 1 )
          {
            v82 = v31 + 1;
            v58 = qvector_reserve(a1 + 5, a1[5], v41, 1);
            v41 = v82;
            v42 = (void *)v58;
            a1[5] = v58;
          }
          a1[6] = v41;
          memmove(v42, v11, v32);
          v81 = (char *)v11;
          *(_BYTE *)(a1[5] + v32) = 0;
        }
        else
        {
          v81 = (char *)v11;
          a1[6] = 0;
        }
        goto LABEL_4;
      case 'r':
        a1[9] = v11;
        goto LABEL_4;
      case 't':
        *((_BYTE *)a1 + 280) = 1;
        goto LABEL_4;
      case 'z':
        if ( (unsigned int)qsscanf((_DWORD)v11, (unsigned int)"%X", (unsigned int)&debug, v10, a5, a6) != 1 )
        {
          *(_DWORD *)&debug = -1;
          goto LABEL_9;
        }
        if ( debug >= 0 )
          goto LABEL_4;
LABEL_9:
        --v8;
        v6 += 8;
        sub_4B4F50(*a1);
        if ( v8 != 1 )
          continue;
LABEL_10:
        if ( *((_DWORD *)a1 + 67) )
          goto LABEL_11;
LABEL_69:
        if ( !*((_BYTE *)a1 + 280) && !a1[9] )
          callui();
        byte_2CCB4CA = 1;
        v8 = 1;
        s[0] = 0;
        sub_3889C0((__int64)a1, s, 4096, v83);
LABEL_13:
        if ( !s[0] )
          return (unsigned int)-2;
        if ( !byte_2CCB4CA )
          callui();
        set_database_flag(1, 1);
        dest = nullptr;
        v88 = 0;
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
            v33 = (void *)*v15;
            v34 = v16 + 1;
            if ( v15[2] < v16 + 1 )
            {
              v43 = qvector_reserve(v15, *v15, v16 + 1, 1);
              *v15 = v43;
              v33 = (void *)v43;
            }
            v15[1] = v34;
            v13 = s;
            memmove(v33, s, v17);
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
            if ( batch[0] && (v84 & 1) == 0 && (unsigned __int8)qfileexist(v18, v13) )
              sub_378D50();
            v83 = nullptr;
          }
          if ( !*((_DWORD *)a1 + 67) )
          {
            if ( file_ext && !strcasecmp(file_ext, "idb") )
            {
              if ( !*((_BYTE *)a1 + 280) && !a1[9] && (unsigned __int8)qfileexist(v18, "idb") )
                sub_378E50();
            }
            else if ( byte_2CCB4CB )
            {
              sub_378D50();
            }
          }
          ptr = nullptr;
          v90 = 0;
          if ( v18 )
          {
            v21 = strlen(v18);
            ptr = (void *)qvector_reserve(&ptr, 0, v21 + 1, 1);
            *(_QWORD *)&v90 = v21 + 1;
            memmove(ptr, v18, v21);
            *((_BYTE *)ptr + v21) = 0;
          }
          sub_3885A0((__int64)a1, (__int64 *)&dest, nullptr, v83, (__int64)&ptr, 0);
          if ( ptr )
          {
            *(_QWORD *)&v90 = 0;
            qfree(ptr);
          }
          v22 = haystack;
          if ( v88.m128i_i64[0] )
            v22 = (const char *)dest;
          if ( *((_BYTE *)a1 + 274) )
          {
            if ( v8 != 1 || !sub_388000((__int64)a1) )
              goto LABEL_44;
            v84 = 2;
LABEL_86:
            sub_593F40(s);
            if ( get_file_ext(v18) || v83 != nullptr || v84 == 2 )
              sub_387B90();
            v35 = strlen(s);
            if ( v35 )
            {
              v40 = dest;
              if ( v88.m128i_i64[1] < v35 + 1 )
              {
                dest = (void *)qvector_reserve(&dest, dest, v35 + 1, 1);
                v40 = dest;
              }
              v88.m128i_i64[0] = v35 + 1;
              memmove(v40, s, v35);
              *((_BYTE *)dest + v35) = 0;
            }
            else
            {
              v88.m128i_i64[0] = 0;
            }
            goto LABEL_45;
          }
          if ( !*((_BYTE *)a1 + 273) || !(unsigned __int8)qfileexist(v22, &dest) )
          {
            v23 = sub_3877D0((__int64)v22, v84 ^ 1u);
            if ( v8 != 1 || !sub_388000((__int64)a1) )
            {
              if ( !v23 )
                goto LABEL_106;
              goto LABEL_44;
            }
            if ( v23 )
              goto LABEL_105;
LABEL_106:
            if ( v81 || (v56 = get_file_ext(v18), v57 = (char *)sub_5FFE80(v56), (v81 = v57) != nullptr) && *v57 )
            {
              v36 = strchr(v81, 58);
              if ( v36 )
              {
                v37 = v36 - v81 + 1;
                if ( v37 > 0x10 )
                  v37 = 16;
              }
              else
              {
                v37 = strlen(v81) + 1;
                if ( v37 > 0x10 )
                  v37 = 16;
              }
            }
            else
            {
              v37 = 7;
              v81 = "metapc";
            }
            qstrncpy(v91, v81, v37);
            v38 = strlen(v91);
            setinf_buf(1, v91, v38);
            if ( *((_BYTE *)a1 + 280) )
              goto LABEL_113;
            v39 = (const char *)a1[9];
            if ( v39 )
            {
              if ( strchr((const char *)a1[9], 43) )
                goto LABEL_113;
              v44 = strchr(v39, 64);
              if ( v44 )
              {
                if ( v44[1] )
                  goto LABEL_113;
              }
            }
            v45 = nullptr;
            v46 = haystack;
            v47 = (__int64 *)*a1;
            v48 = *(_QWORD *)(*a1 + 8LL);
            if ( v48 )
            {
              v45 = (void *)qalloc_or_throw(*(_QWORD *)(*a1 + 8LL));
              memcpy(v45, (const void *)*v47, v48);
              if ( v47[1] )
                v46 = (const char *)*v47;
              else
                v46 = haystack;
            }
            qstrncpy(src, v46, 4096);
            v49 = (_BYTE *)(elf_gnu_hash_bucket + 1368);
            v50 = sub_5FFF00(src, 4096);
            v51 = &off_2B25B60;
            v52 = "zip";
            if ( !v50 )
            {
              do
              {
                v49 = (_BYTE *)(elf_gnu_hash_bucket + 1368);
                set_file_ext(src, 4096, src, v52);
                if ( (unsigned __int8)qfileexist(src, 4096) )
                  break;
                v52 = (char *)v51[1];
                ++v51;
              }
              while ( v52 );
            }
            v53 = strlen(src);
            v54 = v53;
            if ( v53 )
            {
              v63 = (void *)*v47;
              v64 = v53 + 1;
              if ( v47[2] < v53 + 1 )
              {
                v85 = v53 + 1;
                v80 = qvector_reserve(v47, *v47, v64, 1);
                *v47 = v80;
                v64 = v85;
                v63 = (void *)v80;
              }
              v47[1] = v64;
              v49 = src;
              memmove(v63, src, v54);
              *(_BYTE *)(*v47 + v54) = 0;
              if ( v47[1] )
              {
                v55 = (const char *)*v47;
LABEL_139:
                if ( (unsigned __int8)qisdir(v55) )
                {
                  if ( batch[0] )
                    callui();
                  sub_378D50();
                }
                v59 = haystack;
                if ( v47[1] )
                  v59 = (const char *)*v47;
                if ( !(unsigned __int8)qfileexist(v59, v49) )
                  goto LABEL_152;
                v65 = haystack;
                if ( v47[1] )
                  v65 = (const char *)*v47;
                v66 = (const char *)get_file_ext(v65);
                v67 = v66;
                if ( v66 && (!strcasecmp(v66, "idb") || !strcasecmp(v67, "i64") || (unsigned __int8)sub_591340(v67)) )
                {
                  v79 = haystack;
                  if ( v47[1] )
                    v79 = (const char *)*v47;
                  sub_387D20(1432, (__int64)v79, v68, v69);
                }
                v70 = haystack;
                if ( v47[1] )
                  v70 = (const char *)*v47;
                v71 = open_linput(v70, 0);
                v72 = (void *)v71;
                if ( !v71 )
                {
LABEL_152:
                  if ( batch[0] )
                    callui();
                  v62 = haystack;
                  if ( v48 )
                    v62 = (const char *)v45;
                  sub_387D20(1437, (__int64)v62, v60, v61);
                }
                v73 = haystack;
                if ( v47[1] )
                  v73 = (const char *)*v47;
                a1[8] = build_loaders_list(v71, v73);
                close_linput(v72);
                v74 = (__int64 **)a1[8];
                if ( v74 )
                {
                  do
                  {
                    if ( ((_BYTE)v74[11] & 1) != 0 )
                    {
                      if ( v45 )
                        qfree(v45);
                      v75 = haystack;
                      if ( *(_QWORD *)(*a1 + 8LL) )
                        v75 = *(const char **)*a1;
                      ptr = nullptr;
                      v90 = 0;
                      if ( v75 )
                      {
                        v76 = strlen(v75);
                        v77 = v76 + 1;
                        v78 = v76;
                        ptr = (void *)qvector_reserve(&ptr, 0, v76 + 1, 1);
                        *(_QWORD *)&v90 = v77;
                        memmove(ptr, v75, v78);
                        *((_BYTE *)ptr + v78) = 0;
                      }
                      sub_3885A0((__int64)a1, (__int64 *)&dest, (_BYTE *)a1 + 279, v83, (__int64)&ptr, 1);
                      if ( ptr )
                      {
                        *(_QWORD *)&v90 = 0;
                        qfree(ptr);
                      }
                      goto LABEL_113;
                    }
                    v74 = (__int64 **)*v74;
                  }
                  while ( v74 );
                  if ( !v45 )
                    goto LABEL_113;
                }
                else if ( !v45 )
                {
                  goto LABEL_113;
                }
                qfree(v45);
LABEL_113:
                v26 = 1;
                goto LABEL_53;
              }
            }
            else
            {
              v47[1] = 0;
            }
            v55 = haystack;
            goto LABEL_139;
          }
          if ( v8 == 1 && sub_388000((__int64)a1) )
          {
LABEL_105:
            v84 = 2;
            goto LABEL_86;
          }
LABEL_44:
          if ( !v20 )
            goto LABEL_86;
LABEL_45:
          if ( v84 != 1 )
            goto LABEL_106;
          if ( *((_BYTE *)a1 + 274) )
          {
            sub_388C00((__int64)a1);
            sub_593F40(s);
            if ( (unsigned __int8)qfileexist(s, 4096) )
            {
              if ( !(unsigned __int8)sub_38B560((__int64)a1, "overwrite", s) )
                sub_368890();
            }
          }
          v24 = haystack;
          if ( v88.m128i_i64[0] )
            v24 = (const char *)dest;
          v25 = sub_5983D0(*a1, v24, *((unsigned __int8 *)a1 + 273));
          if ( v25 != 2 )
          {
            if ( v25 == 3 )
            {
              qstrncpy(s, v18, 4096);
              v84 = 0;
            }
            else if ( v25 )
            {
              v26 = 0;
LABEL_53:
              v27 = _mm_loadu_si128(&v88);
              v28 = (void *)a1[2];
              v29 = a1[4];
              a1[2] = dest;
              *(__m128i *)(a1 + 3) = v27;
              dest = v28;
              v88.m128i_i64[1] = v29;
              goto LABEL_54;
            }
            *((_BYTE *)a1 + 274) = 0;
            continue;
          }
          break;
        }
        v28 = dest;
        v26 = -4;
LABEL_54:
        if ( v28 )
        {
          v88.m128i_i64[0] = 0;
          qfree(v28);
        }
        return v26;
      default:
        goto LABEL_4;
    }
  }
}
