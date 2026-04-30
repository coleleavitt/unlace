QT::QObject *__fastcall sub_33E280(const char *a1, int a2, __int64 a3)
{
  QT::QObject *std_dirtree; // rbp
  __int64 v6; // rdx
  __int64 eah; // rax
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
  void *v20; // rsi
  void *v21; // rsi
  __m128i *v22; // rsi
  __m128i si128; // xmm0
  const char *v24; // rsi
  __int64 *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 v35; // rbx
  __int64 *v36; // rax
  __int64 v37; // rdi
  size_t v39; // r8
  _QWORD *v40; // rsi
  size_t v41; // r9
  _QWORD *v42; // rcx
  size_t v43; // rdx
  _QWORD **v44; // rax
  void *v45; // rdi
  __int64 v46; // rax
  __int64 n; // [rsp+10h] [rbp-198h]
  size_t na; // [rsp+10h] [rbp-198h]
  size_t v50; // [rsp+18h] [rbp-190h]
  __int64 v51; // [rsp+27h] [rbp-181h] BYREF
  char v52; // [rsp+2Fh] [rbp-179h]
  __int64 v53; // [rsp+30h] [rbp-178h] BYREF
  __int128 v54; // [rsp+38h] [rbp-170h]
  __int64 v55; // [rsp+48h] [rbp-160h]
  __int128 v56; // [rsp+50h] [rbp-158h]
  __int64 v57; // [rsp+60h] [rbp-148h]
  __int128 v58; // [rsp+68h] [rbp-140h]
  __int64 v59; // [rsp+78h] [rbp-130h]
  __int128 v60; // [rsp+80h] [rbp-128h] BYREF
  int v61; // [rsp+90h] [rbp-118h]
  __int64 v62; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v63; // [rsp+A8h] [rbp-100h]
  unsigned __int64 v64; // [rsp+B8h] [rbp-F0h]
  _QWORD v65[7]; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD v66[7]; // [rsp+F8h] [rbp-B0h] BYREF
  _QWORD v67[7]; // [rsp+130h] [rbp-78h] BYREF
  unsigned __int64 v68; // [rsp+168h] [rbp-40h] BYREF

  v68 = __readfsqword(0x28u);
  std_dirtree = (QT::QObject *)get_std_dirtree(2);
  if ( !std_dirtree )
    return std_dirtree;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  v61 = 496;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  sub_197020(&v53, "Name", 32, (int)&stru_50000, nullptr);
  eah = get_eah(&v53, "Name", v6);
  sub_197020(&v53, "Address", (unsigned int)(2 * *(_DWORD *)(eah + 24)), 1074003968, nullptr);
  sub_197020(&v53, "Public", 5, 0, nullptr);
  v8 = operator new(0x138u);
  sub_497880(v8, std_dirtree, &v53);
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
    v39 = v13;
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
      v50 = v13;
      n = 8 * v13;
      v16 = (_QWORD *)operator new(8 * v13);
      memset(v16, 0, n);
      v39 = v50;
    }
    v40 = *(_QWORD **)(v8 + 248);
    v41 = 0;
    *(_QWORD *)(v8 + 248) = 0;
    while ( v40 )
    {
      while ( 1 )
      {
        v42 = v40;
        v40 = (_QWORD *)*v40;
        v43 = v42[1] % v39;
        v44 = (_QWORD **)&v16[v43];
        if ( !*v44 )
          break;
        *v42 = **v44;
        **v44 = v42;
        if ( !v40 )
          goto LABEL_51;
      }
      *v42 = *(_QWORD *)(v8 + 248);
      *(_QWORD *)(v8 + 248) = v42;
      *v44 = (_QWORD *)(v8 + 248);
      if ( *v42 )
        v16[v41] = v42;
      v41 = v43;
    }
LABEL_51:
    v45 = *(void **)(v8 + 232);
    if ( (void *)(v8 + 280) != v45 )
    {
      na = v39;
      operator delete(v45, 8LL * *(_QWORD *)(v8 + 240));
      v39 = na;
    }
    *(_QWORD *)(v8 + 240) = v39;
    *(_QWORD *)(v8 + 232) = v16;
    v17 = (_QWORD *)*v16;
    if ( *v16 )
      goto LABEL_4;
LABEL_54:
    v46 = *(_QWORD *)(v8 + 248);
    *(_QWORD *)(v8 + 248) = v10;
    *v10 = v46;
    if ( v46 )
    {
      v16[*(_QWORD *)(v46 + 8) % *(_QWORD *)(v8 + 240)] = v10;
      v16 = *(_QWORD **)(v8 + 232);
    }
    *v16 = v8 + 248;
    goto LABEL_5;
  }
  v16 = *(_QWORD **)(v8 + 232);
  v17 = (_QWORD *)*v16;
  if ( !*v16 )
    goto LABEL_54;
LABEL_4:
  *v10 = *v17;
  *(_QWORD *)*v16 = v10;
