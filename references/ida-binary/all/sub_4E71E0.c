__int64 __fastcall sub_4E71E0(QT::QAbstractItemView *this, __int64 a2, __int64 a3, unsigned int a4)
{
  void **v5; // rax
  __m128i *v6; // rdi
  void **p_i; // rsi
  void **v8; // rbp
  char v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // rax
  const char *v14; // r12
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  int v19; // eax
  __int64 result; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i *v23; // r15
  __m128i si128; // xmm0
  __m128i v25; // xmm0
  int v26; // eax
  volatile signed __int32 *v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int64 v31; // r12
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  int v34; // eax
  __m128i v35; // xmm0
  unsigned __int8 v37; // [rsp+4h] [rbp-174h]
  __m128i v40; // [rsp+20h] [rbp-158h] BYREF
  __int64 v41; // [rsp+30h] [rbp-148h]
  __m128i v42; // [rsp+40h] [rbp-138h] BYREF
  __int64 v43; // [rsp+50h] [rbp-128h]
  void *v44[2]; // [rsp+60h] [rbp-118h] BYREF
  __int64 v45; // [rsp+70h] [rbp-108h]
  void *ptr[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+90h] [rbp-E8h]
  __m128i i; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-C8h]
  QT::QAbstractItemView *v50; // [rsp+C0h] [rbp-B8h]
  __int64 v51; // [rsp+C8h] [rbp-B0h]
  unsigned int v52; // [rsp+D0h] [rbp-A8h]
  __m128i v53; // [rsp+D8h] [rbp-A0h]
  __int64 v54; // [rsp+E8h] [rbp-90h]
  _QWORD v55[5]; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v56; // [rsp+118h] [rbp-60h]
  __int64 v57; // [rsp+120h] [rbp-58h]
  int v58; // [rsp+128h] [rbp-50h]
  int v59; // [rsp+12Ch] [rbp-4Ch]
  unsigned __int64 v60; // [rsp+138h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v5 = (void **)QT::QAbstractItemView::selectionModel(this);
  v6 = &v42;
  p_i = v5;
  v8 = v5;
  QT::QItemSelectionModel::currentIndex((QT::QItemSelectionModel *)&v42);
  if ( v42.m128i_i32[0] >= 0 && v42.m128i_i32[1] >= 0 )
  {
    v9 = 0;
    if ( v43 )
    {
      if ( !v42.m128i_i32[1] )
        goto LABEL_5;
LABEL_37:
      v28 = QT::QAbstractItemView::model(this);
      (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v28 + 112LL))(
        &v40,
        v28,
        v42.m128i_u32[0],
        0,
        &v42);
      v29 = _mm_loadu_si128(&v40);
      v43 = v41;
      v42 = v29;
      ((void (*)(void))sub_541E70)();
      if ( (v42.m128i_i32[1] | v42.m128i_i32[0]) < 0 )
        return 0;
      goto LABEL_6;
    }
  }
  p_i = v8;
  v6 = (__m128i *)v44;
  QT::QItemSelectionModel::selectedRows((QT::QItemSelectionModel *)v44, (int)v8);
  if ( v45 )
  {
    v27 = (volatile signed __int32 *)v44[0];
    if ( !v44[0] || *(int *)v44[0] > 1 )
    {
      v6 = (__m128i *)v44;
      p_i = nullptr;
      sub_3FB980((__m128i *)v44, 0, 0, 0, v21, v22);
      v27 = (volatile signed __int32 *)v44[0];
    }
    v9 = 0;
    v42 = _mm_loadu_si128((const __m128i *)v44[1]);
    v43 = *((_QWORD *)v44[1] + 2);
  }
  else
  {
    v23 = (__m128i *)QT::QAbstractItemView::model(this);
    QT::QAbstractItemView::rootIndex((QT::QAbstractItemView *)ptr);
    if ( (a4 & 4) != 0 )
    {
      si128 = _mm_load_si128((const __m128i *)ptr);
      v49 = v47;
      for ( i = si128; ; i = v25 )
      {
        p_i = (void **)&i;
        v6 = v23;
        v26 = (*(__int64 (__fastcall **)(__m128i *, __m128i *))(v23->m128i_i64[0] + 120))(v23, &i);
        if ( v26 <= 0 )
          break;
        (*(void (__fastcall **)(__m128i *, __m128i *, _QWORD, _QWORD, __m128i *))(v23->m128i_i64[0] + 96))(
          &v40,
          v23,
          (unsigned int)(v26 - 1),
          0,
          &i);
        v25 = _mm_loadu_si128(&v40);
        v49 = v41;
      }
    }
    else
    {
      p_i = ptr;
      v6 = v23;
      if ( (*(unsigned __int8 (__fastcall **)(__m128i *, void **))(v23->m128i_i64[0] + 136))(v23, ptr) )
      {
        v6 = &i;
        p_i = (void **)v23;
        (*(void (__fastcall **)(__m128i *, __m128i *, _QWORD, _QWORD, void **))(v23->m128i_i64[0] + 96))(
          &i,
          v23,
          0,
          0,
          ptr);
      }
      else
      {
        i = (__m128i)0xFFFFFFFFFFFFFFFFLL;
        v49 = 0;
      }
    }
    v9 = 1;
    v30 = _mm_load_si128(&i);
    v43 = v49;
    v27 = (volatile signed __int32 *)v44[0];
    v42 = v30;
  }
  if ( v27 && !_InterlockedSub(v27, 1u) )
  {
    v6 = (__m128i *)v44[0];
    free(v44[0]);
  }
  if ( v42.m128i_i32[1] )
    goto LABEL_37;
