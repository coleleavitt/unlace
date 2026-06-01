unsigned __int64 __fastcall sub_48FB10(QT::QAbstractItemView *this, char *a2, __int64 *a3, char a4, char a5)
{
  char *v6; // r12
  int v10; // ecx
  unsigned int v11; // eax
  const __m128i *v12; // r15
  const __m128i *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  void *v16; // rdi
  int v18; // eax
  __m128i si128; // xmm0
  __int64 v20; // rdx
  void *v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdx
  void *v25; // rdi
  unsigned __int64 v26; // rdx
  __int64 v27; // r14
  __m128i v28; // xmm0
  __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  __int64 v31; // r14
  __m128i v32; // xmm0
  __int64 v33; // rdi
  size_t v34; // r12
  void *v35; // rax
  size_t v36; // r12
  void *v37; // rax
  __m128i v38; // [rsp+0h] [rbp-88h] BYREF
  __m128i v39; // [rsp+10h] [rbp-78h] BYREF
  __int64 v40; // [rsp+20h] [rbp-68h]
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v42; // [rsp+40h] [rbp-48h]
  unsigned __int64 v43; // [rsp+48h] [rbp-40h]

  v6 = a2;
  v43 = __readfsqword(0x28u);
  if ( (*((_BYTE *)this + 216) & 1) != 0 )
  {
    *((_DWORD *)this + 54) = 15;
    v18 = QT::QAbstractItemView::selectionModel(this);
    QT::QItemSelectionModel::selectedRows((QT::QItemSelectionModel *)ptr, v18);
    si128 = _mm_load_si128((const __m128i *)ptr);
    v20 = v42;
    if ( si128.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
    v21 = *((void **)this + 8);
    *((_QWORD *)this + 10) = v20;
    *((__m128i *)this + 4) = si128;
    if ( v21 && !_InterlockedSub((volatile signed __int32 *)v21, 1u) )
      free(v21);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    a2 = (char *)QT::QAbstractItemView::selectionModel(this);
    QT::QItemSelectionModel::currentIndex((QT::QItemSelectionModel *)&v39);
    *((__m128i *)this + 7) = _mm_loadu_si128(&v39);
    v22 = v40;
    *((_DWORD *)this + 54) &= ~1u;
    *((_QWORD *)this + 16) = v22;
  }
  v10 = a4 & 0x20;
  if ( (a4 & 0x20) != 0 )
  {
    v11 = *((_DWORD *)this + 54);
    if ( (v11 & 2) != 0 )
    {
      v23 = _mm_loadu_si128((const __m128i *)this + 4);
      v24 = *((_QWORD *)this + 10);
      if ( v23.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v23.m128i_i64[0], 1u);
      v25 = *((void **)this + 11);
      *((_QWORD *)this + 13) = v24;
      v12 = (const __m128i *)((char *)this + 88);
      *(__m128i *)((char *)this + 88) = v23;
      if ( v25 && !_InterlockedSub((volatile signed __int32 *)v25, 1u) )
      {
        free(v25);
        v10 = a4 & 0x20;
      }
      a2 = (char *)this + 88;
      v38.m128i_i32[0] = v10;
      sub_4E8CA0(this, (char *)this + 88);
      v10 = v38.m128i_i32[0];
      v11 = *((_DWORD *)this + 54) & 0xFFFFFFFD;
      *((_DWORD *)this + 54) = v11;
      if ( v6 )
        goto LABEL_5;
    }
    else
    {
      v12 = (const __m128i *)((char *)this + 88);
      if ( v6 )
      {
LABEL_5:
        v13 = v12;
        goto LABEL_6;
      }
    }
    if ( !a3 )
      return v43 - __readfsqword(0x28u);
    if ( (v11 & 8) == 0 )
    {
LABEL_13:
      if ( (a4 & 0x10) == 0 )
        goto LABEL_14;
      goto LABEL_43;
    }
LABEL_42:
    a2 = (char *)this + 176;
    sub_48F720(this, (__m128i *)this + 11, (__int64)this + 88, (const __m128i *)this + 7, a5);
    *((_DWORD *)this + 54) &= ~8u;
    if ( (a4 & 0x10) == 0 )
    {
LABEL_14:
      if ( (a4 & 8) != 0 )
        *(__m128i *)(a3 + 3) = _mm_loadu_si128((const __m128i *)((char *)this + 200));
      return v43 - __readfsqword(0x28u);
    }
LABEL_43:
    v26 = *((_QWORD *)this + 23);
    v27 = 0;
    v28 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
    if ( v26 )
    {
      v38 = v28;
      v36 = 16 * v26;
      v37 = (void *)qalloc_or_throw(16 * v26);
      a2 = *((char **)this + 22);
      v27 = (__int64)v37;
      memcpy(v37, a2, v36);
      v28 = _mm_load_si128(&v38);
    }
    v29 = *a3;
    if ( *a3 )
    {
      a3[1] = 0;
      v38 = v28;
      qfree(v29, a2);
      v28 = _mm_load_si128(&v38);
    }
    *a3 = v27;
    *(__m128i *)(a3 + 1) = v28;
    goto LABEL_14;
  }
  v13 = (const __m128i *)((char *)this + 64);
  if ( !v6 )
  {
    if ( !a3 )
      return v43 - __readfsqword(0x28u);
    goto LABEL_19;
  }
LABEL_6:
  v14 = _mm_loadu_si128(v13);
  v15 = v13[1].m128i_i64[0];
  if ( v14.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v14.m128i_i64[0], 1u);
  v16 = *(void **)v6;
  *((_QWORD *)v6 + 2) = v15;
  *(__m128i *)v6 = v14;
  if ( v16 && !_InterlockedSub((volatile signed __int32 *)v16, 1u) )
  {
    v38.m128i_i32[0] = v10;
    free(v16);
    v10 = v38.m128i_i32[0];
    if ( !a3 )
      return v43 - __readfsqword(0x28u);
  }
  else if ( !a3 )
  {
    return v43 - __readfsqword(0x28u);
  }
  if ( v10 )
  {
    if ( (*((_DWORD *)this + 54) & 8) == 0 )
      goto LABEL_13;
    goto LABEL_42;
  }
LABEL_19:
  if ( (*((_BYTE *)this + 216) & 4) == 0 )
  {
    if ( (a4 & 0x10) == 0 )
      goto LABEL_21;
LABEL_49:
    v30 = *((_QWORD *)this + 18);
    v31 = 0;
    v32 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
    if ( v30 )
    {
      v38 = v32;
      v34 = 16 * v30;
      v35 = (void *)qalloc_or_throw(16 * v30);
      a2 = *((char **)this + 17);
      v31 = (__int64)v35;
      memcpy(v35, a2, v34);
      v32 = _mm_load_si128(&v38);
    }
    v33 = *a3;
    if ( *a3 )
    {
      a3[1] = 0;
      v38 = v32;
      qfree(v33, a2);
      v32 = _mm_load_si128(&v38);
    }
    *a3 = v31;
    *(__m128i *)(a3 + 1) = v32;
    goto LABEL_21;
  }
  a2 = (char *)this + 136;
  sub_48F720(this, (__m128i *)((char *)this + 136), (__int64)this + 64, (const __m128i *)this + 7, a5);
  *((_DWORD *)this + 54) &= ~4u;
  if ( (a4 & 0x10) != 0 )
    goto LABEL_49;
LABEL_21:
  if ( (a4 & 8) != 0 )
    *(__m128i *)(a3 + 3) = _mm_loadu_si128((const __m128i *)this + 10);
  return v43 - __readfsqword(0x28u);
}
