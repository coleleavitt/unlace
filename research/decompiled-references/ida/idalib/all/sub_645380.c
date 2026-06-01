__int64 __fastcall sub_645380(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // r12
  int v4; // ebx
  __m128i v5; // xmm0
  void *v6; // rdx
  __m128i si128; // xmm1
  __m128i v8; // xmm0
  char *v9; // rdx
  __m128i v10; // xmm1
  __int64 v11; // rcx
  _QWORD *v13; // rax
  const char *v14; // rcx
  __int64 v15; // r12
  const char *v16; // rsi
  __int64 v17; // rax
  char *v18; // r8
  size_t v19; // r13
  char *v20; // rax
  char *v21; // rdx
  signed __int64 v22; // r13
  size_t v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rdx
  size_t v27; // r13
  char *v28; // rcx
  char *v29; // rdx
  const char *v30; // rsi
  __int64 v31; // rax
  const char *v32; // r14
  __int64 v33; // rbx
  __int64 v34; // r13
  const char *v35; // rdi
  __int64 v36; // rcx
  char *n; // [rsp+30h] [rbp-1208h]
  size_t na; // [rsp+30h] [rbp-1208h]
  char *srcb; // [rsp+38h] [rbp-1200h]
  char *src; // [rsp+38h] [rbp-1200h]
  char *srca; // [rsp+38h] [rbp-1200h]
  void *ptr; // [rsp+40h] [rbp-11F8h] BYREF
  __m128i v43; // [rsp+48h] [rbp-11F0h] BYREF
  char *v44; // [rsp+60h] [rbp-11D8h] BYREF
  __m128i v45; // [rsp+68h] [rbp-11D0h] BYREF
  char *s2; // [rsp+80h] [rbp-11B8h] BYREF
  __int128 v47; // [rsp+88h] [rbp-11B0h]
  char v48[8]; // [rsp+A0h] [rbp-1198h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-1190h]
  __int64 v50; // [rsp+B8h] [rbp-1180h]
  char v51[8]; // [rsp+C0h] [rbp-1178h] BYREF
  _BYTE v52[24]; // [rsp+C8h] [rbp-1170h] BYREF
  char v53[8]; // [rsp+E0h] [rbp-1158h] BYREF
  _BYTE v54[24]; // [rsp+E8h] [rbp-1150h] BYREF
  char v55[8]; // [rsp+100h] [rbp-1138h] BYREF
  __int128 v56; // [rsp+108h] [rbp-1130h]
  __int64 v57; // [rsp+118h] [rbp-1120h]
  char v58[8]; // [rsp+120h] [rbp-1118h] BYREF
  __int128 v59; // [rsp+128h] [rbp-1110h]
  __int64 v60; // [rsp+138h] [rbp-1100h]
  char v61[8]; // [rsp+140h] [rbp-10F8h] BYREF
  _BYTE v62[24]; // [rsp+148h] [rbp-10F0h] BYREF
  _QWORD v63[10]; // [rsp+160h] [rbp-10D8h] BYREF
  __int128 v64; // [rsp+1B0h] [rbp-1088h]
  void *v65; // [rsp+1C0h] [rbp-1078h]
  __int128 v66; // [rsp+1C8h] [rbp-1070h]
  char s[4096]; // [rsp+1D8h] [rbp-1060h] BYREF
  char v68; // [rsp+11D8h] [rbp-60h]
  char v69[24]; // [rsp+11E0h] [rbp-58h] BYREF
  unsigned __int64 v70; // [rsp+11F8h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  if ( (debug & 0x10) != 0 )
    sub_3879F0();
  if ( a2 )
  {
    v63[0] = 0;
    v68 = 1;
    v65 = nullptr;
    s[0] = 0;
    v64 = 0;
    v66 = 0;
    if ( !(unsigned __int8)sub_640A20(v63, a2) )
    {
LABEL_25:
      if ( v68 && v63[0] )
      {
        if ( (debug & 0x10) != 0 )
          sub_3879F0();
        free_dll(v63);
      }
      if ( v65 )
      {
        *(_QWORD *)&v66 = 0;
        qfree(v65);
      }
      if ( *((_QWORD *)&v64 + 1) )
        --*(_DWORD *)(*((_QWORD *)&v64 + 1) + 12LL);
      return 0;
    }
    v58[0] = 2;
    v60 = 0;
    v61[0] = 2;
    v59 = 0;
    memset(v62, 0, sizeof(v62));
    if ( *((_QWORD *)&v64 + 1) )
    {
      copy_idcv(v58);
      v2 = *(_QWORD *)(a1 + 8);
      free_idcv(v61);
      v61[0] = 7;
      memset(v62, 0, sizeof(v62));
      v3 = *(_QWORD *)(v2 + 32);
      if ( v3 )
      {
        *(_QWORD *)v62 = qalloc_or_throw(*(_QWORD *)(v2 + 32));
        *(_QWORD *)&v62[16] = v3;
        memcpy(*(void **)v62, *(const void **)(v2 + 24), v3);
        *(_QWORD *)&v62[8] = v3;
      }
    }
    ptr = nullptr;
    v44 = nullptr;
    v43 = 0;
    v45 = 0;
    qlseek(**(_QWORD **)(a1 + 8), 0, 0);
    if ( (debug & 0x10) != 0 )
      sub_3879F0();
    if ( !*((_QWORD *)&v64 + 1) )
    {
      v13 = *(_QWORD **)(a1 + 8);
      v14 = haystack;
      if ( v13[4] )
        v14 = (const char *)v13[3];
      if ( !(*(unsigned int (__fastcall **)(void **, char **, _QWORD, const char *))(v64 + 8))(&ptr, &v44, *v13, v14) )
        goto LABEL_20;
      goto LABEL_37;
    }
    v49 = 0;
    v48[0] = 2;
    v50 = 0;
    s2 = nullptr;
    v47 = 0;
    if ( (unsigned __int8)sub_640D00(v63, (__int64)v48, "accept_file", (__int64)v58, 2, (__int64)&s2) )
    {
      if ( v48[0] == 2 )
      {
        if ( !(_QWORD)v49 )
          goto LABEL_50;
        v51[0] = 2;
        v53[0] = 2;
        memset(v52, 0, sizeof(v52));
        memset(v54, 0, sizeof(v54));
      }
      else
      {
        v51[0] = 2;
        v53[0] = 2;
        memset(v52, 0, sizeof(v52));
        memset(v54, 0, sizeof(v54));
        if ( v48[0] == 7 )
        {
          if ( *((_QWORD *)&v49 + 1) > 1u )
          {
            copy_idcv(v51);
            goto LABEL_14;
          }
          free_idcv(v53);
          free_idcv(v51);
LABEL_50:
          if ( s2 )
          {
            *(_QWORD *)&v47 = 0;
            qfree(s2);
          }
          free_idcv(v48);
          goto LABEL_20;
        }
      }
      if ( !(unsigned int)get_idcv_attr(v51, v48, "format", 0)
        && v51[0] == 7
        && ((unsigned int)get_idcv_attr(v53, v48, "processor", 0) || v53[0] == 7) )
      {
LABEL_14:
        v4 = 1;
        if ( v48[0] == 5 )
        {
          v55[0] = 2;
          v56 = 0;
          v57 = 0;
          if ( !(unsigned int)get_idcv_attr(v55, v48, "options", 0) && v55[0] == 2 && (_QWORD)v56 )
            v4 = v56;
          get_idcv_attr(v55, v48, "flags", 0);
          free_idcv(v55);
        }
        v5 = _mm_loadu_si128(&v43);
        v6 = *(void **)v52;
        si128 = _mm_load_si128((const __m128i *)&v52[8]);
        *(_QWORD *)v52 = ptr;
        ptr = v6;
        v43 = si128;
        *(__m128i *)&v52[8] = v5;
        if ( v53[0] == 7 )
        {
          v8 = _mm_loadu_si128(&v45);
          v9 = *(char **)v54;
          v10 = _mm_load_si128((const __m128i *)&v54[8]);
          *(_QWORD *)v54 = v44;
          v44 = v9;
          v45 = v10;
          *(__m128i *)&v54[8] = v8;
        }
        free_idcv(v53);
        free_idcv(v51);
        if ( s2 )
        {
          *(_QWORD *)&v47 = 0;
          qfree(s2);
        }
        free_idcv(v48);
        if ( !v4 )
        {
LABEL_20:
          if ( v44 )
          {
            v45.m128i_i64[0] = 0;
            qfree(v44);
          }
          if ( ptr )
          {
            v43.m128i_i64[0] = 0;
            qfree(ptr);
          }
          free_idcv(v61);
          free_idcv(v58);
          goto LABEL_25;
        }
LABEL_37:
        v15 = *(_QWORD *)(a1 + 8);
        if ( v45.m128i_i64[0] <= 1uLL )
          goto LABEL_38;
        v17 = *(_QWORD *)(v15 + 56);
        if ( !v17 )
          goto LABEL_38;
        v18 = v44;
        s2 = nullptr;
        v47 = 0;
        if ( v44 )
        {
          srcb = v44;
          v19 = strlen(v44);
          s2 = (char *)qvector_reserve(&s2, 0, v19 + 1, 1);
          *(_QWORD *)&v47 = v19 + 1;
          memmove(s2, srcb, v19);
          s2[v19] = 0;
          v18 = s2;
          if ( !(_QWORD)v47
            || (src = (char *)v47, n = s2, v20 = strchr(s2, 58), v18 = n, v21 = src, !v20)
            || (v22 = v20 - n, v20 - n == -1) )
          {
            v24 = *(_QWORD *)(v15 + 56);
            goto LABEL_63;
          }
          if ( v22 )
          {
            v23 = v22 + 1;
            if ( (unsigned __int64)src < v22 + 1 )
            {
              if ( *((_QWORD *)&v47 + 1) < v23 )
              {
                s2 = (char *)qvector_reserve(&s2, n, v22 + 1, 1);
                v21 = (char *)v47;
                v18 = s2;
                v23 = v22 + 1;
              }
              na = v23;
              memset(&v21[(_QWORD)v18], 0, v23 - (_QWORD)v21);
              *(_QWORD *)&v47 = na;
              v20 = &s2[v22];
            }
            else if ( src != (char *)(v22 + 1) )
            {
              *(_QWORD *)&v47 = v22 + 1;
            }
            *v20 = 0;
            v24 = *(_QWORD *)(v15 + 56);
            v18 = s2;
LABEL_63:
            v25 = *(_QWORD *)(v15 + 48);
            v26 = v25 + 56 * v24;
            if ( !(56 * v24) )
            {
              if ( v18 )
                goto LABEL_94;
              goto LABEL_65;
            }
            goto LABEL_83;
          }
          if ( n )
          {
            *(_QWORD *)&v47 = 0;
            qfree(n);
            s2 = nullptr;
            *((_QWORD *)&v47 + 1) = 0;
          }
          v36 = *(_QWORD *)(v15 + 56);
          v25 = *(_QWORD *)(v15 + 48);
          v26 = v25 + 56 * v36;
          if ( !(56 * v36) )
            goto LABEL_65;
          v18 = s2;
        }
        else
        {
          v25 = *(_QWORD *)(v15 + 48);
          v31 = 56 * v17;
          v26 = v25 + v31;
          if ( !v31 )
            goto LABEL_65;
        }
LABEL_83:
        v32 = haystack;
        v33 = v25;
        srca = v18;
        if ( (_QWORD)v47 )
          v32 = v18;
        v34 = v26;
        while ( 1 )
        {
          v35 = haystack;
          if ( *(_QWORD *)(v33 + 32) )
            v35 = *(const char **)(v33 + 24);
          if ( !strcasecmp(v35, v32) )
            break;
          v33 += 56;
          if ( v33 == v34 )
          {
            v18 = srca;
            if ( srca )
            {
LABEL_94:
              *(_QWORD *)&v47 = 0;
              qfree(v18);
            }
LABEL_65:
            if ( !getinf_buf(1, v69, 16) )
              v69[0] = 0;
            s2 = nullptr;
            v47 = 0;
            v27 = strlen(v69);
            s2 = (char *)qvector_reserve(&s2, 0, v27 + 1, 1);
            *(_QWORD *)&v47 = v27 + 1;
            memmove(s2, v69, v27);
            v28 = (char *)haystack;
            s2[v27] = 0;
            if ( (_QWORD)v47 )
              v28 = s2;
            v29 = (char *)haystack;
            if ( v45.m128i_i64[0] )
              v29 = v44;
            v30 = haystack;
            if ( v43.m128i_i64[0] )
              v30 = (const char *)ptr;
            sub_387DF0(1095, (__int64)v30, (__int64)v29, (__int64)v28);
          }
        }
        if ( srca )
        {
          *(_QWORD *)&v47 = 0;
          qfree(srca);
        }
LABEL_38:
        v16 = haystack;
        if ( v43.m128i_i64[0] )
          v16 = (const char *)ptr;
        sub_387DF0(1236, (__int64)v16, (__int64)s, v11);
      }
      sub_35A790(&s2);
      free_idcv(v53);
      free_idcv(v51);
    }
    sub_378D50();
  }
  return 0;
}
