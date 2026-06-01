QT::QAbstractItemView *__fastcall sub_19F9B0(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  QT::QAbstractItemView *std_dirtree; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  size_t v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  _QWORD *v16; // r15
  _QWORD *v17; // rax
  unsigned __int64 *v18; // rax
  __int64 v19; // rax
  const char *v20; // rsi
  double v21; // xmm0_8
  char *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rdi
  size_t v36; // r8
  _QWORD *v37; // rsi
  size_t v38; // r9
  _QWORD *v39; // rcx
  size_t v40; // rdx
  _QWORD **v41; // rax
  void *v42; // rdi
  __int64 v43; // rax
  __int64 n; // [rsp+0h] [rbp-188h]
  size_t na; // [rsp+0h] [rbp-188h]
  size_t v46; // [rsp+8h] [rbp-180h]
  __int64 v47; // [rsp+10h] [rbp-178h] BYREF
  __int128 v48; // [rsp+18h] [rbp-170h]
  __int64 v49; // [rsp+28h] [rbp-160h]
  __int128 v50; // [rsp+30h] [rbp-158h]
  __int64 v51; // [rsp+40h] [rbp-148h]
  __int128 v52; // [rsp+48h] [rbp-140h]
  __int64 v53; // [rsp+58h] [rbp-130h]
  __int128 v54; // [rsp+60h] [rbp-128h] BYREF
  int v55; // [rsp+70h] [rbp-118h]
  __int64 v56; // [rsp+80h] [rbp-108h] BYREF
  __int128 v57; // [rsp+88h] [rbp-100h]
  unsigned __int64 v58; // [rsp+98h] [rbp-F0h]
  char v59; // [rsp+A0h] [rbp-E8h] BYREF
  char v60; // [rsp+110h] [rbp-78h] BYREF
  unsigned __int64 v61; // [rsp+148h] [rbp-40h] BYREF

  v61 = __readfsqword(0x28u);
  std_dirtree = (QT::QAbstractItemView *)get_std_dirtree(5);
  if ( !std_dirtree )
    return std_dirtree;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v55 = 496;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 0;
  sub_197020(&v47, "Location", 24, (int)&stru_50000, nullptr);
  sub_197020(&v47, "Type", 4, 0, nullptr);
  sub_197020(&v47, "Pass count", 8, 196608, nullptr);
  sub_197020(&v47, "Hardware", 9, 0, nullptr);
  sub_197020(&v47, "Condition", 32, 0, nullptr);
  sub_197020(&v47, "Actions", 10, 0, nullptr);
  sub_197020(&v47, "State", 10, 0, nullptr);
  sub_197020(&v47, "Comment", 30, 0, nullptr);
  v8 = operator new(0x138u);
  sub_497880(v8, std_dirtree, &v47);
  *(_QWORD *)(v8 + 240) = 1;
  *(_QWORD *)(v8 + 232) = v8 + 280;
  *(_QWORD *)(v8 + 248) = 0;
  *(_QWORD *)v8 = &standalone_dirtree_item_model_t___vtable;
  *(_QWORD *)(v8 + 224) = &off_86FDF8;
  *(_QWORD *)(v8 + 256) = 0;
  *(_DWORD *)(v8 + 264) = 1065353216;
  *(_QWORD *)(v8 + 272) = 0;
  *(_BYTE *)(v8 + 288) = 0;
  *(_QWORD *)(v8 + 296) = v8;
  *(_QWORD *)(v8 + 280) = 0;
  v9 = (_QWORD *)operator new(0x10u);
  *v9 = 0;
  v10 = v9;
  v11 = *(_QWORD *)(v8 + 256);
  v9[1] = 0;
  v12 = *(_QWORD *)(v8 + 240);
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                          (std::__detail::_Prime_rehash_policy *)(v8 + 264),
                          v12,
                          v11,
                          1u) )
  {
    v36 = v13;
    if ( v13 == 1 )
    {
      *(_QWORD *)(v8 + 280) = 0;
      v16 = (_QWORD *)(v8 + 280);
    }
    else
    {
      if ( v13 >> 60 )
      {
        if ( v13 >> 61 )
          sub_162118(v8 + 264, v12, v13, v14, v13 >> 61, v15);
        std::__throw_bad_alloc();
      }
      v46 = v13;
      n = 8 * v13;
      v16 = (_QWORD *)operator new(8 * v13);
      memset(v16, 0, n);
      v36 = v46;
    }
    v37 = *(_QWORD **)(v8 + 248);
    v38 = 0;
    *(_QWORD *)(v8 + 248) = 0;
    while ( v37 )
    {
      while ( 1 )
      {
        v39 = v37;
        v37 = (_QWORD *)*v37;
        v40 = v39[1] % v36;
        v41 = (_QWORD **)&v16[v40];
        if ( !*v41 )
          break;
        *v39 = **v41;
        **v41 = v39;
        if ( !v37 )
          goto LABEL_46;
      }
      *v39 = *(_QWORD *)(v8 + 248);
      *(_QWORD *)(v8 + 248) = v39;
      *v41 = (_QWORD *)(v8 + 248);
      if ( *v39 )
        v16[v38] = v39;
      v38 = v40;
    }
LABEL_46:
    v42 = *(void **)(v8 + 232);
    if ( (void *)(v8 + 280) != v42 )
    {
      na = v36;
      operator delete(v42, 8LL * *(_QWORD *)(v8 + 240));
      v36 = na;
    }
    *(_QWORD *)(v8 + 240) = v36;
    *(_QWORD *)(v8 + 232) = v16;
    v17 = (_QWORD *)*v16;
    if ( *v16 )
      goto LABEL_4;
LABEL_49:
    v43 = *(_QWORD *)(v8 + 248);
    *(_QWORD *)(v8 + 248) = v10;
    *v10 = v43;
    if ( v43 )
    {
      v16[*(_QWORD *)(v43 + 8) % *(_QWORD *)(v8 + 240)] = v10;
      v16 = *(_QWORD **)(v8 + 232);
    }
    *v16 = v8 + 248;
    goto LABEL_5;
  }
  v16 = *(_QWORD **)(v8 + 232);
  v17 = (_QWORD *)*v16;
  if ( !*v16 )
    goto LABEL_49;
