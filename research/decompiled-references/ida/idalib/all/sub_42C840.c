unsigned __int64 __fastcall sub_42C840(__int64 a1, unsigned __int64 *a2, const __m128i *a3)
{
  unsigned __int64 v4; // r12
  void (__fastcall *v5)(__int128 *, const __m128i *, __int64); // rax
  _QWORD *v6; // r13
  char i; // al
  void *v8; // r8
  __int64 v9; // rax
  char v10; // r9
  char *v11; // rcx
  char *v12; // rax
  int v13; // r13d
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // r14
  unsigned __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rsi
  __m128i *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm0
  bool v31; // cf
  int v32; // r12d
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r12
  void (__fastcall *v36)(__int128 *, const __m128i *, __int64); // rax
  _QWORD *v37; // r13
  char j; // al
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  char v41; // r9
  char *v42; // rcx
  char *v43; // rax
  void (__fastcall *v44)(__int128 *, __int128 *, __int64); // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  __m128i *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __m128i v50; // xmm0
  _QWORD *v51; // [rsp+0h] [rbp-118h]
  unsigned __int64 *v52; // [rsp+0h] [rbp-118h]
  void *v55; // [rsp+18h] [rbp-100h]
  unsigned __int64 v56; // [rsp+18h] [rbp-100h]
  char v57; // [rsp+27h] [rbp-F1h]
  char v58; // [rsp+27h] [rbp-F1h]
  __int64 v59; // [rsp+28h] [rbp-F0h]
  __int64 v60; // [rsp+28h] [rbp-F0h]
  char *v61; // [rsp+30h] [rbp-E8h]
  char *v62; // [rsp+30h] [rbp-E8h]
  unsigned __int64 *v63; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v64; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v65; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v66; // [rsp+60h] [rbp-B8h] BYREF
  char v67; // [rsp+68h] [rbp-B0h]
  void *v68; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v69; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int128 v71; // [rsp+98h] [rbp-80h]
  __int128 v72; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v73; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v74; // [rsp+D8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( !a3[1].m128i_i64[0] )
    return v74 - __readfsqword(0x28u);
  v51 = *(_QWORD **)(a1 + 1672);
  v4 = sub_631AD0(*v51, 19);
  while ( v4 < sub_631AD0(*v51, 20) )
  {
    v73 = 0u;
    v5 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
    v72 = 0;
    if ( v5 )
    {
      v5(&v72, a3, 2);
      v73 = _mm_loadu_si128(a3 + 1);
    }
    LOBYTE(v69) = 0;
    v6 = *(_QWORD **)(a1 + 1672);
    v71 = 0;
    ptr = nullptr;
    v68 = (void *)-1LL;
    for ( i = sub_40F780(v6, (__int64)&v68, v4); i; i = sub_410770(v6, (__int64)&v68, v4) )
    {
      v8 = v68;
      if ( (unsigned __int64)v68 >= *a2 && (unsigned __int64)v68 < a2[1] )
      {
        v9 = v71;
        v10 = v69;
        if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v71 + 1) )
        {
          v59 = *((_QWORD *)&v71 + 1);
          v57 = v69;
          v55 = v68;
          v25 = qvector_reserve(&ptr, 0, v71 + 1, 16);
          v26 = *((_QWORD *)&v71 + 1);
          v27 = (__m128i *)ptr;
          v28 = v71 - 1;
          *((_QWORD *)&v71 + 1) = v59;
          if ( (__int64)v71 - 1 >= 0 )
          {
            v29 = v25;
            do
            {
              v30 = _mm_loadu_si128(v27);
              v29 += 16;
              ++v27;
              *(__m128i *)(v29 - 16) = v30;
              v31 = v28-- == 0;
            }
            while ( !v31 );
            v27 = (__m128i *)ptr;
          }
          v61 = (char *)v25;
          qfree(v27);
          v11 = v61;
          v9 = v71;
          v10 = v57;
          ptr = v61;
          v8 = v55;
          *((_QWORD *)&v71 + 1) = v26;
        }
        else
        {
          v11 = (char *)ptr;
        }
        v12 = &v11[16 * v9];
        *(_QWORD *)v12 = v8;
        v12[8] = v10;
        *(_QWORD *)&v71 = v71 + 1;
      }
    }
    v13 = 0;
    if ( (_QWORD)v71 )
    {
      v66 = v4;
      if ( !v73.m128i_i64[0] )
        std::__throw_bad_function_call();
      v13 = ((__int64 (__fastcall *)(__int128 *, __int64, unsigned __int64 *, void **))v73.m128i_i64[1])(
              &v72,
              a1,
              &v66,
              &ptr);
    }
    if ( ptr )
    {
      *(_QWORD *)&v71 = 0;
      qfree(ptr);
    }
    if ( v73.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v73.m128i_i64[0])(&v72, &v72, 3);
    v14 = sub_631AD0(*v51, 20);
    v4 = sub_3C1900(v51, v4, v14, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_3B7CE0, nullptr);
    if ( v13 )
      goto LABEL_20;
  }
  v13 = 0;
