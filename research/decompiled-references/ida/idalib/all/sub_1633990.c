__int64 __fastcall sub_1633990(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i si128)
{
  int v9; // r12d
  unsigned __int64 v10; // rbp
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r15d
  unsigned int v14; // ebx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  int v27; // eax
  unsigned int v28; // edi
  unsigned __int64 v29; // rdx
  char v30; // dl
  __int64 v31; // r14
  size_t v32; // r8
  const char *v33; // r14
  size_t v34; // rax
  char v35; // al
  char *v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rbp
  _QWORD *v39; // rax
  unsigned int v40; // eax
  unsigned __int64 v41; // rdi
  unsigned int v42; // eax
  unsigned __int64 v43; // rdi
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // r14
  __int64 *v49; // rax
  char *v50; // rdi
  __int64 v51; // r14
  __int64 v52; // rcx
  _QWORD *v53; // rax
  unsigned int v54; // eax
  unsigned int v55; // eax
  __int64 v56; // rax
  unsigned int v57; // eax
  const char *v58; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v59; // [rsp+8h] [rbp-E0h]
  __int64 v60; // [rsp+8h] [rbp-E0h]
  unsigned int v61; // [rsp+8h] [rbp-E0h]
  __int64 *v62; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __m128 v64; // [rsp+28h] [rbp-C0h]

  v9 = a4;
  v10 = a2;
  v11 = a5;
  v12 = sub_16292C0(a3, a2, a3, a4, a5, a6);
  v13 = v12;
  if ( v9 != 3 )
  {
    LOBYTE(v11) = v9 == 0;
    LOBYTE(v12) = v12 != 0;
    v14 = v12 & v11;
    goto LABEL_3;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v22 = *(_QWORD *)(a1 + 248);
  ptr = nullptr;
  v64 = (__m128)si128;
  sub_A83E70(v22, (char **)&ptr, a3);
  if ( v13 != 1 )
    goto LABEL_18;
  v44 = sub_2244B30("sme", 3);
  v45 = (unsigned int)sub_2244CB0(&ptr, "sme", 3, v44);
  v48 = (__int64 *)((char *)ptr + 8 * v45);
  if ( *v48 )
  {
    if ( *v48 != -8 )
    {
      sub_10298F0(&v62, v48, 0);
      v49 = v62;
      goto LABEL_51;
    }
    --v64.m128_i32[2];
  }
  v61 = v45;
  v56 = sub_22300B0(20, 8, v45, v45, v46, v47);
  *(_WORD *)(v56 + 16) = 28019;
  *(_BYTE *)(v56 + 18) = 101;
  *(_BYTE *)(v56 + 19) = 0;
  *(_QWORD *)v56 = 3;
  *(_BYTE *)(v56 + 8) = 0;
  *v48 = v56;
  ++v64.m128_i32[1];
  v57 = sub_22450D0(&ptr, v61);
  sub_10298F0(&v62, (__int64 *)ptr + v57, 0);
  v49 = v62;
LABEL_51:
  if ( !*(_BYTE *)(*v49 + 8) )
    goto LABEL_30;
LABEL_18:
  v58 = (const char *)sub_FBD530(*(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL), v11);
  v23 = strlen(v58);
  v24 = (__int64)v58;
  if ( !v23 )
  {
    v31 = 1;
    v26 = 0;
    goto LABEL_27;
  }
  v25 = (unsigned int)(v23 - 1);
  v26 = 0;
  v27 = 0;
  while ( 1 )
  {
    v30 = v58[v26];
    if ( v30 != 124 )
      break;
    if ( !v27 )
      goto LABEL_26;
LABEL_22:
    v28 = v26 + 1;
    v29 = v26 + 1;
    if ( v25 == v26 )
      goto LABEL_54;
LABEL_23:
    v26 = v29;
  }
  if ( v30 == 40 )
  {
    ++v27;
    goto LABEL_22;
  }
  v28 = v26 + 1;
  v27 -= v30 == 41;
  v29 = v26 + 1;
  if ( v25 != v26 )
    goto LABEL_23;
LABEL_54:
  v26 = v28;
LABEL_26:
  v31 = v26 + 1;
LABEL_27:
  v32 = 0;
  v33 = &v58[v31];
  if ( v33 )
  {
    v34 = strlen(v33);
    v24 = (__int64)v58;
    v32 = v34;
  }
  v59 = v32;
  v14 = sub_FBE200(v24, v26, (__int64)&ptr);
  a2 = v59;
  v35 = sub_FBE200((__int64)v33, v59, (__int64)&ptr);
  if ( ((unsigned __int8)v14 & (unsigned __int8)(v35 | (v13 == 2))) == 0 )
  {
    if ( (_BYTE)v14 )
    {
      LOBYTE(v14) = v13 != 0;
      v9 = 0;
    }
    else
    {
      if ( !v35 )
        goto LABEL_30;
      v9 = 1;
    }
    v50 = (char *)ptr;
    if ( v64.m128_i32[1] && v64.m128_i32[0] )
    {
      v51 = 0;
      v52 = 8LL * (unsigned int)(v64.m128_i32[0] - 1) + 8;
      do
      {
        v53 = *(_QWORD **)&v50[v51];
        if ( v53 && v53 != (_QWORD *)-8LL )
        {
          v60 = v52;
          a2 = *v53 + 17LL;
          operator delete(v53, a2, 8);
          v50 = (char *)ptr;
          v52 = v60;
        }
        v51 += 8;
      }
      while ( v52 != v51 );
    }
    free(v50);
LABEL_3:
    if ( (_BYTE)v14 )
    {
      v19 = a1 + 8;
      if ( (*(_BYTE *)(v10 + 3) & 1) != 0 )
      {
        v20 = *(unsigned int *)(v10 + 24);
      }
      else if ( *(char *)(v10 + 2) >= 0
             || (v54 = sub_EEB7E0(
                         *(_QWORD *)(v10 + 8 * (((*(_BYTE *)(v10 + 2) & 8) != 0) + 1LL) + 32),
                         a2,
                         *(double *)si128.m128i_i64),
                 (v20 = v54) == 0) )
      {
        v40 = sub_EEB7E0(*(_QWORD *)(v10 + 32), a2, *(double *)si128.m128i_i64);
        v20 = v40;
        if ( !v40 )
        {
          if ( *(_DWORD *)(v10 + 16) )
          {
            v41 = *(_QWORD *)(v10 + 8 * (((*(_BYTE *)(v10 + 2) & 8) != 0) + 1LL) + 32);
            if ( v41 )
              v20 = (unsigned int)sub_EEB7E0(v41, a2, *(double *)si128.m128i_i64);
          }
        }
      }
      sub_168B9F0(&ptr, v19, v20, 3163, 0);
      v62 = (__int64 *)sub_EEC8C0(v10, v19, *(double *)si128.m128i_i64);
      v21 = sub_1587DB0((__int64)&ptr, (__int64 *)&v62);
      if ( *(_BYTE *)(v21 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v21 + 32), (__int64)"non-streaming", 1u);
      }
      else if ( *(_BYTE *)(v21 + 132) )
      {
        sub_1628630(v21, (__int64)"non-streaming");
      }
    }
    else
    {
      LOBYTE(v14) = v9 == 1 && v13 != 1;
      if ( !(_BYTE)v14 )
        return v14;
      v16 = a1 + 8;
      if ( (*(_BYTE *)(v10 + 3) & 1) != 0 )
      {
        v17 = *(unsigned int *)(v10 + 24);
      }
      else if ( *(char *)(v10 + 2) >= 0
             || (v55 = sub_EEB7E0(
                         *(_QWORD *)(v10 + 8 * (((*(_BYTE *)(v10 + 2) & 8) != 0) + 1LL) + 32),
                         a2,
                         *(double *)si128.m128i_i64),
                 (v17 = v55) == 0) )
      {
        v42 = sub_EEB7E0(*(_QWORD *)(v10 + 32), a2, *(double *)si128.m128i_i64);
        v17 = v42;
        if ( !v42 )
        {
          if ( *(_DWORD *)(v10 + 16) )
          {
            v43 = *(_QWORD *)(v10 + 8 * (((*(_BYTE *)(v10 + 2) & 8) != 0) + 1LL) + 32);
            if ( v43 )
              v17 = (unsigned int)sub_EEB7E0(v43, a2, *(double *)si128.m128i_i64);
          }
        }
      }
      sub_168B9F0(&ptr, v16, v17, 3163, 0);
      v62 = (__int64 *)sub_EEC8C0(v10, v16, *(double *)si128.m128i_i64);
      v18 = sub_1587DB0((__int64)&ptr, (__int64 *)&v62);
      if ( *(_BYTE *)(v18 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v18 + 32), (__int64)"streaming", 1u);
      }
      else if ( *(_BYTE *)(v18 + 132) )
      {
        sub_1628630(v18, (__int64)"streaming");
      }
    }
    sub_15F7200(&ptr);
    return v14;
  }
LABEL_30:
  v36 = (char *)ptr;
  if ( v64.m128_i32[1] && v64.m128_i32[0] )
  {
    v37 = 0;
    v38 = 8LL * (unsigned int)(v64.m128_i32[0] - 1) + 8;
    do
    {
      v39 = *(_QWORD **)&v36[v37];
      if ( v39 != (_QWORD *)-8LL && v39 )
      {
        operator delete(*(_QWORD *)&v36[v37], *v39 + 17LL, 8);
        v36 = (char *)ptr;
      }
      v37 += 8;
    }
    while ( v37 != v38 );
  }
  free(v36);
  return 0;
}