LABEL_4:
  *v10 = *v17;
  *(_QWORD *)*v16 = v10;
LABEL_5:
  ++*(_QWORD *)(v8 + 256);
  v57 = 0;
  v56 = 0;
  *(_QWORD *)(v8 + 224) = standalone_dirtree_item_model_t::lazy_loader_t___vtable;
  v58 = 0xFFFFFFFF00000000LL;
  v18 = (unsigned __int64 *)&v59;
  do
  {
    *v18 = 0;
    v18 += 7;
    *((_OWORD *)v18 - 3) = 0;
    *(v18 - 4) = 0;
    *(_OWORD *)(v18 - 3) = 0;
    *((_DWORD *)v18 - 2) = -1;
  }
  while ( v18 != &v61 );
  if ( *((_QWORD *)&v57 + 1) <= 0x36u )
  {
    v19 = qvector_reserve(&v56, 0, 55, 1);
    v56 = v19;
  }
  else
  {
    v19 = v56;
  }
  *(_QWORD *)&v57 = 55;
  *(__m128i *)v19 = _mm_load_si128((const __m128i *)&xmmword_5DC4D0);
  *(__m128i *)(v19 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC4E0);
  LODWORD(v58) = v58 | 0x1F;
  *(__m128i *)(v19 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DC4F0);
  *(_QWORD *)(v19 + 46) = 0x7377656976627573LL;
  HIDWORD(v58) = 13;
  *(_BYTE *)(v56 + 54) = 0;
  std_dirtree = (QT::QAbstractItemView *)operator new(0x9B8u);
  sub_2DB930(std_dirtree, 126, a1, 7, &v56, 0);
  v20 = (const char *)v8;
  *(_QWORD *)std_dirtree = &breakpoints_dirtree_widget_t___vtable;
  *((_QWORD *)std_dirtree + 2) = breakpoints_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)std_dirtree + 30) = breakpoints_dirtree_widget_t___vtable_at__240;
  *((_QWORD *)std_dirtree + 38) = breakpoints_dirtree_widget_t___vtable_at__304;
  v21 = sub_2DC890(std_dirtree, v8, breakpoints_dirtree_widget_t___vtable_at__240);
  if ( *(_DWORD *)(a2 + 12) || *(_QWORD *)a2 != -1 )
  {
    v20 = (const char *)a2;
    sub_19F840(std_dirtree, a2, v21, a4, a5);
  }
  v22 = &v60;
  do
  {
    v23 = *((_QWORD *)v22 + 3);
    if ( v23 )
    {
      *((_QWORD *)v22 + 4) = 0;
      qfree(v23, v20, v21);
    }
    v24 = *(_QWORD *)v22;
    if ( *(_QWORD *)v22 )
    {
      *((_QWORD *)v22 + 1) = 0;
      qfree(v24, v20, v21);
    }
    v22 -= 56;
  }
  while ( v22 != (char *)&v54 + 8 );
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56, v20, v21);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53, v20, v21);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51, v20, v21);
  }
  v25 = v49;
  if ( v49 )
  {
    v26 = v50;
    if ( (_QWORD)v50 )
    {
      v27 = 0;
      do
      {
        v28 = (__int64 *)(v25 + 24 * v27);
        v29 = *v28;
        if ( *v28 )
        {
          v28[1] = 0;
          qfree(v29, v20, v21);
          v25 = v49;
        }
        ++v27;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v50 = 0;
    qfree(v25, v20, v21);
  }
  v30 = v47;
  if ( v47 )
  {
    v31 = v48;
    if ( (_QWORD)v48 )
    {
      v32 = 0;
      do
      {
        v33 = (__int64 *)(v30 + 24 * v32);
        v34 = *v33;
        if ( *v33 )
        {
          v33[1] = 0;
          qfree(v34, v20, v21);
          v30 = v47;
        }
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v48 = 0;
    qfree(v30, v20, v21);
  }
  return std_dirtree;
}