LABEL_5:
  sub_541E70(v6, p_i);
  if ( (v42.m128i_i32[1] | v42.m128i_i32[0]) < 0 )
    return 0;
LABEL_6:
  if ( !v43 )
    return 0;
  i.m128i_i64[0] = (__int64)qmodel_rows_scanner_t___vtable;
  QT::QAbstractItemView::rootIndex((QT::QAbstractItemView *)&i.m128i_u64[1]);
  v50 = this;
  v10 = QT::QAbstractItemView::model(this);
  i.m128i_i64[0] = (__int64)&filtered_widget_mixin_t::jump_match;
  v51 = v10;
  v53 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v55[0] = -1;
  v52 = a4;
  v57 = a2;
  v59 = (a4 >> 1) & 1;
  v11 = *(_QWORD *)(a3 + 8);
  v54 = 0;
  memset(&v55[1], 0, 32);
  v56 = 0;
  v58 = 0;
  if ( v11 )
  {
    v13 = v11 - 1;
    v14 = *(const char **)a3;
    v12 = v13 >> 63;
  }
  else
  {
    LOBYTE(v12) = 0;
    v13 = 0;
    v14 = &s1;
  }
  if ( !v14 || (_BYTE)v12 )
  {
    v13 = 0;
    if ( v14 )
      v13 = strlen(v14);
  }
  QT::QString::fromUtf8(ptr, v13, v14);
  v15 = v56;
  v16 = _mm_loadu_si128((const __m128i *)&v55[3]);
  v17 = _mm_load_si128((const __m128i *)ptr);
  v56 = v47;
  v47 = v15;
  *(__m128i *)&v55[3] = v17;
  *(__m128i *)ptr = v16;
  if ( v16.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v16.m128i_i64[0], 1u) )
    free(ptr[0]);
  (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v51 + 112LL))(
    &v40,
    v51,
    v42.m128i_u32[0],
    0,
    &v42);
  v53 = _mm_loadu_si128(&v40);
  v18 = _mm_load_si128(&v42);
  v54 = v41;
  *(__m128i *)ptr = v18;
  v47 = v43;
  if ( (v18.m128i_i32[1] | v18.m128i_i32[0]) >= 0 )
  {
    while ( v47 )
    {
      v19 = filtered_widget_mixin_t::jump_match((__int64)&i, (const __m128i *)ptr, *(double *)v18.m128i_i64);
      if ( v19 )
      {
        if ( v9 )
        {
LABEL_59:
          if ( v19 != 1 )
            goto LABEL_19;
        }
        else if ( v19 != 1 )
        {
          goto LABEL_46;
        }
        (*((void (__fastcall **)(void **, _QWORD *, __int64))*v8 + 12))(v8, v55, 51);
        result = 1;
        goto LABEL_20;
      }
      sub_4E1EC0(&v40, (__int64)&i, ptr);
      v18 = _mm_loadu_si128(&v40);
      v47 = v41;
      *(__m128i *)ptr = v18;
      if ( (v18.m128i_i32[1] | v18.m128i_i32[0]) < 0 )
        break;
    }
  }
  if ( !v9 )
  {
LABEL_46:
    if ( (a4 & 8) != 0 )
    {
      v59 = 2;
      v31 = QT::QAbstractItemView::model(this);
      QT::QAbstractItemView::rootIndex((QT::QAbstractItemView *)ptr);
      if ( (a4 & 4) != 0 )
      {
        v32 = _mm_load_si128((const __m128i *)ptr);
        v45 = v47;
        for ( *(__m128i *)v44 = v32; ; *(__m128i *)v44 = v33 )
        {
          v34 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v31 + 120LL))(v31, v44);
          if ( v34 <= 0 )
            break;
          (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, void **))(*(_QWORD *)v31 + 96LL))(
            &v40,
            v31,
            (unsigned int)(v34 - 1),
            0,
            v44);
          v33 = _mm_loadu_si128(&v40);
          v45 = v41;
        }
      }
      else if ( (*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v31 + 136LL))(v31, ptr) )
      {
        (*(void (__fastcall **)(void **, __int64, _QWORD, _QWORD, void **))(*(_QWORD *)v31 + 96LL))(v44, v31, 0, 0, ptr);
      }
      else
      {
        v44[1] = nullptr;
        v45 = 0;
        v44[0] = (void *)-1LL;
      }
      v35 = _mm_load_si128((const __m128i *)v44);
      v47 = v45;
      for ( *(__m128i *)ptr = v35; (v35.m128i_i32[1] | v35.m128i_i32[0]) >= 0; *(__m128i *)ptr = v35 )
      {
        if ( !v47 )
          break;
        v19 = filtered_widget_mixin_t::jump_match((__int64)&i, (const __m128i *)ptr, *(double *)v35.m128i_i64);
        if ( v19 )
          goto LABEL_59;
        sub_4E1EC0(&v40, (__int64)&i, ptr);
        v35 = _mm_loadu_si128(&v40);
        v47 = v41;
      }
    }
  }
LABEL_19:
  result = 0;
LABEL_20:
  i.m128i_i64[0] = (__int64)&filtered_widget_mixin_t::jump_match;
  if ( v55[3] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v55[3], 1u) )
    {
      v37 = result;
      free((void *)v55[3]);
      return v37;
    }
  }
  return result;
}
