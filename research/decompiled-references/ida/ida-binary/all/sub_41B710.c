__int64 __fastcall hvui_common_t::perform_login(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rcx
  char v11; // r8
  __int64 *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  _QWORD *v18; // rax
  size_t v19; // rbp
  __int64 *v20; // r12
  __int16 v21; // ax
  size_t v22; // rbp
  size_t v23; // rbp
  size_t v24; // rbp
  __int16 v25; // ax
  size_t v26; // rbp
  size_t v27; // rbp
  int v28; // eax
  size_t v29; // rbp
  char v30; // al
  void *v31; // rdi
  void *v32; // rax
  __int64 v33; // rdx
  __m128i v34; // xmm0
  const char *v36; // r14
  __int64 v37; // rcx
  int v38; // r13d
  const char *v39; // rbx
  char *v40; // rax
  void *v41; // rax
  void *v42; // rax
  void *v43; // rax
  void *v44; // rax
  void *v45; // rax
  void *v46; // rax
  void *v47; // rax
  const void *v48; // rbx
  const char *v49; // [rsp+0h] [rbp-118h] BYREF
  __int128 v50; // [rsp+8h] [rbp-110h]
  __m256i v51; // [rsp+20h] [rbp-F8h] BYREF
  __int16 v52; // [rsp+40h] [rbp-D8h]
  void *v53; // [rsp+48h] [rbp-D0h]
  __int128 v54; // [rsp+50h] [rbp-C8h]
  void *v55; // [rsp+60h] [rbp-B8h]
  __int128 v56; // [rsp+68h] [rbp-B0h]
  void *v57; // [rsp+78h] [rbp-A0h]
  __int128 v58; // [rsp+80h] [rbp-98h]
  __int16 v59; // [rsp+90h] [rbp-88h]
  void *v60; // [rsp+98h] [rbp-80h]
  __int128 v61; // [rsp+A0h] [rbp-78h]
  void *v62; // [rsp+B0h] [rbp-68h]
  __int128 v63; // [rsp+B8h] [rbp-60h]
  int v64; // [rsp+C8h] [rbp-50h]
  void *v65; // [rsp+D0h] [rbp-48h]
  __m128i v66; // [rsp+D8h] [rbp-40h] BYREF
  unsigned __int64 v67; // [rsp+E8h] [rbp-30h]

  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_BYTE *)(a1 + 32);
  v67 = __readfsqword(0x28u);
  v13 = *(__int64 **)(a1 + 8);
  v20 = *(__int64 **)(a1 + 16);
  v49 = nullptr;
  v50 = 0;
  *v20 = sub_4165D0((__int64)&v49, v13, (_QWORD *)a2, v10, v11);
  v18 = *(_QWORD **)(a1 + 16);
  v19 = *(_QWORD *)(a2 + 16);
  LOBYTE(v20) = *v18 != 0;
  if ( *v18 )
  {
    memset(&v51.m256i_u64[1], 0, 24);
    if ( v19 )
    {
      v42 = (void *)qalloc_or_throw(v19);
      v13 = *(__int64 **)(a2 + 8);
      v51.m256i_i64[1] = (__int64)v42;
      v51.m256i_i64[3] = v19;
      memcpy(v42, v13, v19);
      v51.m256i_i64[2] = v19;
    }
    v21 = *(_WORD *)(a2 + 32);
    v22 = *(_QWORD *)(a2 + 48);
    v53 = nullptr;
    v54 = 0;
    v52 = v21;
    if ( v22 )
    {
      v43 = (void *)qalloc_or_throw(v22);
      v13 = *(__int64 **)(a2 + 40);
      v53 = v43;
      *((_QWORD *)&v54 + 1) = v22;
      memcpy(v43, v13, v22);
      *(_QWORD *)&v54 = v22;
    }
    v23 = *(_QWORD *)(a2 + 72);
    v55 = nullptr;
    v56 = 0;
    if ( v23 )
    {
      v44 = (void *)qalloc_or_throw(v23);
      v13 = *(__int64 **)(a2 + 64);
      v55 = v44;
      *((_QWORD *)&v56 + 1) = v23;
      memcpy(v44, v13, v23);
      *(_QWORD *)&v56 = v23;
    }
    v24 = *(_QWORD *)(a2 + 96);
    v57 = nullptr;
    v51.m256i_i64[0] = (__int64)&login_credentials_t___vtable;
    v58 = 0;
    if ( v24 )
    {
      v45 = (void *)qalloc_or_throw(v24);
      v13 = *(__int64 **)(a2 + 88);
      v57 = v45;
      *((_QWORD *)&v58 + 1) = v24;
      memcpy(v45, v13, v24);
      *(_QWORD *)&v58 = v24;
    }
    v25 = *(_WORD *)(a2 + 112);
    v26 = *(_QWORD *)(a2 + 128);
    v60 = nullptr;
    v61 = 0;
    v59 = v25;
    if ( v26 )
    {
      v46 = (void *)qalloc_or_throw(v26);
      v13 = *(__int64 **)(a2 + 120);
      v60 = v46;
      *((_QWORD *)&v61 + 1) = v26;
      memcpy(v46, v13, v26);
      *(_QWORD *)&v61 = v26;
    }
    v27 = *(_QWORD *)(a2 + 152);
    v62 = nullptr;
    v63 = 0;
    if ( v27 )
    {
      v47 = (void *)qalloc_or_throw(v27);
      v13 = *(__int64 **)(a2 + 144);
      v62 = v47;
      *((_QWORD *)&v63 + 1) = v27;
      memcpy(v47, v13, v27);
      *(_QWORD *)&v63 = v27;
    }
    v28 = *(_DWORD *)(a2 + 168);
    v29 = *(_QWORD *)(a2 + 184);
    v51.m256i_i64[0] = (__int64)&vault_credentials_t___vtable;
    v64 = v28;
    v65 = nullptr;
    v66 = 0;
    if ( v29 )
    {
      v41 = (void *)qalloc_or_throw(v29);
      v13 = *(__int64 **)(a2 + 176);
      v65 = v41;
      v66.m128i_i64[1] = v29;
      memcpy(v41, v13, v29);
      v66.m128i_i64[0] = v29;
    }
    v30 = vcred_load_site(&v51);
    v31 = v65;
    if ( v30 )
    {
      v32 = *(void **)(a2 + 176);
      v33 = *(_QWORD *)(a2 + 192);
      *(_QWORD *)(a2 + 176) = v65;
      v34 = _mm_loadu_si128(&v66);
      v65 = v32;
      v31 = v32;
      v66.m128i_i64[1] = v33;
      *(__m128i *)(a2 + 184) = v34;
    }
    v51.m256i_i64[0] = (__int64)&vault_credentials_t___vtable;
    if ( v31 )
    {
      v66.m128i_i64[0] = 0;
      qfree(v31, (const char *)v13);
    }
    v51.m256i_i64[0] = (__int64)&login_credentials_t___vtable;
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62, (const char *)v13);
    }
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v60, (const char *)v13);
    }
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree(v57, (const char *)v13);
    }
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55, (const char *)v13);
    }
    if ( v53 )
    {
      *(_QWORD *)&v54 = 0;
      qfree(v53, (const char *)v13);
    }
    if ( v51.m256i_i64[1] )
    {
      v51.m256i_i64[2] = 0;
      qfree(v51.m256i_i64[1], (const char *)v13);
    }
    goto LABEL_32;
  }
  v36 = &s1;
  if ( (_QWORD)v50 )
    v36 = v49;
  v37 = *(unsigned __int16 *)(a2 + 32);
  memset(&v51, 0, 24);
  if ( !(_WORD)v37 )
  {
    if ( v19 < 2 )
      goto LABEL_49;
    v48 = *(const void **)(a2 + 8);
    v51.m256i_i64[0] = qvector_reserve(&v51, 0, v19, 1);
    v51.m256i_i64[1] = v19;
    memmove((void *)v51.m256i_i64[0], v48, v19 - 1);
    *(_BYTE *)(v51.m256i_i64[0] + v19 - 1) = 0;
    goto LABEL_43;
  }
  v38 = (unsigned __int16)v37;
  if ( !v19 )
  {
    v39 = &s1;
    goto LABEL_48;
  }
  v39 = *(const char **)(a2 + 8);
  if ( *v39 == 91 || (v40 = strchr(v39, 58)) == nullptr || v40 - v39 == -1 )
  {
LABEL_48:
    sub_169A50(v51.m256i_i64, (__int64)"%s:%u", v39, v38);
    if ( v51.m256i_i64[1] )
      goto LABEL_44;
    goto LABEL_49;
  }
  sub_169A50(v51.m256i_i64, (__int64)"[%s]:%u", v39, v38);
LABEL_43:
  if ( v51.m256i_i64[1] )
  {
LABEL_44:
    v13 = (__int64 *)v51.m256i_i64[0];
    goto LABEL_45;
  }
LABEL_49:
  v13 = (__int64 *)&s1;
LABEL_45:
  sub_169630(
    (int)"Login to %s failed: %s",
    (__int64)v13,
    (__int64)v36,
    v37,
    v14,
    v15,
    (__m128)0LL,
    a4,
    a5,
    a6,
    v16,
    v17,
    a9,
    a10,
    (char)v49);
  if ( v51.m256i_i64[0] )
  {
    v51.m256i_i64[1] = 0;
    qfree(v51.m256i_i64[0], (const char *)v13);
  }
LABEL_32:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49, (const char *)v13);
  }
  return (unsigned int)v20;
}
