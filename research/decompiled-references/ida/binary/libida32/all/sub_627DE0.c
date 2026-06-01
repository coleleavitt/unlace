__int64 __fastcall sub_627DE0(__int64 a1, __int64 a2)
{
  const char *v2; // rsi
  __int64 v3; // rbx
  size_t v4; // r12
  __m128i v5; // xmm0
  void *v6; // rdx
  __m128i si128; // xmm1
  __m128i v8; // xmm0
  char *v9; // rdx
  __m128i v10; // xmm1
  __int64 v11; // rcx
  __int64 v12; // r12
  const char *v13; // rsi
  _QWORD *v15; // rax
  const char *v16; // rcx
  __int64 v17; // rax
  char *v18; // r8
  size_t v19; // rax
  size_t v20; // r15
  size_t v21; // r13
  char *v22; // rax
  unsigned __int64 v23; // r15
  char *v24; // rax
  signed __int64 v25; // r13
  void *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // r13
  size_t v30; // rax
  size_t v31; // r15
  size_t v32; // r13
  char *v33; // rcx
  char *v34; // rdx
  const char *v35; // rsi
  __int64 v36; // rax
  const char *v37; // r14
  __int64 v38; // rbx
  char *v39; // r15
  const char *v40; // rdi
  __int64 v41; // rdx
  char *srca; // [rsp+38h] [rbp-1200h]
  char *src; // [rsp+38h] [rbp-1200h]
  void *srcb; // [rsp+38h] [rbp-1200h]
  void *ptr; // [rsp+40h] [rbp-11F8h] BYREF
  __m128i v46; // [rsp+48h] [rbp-11F0h] BYREF
  char *v47; // [rsp+60h] [rbp-11D8h] BYREF
  __m128i v48; // [rsp+68h] [rbp-11D0h] BYREF
  char *s2; // [rsp+80h] [rbp-11B8h] BYREF
  __int128 v50; // [rsp+88h] [rbp-11B0h]
  char v51[8]; // [rsp+A0h] [rbp-1198h] BYREF
  __int128 v52; // [rsp+A8h] [rbp-1190h]
  __int64 v53; // [rsp+B8h] [rbp-1180h]
  char v54[8]; // [rsp+C0h] [rbp-1178h] BYREF
  _BYTE v55[24]; // [rsp+C8h] [rbp-1170h] BYREF
  char v56[8]; // [rsp+E0h] [rbp-1158h] BYREF
  _BYTE v57[24]; // [rsp+E8h] [rbp-1150h] BYREF
  char v58[8]; // [rsp+100h] [rbp-1138h] BYREF
  __int128 v59; // [rsp+108h] [rbp-1130h]
  __int64 v60; // [rsp+118h] [rbp-1120h]
  char v61[8]; // [rsp+120h] [rbp-1118h] BYREF
  __int128 v62; // [rsp+128h] [rbp-1110h]
  __int64 v63; // [rsp+138h] [rbp-1100h]
  char v64[8]; // [rsp+140h] [rbp-10F8h] BYREF
  _BYTE v65[24]; // [rsp+148h] [rbp-10F0h] BYREF
  _QWORD v66[10]; // [rsp+160h] [rbp-10D8h] BYREF
  __int128 v67; // [rsp+1B0h] [rbp-1088h]
  void *v68; // [rsp+1C0h] [rbp-1078h]
  __int128 v69; // [rsp+1C8h] [rbp-1070h]
  char s[4096]; // [rsp+1D8h] [rbp-1060h] BYREF
  char v71; // [rsp+11D8h] [rbp-60h]
  char v72[24]; // [rsp+11E0h] [rbp-58h] BYREF
  unsigned __int64 v73; // [rsp+11F8h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  if ( (debug & 0x10) != 0 )
    sub_383DA0();
  if ( a2 )
  {
    v66[0] = 0;
    v71 = 1;
    v68 = nullptr;
    s[0] = 0;
    v67 = 0;
    v69 = 0;
    if ( !(unsigned __int8)sub_6237A0(v66, a2) )
    {
LABEL_29:
      if ( v71 && v66[0] )
      {
        if ( (debug & 0x10) != 0 )
          sub_383DA0();
        free_dll(v66);
      }
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      if ( *((_QWORD *)&v67 + 1) )
        --*(_DWORD *)(*((_QWORD *)&v67 + 1) + 12LL);
      return 0;
    }
    v61[0] = 2;
    v63 = 0;
    v64[0] = 2;
    v62 = 0;
    memset(v65, 0, sizeof(v65));
    if ( *((_QWORD *)&v67 + 1) )
    {
      v2 = *(const char **)(*(_QWORD *)(a1 + 8) + 8LL);
      copy_idcv(v61);
      v3 = *(_QWORD *)(a1 + 8);
      free_idcv(v64);
      v64[0] = 7;
      memset(v65, 0, sizeof(v65));
      v4 = *(_QWORD *)(v3 + 32);
      if ( v4 )
      {
        *(_QWORD *)v65 = qalloc_or_throw(*(_QWORD *)(v3 + 32), v2);
        *(_QWORD *)&v65[16] = v4;
        memcpy(*(void **)v65, *(const void **)(v3 + 24), v4);
        *(_QWORD *)&v65[8] = v4;
      }
    }
    ptr = nullptr;
    v47 = nullptr;
    v46 = 0;
    v48 = 0;
    qlseek(**(_QWORD **)(a1 + 8), 0, 0);
    if ( (debug & 0x10) != 0 )
      sub_383DA0();
    if ( !*((_QWORD *)&v67 + 1) )
    {
      v15 = *(_QWORD **)(a1 + 8);
      v16 = haystack;
      if ( v15[4] )
        v16 = (const char *)v15[3];
      if ( (*(unsigned int (__fastcall **)(void **, char **, _QWORD, const char *))(v67 + 8))(&ptr, &v47, *v15, v16) )
      {
        v12 = *(_QWORD *)(a1 + 8);
        if ( v48.m128i_i64[0] <= 1uLL )
          goto LABEL_21;
        goto LABEL_42;
      }
      goto LABEL_24;
    }
    v52 = 0;
    v51[0] = 2;
    v53 = 0;
    s2 = nullptr;
    v50 = 0;
    if ( (unsigned __int8)sub_623A80(v66, (__int64)v51, "accept_file", (__int64)v61, 2, (__int64)&s2) )
    {
      if ( v51[0] == 2 )
      {
        if ( !(_DWORD)v52 )
        {
LABEL_72:
          if ( s2 )
          {
            *(_QWORD *)&v50 = 0;
            qfree(s2);
          }
          free_idcv(v51);
LABEL_24:
          if ( v47 )
          {
            v48.m128i_i64[0] = 0;
            qfree(v47);
          }
          if ( ptr )
          {
            v46.m128i_i64[0] = 0;
            qfree(ptr);
          }
          free_idcv(v64);
          free_idcv(v61);
          goto LABEL_29;
        }
        v54[0] = 2;
        v56[0] = 2;
        memset(v55, 0, sizeof(v55));
        memset(v57, 0, sizeof(v57));
      }
      else
      {
        v54[0] = 2;
        v56[0] = 2;
        memset(v55, 0, sizeof(v55));
        memset(v57, 0, sizeof(v57));
        if ( v51[0] == 7 )
        {
          if ( *((_QWORD *)&v52 + 1) > 1u )
          {
            copy_idcv(v54);
            goto LABEL_14;
          }
          free_idcv(v56);
          free_idcv(v54);
          goto LABEL_72;
        }
      }
      if ( !(unsigned int)get_idcv_attr() && v54[0] == 7 && ((unsigned int)get_idcv_attr() || v56[0] == 7) )
      {
LABEL_14:
        if ( v51[0] == 5 )
        {
          v58[0] = 2;
          v59 = 0;
          v60 = 0;
          get_idcv_attr();
          get_idcv_attr();
          free_idcv(v58);
        }
        v5 = _mm_loadu_si128(&v46);
        v6 = *(void **)v55;
        si128 = _mm_load_si128((const __m128i *)&v55[8]);
        *(_QWORD *)v55 = ptr;
        ptr = v6;
        v46 = si128;
        *(__m128i *)&v55[8] = v5;
        if ( v56[0] == 7 )
        {
          v8 = _mm_loadu_si128(&v48);
          v9 = *(char **)v57;
          v10 = _mm_load_si128((const __m128i *)&v57[8]);
          *(_QWORD *)v57 = v47;
          v47 = v9;
          v48 = v10;
          *(__m128i *)&v57[8] = v8;
        }
        free_idcv(v56);
        free_idcv(v54);
        if ( s2 )
        {
          *(_QWORD *)&v50 = 0;
          qfree(s2);
        }
        free_idcv(v51);
        v12 = *(_QWORD *)(a1 + 8);
        if ( v48.m128i_i64[0] <= 1uLL )
          goto LABEL_21;
LABEL_42:
        v17 = *(_QWORD *)(v12 + 56);
        if ( !v17 )
          goto LABEL_21;
        v18 = v47;
        s2 = nullptr;
        v50 = 0;
        if ( v47 )
        {
          srca = v47;
          v19 = strlen(v47);
          v20 = v19 + 1;
          v21 = v19;
          v22 = (char *)qvector_reserve(&s2, 0, v19 + 1, 1);
          *(_QWORD *)&v50 = v20;
          s2 = v22;
          memmove(v22, srca, v21);
          s2[v21] = 0;
          v23 = v50;
          v18 = s2;
          if ( !(_QWORD)v50 || (src = s2, v24 = strchr(s2, 58), v18 = src, !v24) || (v25 = v24 - src, v24 - src == -1) )
          {
            v27 = *(_QWORD *)(v12 + 56);
            goto LABEL_52;
          }
          if ( v25 )
          {
            v26 = (void *)(v25 + 1);
            if ( v23 < v25 + 1 )
            {
              if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)v26 )
              {
                s2 = (char *)qvector_reserve(&s2, src, v25 + 1, 1);
                v23 = v50;
                v18 = s2;
                v26 = (void *)(v25 + 1);
              }
              srcb = v26;
              memset(&v18[v23], 0, (size_t)v26 - v23);
              *(_QWORD *)&v50 = srcb;
              v24 = &s2[v25];
            }
            else if ( v23 != v25 + 1 )
            {
              *(_QWORD *)&v50 = v25 + 1;
            }
            *v24 = 0;
            v27 = *(_QWORD *)(v12 + 56);
            v18 = s2;
LABEL_52:
            v28 = *(_QWORD *)(v12 + 48);
            v29 = v28 + 56 * v27;
            if ( !(56 * v27) )
            {
              if ( v18 )
                goto LABEL_89;
              goto LABEL_54;
            }
            goto LABEL_78;
          }
          if ( src )
          {
            *(_QWORD *)&v50 = 0;
            qfree(src);
            s2 = nullptr;
            *((_QWORD *)&v50 + 1) = 0;
          }
          v41 = *(_QWORD *)(v12 + 56);
          v28 = *(_QWORD *)(v12 + 48);
          v29 = v28 + 56 * v41;
          if ( !(56 * v41) )
            goto LABEL_54;
          v18 = s2;
        }
        else
        {
          v28 = *(_QWORD *)(v12 + 48);
          v36 = 56 * v17;
          v29 = v28 + v36;
          if ( !v36 )
            goto LABEL_54;
        }
LABEL_78:
        v37 = haystack;
        v38 = v28;
        if ( (_QWORD)v50 )
          v37 = v18;
        v39 = v18;
        while ( 1 )
        {
          v40 = haystack;
          if ( *(_QWORD *)(v38 + 32) )
            v40 = *(const char **)(v38 + 24);
          if ( !strcasecmp(v40, v37) )
            break;
          v38 += 56;
          if ( v38 == v29 )
          {
            v18 = v39;
            if ( v39 )
            {
LABEL_89:
              *(_QWORD *)&v50 = 0;
              qfree(v18);
            }
LABEL_54:
            if ( !getinf_buf(1, v72, 16) )
              v72[0] = 0;
            s2 = nullptr;
            v50 = 0;
            v30 = strlen(v72);
            v31 = v30 + 1;
            v32 = v30;
            s2 = (char *)qvector_reserve(&s2, 0, v30 + 1, 1);
            *(_QWORD *)&v50 = v31;
            memmove(s2, v72, v32);
            v33 = (char *)haystack;
            s2[v32] = 0;
            if ( (_QWORD)v50 )
              v33 = s2;
            v34 = (char *)haystack;
            if ( v48.m128i_i64[0] )
              v34 = v47;
            v35 = haystack;
            if ( v46.m128i_i64[0] )
              v35 = (const char *)ptr;
            sub_3840D0(1095, (__int64)v35, (__int64)v34, (__int64)v33);
          }
        }
        if ( v39 )
        {
          *(_QWORD *)&v50 = 0;
          qfree(v39);
        }
LABEL_21:
        v13 = haystack;
        if ( v46.m128i_i64[0] )
          v13 = (const char *)ptr;
        sub_3840D0(1236, (__int64)v13, (__int64)s, v11);
      }
      sub_3573A0(&s2);
      free_idcv(v56);
      free_idcv(v54);
    }
    sub_375400();
  }
  return 0;
}

