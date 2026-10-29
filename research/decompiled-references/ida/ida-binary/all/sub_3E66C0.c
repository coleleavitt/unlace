__int64 __fastcall sub_3E66C0(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  size_t v13; // rbx
  size_t v15; // rbp
  double v16; // xmm0_8
  __int64 v17; // r13
  void *v18; // rax
  const void *v19; // rsi
  const char *v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rbp
  unsigned __int64 v23; // rbx
  size_t v24; // r8
  int v25; // eax
  __int64 v26; // rbx
  _DWORD *v27; // rdi
  double v28; // xmm4_8
  double v29; // xmm5_8
  unsigned __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  size_t v37; // r9
  const char *v38; // rsi
  unsigned __int64 v40; // r13
  double v41; // xmm4_8
  double v42; // xmm5_8
  bool v43; // zf
  const void *v44; // r13
  size_t v45; // rax
  size_t v46; // rbp
  void *v47; // rdi
  size_t v48; // rdx
  const char *v49; // rsi
  __int64 v50; // rax
  const char *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __m128 v56; // xmm4
  __m128 v57; // xmm5
  size_t v58; // r8
  const void *v59; // r9
  void *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 *v63; // [rsp+0h] [rbp-C8h]
  unsigned int v64; // [rsp+10h] [rbp-B8h]
  size_t v65; // [rsp+10h] [rbp-B8h]
  size_t v66; // [rsp+10h] [rbp-B8h]
  size_t v67; // [rsp+18h] [rbp-B0h]
  const void *v68; // [rsp+18h] [rbp-B0h]
  __int64 v69; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v70; // [rsp+28h] [rbp-A0h]
  __int64 v71; // [rsp+40h] [rbp-88h] BYREF
  __int128 v72; // [rsp+48h] [rbp-80h]
  _QWORD v73[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 *v74; // [rsp+80h] [rbp-48h]
  unsigned __int64 v75; // [rsp+88h] [rbp-40h]

  v13 = *(_QWORD *)(a3 + 8);
  v75 = __readfsqword(0x28u);
  if ( v13 )
  {
    v15 = v13 - 1;
    if ( v13 - 1 > 0x63 )
      return 1;
    v16 = 0.0;
    v17 = v13 + 1;
    v69 = 0;
    v70 = 0;
    v18 = (void *)qalloc_or_throw(v13);
    v19 = *(const void **)a3;
    *((_QWORD *)&v70 + 1) = v13;
    v69 = (__int64)v18;
    memcpy(v18, v19, v13);
    *(_QWORD *)&v70 = v13;
    v20 = (const char *)v69;
    if ( v13 >= v13 + 1 )
      goto LABEL_4;
    --v13;
  }
  else
  {
    v69 = 0;
    v16 = 0.0;
    v20 = nullptr;
    v17 = 2;
    v70 = 0;
  }
  v69 = qvector_reserve(&v69, v20, v17, 1);
  v20 = (const char *)v69;
  v15 = v13;
LABEL_4:
  *(_QWORD *)&v70 = v17;
  v20[v15] = 32;
  *(_BYTE *)(v69 + v15 + 1) = 0;
  v63 = *a2;
  if ( !(8LL * (_QWORD)a2[1]) )
  {
LABEL_24:
    v64 = 1;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v21 = *(_QWORD *)(a1 + 8);
    v22 = *v63;
    if ( (int)v21 > 41943039 )
    {
      v64 = -1;
      goto LABEL_37;
    }
    v23 = *(_QWORD *)(a3 + 8);
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v23 != 1 )
      {
        v37 = v23 - 1;
        if ( v21 )
        {
          --v21;
          v37 = v24 + v21;
          v23 += v21;
        }
        v38 = *(const char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v23 )
        {
          v67 = v37;
          v65 = v24;
          v61 = qvector_reserve(a1, v38, v23, 1);
          *(_QWORD *)a1 = v61;
          v37 = v67;
          v38 = (const char *)v61;
          v24 = v65;
        }
        *(_QWORD *)(a1 + 8) = v23;
        v38[v37] = 0;
        memcpy((void *)(v21 + *(_QWORD *)a1), *(const void **)a3, v24);
      }
    }
    sub_3DC3E0((const char **)a1, v22);
    v20 = nullptr;
    sub_3DEF80((__int64)v73, 0);
    v25 = *(_DWORD *)(v22 + 56);
    if ( v25 == 2 )
    {
      v26 = operator new(0x180u);
      sub_3DE430(v26, (__int64)v73, 2);
      *(_BYTE *)(v26 + 372) = 0;
      v43 = *(_QWORD *)(v22 + 88) == 0;
      *(_QWORD *)v26 = &expr_node_t___vtable;
      *(_DWORD *)(v26 + 376) = -1;
      if ( !v43
        && (v44 = *(const void **)(v22 + 80)) != nullptr
        && (v45 = strlen(*(const char **)(v22 + 80)), (v46 = v45) != 0) )
      {
        v47 = *(void **)(v26 + 80);
        v48 = v45 + 1;
        if ( *(_QWORD *)(v26 + 96) < v45 + 1 )
        {
          v66 = v45 + 1;
          v62 = qvector_reserve(v26 + 80, *(_QWORD *)(v26 + 80), v48, 1);
          *(_QWORD *)(v26 + 80) = v62;
          v48 = v66;
          v47 = (void *)v62;
        }
        *(_QWORD *)(v26 + 88) = v48;
        memmove(v47, v44, v46);
        *(_BYTE *)(*(_QWORD *)(v26 + 80) + v46) = 0;
      }
      else
      {
        *(_QWORD *)(v26 + 88) = 0;
      }
      *(_DWORD *)(v26 + 376) = -1;
      clear_tinfo_t(v26 + 72);
      v49 = &s1;
      if ( *(_QWORD *)(v26 + 88) )
        v49 = *(const char **)(v26 + 80);
      v50 = sub_3DEE10(v26, (__int64)v49);
      if ( v50 )
      {
        v51 = &s1;
        if ( *(_QWORD *)(v26 + 88) )
          v51 = *(const char **)(v26 + 80);
        *(_DWORD *)(v26 + 376) = v50 - (_DWORD)v51;
      }
      sub_3E2C20(v74, v26, *((_DWORD *)v74 + 6));
      v20 = nullptr;
      sub_3E5E80(v26, nullptr, v16, a5, a6, a7, v56, v57, a10, a11, v52, v53, v54, v55);
      goto LABEL_14;
    }
    if ( v25 == 3 )
      break;
    if ( v25 != 1 )
      goto LABEL_21;
    v26 = operator new(0x180u);
    sub_3DE430(v26, (__int64)v73, 1);
    *(_BYTE *)(v26 + 372) = 0;
    *(_QWORD *)v26 = &srcitem_node_t___vtable;
    v27 = *(_DWORD **)(v22 + 376);
    *(_QWORD *)(v26 + 376) = v27;
    if ( v27 )
      ++v27[2];
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v27 + 16LL))(v27, v26 + 80);
    sub_3E2C20(v74, v26, *((_DWORD *)v74 + 6));
    v20 = (const char *)(v26 + 376);
    sub_3E5190(v26, (__int64 *)(v26 + 376), qword_8BA5A8, (int *)(v26 + 72), v16, a5, a6, a7, v28, v29, a10, a11);