LABEL_5:
  ++*(_QWORD *)(v8 + 256);
  v63 = 0;
  v62 = 0;
  *(_QWORD *)(v8 + 224) = standalone_dirtree_item_model_t::lazy_loader_t___vtable;
  v64 = 0xFFFFFFFF00000000LL;
  v18 = v65;
  do
  {
    *v18 = 0;
    v18 += 7;
    *((_OWORD *)v18 - 3) = 0;
    *(v18 - 4) = 0;
    *(_OWORD *)(v18 - 3) = 0;
    *((_DWORD *)v18 - 2) = -1;
  }
  while ( &v68 != v18 );
  if ( *((_QWORD *)&v63 + 1) <= 0x36u )
  {
    v19 = qvector_reserve(&v62, 0, 55, 1);
    v62 = v19;
  }
  else
  {
    v19 = v62;
  }
  *(_QWORD *)&v63 = 55;
  *(__m128i *)v19 = _mm_load_si128((const __m128i *)&xmmword_5DC4D0);
  *(__m128i *)(v19 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC4E0);
  LODWORD(v64) = v64 | 0x1F;
  *(__m128i *)(v19 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DC4F0);
  *(_QWORD *)(v19 + 46) = 0x7377656976627573LL;
  HIDWORD(v64) = a2;
  *(_BYTE *)(v62 + 54) = 0;
  v20 = (void *)v66[0];
  if ( v66[2] <= 0xBu )
  {
    v66[0] = qvector_reserve(v66, v66[0], 12, 1);
    v20 = (void *)v66[0];
  }
  v66[1] = 12;
  qmemcpy(v20, "Add name...", 11);
  *(_BYTE *)(v66[0] + 11LL) = 0;
  v21 = (void *)v65[0];
  if ( v65[2] <= 0xCu )
  {
    v65[0] = qvector_reserve(v65, v65[0], 13, 1);
    v21 = (void *)v65[0];
  }
  v65[1] = 13;
  qmemcpy(v21, "Edit name...", 12);
  *(_BYTE *)(v65[0] + 12LL) = 0;
  v22 = (__m128i *)v67[0];
  if ( v67[2] <= 0x11u )
  {
    v67[0] = qvector_reserve(v67, v67[0], 18, 1);
    v22 = (__m128i *)v67[0];
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD0C0);
  v67[1] = 18;
  v22[1].m128i_i8[0] = 46;
  *v22 = si128;
  *(_BYTE *)(v67[0] + 17LL) = 0;
  std_dirtree = (QT::QObject *)operator new(0x9B8u);
  sub_2DB930((__int64)std_dirtree, 35, a1, 7, (__int64)&v62);
  v24 = (const char *)v8;
  *(_QWORD *)std_dirtree = &names_dirtree_widget_t___vtable;
  *((_QWORD *)std_dirtree + 2) = names_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)std_dirtree + 30) = names_dirtree_widget_t___vtable_at__240;
  *((_QWORD *)std_dirtree + 38) = names_dirtree_widget_t___vtable_at__304;
  sub_2DC890(std_dirtree, (QT::QObject *)v8);
  if ( a3 != -1 )
  {
    v24 = (const char *)&v51;
    v51 = a3;
    v52 = 0;
    sub_48EE60(std_dirtree);
  }
  v25 = v67;
  do
  {
    v26 = v25[3];
    if ( v26 )
    {
      v25[4] = 0;
      *(double *)si128.m128i_i64 = qfree(v26, v24);
    }
    v27 = *v25;
    if ( *v25 )
    {
      v25[1] = 0;
      *(double *)si128.m128i_i64 = qfree(v27, v24, *(double *)si128.m128i_i64);
    }
    v25 -= 7;
  }
  while ( v25 != (__int64 *)((char *)&v60 + 8) );
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    *(double *)si128.m128i_i64 = qfree(v62, v24, *(double *)si128.m128i_i64);
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    *(double *)si128.m128i_i64 = qfree(v59, v24, *(double *)si128.m128i_i64);
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    *(double *)si128.m128i_i64 = qfree(v57, v24, *(double *)si128.m128i_i64);
  }
  v28 = v55;
  if ( v55 )
  {
    v29 = v56;
    if ( (_QWORD)v56 )
    {
      v30 = 0;
      do
      {
        v31 = (__int64 *)(v28 + 24 * v30);
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          *(double *)si128.m128i_i64 = qfree(v32, v24, *(double *)si128.m128i_i64);
          v28 = v55;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v56 = 0;
    *(double *)si128.m128i_i64 = qfree(v28, v24, *(double *)si128.m128i_i64);
  }
  v33 = v53;
  if ( v53 )
  {
    v34 = v54;
    if ( (_QWORD)v54 )
    {
      v35 = 0;
      do
      {
        v36 = (__int64 *)(v33 + 24 * v35);
        v37 = *v36;
        if ( *v36 )
        {
          v36[1] = 0;
          *(double *)si128.m128i_i64 = qfree(v37, v24, *(double *)si128.m128i_i64);
          v33 = v53;
        }
        ++v35;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v54 = 0;
    qfree(v33, v24, *(double *)si128.m128i_i64);
  }
  return std_dirtree;
}
