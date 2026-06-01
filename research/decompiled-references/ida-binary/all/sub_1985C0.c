QT::QAbstractItemView *__fastcall sub_1985C0(
        QT::QObject *a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        double a7,
        double a8,
        __m128 a9)
{
  int dirtree_id; // eax
  __int64 std_dirtree; // r15
  __int64 v13; // rbx
  QT::QAbstractItemView *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r15
  QT::QAbstractItemView ***v22; // r13
  QT::QAbstractItemView *v23; // rsi
  unsigned __int64 v24; // r8
  QT::QAbstractItemView **v25; // rcx
  unsigned __int64 v26; // rdx
  QT::QAbstractItemView ***v27; // rax
  unsigned __int64 *v29; // rax
  __int64 v30; // rax
  double v31; // xmm0_8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  char *v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rbx
  __int64 *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r12
  __int64 v45; // rbx
  __int64 *v46; // rax
  __int64 v47; // rdi
  void *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // [rsp-8h] [rbp-1A8h]
  __int64 n; // [rsp+0h] [rbp-1A0h]
  QT::QAbstractItemView *v56; // [rsp+28h] [rbp-178h]
  QT::QAbstractItemView *v57; // [rsp+28h] [rbp-178h]
  __int64 v58; // [rsp+30h] [rbp-170h] BYREF
  __int128 v59; // [rsp+38h] [rbp-168h]
  __int64 v60; // [rsp+48h] [rbp-158h]
  __int128 v61; // [rsp+50h] [rbp-150h]
  __int64 v62; // [rsp+60h] [rbp-140h]
  __int128 v63; // [rsp+68h] [rbp-138h]
  __int64 v64; // [rsp+78h] [rbp-128h]
  __int128 v65; // [rsp+80h] [rbp-120h] BYREF
  int v66; // [rsp+90h] [rbp-110h]
  __int64 v67; // [rsp+A0h] [rbp-100h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-F8h]
  unsigned __int64 v69; // [rsp+B8h] [rbp-E8h]
  char v70; // [rsp+C0h] [rbp-E0h] BYREF
  char v71; // [rsp+130h] [rbp-70h] BYREF
  unsigned __int64 v72; // [rsp+168h] [rbp-38h] BYREF

  v72 = __readfsqword(0x28u);
  dirtree_id = bookmarks_t_get_dirtree_id(a2, a3);
  if ( dirtree_id > 6 )
    return nullptr;
  std_dirtree = get_std_dirtree((unsigned int)dirtree_id);
  if ( !std_dirtree )
    return nullptr;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 496;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  sub_197020(&v58, "Place", 15, 0, nullptr);
  sub_197020(&v58, "Description", a6 != 0 ? 0x28 : 0, 0, nullptr);
  v13 = operator new(0x138u);
  sub_497880(v13, std_dirtree, &v58);
  *(_QWORD *)(v13 + 240) = 1;
  *(_QWORD *)(v13 + 232) = v13 + 280;
  *(_QWORD *)(v13 + 248) = 0;
  *(_QWORD *)v13 = &standalone_dirtree_item_model_t___vtable;
  *(_QWORD *)(v13 + 224) = &off_86FDF8;
  *(_QWORD *)(v13 + 256) = 0;
  *(_DWORD *)(v13 + 264) = 1065353216;
  *(_QWORD *)(v13 + 272) = 0;
  *(_BYTE *)(v13 + 288) = 0;
  *(_QWORD *)(v13 + 296) = v13;
  *(_QWORD *)(v13 + 280) = 0;
  v14 = (QT::QAbstractItemView *)operator new(0x10u);
  *(_QWORD *)v14 = 0;
  v15 = *(_QWORD *)(v13 + 256);
  *((_QWORD *)v14 + 1) = 0;
  v16 = *(_QWORD *)(v13 + 240);
  v56 = v14;
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                          (std::__detail::_Prime_rehash_policy *)(v13 + 264),
                          v16,
                          v15,
                          1u) )
  {
    v21 = v17;
    if ( v17 == 1 )
    {
      *(_QWORD *)(v13 + 280) = 0;
      v22 = (QT::QAbstractItemView ***)(v13 + 280);
    }
    else
    {
      if ( v17 >> 60 )
      {
        if ( v17 >> 61 )
          sub_162118(v13 + 264, v16, v17, v18, v19, v20);
        std::__throw_bad_alloc();
      }
      n = 8 * v17;
      v22 = (QT::QAbstractItemView ***)operator new(8 * v17);
      memset(v22, 0, n);
    }
    v23 = *(QT::QAbstractItemView **)(v13 + 248);
    *(_QWORD *)(v13 + 248) = 0;
    v24 = 0;
    while ( v23 )
    {
      v25 = (QT::QAbstractItemView **)v23;
      v23 = *(QT::QAbstractItemView **)v23;
      v26 = (unsigned __int64)v25[1] % v21;
      v27 = &v22[v26];
      if ( *v27 )
      {
        *v25 = **v27;
        **v27 = (QT::QAbstractItemView *)v25;
      }
      else
      {
        *v25 = *(QT::QAbstractItemView **)(v13 + 248);
        *(_QWORD *)(v13 + 248) = v25;
        *v27 = (QT::QAbstractItemView **)(v13 + 248);
        if ( *v25 )
          v22[v24] = v25;
        v24 = v26;
      }
    }
    v48 = *(void **)(v13 + 232);
    if ( (void *)(v13 + 280) != v48 )
      operator delete(v48, 8LL * *(_QWORD *)(v13 + 240));
    *(_QWORD *)(v13 + 240) = v21;
    *(_QWORD *)(v13 + 232) = v22;
  }
  else
  {
    v22 = *(QT::QAbstractItemView ****)(v13 + 232);
  }
  if ( *v22 )
  {
    *(_QWORD *)v56 = **v22;
    **v22 = v56;
  }
  else
  {
    v49 = *(_QWORD *)(v13 + 248);
    *(_QWORD *)v56 = v49;
    *(_QWORD *)(v13 + 248) = v56;
    if ( v49 )
    {
      v22[*(_QWORD *)(v49 + 8) % *(_QWORD *)(v13 + 240)] = (QT::QAbstractItemView **)v56;
      v22 = *(QT::QAbstractItemView ****)(v13 + 232);
    }
    *v22 = (QT::QAbstractItemView **)(v13 + 248);
  }
  ++*(_QWORD *)(v13 + 256);
  v67 = 0;
  v68 = 0;
  *(_QWORD *)(v13 + 224) = standalone_dirtree_item_model_t::lazy_loader_t___vtable;
  v69 = 0xFFFFFFFF00000000LL;
  v29 = (unsigned __int64 *)&v70;
  do
  {
    *v29 = 0;
    v29 += 7;
    *((_OWORD *)v29 - 3) = 0;
    *(v29 - 4) = 0;
    *(_OWORD *)(v29 - 3) = 0;
    *((_DWORD *)v29 - 2) = -1;
  }
  while ( v29 != &v72 );
  if ( *((_QWORD *)&v68 + 1) <= 0x36u )
  {
    v30 = qvector_reserve(&v67, 0, 55, 1);
    v67 = v30;
  }
  else
  {
    v30 = v67;
  }
  *(_QWORD *)&v68 = 55;
  *(__m128i *)v30 = _mm_load_si128((const __m128i *)&xmmword_5DC4D0);
  *(__m128i *)(v30 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC4E0);
  LODWORD(v69) = v69 | 0x1F;
  *(__m128i *)(v30 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DC4F0);
  *(_QWORD *)(v30 + 46) = 0x7377656976627573LL;
  HIDWORD(v69) = 57;
  *(_BYTE *)(v67 + 54) = 0;
  v57 = (QT::QAbstractItemView *)operator new(0xA20u);
  sub_1978C0((__int64)v57, a4, a1, a2, a3, 7u, (__int64)&v67, 0);
  v31 = sub_2DC890(v57, v13, v50);
  sub_1983D0((__m128i *)v57, a5, v31, a8, a9);
  v35 = &v71;
  do
  {
    v36 = *((_QWORD *)v35 + 3);
    if ( v36 )
    {
      *((_QWORD *)v35 + 4) = 0;
      qfree(v36, a5, v32, v33, v34);
    }
    v37 = *(_QWORD *)v35;
    if ( *(_QWORD *)v35 )
    {
      *((_QWORD *)v35 + 1) = 0;
      qfree(v37, a5, v32, v33, v34);
    }
    v35 -= 56;
  }
  while ( v35 != (char *)&v65 + 8 );
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67, a5, v32, v33, v34);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64, a5, v32, v33, v34);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62, a5, v32, v33, v34);
  }
  v38 = v60;
  if ( v60 )
  {
    v39 = v61;
    if ( (_QWORD)v61 )
    {
      v40 = 0;
      do
      {
        v41 = (__int64 *)(v38 + 24 * v40);
        v42 = *v41;
        if ( *v41 )
        {
          v41[1] = 0;
          qfree(v42, a5, v38, v33, v34);
          v38 = v60;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    *(_QWORD *)&v61 = 0;
    qfree(v38, a5, v38, v33, v34);
  }
  v43 = v58;
  if ( v58 )
  {
    v44 = v59;
    if ( (_QWORD)v59 )
    {
      v45 = 0;
      do
      {
        v46 = (__int64 *)(v43 + 24 * v45);
        v47 = *v46;
        if ( *v46 )
        {
          v46[1] = 0;
          qfree(v47, a5, v43, v33, v34);
          v43 = v58;
        }
        ++v45;
      }
      while ( v44 != v45 );
    }
    *(_QWORD *)&v59 = 0;
    qfree(v43, a5, v43, v33, v34);
  }
  return v57;
}
