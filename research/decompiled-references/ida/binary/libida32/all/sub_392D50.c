unsigned __int64 __fastcall sub_392D50(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rdi
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rsi
  void *v8; // rdi
  void *v9; // rdx
  __m128 v10; // xmm0
  __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  void *v14; // rax
  __m128i v15; // xmm0
  char *v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // r12
  void *v20; // r15
  void *v21; // rax
  void *v22; // r15
  void *v23; // rdi
  __int64 v24; // r13
  unsigned __int64 v25; // r15
  size_t v26; // r8
  unsigned __int64 v27; // r15
  size_t v28; // r8
  unsigned __int64 v29; // r14
  __int64 v30; // rax
  char *v31; // rsi
  const char *v32; // rdi
  const void *v33; // r9
  void *v34; // rdi
  const void *v35; // r9
  void *v36; // rdi
  const void *v37; // r8
  void *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  const void *v42; // [rsp+0h] [rbp-138h]
  const void *v43; // [rsp+8h] [rbp-130h]
  const void *v44; // [rsp+8h] [rbp-130h]
  void *src; // [rsp+10h] [rbp-128h] BYREF
  __int128 v46; // [rsp+18h] [rbp-120h]
  void *v47; // [rsp+30h] [rbp-108h] BYREF
  __m128 v48; // [rsp+38h] [rbp-100h]
  void *ptr; // [rsp+50h] [rbp-E8h] BYREF
  void *v50; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v51; // [rsp+78h] [rbp-C0h] BYREF
  __int16 v52; // [rsp+88h] [rbp-B0h]
  char v53; // [rsp+8Ah] [rbp-AEh]
  char v54; // [rsp+90h] [rbp-A8h]
  char *s2; // [rsp+98h] [rbp-A0h]
  __m128i v56; // [rsp+A0h] [rbp-98h]
  void *v57; // [rsp+B0h] [rbp-88h]
  __int128 v58; // [rsp+B8h] [rbp-80h]
  int v59; // [rsp+C8h] [rbp-70h]
  __int16 v60; // [rsp+CCh] [rbp-6Ch]
  int v61; // [rsp+CEh] [rbp-6Ah]
  __int16 v62; // [rsp+D2h] [rbp-66h]
  int v63; // [rsp+D4h] [rbp-64h]
  __int16 v64; // [rsp+D8h] [rbp-60h]
  int v65; // [rsp+DAh] [rbp-5Eh]
  __int16 v66; // [rsp+DEh] [rbp-5Ah]
  int v67; // [rsp+E0h] [rbp-58h] BYREF
  __int16 v68; // [rsp+E4h] [rbp-54h]
  __int64 v69; // [rsp+E8h] [rbp-50h]
  __int64 v70; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v71; // [rsp+F8h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  if ( qword_2CA1688 )
  {
    if ( !under_debugger )
      interr(3251);
    BUG();
  }
  qword_2CA1688 = a1;
  src = nullptr;
  v46 = 0;
  src = (void *)qvector_reserve(&src, 0, 15, 1);
  v1 = (__int64 (__fastcall ***)(_QWORD))qword_2CA1688;
  *(_QWORD *)&v46 = 15;
  strcpy((char *)src, "idapro*.hexlic");
  v2 = (**v1)(v1);
  v3 = v2 + 40;
  v4 = v2;
  if ( (void **)(v2 + 40) != &src )
  {
    v5 = v46;
    if ( (unsigned __int64)v46 > 1 )
    {
      v22 = src;
      v23 = *(void **)(v2 + 40);
      if ( *(_QWORD *)(v2 + 56) < (unsigned __int64)v46 )
      {
        v39 = qvector_reserve(v2 + 40, *(_QWORD *)(v2 + 40), v46, 1);
        *(_QWORD *)(v4 + 40) = v39;
        v23 = (void *)v39;
      }
      *(_QWORD *)(v4 + 48) = v5;
      memmove(v23, v22, v5 - 1);
      *(_BYTE *)(*(_QWORD *)(v4 + 40) + v5 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v2 + 48) = 0;
    }
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_2CA1688 + 8LL))(qword_2CA1688);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 8) = 0x100000001LL;
  sub_392090();
  if ( (unsigned __int8)sub_3926B0((char **)(qword_2CA1688 + 16)) && *(_QWORD *)(qword_2CA1688 + 24) )
  {
    if ( (debug & 0x200) != 0 )
    {
      sub_88B2E0(&v50, v6);
      sub_88A970(&ptr, v4);
      sub_383DA0();
    }
    v24 = *(_QWORD *)(qword_2CA1688 + 16);
    if ( v24 != v4 )
    {
      v25 = *(_QWORD *)(v24 + 8);
      if ( v25 && (v26 = v25 - 1, v25 != 1) )
      {
        v33 = *(const void **)v24;
        v34 = *(void **)v4;
        if ( *(_QWORD *)(v4 + 16) < v25 )
        {
          v43 = *(const void **)v24;
          v40 = qvector_reserve(v4, *(_QWORD *)v4, *(_QWORD *)(v24 + 8), 1);
          v33 = v43;
          v26 = v25 - 1;
          *(_QWORD *)v4 = v40;
          v34 = (void *)v40;
        }
        *(_QWORD *)(v4 + 8) = v25;
        memmove(v34, v33, v26);
        *(_BYTE *)(*(_QWORD *)v4 + v25 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v4 + 8) = 0;
      }
    }
    *(_WORD *)(v4 + 24) = *(_WORD *)(v24 + 24);
    *(_BYTE *)(v4 + 26) = *(_BYTE *)(v24 + 26);
    *(_BYTE *)(v4 + 32) = *(_BYTE *)(v24 + 32);
    if ( v3 != v24 + 40 )
    {
      v27 = *(_QWORD *)(v24 + 48);
      if ( v27 && (v28 = v27 - 1, v27 != 1) )
      {
        v35 = *(const void **)(v24 + 40);
        v36 = *(void **)(v4 + 40);
        if ( *(_QWORD *)(v4 + 56) < v27 )
        {
          v44 = *(const void **)(v24 + 40);
          v41 = qvector_reserve(v3, *(_QWORD *)(v4 + 40), *(_QWORD *)(v24 + 48), 1);
          v35 = v44;
          v28 = v27 - 1;
          *(_QWORD *)(v4 + 40) = v41;
          v36 = (void *)v41;
        }
        *(_QWORD *)(v4 + 48) = v27;
        memmove(v36, v35, v28);
        *(_BYTE *)(*(_QWORD *)(v4 + 40) + v27 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v4 + 48) = 0;
      }
    }
    if ( v4 + 64 != v24 + 64 )
    {
      v29 = *(_QWORD *)(v24 + 72);
      if ( v29 > 1 )
      {
        v37 = *(const void **)(v24 + 64);
        v38 = *(void **)(v4 + 64);
        if ( *(_QWORD *)(v4 + 80) < v29 )
        {
          v42 = *(const void **)(v24 + 64);
          v38 = (void *)qvector_reserve(v4 + 64, *(_QWORD *)(v4 + 64), *(_QWORD *)(v24 + 72), 1);
          *(_QWORD *)(v4 + 64) = v38;
          v37 = v42;
        }
        *(_QWORD *)(v4 + 72) = v29;
        memmove(v38, v37, v29 - 1);
        *(_BYTE *)(*(_QWORD *)(v4 + 64) + v29 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v4 + 72) = 0;
      }
    }
    *(_DWORD *)v6 = *(_DWORD *)(v24 + 88);
    *(_WORD *)(v6 + 4) = *(_WORD *)(v24 + 92);
    *(_DWORD *)(qword_2CA1688 + 8) = 1;
  }
  v47 = nullptr;
  v48 = 0;
  qgetenv("IDA_LICENSE");
  v7 = qword_2CA1688;
  if ( v48.m128_u64[0] > 1 )
    *(_DWORD *)(qword_2CA1688 + 8) = 2;
  (*(void (__fastcall **)(void **))(*(_QWORD *)v7 + 16LL))(&v50);
  v8 = v50;
  if ( v51.m128i_i64[0] > 1uLL )
  {
    v9 = v47;
    v47 = v50;
    v10 = _mm_loadh_ps((const double *)&v51.m128i_i64[1]);
    v50 = v9;
    v8 = v9;
    v51.m128i_i64[1] = v48.m128_i64[1];
    v48 = v10;
    *(_DWORD *)(qword_2CA1688 + 8) = 3;
  }
  if ( v8 )
  {
    v51.m128i_i64[0] = 0;
    qfree(v8);
  }
  if ( v48.m128_u64[0] > 1 )
  {
    v52 = 0;
    v68 = 0;
    v50 = nullptr;
    v53 = 1;
    v54 = 0;
    s2 = nullptr;
    v57 = nullptr;
    v67 = 0;
    v69 = 0;
    v70 = 0x100000000LL;
    v51 = 0;
    v56 = 0;
    v58 = 0;
    if ( !(unsigned __int8)parse_license_source_plugin_options(&v50, &v67, &v47, &src) )
    {
LABEL_23:
      if ( v57 )
      {
        *(_QWORD *)&v58 = 0;
        qfree(v57);
      }
      if ( s2 )
      {
        v56.m128i_i64[0] = 0;
        qfree(s2);
      }
      if ( v50 )
      {
        v51.m128i_i64[0] = 0;
        qfree(v50);
      }
      goto LABEL_29;
    }
    v11 = *(_QWORD *)(v4 + 8);
    if ( v51.m128i_i64[0] )
    {
      v12 = (const char *)v50;
      v13 = haystack;
      if ( !v11 )
      {
LABEL_18:
        if ( strcmp(v13, v12) )
        {
LABEL_19:
          v59 = 0;
          v66 = 0;
          v60 = 0;
          *(_DWORD *)v6 = 0;
          *(_WORD *)(v6 + 4) = v66;
          goto LABEL_20;
        }
LABEL_61:
        if ( *(_WORD *)(v4 + 24) != v52 || *(_BYTE *)(v4 + 26) != v53 || *(_BYTE *)(v4 + 32) != v54 )
          goto LABEL_19;
        v30 = *(_QWORD *)(v4 + 48);
        if ( v56.m128i_i64[0] )
        {
          v31 = s2;
          v32 = haystack;
          if ( !v30 )
            goto LABEL_67;
        }
        else
        {
          v31 = (char *)haystack;
          if ( !v30 )
            goto LABEL_20;
        }
        v32 = *(const char **)(v4 + 40);
LABEL_67:
        if ( strcmp(v32, v31) )
          goto LABEL_19;
LABEL_20:
        v63 = 0;
        v64 = 0;
        v65 = 0;
        v66 = 0;
        v61 = 0;
        v62 = 0;
        if ( v67 || v68 )
        {
          *(_DWORD *)v6 = v67;
          *(_WORD *)(v6 + 4) = v68;
        }
        *(_DWORD *)(v6 + 20) = HIDWORD(v70);
        v14 = *(void **)v4;
        v15 = _mm_loadu_si128((const __m128i *)(v4 + 8));
        *(_QWORD *)v4 = v50;
        *(__m128i *)(v4 + 8) = v51;
        v50 = v14;
        v51 = v15;
        LOWORD(v14) = *(_WORD *)(v4 + 24);
        *(_WORD *)(v4 + 24) = v52;
        v52 = (__int16)v14;
        LOBYTE(v14) = *(_BYTE *)(v4 + 26);
        *(_BYTE *)(v4 + 26) = v53;
        v53 = (char)v14;
        LOBYTE(v14) = *(_BYTE *)(v4 + 32);
        *(_BYTE *)(v4 + 32) = v54;
        v54 = (char)v14;
        v16 = *(char **)(v4 + 40);
        *(_QWORD *)(v4 + 40) = s2;
        v17 = _mm_loadu_si128((const __m128i *)(v4 + 48));
        *(__m128i *)(v4 + 48) = v56;
        s2 = v16;
        v56 = v17;
        goto LABEL_23;
      }
    }
    else
    {
      v12 = haystack;
      if ( !v11 )
        goto LABEL_61;
    }
    v13 = *(const char **)v4;
    goto LABEL_18;
  }
