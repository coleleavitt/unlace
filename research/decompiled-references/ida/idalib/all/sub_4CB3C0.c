__int64 __fastcall sub_4CB3C0(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, _QWORD, char *, char *, const char *),
        __int64 a3,
        char a4)
{
  __int64 v5; // rdx
  unsigned __int64 v7; // rax
  const char *v8; // rdx
  unsigned __int8 default_encoding_idx; // al
  __int64 encoding_name; // rbx
  unsigned __int8 v11; // al
  unsigned __int8 (*v12)(void); // rax
  int v13; // eax
  char *j; // r8
  __int64 v15; // rbp
  unsigned __int64 v16; // rbx
  _BYTE *v17; // rsi
  char *v18; // rdi
  __int64 v19; // rax
  void *v20; // rdx
  int v21; // r15d
  __m128i v22; // xmm0
  size_t v24; // rax
  __int64 v25; // rbx
  size_t v26; // rbp
  size_t v27; // r8
  _BYTE *v28; // rsi
  __int64 v29; // rdx
  const char *v30; // r9
  int v31; // eax
  int v32; // ebp
  size_t v33; // rax
  __int64 v34; // r8
  size_t v35; // r15
  size_t v36; // r10
  _BYTE *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r15
  _BYTE *v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rax
  _BYTE *v44; // rbx
  unsigned int v45; // r13d
  unsigned int k; // eax
  int v47; // eax
  size_t v48; // rax
  __int64 v49; // rbx
  size_t v50; // r9
  size_t v51; // r10
  _BYTE *v52; // rsi
  __int64 v53; // rdx
  void *v54; // r10
  size_t v55; // rbx
  __int64 v56; // r9
  size_t v57; // r11
  _BYTE *v58; // rsi
  __int64 v59; // rdx
  const char *v60; // r14
  unsigned int v61; // r15d
  __int64 v62; // rbx
  unsigned __int64 v63; // r14
  _BYTE *v64; // rsi
  size_t v65; // rax
  __int64 v66; // r8
  size_t v67; // r15
  size_t v68; // r10
  _BYTE *v69; // rsi
  __int64 v70; // rdx
  char *v71; // [rsp+0h] [rbp-128h]
  __int64 v72; // [rsp+0h] [rbp-128h]
  __int64 v73; // [rsp+0h] [rbp-128h]
  char *v74; // [rsp+0h] [rbp-128h]
  __int64 v75; // [rsp+0h] [rbp-128h]
  __int64 v76; // [rsp+0h] [rbp-128h]
  __int64 v77; // [rsp+0h] [rbp-128h]
  __int64 v78; // [rsp+0h] [rbp-128h]
  unsigned int i; // [rsp+8h] [rbp-120h]
  size_t v82; // [rsp+28h] [rbp-100h]
  void *v83; // [rsp+28h] [rbp-100h]
  size_t v84; // [rsp+28h] [rbp-100h]
  __int64 v85; // [rsp+30h] [rbp-F8h]
  size_t v86; // [rsp+30h] [rbp-F8h]
  size_t v87; // [rsp+30h] [rbp-F8h]
  __int64 v88; // [rsp+30h] [rbp-F8h]
  size_t v89; // [rsp+30h] [rbp-F8h]
  size_t v90; // [rsp+38h] [rbp-F0h]
  __int64 v91; // [rsp+38h] [rbp-F0h]
  char v92; // [rsp+43h] [rbp-E5h] BYREF
  unsigned int v93; // [rsp+44h] [rbp-E4h] BYREF
  void *v94; // [rsp+48h] [rbp-E0h] BYREF
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v96; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v97[4]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 (__fastcall **v98)(); // [rsp+90h] [rbp-98h] BYREF
  __int64 v99; // [rsp+98h] [rbp-90h]
  const char *v100; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v101; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v102; // [rsp+B0h] [rbp-78h]
  char src[8]; // [rsp+B8h] [rbp-70h] BYREF
  char s[16]; // [rsp+C0h] [rbp-68h] BYREF
  char v105[24]; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v106; // [rsp+E8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v106 = __readfsqword(0x28u);
  v96 = 0;
  ptr = nullptr;
  if ( !v5 )
  {
    if ( (a4 & 1) != 0 )
      goto LABEL_3;
LABEL_17:
    v18 = *(char **)a1;
    goto LABEL_18;
  }
  ptr = (void *)qvector_reserve(&ptr, 0, v5, 1);
  v43 = *(_QWORD *)(a1 + 8);
  if ( (a4 & 1) != 0 )
  {
    if ( v43 )
    {
      v8 = *(const char **)a1;
      v7 = v43 - 1;
LABEL_4:
      v99 = 0;
      v100 = v8;
      v101 = v7;
      v98 = off_2B3DE50;
      v102 = 0;
      default_encoding_idx = get_default_encoding_idx(1);
      encoding_name = get_encoding_name(default_encoding_idx);
      v11 = getinf_flag(3, 32);
      sub_8B7BF0(v97, &v98, encoding_name, v11, 0);
      for ( i = 0; ; ++i )
      {
        v12 = *(unsigned __int8 (**)(void))(*(_QWORD *)v97[0] + 16LL);
        if ( (char *)v12 == (char *)sub_4C74A0 )
        {
          if ( *(_QWORD *)(v97[0] + 32LL) >= *(_QWORD *)(v97[0] + 24LL) )
            goto LABEL_17;
        }
        else if ( v12() )
        {
          goto LABEL_17;
        }
        src[0] = 0;
        v93 = -1;
        v13 = sub_8B7CF0(v97, src, &v93);
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            for ( j = src; *j; *((_BYTE *)ptr + v15 + 1) = 0 )
            {
              v15 = v96.m128i_i64[0];
              ++j;
              v16 = 2;
              if ( v96.m128i_i64[0] )
              {
                v16 = v96.m128i_i64[0] + 1;
                v15 = v96.m128i_i64[0] - 1;
              }
              v17 = ptr;
              if ( v96.m128i_i64[1] < v16 )
              {
                v71 = j;
                ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
                j = v71;
                v17 = ptr;
              }
              v96.m128i_i64[0] = v16;
              v17[v15] = 95;
            }
          }
          continue;
        }
        v30 = haystack;
        if ( *(_QWORD *)(a1 + 8) )
          v30 = *(const char **)a1;
        if ( !a2 )
          break;
        v31 = a2(a3, v93, i, src, s, &v30[v99]);
        v32 = v31;
        if ( v31 == -2 )
        {
LABEL_47:
          v18 = (char *)ptr;
          v21 = -2;
          goto LABEL_19;
        }
        if ( v31 != -1 )
        {
          if ( v31 < 0 )
          {
            if ( !under_debugger )
              interr(1425);
            goto LABEL_91;
          }
          goto LABEL_34;
        }
        v24 = strlen(s);
        v25 = v96.m128i_i64[0];
        v26 = v24;
        v27 = v24;
        if ( v96.m128i_i64[0] )
        {
          v25 = v96.m128i_i64[0] - 1;
          v27 = v24 + v96.m128i_i64[0] - 1;
        }
        v28 = ptr;
        v29 = v27 + 1;
        if ( v96.m128i_i64[1] < v27 + 1 )
        {
          v89 = v27;
          v78 = v27 + 1;
          ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
          v27 = v89;
          v28 = ptr;
          v29 = v78;
        }
        v96.m128i_i64[0] = v29;
        v28[v27] = 0;
        memmove((char *)ptr + v25, s, v26);
LABEL_27:
        ;
      }
      v32 = 0;
LABEL_34:
      v33 = strlen(src);
      v34 = v96.m128i_i64[0];
      v35 = v33;
      v36 = v33;
      if ( v96.m128i_i64[0] )
      {
        v34 = v96.m128i_i64[0] - 1;
        v36 = v33 + v96.m128i_i64[0] - 1;
      }
      v37 = ptr;
      v38 = v36 + 1;
      if ( v96.m128i_i64[1] < v36 + 1 )
      {
        v90 = v36;
        v85 = v34;
        v73 = v36 + 1;
        ptr = (void *)qvector_reserve(&ptr, ptr, v38, 1);
        v36 = v90;
        v37 = ptr;
        v34 = v85;
        v38 = v73;
      }
      v96.m128i_i64[0] = v38;
      v37[v36] = 0;
      memmove((char *)ptr + v34, src, v35);
      if ( !v32 )
        goto LABEL_27;
      while ( 1 )
      {
        if ( v102 >= v101 )
          goto LABEL_27;
        v92 = 0;
        v94 = &v92;
        if ( !(unsigned __int8)sub_8B7B20(&v98, &v94) )
          goto LABEL_47;
        v42 = v96.m128i_i64[0];
        if ( v96.m128i_i64[0] )
        {
          v39 = v96.m128i_i64[0] + 1;
          v40 = v96.m128i_i64[0];
          v41 = ptr;
          v42 = v96.m128i_i64[0] - 1;
          if ( v96.m128i_i64[1] < (unsigned __int64)(v96.m128i_i64[0] + 1) )
            goto LABEL_46;
        }
        else
        {
          v41 = ptr;
          v39 = 2;
          v40 = 1;
          if ( v96.m128i_i64[1] < 2uLL )
          {
LABEL_46:
            v72 = v39;
            ptr = (void *)qvector_reserve(&ptr, v41, v39, 1);
            v39 = v72;
            v41 = ptr;
          }
        }
        v96.m128i_i64[0] = v39;
        v41[v40] = 0;
        *((_BYTE *)ptr + v42) = v92;
        if ( !--v32 )
          goto LABEL_27;
      }
    }