LABEL_14:
    if ( v26 )
      goto LABEL_15;
LABEL_21:
    v73[0] = &items_tree_model_t___vtable;
    if ( v74 )
      (*(void (__fastcall **)(__int64 *))(*v74 + 8))(v74);
    QT::QAbstractItemModel::~QAbstractItemModel((QT::QAbstractItemModel *)v73);
    if ( ++v63 == &(*a2)[(_QWORD)a2[1]] )
      goto LABEL_24;
  }
  v26 = operator new(0x1B0u);
  sub_3DE430(v26, (__int64)v73, 3);
  *(_BYTE *)(v26 + 376) = 2;
  *(_OWORD *)(v26 + 384) = 0;
  v16 = 0.0;
  *(_QWORD *)v26 = &precomp_node_t___vtable;
  *(_QWORD *)(v26 + 400) = 0;
  *(_QWORD *)(v26 + 408) = 0;
  *(_OWORD *)(v26 + 416) = 0;
  if ( v22 + 80 != v26 + 80 )
  {
    v40 = *(_QWORD *)(v22 + 88);
    if ( !v40 || (v58 = v40 - 1, v40 == 1) )
    {
      *(_QWORD *)(v26 + 88) = 0;
    }
    else
    {
      v59 = *(const void **)(v22 + 80);
      v60 = *(void **)(v26 + 80);
      if ( *(_QWORD *)(v26 + 96) < v40 )
      {
        v68 = *(const void **)(v22 + 80);
        v60 = (void *)qvector_reserve(v26 + 80, *(_QWORD *)(v26 + 80), *(_QWORD *)(v22 + 88), 1);
        v59 = v68;
        v58 = v40 - 1;
        *(_QWORD *)(v26 + 80) = v60;
      }
      *(_QWORD *)(v26 + 88) = v40;
      memmove(v60, v59, v58);
      *(_BYTE *)(*(_QWORD *)(v26 + 80) + v40 - 1) = 0;
    }
  }
  sub_3E2C20(v74, v26, *((_DWORD *)v74 + 6));
  if ( *(_DWORD *)(v22 + 56) != 3 )
    v22 = 0;
  v20 = (const char *)(v22 + 104);
  sub_3E45F0((__int64 *)v26, v22 + 104, (const void **)(v22 + 120), v22 + 72, 0.0, a5, a6, a7, v41, v42, a10, a11);
LABEL_15:
  v30 = *(int *)(v26 + 312);
  if ( (v30 & 0x80000000) != 0LL )
    v30 = 0;
LABEL_17:
  if ( *(_QWORD *)(v26 + 64) >= v30 )
    goto LABEL_21;
  while ( 1 )
  {
    a5 = 0;
    v71 = 0;
    v72 = 0;
    sub_3DFFE0(v26, &v71);
    v20 = (const char *)&v71;
    v64 = sub_3E66C0(a1, &v71, &v69);
    if ( v64 != 1 )
      break;
    v20 = nullptr;
    sub_3E62B0(v26, 0, v16, (__m128)0LL, a6, a7, v35, v36, a10, a11, v31, v32, v33, v34);
    if ( !v71 )
      goto LABEL_17;
    *(_QWORD *)&v72 = 0;
    v16 = qfree(v71, nullptr);
    if ( *(_QWORD *)(v26 + 64) >= v30 )
      goto LABEL_21;
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    v16 = qfree(v71, (const char *)&v71);
  }
  v73[0] = &items_tree_model_t___vtable;
  if ( v74 )
    (*(void (__fastcall **)(__int64 *, double))(*v74 + 8))(v74, v16);
  QT::QAbstractItemModel::~QAbstractItemModel((QT::QAbstractItemModel *)v73);
LABEL_37:
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69, v20);
  }
  return v64;
}