LABEL_29:
  if ( (void **)(v4 + 64) == &src )
    goto LABEL_32;
  v18 = v46;
  if ( (unsigned __int64)v46 <= 1 )
  {
    *(_QWORD *)(v4 + 72) = 0;
LABEL_32:
    if ( (debug & 0x200) == 0 )
      goto LABEL_33;
LABEL_41:
    sub_88B2E0(&v50, v6);
    sub_88A970(&ptr, v4);
    sub_383DA0();
  }
  v20 = src;
  v21 = *(void **)(v4 + 64);
  if ( *(_QWORD *)(v4 + 80) < (unsigned __int64)v46 )
  {
    v21 = (void *)qvector_reserve(v4 + 64, *(_QWORD *)(v4 + 64), v46, 1);
    *(_QWORD *)(v4 + 64) = v21;
  }
  *(_QWORD *)(v4 + 72) = v18;
  memmove(v21, v20, v18 - 1);
  *(_BYTE *)(*(_QWORD *)(v4 + 64) + v18 - 1) = 0;
  if ( (debug & 0x200) != 0 )
    goto LABEL_41;
LABEL_33:
  if ( v47 )
  {
    v48.m128_u64[0] = 0;
    qfree(v47);
  }
  if ( src )
  {
    *(_QWORD *)&v46 = 0;
    qfree(src);
  }
  return v71 - __readfsqword(0x28u);
}