LABEL_20:
  v65 = 0;
  v15 = 26;
  sub_630CA0(*v51, 26, &v65, 16);
  v68 = nullptr;
  v69 = 0;
  v16 = *(_QWORD *)(a1 + 1672);
  if ( *(_BYTE *)(v16 + 2321) )
  {
    v17 = *(unsigned __int64 **)(v16 + 1864);
    v18 = v65;
    v19 = v16 + 1856;
    if ( !v17 )
      return v74 - __readfsqword(0x28u);
    v20 = v16 + 1856;
    do
    {
      while ( 1 )
      {
        v21 = v17[2];
        v22 = v17[3];
        if ( v17[4] < (unsigned __int64)v65 )
          break;
        v20 = (__int64)v17;
        v17 = (unsigned __int64 *)v17[2];
        if ( !v21 )
          goto LABEL_26;
      }
      v17 = (unsigned __int64 *)v17[3];
    }
    while ( v22 );
LABEL_26:
    if ( v20 == v19 || v13 )
      return v74 - __readfsqword(0x28u);
    v23 = 0;
    do
    {
      v24 = *(_QWORD *)(v20 + 32);
      if ( v24 >= *((_QWORD *)&v65 + 1) )
        break;
      if ( !v23 || v24 != v17[v23 - 1] )
      {
        v22 = v23 + 1;
        if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v23 + 1) )
        {
          v15 = (__int64)v17;
          v68 = (void *)qvector_reserve(&v68, v17, v22, 8);
          v23 = v69;
          v17 = (unsigned __int64 *)v68;
        }
        v17[v23] = v24;
        v17 = (unsigned __int64 *)v68;
        v23 = v69 + 1;
        *(_QWORD *)&v69 = v69 + 1;
      }
      v20 = std::_Rb_tree_increment(v20, v15, v22, v18);
    }
    while ( v20 != v19 );
  }
  else
  {
    *(_QWORD *)&v71 = &v68;
    ptr = v51;
    *((_QWORD *)&v71 + 1) = sub_3BDD60(v51, *((__int64 *)&v65 + 1));
    v34 = sub_3BDD60(v51, v65);
    sub_7B0B60(a1, v34, sub_42B760, &ptr);
    v17 = (unsigned __int64 *)v68;
    v23 = v69;
  }
  v63 = &v17[v23];
  if ( v63 == v17 )
    goto LABEL_50;
  v52 = v17;
  while ( 1 )
  {
    v35 = *v52;
    v36 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
    v72 = 0;
    v73 = 0u;
    if ( v36 )
    {
      v36(&v72, a3, 2);
      v73 = _mm_loadu_si128(a3 + 1);
    }
    v67 = 0;
    v37 = *(_QWORD **)(a1 + 1672);
    v71 = 0;
    ptr = nullptr;
    v66 = -1;
    for ( j = sub_40F780(v37, (__int64)&v66, v35); j; j = sub_410770(v37, (__int64)&v66, v35) )
    {
      v39 = v66;
      if ( v66 >= *a2 && v66 < a2[1] )
      {
        v40 = v71;
        v41 = v67;
        if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v71 + 1) )
        {
          v60 = *((_QWORD *)&v71 + 1);
          v58 = v67;
          v56 = v66;
          v45 = qvector_reserve(&ptr, 0, v71 + 1, 16);
          v46 = *((_QWORD *)&v71 + 1);
          v47 = (__m128i *)ptr;
          v48 = v71 - 1;
          *((_QWORD *)&v71 + 1) = v60;
          if ( (__int64)v71 - 1 >= 0 )
          {
            v49 = v45;
            do
            {
              v50 = _mm_loadu_si128(v47);
              v49 += 16;
              ++v47;
              *(__m128i *)(v49 - 16) = v50;
              v31 = v48-- == 0;
            }
            while ( !v31 );
            v47 = (__m128i *)ptr;
          }
          v62 = (char *)v45;
          qfree(v47);
          v42 = v62;
          v40 = v71;
          v41 = v58;
          ptr = v62;
          v39 = v56;
          *((_QWORD *)&v71 + 1) = v46;
        }
        else
        {
          v42 = (char *)ptr;
        }
        v43 = &v42[16 * v40];
        *(_QWORD *)v43 = v39;
        v43[8] = v41;
        *(_QWORD *)&v71 = v71 + 1;
      }
    }
    if ( (_QWORD)v71 )
      break;
    if ( !ptr )
    {
      v44 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v73.m128i_i64[0];
      if ( !v73.m128i_i64[0] )
        goto LABEL_70;
LABEL_69:
      v44(&v72, &v72, 3);
      goto LABEL_70;
    }
    qfree(ptr);
    v44 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v73.m128i_i64[0];
    if ( v73.m128i_i64[0] )
      goto LABEL_69;
LABEL_70:
    if ( v63 == ++v52 )
      goto LABEL_49;
  }
  v64 = v35;
  if ( !v73.m128i_i64[0] )
    std::__throw_bad_function_call();
  v32 = ((__int64 (__fastcall *)(__int128 *, __int64, unsigned __int64 *, void **))v73.m128i_i64[1])(
          &v72,
          a1,
          &v64,
          &ptr);
  if ( ptr )
  {
    *(_QWORD *)&v71 = 0;
    qfree(ptr);
  }
  if ( v73.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v73.m128i_i64[0])(&v72, &v72, 3);
  if ( !v32 )
    goto LABEL_70;
LABEL_49:
  v17 = (unsigned __int64 *)v68;
LABEL_50:
  if ( v17 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v17);
  }
  return v74 - __readfsqword(0x28u);
}
