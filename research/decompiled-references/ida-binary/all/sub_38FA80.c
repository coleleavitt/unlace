__int64 __fastcall sub_38FA80(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, void **, __int64 *, double),
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __m128i v6; // xmm0
  char *v7; // rax
  unsigned int v8; // ebx
  char v9; // r13
  char *v10; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rdx
  size_t v15; // rbx
  __int64 v16; // rcx
  const char *v17; // rsi
  const char *v18; // r13
  const char *v19; // r15
  const char *v20; // r14
  const char *v21; // r12
  const char *v22; // rsi
  const char *v23; // rdi
  const char *v24; // r15
  void (__fastcall *v25)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD, double), void **, char **); // rbx
  void *v26; // rbp
  _QWORD *v27; // rax
  char *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned int v31; // edx
  char *v32; // rcx
  size_t v33; // rax
  size_t v34; // rbx
  size_t v35; // r12
  _QWORD *v36; // rax
  size_t v37; // rbx
  __int64 v38; // rdi
  const char *v39; // rsi
  const char *v40; // rbp
  const char *v41; // r14
  const char *v42; // r12
  void *v43; // r13
  const char *v44; // rsi
  const char *v45; // rdi
  const char *v46; // r14
  void *v47; // r9
  size_t v48; // r14
  void (__fastcall *v49)(_QWORD, void **, __int64 *, double); // rbx
  _QWORD *v50; // rax
  void *v51; // rbp
  _QWORD *v52; // rax
  __int64 v53; // rdx
  char *v54; // rax
  const char *v55; // r14
  _QWORD *v56; // r14
  __int64 v57; // rax
  _QWORD *v58; // r15
  __int64 v59; // rax
  const char *v60; // r15
  char *v61; // [rsp+0h] [rbp-668h]
  _QWORD *v64; // [rsp+20h] [rbp-648h]
  char *v65; // [rsp+20h] [rbp-648h]
  char *v66; // [rsp+28h] [rbp-640h] BYREF
  __int64 v67; // [rsp+30h] [rbp-638h]
  __int64 v68; // [rsp+38h] [rbp-630h]
  size_t v69; // [rsp+40h] [rbp-628h]
  __int64 v70; // [rsp+48h] [rbp-620h]
  size_t v71; // [rsp+50h] [rbp-618h]
  unsigned int v72; // [rsp+58h] [rbp-610h]
  unsigned __int8 v73; // [rsp+5Fh] [rbp-609h]
  __int64 v74; // [rsp+68h] [rbp-600h] BYREF
  char *v75; // [rsp+70h] [rbp-5F8h] BYREF
  __int128 v76; // [rsp+78h] [rbp-5F0h]
  void *src; // [rsp+90h] [rbp-5D8h] BYREF
  size_t n[3]; // [rsp+98h] [rbp-5D0h]
  __int128 v79; // [rsp+B0h] [rbp-5B8h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-5A8h]
  __int64 v81; // [rsp+C8h] [rbp-5A0h]
  __int64 v82; // [rsp+D0h] [rbp-598h]
  char v83; // [rsp+D8h] [rbp-590h] BYREF
  char v84; // [rsp+D9h] [rbp-58Fh] BYREF
  _BYTE v85[8]; // [rsp+218h] [rbp-450h] BYREF
  char s[1032]; // [rsp+220h] [rbp-448h] BYREF
  unsigned __int64 v87; // [rsp+628h] [rbp-40h]

  v66 = a3;
  v87 = __readfsqword(0x28u);
  v79 = -1;
  v6.m128i_i64[0] = 0;
  v7 = &v83;
  v80 = -1;
  v81 = 0;
  v82 = 0;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 40;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *((_QWORD *)v7 - 2) = 0;
  }
  while ( v85 != v7 );
  v8 = 0;
  decode_insn(&v79, v66, v85, a4, a5, a6, 0.0);
  v72 = 0;
  v61 = &v84;
  do
  {
    v9 = *v61;
    if ( !*v61 )
      break;
    if ( (unsigned __int8)(v9 - 3) <= 1u )
    {
      v10 = v66;
      v75 = nullptr;
      v76 = 0;
      v73 = print_operand(&v75, v66, v72, 0, 0);
      if ( !v73 )
      {
LABEL_9:
        if ( v75 )
        {
          *(_QWORD *)&v76 = 0;
          *(double *)v6.m128i_i64 = qfree(v75, v10);
        }
        goto LABEL_5;
      }
      v65 = (char *)&s1;
      if ( (_QWORD)v76 )
        v65 = v75;
LABEL_35:
      v10 = s;
      v65 = (char *)sub_389920(v65, s, *(double *)v6.m128i_i64);
      if ( !v65 )
        goto LABEL_9;
      if ( v9 == 3 )
        v29 = *(_QWORD *)(v61 + 7);
      else
        v29 = *(_QWORD *)(v61 + 15);
      v30 = operator new(0x20u);
      v31 = v72;
      *(_QWORD *)(v30 + 8) = v29;
      v70 = v30;
      *(_QWORD *)v30 = struc_operand_info_t___vtable;
      v32 = v66;
      *(_DWORD *)(v30 + 24) = v31;
      *(_QWORD *)(v30 + 16) = v32;
      src = nullptr;
      *(_OWORD *)n = 0;
      v33 = strlen(s);
      v34 = v33 + 1;
      v35 = v33;
      v71 = v33 + 1;
      v36 = (_QWORD *)qvector_reserve(&src, 0, v33 + 1, 1);
      src = v36;
      n[0] = v34;
      if ( (unsigned int)v35 >= 8 )
      {
        *v36 = *(_QWORD *)s;
        *(_QWORD *)((char *)v36 + (unsigned int)v35 - 8) = *(_QWORD *)&v85[(unsigned int)v35];
        qmemcpy(
          (void *)((unsigned __int64)(v36 + 1) & 0xFFFFFFFFFFFFFFF8LL),
          (const void *)(s - ((char *)v36 - ((unsigned __int64)(v36 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
          8LL * (((unsigned int)v35 + (_DWORD)v36 - (((_DWORD)v36 + 8) & 0xFFFFFFF8)) >> 3));
      }
      else if ( (v35 & 4) != 0 )
      {
        *(_DWORD *)v36 = *(_DWORD *)s;
        *(_DWORD *)((char *)v36 + (unsigned int)v35 - 4) = *(_DWORD *)&v85[(unsigned int)v35 + 4];
      }
      else if ( (_DWORD)v35 )
      {
        *(_BYTE *)v36 = s[0];
        if ( (v35 & 2) != 0 )
          *(_WORD *)((char *)v36 + (unsigned int)v35 - 2) = *(_WORD *)&v85[(unsigned int)v35 + 6];
      }
      *((_BYTE *)src + v35) = 0;
      v37 = n[0];
      v38 = a1[2];
      v39 = (const char *)a1[1];
      v40 = &v39[24 * v38];
      if ( v39 == v40 )
        goto LABEL_68;
      LOBYTE(v67) = v9;
      v41 = v39;
      v69 = v35;
      v42 = v39;
      v68 = v38;
      v43 = src;
      while ( 1 )
      {
        if ( *((_QWORD *)v42 + 1) )
        {
          v44 = *(const char **)v42;
          v45 = &s1;
          if ( !v37 )
            goto LABEL_46;
        }
        else
        {
          if ( !v37 )
          {
            v39 = v41;
            v46 = v42;
            v47 = v43;
            v38 = v68;
            v9 = v67;
            v35 = v69;
            if ( v40 == v46 )
              goto LABEL_74;
            goto LABEL_54;
          }
          v44 = &s1;
        }
        v45 = (const char *)v43;
LABEL_46:
        if ( !strcmp(v45, v44) )
        {
          v39 = v41;
          v55 = v42;
          v47 = v43;
          v38 = v68;
          v9 = v67;
          v35 = v69;
          if ( v40 != v55 )
            goto LABEL_54;
LABEL_68:
          if ( !v37 )
          {
LABEL_74:
            v52 = a1;
            v51 = nullptr;
            v53 = v38 + 1;
            if ( a1[3] >= (unsigned __int64)(v38 + 1) )
              goto LABEL_70;
LABEL_75:
            v56 = v52;
            v57 = qvector_reserve(v52 + 1, v39, v53, 24);
            v56[1] = v57;
            v38 = v56[2];
            v39 = (const char *)v57;
            goto LABEL_70;
          }
          v51 = (void *)qalloc_or_throw(v37);
          memcpy(v51, src, v37);
          v38 = a1[2];
          v39 = (const char *)a1[1];
          v52 = a1;
          v53 = v38 + 1;
          if ( a1[3] < (unsigned __int64)(v38 + 1) )
            goto LABEL_75;
LABEL_70:
          v54 = (char *)&v39[24 * v38];
          v6 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
          *(__m128i *)(v54 + 8) = v6;
          *(_QWORD *)v54 = v51;
          v47 = src;
          ++a1[2];
LABEL_54:
          if ( v47 )
          {
            n[0] = 0;
            *(double *)v6.m128i_i64 = qfree(v47, v39);
          }
          v48 = v71;
          v49 = **a2;
          *(_OWORD *)n = 0;
          src = nullptr;
          v74 = v70;
          v50 = (_QWORD *)qvector_reserve(&src, 0, v71, 1);
          src = v50;
          n[0] = v48;
          if ( (unsigned int)v35 >= 8 )
          {
            *v50 = *(_QWORD *)s;
            *(_QWORD *)((char *)v50 + (unsigned int)v35 - 8) = *(_QWORD *)&v85[(unsigned int)v35];
            qmemcpy(
              (void *)((unsigned __int64)(v50 + 1) & 0xFFFFFFFFFFFFFFF8LL),
              (const void *)(s - ((char *)v50 - ((unsigned __int64)(v50 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
              8LL * (((unsigned int)v35 + (_DWORD)v50 - (((_DWORD)v50 + 8) & 0xFFFFFFF8)) >> 3));
          }
          else if ( (v35 & 4) != 0 )
          {
            *(_DWORD *)v50 = *(_DWORD *)s;
            *(_DWORD *)((char *)v50 + (unsigned int)v35 - 4) = *(_DWORD *)&v85[(unsigned int)v35 + 4];
          }
          else if ( (_DWORD)v35 )
          {
            *(_BYTE *)v50 = s[0];
            if ( (v35 & 2) != 0 )
              *(_WORD *)((char *)v50 + (unsigned int)v35 - 2) = *(_WORD *)&v85[(unsigned int)v35 + 6];
          }
          *((_BYTE *)src + v35) = 0;
          v49(a2, &src, &v74, *(double *)v6.m128i_i64);
          if ( src )
          {
            n[0] = 0;
            *(double *)v6.m128i_i64 = qfree(src, (const char *)&src);
          }
          if ( v74 )
            (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v74 + 8LL))(v74, *(double *)v6.m128i_i64);
          v8 = v73;
          goto LABEL_35;
        }
        v42 += 24;
        if ( v40 == v42 )
        {
          v9 = v67;
          v38 = v68;
          v39 = v41;
          v35 = v69;
          goto LABEL_68;
        }
      }
    }
    if ( v9 != 5 )
      goto LABEL_5;
    v12 = (_QWORD *)operator new(0x20u);
    src = nullptr;
    v13 = v12;
    *v12 = struc_operand_info_t___vtable;
    LODWORD(v12) = v72;
    *(__m128 *)(v13 + 1) = _mm_loadh_ps((const double *)&v66);
    *((_DWORD *)v13 + 6) = (_DWORD)v12;
    *(_OWORD *)n = 0;
    src = (void *)qvector_reserve(&src, 0, 2, 1);
    n[0] = 2;
    *(_BYTE *)src = 32;
    *((_BYTE *)src + 1) = 0;
    v15 = n[0];
    v16 = a1[2];
    v17 = (const char *)a1[1];
    v18 = &v17[24 * v16];
    if ( v17 == v18 )
      goto LABEL_30;
    v64 = v13;
    v19 = (const char *)a1[1];
    v20 = v19;
    v67 = a1[2];
    v21 = (const char *)src;
    while ( 1 )
    {
      if ( *((_QWORD *)v20 + 1) )
      {
        v22 = *(const char **)v20;
        v23 = &s1;
        if ( !v15 )
          goto LABEL_15;
      }
      else
      {
        if ( !v15 )
        {
          v17 = v19;
          v24 = v20;
          v16 = v67;
          v13 = v64;
          if ( v18 == v24 )
            goto LABEL_76;
          goto LABEL_22;
        }
        v22 = &s1;
      }
      v23 = v21;
LABEL_15:
      if ( !strcmp(v23, v22) )
        break;
      v20 += 24;
      if ( v18 == v20 )
      {
        v13 = v64;
        v16 = v67;
        v17 = v19;
        goto LABEL_30;
      }
    }
    v17 = v19;
    v60 = v20;
    v16 = v67;
    v13 = v64;
    if ( v18 != v60 )
      goto LABEL_22;
LABEL_30:
    if ( !v15 )
    {
LABEL_76:
      v27 = a1;
      v26 = nullptr;
      v14 = v16 + 1;
      if ( a1[3] >= (unsigned __int64)(v16 + 1) )
        goto LABEL_32;
LABEL_77:
      v58 = v27;
      v59 = qvector_reserve(v27 + 1, v17, v14, 24);
      v58[1] = v59;
      v16 = v58[2];
      v17 = (const char *)v59;
      goto LABEL_32;
    }
    v26 = (void *)qalloc_or_throw(v15);
    memcpy(v26, src, v15);
    v16 = a1[2];
    v17 = (const char *)a1[1];
    v27 = a1;
    v14 = v16 + 1;
    if ( a1[3] < (unsigned __int64)(v16 + 1) )
      goto LABEL_77;
LABEL_32:
    v28 = (char *)&v17[24 * v16];
    *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
    *(_QWORD *)v28 = v26;
    v21 = (const char *)src;
    ++a1[2];
LABEL_22:
    if ( v21 )
    {
      n[0] = 0;
      qfree(v21, v17, v14, v16);
    }
    v6.m128i_i64[0] = 0;
    v25 = (void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD, double), void **, char **))**a2;
    v75 = (char *)v13;
    *(_OWORD *)n = 0;
    src = nullptr;
    src = (void *)qvector_reserve(&src, 0, 2, 1);
    n[0] = 2;
    *(_BYTE *)src = 32;
    *((_BYTE *)src + 1) = 0;
    v25((void (__fastcall ***)(_QWORD, _QWORD, _QWORD, double))a2, &src, &v75);
    if ( src )
    {
      n[0] = 0;
      *(double *)v6.m128i_i64 = qfree(src, (const char *)&src);
    }
    if ( v75 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v75 + 8LL))(v75);
    v8 = 1;
LABEL_5:
    ++v72;
    v61 += 40;
  }
  while ( v72 != 8 );
  return v8;
}