LABEL_3:
    v7 = 0;
    v8 = haystack;
    goto LABEL_4;
  }
  v44 = *(_BYTE **)a1;
  v18 = *(char **)a1;
  if ( !v43 || (v94 = *(void **)a1, !*v44) )
  {
LABEL_18:
    v19 = *(_QWORD *)(a1 + 16);
    v20 = ptr;
    ptr = v18;
    v21 = 0;
    v22 = _mm_loadu_si128(&v96);
    *(_QWORD *)a1 = v20;
    v96.m128i_i64[1] = v19;
    *(__m128i *)(a1 + 8) = v22;
    goto LABEL_19;
  }
  v45 = 0;
  for ( k = get_utf8_char(&v94); ; k = get_utf8_char(&v94) )
  {
    v93 = k;
    v60 = (const char *)v94;
    v61 = k;
    if ( k == -1 )
    {
      v62 = v96.m128i_i64[0];
      v63 = 2;
      v94 = (char *)v94 + 1;
      if ( v96.m128i_i64[0] )
      {
        v63 = v96.m128i_i64[0] + 1;
        v62 = v96.m128i_i64[0] - 1;
      }
      v64 = ptr;
      if ( v96.m128i_i64[1] < v63 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v63, 1);
        v64 = ptr;
      }
      v96.m128i_i64[0] = v63;
      v64[v62] = 95;
      *((_BYTE *)ptr + v62 + 1) = 0;
      v44 = v94;
      goto LABEL_68;
    }
    v74 = (char *)((_BYTE *)v94 - v44);
    __memcpy_chk(src, v44, (_BYTE *)v94 - v44, 8);
    src[(_QWORD)v74] = 0;
    if ( a2 )
      break;
    v21 = 0;
