__int64 __fastcall modules_chooser_t__::vfunc_13(
        double a1,
        double a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int *v10; // rax
  int *v12; // rax
  __int64 *v13; // rbp
  __int64 v14; // rbx
  __m128i v15; // xmm0
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __m128 v18; // xmm0
  _DWORD *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  const char *v22; // rsi
  const char *v23; // rdi
  __int64 v24; // rax
  const char *v25; // rax
  size_t v26; // rax
  __int64 v27; // r9
  const char *v28; // r8
  size_t v29; // r10
  size_t v30; // r11
  __int64 v31; // rsi
  void *v32; // rdx
  const char *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 *v42; // r12
  __int64 v43; // rdi
  unsigned int v44; // ebp
  __int64 v46; // rax
  const void *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r12
  __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // r12
  __int64 v57; // rbx
  __int64 *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // [rsp+0h] [rbp-138h]
  const char *src; // [rsp+8h] [rbp-130h]
  void *srca; // [rsp+8h] [rbp-130h]
  void *srcb; // [rsp+8h] [rbp-130h]
  __int64 v66; // [rsp+10h] [rbp-128h]
  __int64 v67; // [rsp+10h] [rbp-128h]
  const char *v68; // [rsp+10h] [rbp-128h]
  __int64 v69; // [rsp+18h] [rbp-120h]
  size_t v70; // [rsp+20h] [rbp-118h]
  size_t v71; // [rsp+28h] [rbp-110h]
  char v72[8]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v73; // [rsp+38h] [rbp-100h]
  __int64 v74; // [rsp+40h] [rbp-F8h]
  __int64 v75; // [rsp+48h] [rbp-F0h]
  __int64 v76; // [rsp+58h] [rbp-E0h]
  __int64 v77; // [rsp+60h] [rbp-D8h]
  __int64 v78; // [rsp+78h] [rbp-C0h]
  __int64 v79; // [rsp+80h] [rbp-B8h]
  __int64 v80; // [rsp+90h] [rbp-A8h]
  __int64 v81; // [rsp+98h] [rbp-A0h]
  __int64 v82; // [rsp+A8h] [rbp-90h]
  __int64 v83; // [rsp+B0h] [rbp-88h]
  __int64 v84; // [rsp+C0h] [rbp-78h]
  __int64 v85; // [rsp+C8h] [rbp-70h]
  __int64 v86; // [rsp+D8h] [rbp-60h]
  __int64 v87; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v88; // [rsp+F8h] [rbp-40h]

  v10 = *(unsigned int **)a10;
  v88 = __readfsqword(0x28u);
  v12 = sub_227EE0(*v10);
  if ( !v12 )
    return 0;
  v13 = (__int64 *)v12;
  v14 = qalloc_or_throw(248);
  *(_QWORD *)v14 = &stru_86F6A0;
  *(_QWORD *)(v14 + 8) = 0x20000FF000004LL;
  *(_OWORD *)(v14 + 16) = -1;
  v15 = _mm_loadl_epi64((const __m128i *)&off_8602B8);
  v16 = (_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 32) = 0;
  *(_QWORD *)(v14 + 40) = 0;
  *(_DWORD *)(v14 + 48) = 2;
  *(_DWORD *)(v14 + 72) = -1;
  *(__m128i *)(v14 + 56) = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)&off_860090);
  do
  {
    *v16 = 0;
    v16 += 3;
    *((_OWORD *)v16 - 1) = 0;
  }
  while ( (_QWORD *)(v14 + 176) != v16 );
  *(_DWORD *)(v14 + 176) = 0;
  v17 = *(unsigned int *)(v14 + 12);
  if ( ((*(_DWORD *)(v14 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v14 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a10, v17, ((*(_DWORD *)(v14 + 12) >> 19) & 0x3Fu) - 1, 0.0);
      BUG();
    }
    *(_BYTE *)(v14 + 11) = ((*(_DWORD *)(v14 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v14 + 12) = v17 & 0xFE07FFFF;
  }
  v18 = 0;
  *(_QWORD *)(v14 + 192) = v13;
  *(_QWORD *)v14 = debnames_chooser_t___vtable;
  *(_QWORD *)(v14 + 184) = &debnames_chooser_t___vtable_at__184;
  *(_QWORD *)(v14 + 200) = 0;
  *(_QWORD *)(v14 + 224) = 0;
  *(_OWORD *)(v14 + 208) = 0;
  *(_OWORD *)(v14 + 232) = 0;
  v62 = v14 + 200;
  v19 = (_DWORD *)qvector_reserve(v14 + 200, 0, 8, 1);
  *(_QWORD *)(v14 + 200) = v19;
  v20 = 2;
  *(_QWORD *)(v14 + 208) = 8;
  *v19 = 1969516365;
  *(_DWORD *)((char *)v19 + 3) = 979725429;
  *(_BYTE *)(*(_QWORD *)(v14 + 200) + 7LL) = 0;
  v21 = *(_QWORD *)(v14 + 208);
  if ( v21 )
    v20 = v21-- + 1;
  v22 = *(const char **)(v14 + 200);
  if ( *(_QWORD *)(v14 + 216) < v20 )
  {
    v67 = v21;
    srca = (void *)v20;
    v60 = qvector_reserve(v62, v22, v20, 1);
    *(_QWORD *)(v14 + 200) = v60;
    v21 = v67;
    v22 = (const char *)v60;
    v20 = (unsigned __int64)srca;
  }
  *(_QWORD *)(v14 + 208) = v20;
  v23 = &s1;
  v22[v21] = 32;
  *(_BYTE *)(*(_QWORD *)(v14 + 200) + v21 + 1) = 0;
  v24 = *(_QWORD *)(v14 + 192);
  if ( *(_QWORD *)(v24 + 8) )
    v23 = *(const char **)v24;
  v25 = (const char *)qbasename(v23);
  if ( v25 )
  {
    src = v25;
    v66 = *(_QWORD *)(v14 + 208);
    v26 = strlen(v25);
    v27 = v66;
    v28 = src;
    v29 = v26;
    v30 = v26;
    if ( v66 )
    {
      v27 = v66 - 1;
      v30 = v26 + v66 - 1;
    }
    v31 = *(_QWORD *)(v14 + 200);
    v32 = (void *)(v30 + 1);
    if ( *(_QWORD *)(v14 + 216) < v30 + 1 )
    {
      v71 = v26;
      v70 = v30;
      v69 = v27;
      v68 = src;
      srcb = (void *)(v30 + 1);
      v61 = qvector_reserve(v62, v31, v32, 1);
      *(_QWORD *)(v14 + 200) = v61;
      v29 = v71;
      v31 = v61;
      v30 = v70;
      v27 = v69;
      v28 = v68;
      v32 = srcb;
    }
    *(_QWORD *)(v14 + 208) = v32;
    *(_BYTE *)(v31 + v30) = 0;
    v22 = v28;
    memmove((void *)(v27 + *(_QWORD *)(v14 + 200)), v28, v29);
  }
  v33 = &s1;
  if ( *(_QWORD *)(v14 + 208) )
    v33 = *(const char **)(v14 + 200);
  *(_QWORD *)(v14 + 40) = v33;
  *(_DWORD *)(v14 + 72) = 35;
  sub_2377C0((_QWORD *)v14);
  if ( !*(_QWORD *)(v14 + 232) )
  {
    if ( v14 )
    {
      v40 = *(_QWORD *)(v14 + 224);
      *(_QWORD *)v14 = debnames_chooser_t___vtable;
      *(_QWORD *)(v14 + 184) = &debnames_chooser_t___vtable_at__184;
      if ( v40 )
        qfree(v40, v22);
      v41 = *(_QWORD *)(v14 + 200);
      if ( v41 )
      {
        *(_QWORD *)(v14 + 208) = 0;
        qfree(v41, v22);
      }
      *(_QWORD *)v14 = &stru_86F6A0;
      v42 = (__int64 *)(v14 + 152);
      do
      {
        v43 = *v42;
        if ( *v42 )
        {
          v42[1] = 0;
          qfree(v43, v22);
        }
        v42 -= 3;
      }
      while ( (__int64 *)(v14 + 56) != v42 );
      *(double *)v18.m128_u64 = qfree(v14, v22);
    }
    if ( v13[1] )
      sub_169630(
        (int)"Module '%s' has no names",
        *v13,
        v34,
        v35,
        v36,
        v37,
        v18,
        (__m128)(unsigned __int64)&off_860090,
        a3,
        a4,
        v38,
        v39,
        a7,
        a8,
        v14 - 56);
    else
      sub_169630(
        (int)"Module '%s' has no names",
        (__int64)&s1,
        v34,
        v35,
        v36,
        v37,
        v18,
        (__m128)(unsigned __int64)&off_860090,
        a3,
        a4,
        v38,
        v39,
        a7,
        a8,
        v14 - 56);
    return 0;
  }
  sub_4A3550(v72, v14, 0, 0);
  v46 = v14 + 184;
  if ( !v14 )
    v46 = 0;
  v47 = nullptr;
  v73 = v46;
  sub_4AE210(v14, 0, v72);
  v48 = *(_QWORD *)(a10 + 8);
  v44 = 0;
  if ( v48 != 1 )
  {
    v44 = 2;
    v47 = (const void *)(*(_QWORD *)a10 + 8LL);
    memmove(*(void **)a10, v47, 8 * v48 - 8);
    v49 = v86;
    --*(_QWORD *)(a10 + 8);
    if ( !v49 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v49 = v86;
  if ( v86 )
  {
LABEL_40:
    v87 = 0;
    qfree(v49, (const char *)v47);
  }
LABEL_41:
  if ( v84 )
  {
    v85 = 0;
    qfree(v84, (const char *)v47);
  }
  v50 = v82;
  if ( v82 )
  {
    v51 = v83;
    if ( v83 )
    {
      v52 = 0;
      do
      {
        v53 = (__int64 *)(v50 + 24 * v52);
        v54 = *v53;
        if ( *v53 )
        {
          v53[1] = 0;
          qfree(v54, (const char *)v47);
          v50 = v82;
        }
        ++v52;
      }
      while ( v51 != v52 );
    }
    v83 = 0;
    qfree(v50, (const char *)v47);
  }
  v55 = v80;
  if ( v80 )
  {
    v56 = v81;
    if ( v81 )
    {
      v57 = 0;
      do
      {
        v58 = (__int64 *)(v55 + 24 * v57);
        v59 = *v58;
        if ( *v58 )
        {
          v58[1] = 0;
          qfree(v59, (const char *)v47);
          v55 = v80;
        }
        ++v57;
      }
      while ( v56 != v57 );
    }
    v81 = 0;
    qfree(v55, (const char *)v47);
  }
  if ( v78 )
  {
    v79 = 0;
    qfree(v78, (const char *)v47);
  }
  if ( v76 )
  {
    v77 = 0;
    qfree(v76, (const char *)v47);
  }
  if ( v74 )
  {
    v75 = 0;
    qfree(v74, (const char *)v47);
  }
  return v44;
}