LABEL_56:
    v48 = strlen(src);
    v49 = v96.m128i_i64[0];
    v50 = v48;
    v51 = v48;
    if ( v96.m128i_i64[0] )
    {
      v49 = v96.m128i_i64[0] - 1;
      v51 = v48 + v96.m128i_i64[0] - 1;
    }
    v52 = ptr;
    v53 = v51 + 1;
    if ( v96.m128i_i64[1] < v51 + 1 )
    {
      v86 = v48;
      v82 = v51;
      v75 = v51 + 1;
      ptr = (void *)qvector_reserve(&ptr, ptr, v53, 1);
      v50 = v86;
      v52 = ptr;
      v51 = v82;
      v53 = v75;
    }
    v96.m128i_i64[0] = v53;
    v52[v51] = 0;
    memmove((char *)ptr + v49, src, v50);
    if ( !v21 )
      goto LABEL_84;
    v54 = v94;
    v55 = v21;
    v56 = v96.m128i_i64[0];
    if ( (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1 - ((unsigned __int64)v94 - *(_QWORD *)a1) < v21 )
    {
      v55 = (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL - ((unsigned __int64)v94 - *(_QWORD *)a1);
      v21 = (*(_QWORD *)(a1 + 8) == 0) + *(_DWORD *)(a1 + 8) - 1 - ((_DWORD)v94 - *(_DWORD *)a1);
    }
    v57 = v55;
    if ( v96.m128i_i64[0] )
    {
      v56 = v96.m128i_i64[0] - 1;
      v57 = v55 + v96.m128i_i64[0] - 1;
    }
    v58 = ptr;
    v59 = v57 + 1;
    if ( v96.m128i_i64[1] < v57 + 1 )
    {
      v91 = v56;
      v87 = v57;
      v83 = v94;
      v76 = v57 + 1;
      ptr = (void *)qvector_reserve(&ptr, ptr, v59, 1);
      v56 = v91;
      v58 = ptr;
      v57 = v87;
      v54 = v83;
      v59 = v76;
    }
    v96.m128i_i64[0] = v59;
    v45 += v21;
    v58[v57] = 0;
    memmove((char *)ptr + v56, v54, v55);
    v44 = (char *)v94 + v55;
    v94 = v44;
LABEL_68:
    if ( !*v44 )
      goto LABEL_17;
  }
  v47 = a2(a3, v61, v45, src, v105, v60);
  v21 = v47;
  if ( v47 != -2 )
  {
    if ( v47 == -1 )
    {
      v65 = strlen(v105);
      v66 = v96.m128i_i64[0];
      v67 = v65;
      v68 = v65;
      if ( v96.m128i_i64[0] )
      {
        v66 = v96.m128i_i64[0] - 1;
        v68 = v65 + v96.m128i_i64[0] - 1;
      }
      v69 = ptr;
      v70 = v68 + 1;
      if ( v96.m128i_i64[1] < v68 + 1 )
      {
        v88 = v66;
        v84 = v68;
        v77 = v68 + 1;
        ptr = (void *)qvector_reserve(&ptr, ptr, v70, 1);
        v66 = v88;
        v69 = ptr;
        v68 = v84;
        v70 = v77;
      }
      v96.m128i_i64[0] = v70;
      v69[v68] = 0;
      memmove((char *)ptr + v66, v105, v67);
LABEL_84:
      v44 = v94;
      ++v45;
      goto LABEL_68;
    }
    if ( v47 < 0 )
    {
      if ( !under_debugger )
        interr(1425);
LABEL_91:
      BUG();
    }
    goto LABEL_56;
  }
  v18 = (char *)ptr;
LABEL_19:
  if ( v18 )
  {
    v96.m128i_i64[0] = 0;
    qfree(v18);
  }
  return (unsigned int)v21;
}
