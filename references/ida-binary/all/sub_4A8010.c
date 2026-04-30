unsigned __int64 __fastcall sub_4A8010(__int64 a1, __int64 *a2, char a3)
{
  int v5; // eax
  QT::QAbstractItemView *v6; // rdi
  __int64 v7; // r15
  __m128i v8; // xmm0
  __m128i *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r13
  _QWORD *v13; // rdi
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v18; // rax
  const char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 v26; // rax
  __m128i *v27; // rsi
  __int64 v29; // [rsp+0h] [rbp-108h]
  __int64 v30; // [rsp+8h] [rbp-100h]
  __int64 v31; // [rsp+10h] [rbp-F8h]
  int v32; // [rsp+20h] [rbp-E8h]
  __int64 v33; // [rsp+28h] [rbp-E0h]
  __m128i ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall **v36)(); // [rsp+60h] [rbp-A8h] BYREF
  __m128i *v37; // [rsp+68h] [rbp-A0h]
  __m128i v38; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v39)(); // [rsp+80h] [rbp-88h] BYREF
  __int64 v40; // [rsp+88h] [rbp-80h] BYREF
  __int128 v41; // [rsp+90h] [rbp-78h]
  __m128i *v42; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v43; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+C8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 2376);
  if ( v5 == 2 )
    return sub_4962F0(*(QT::QAbstractItemView **)(a1 + 2384), (__int64)a2, a3);
  if ( v5 == 1 )
    sub_4962F0(*(QT::QAbstractItemView **)(a1 + 2384), (__int64)a2, a3);
  v6 = *(QT::QAbstractItemView **)(a1 + 2472);
  v37 = nullptr;
  v36 = &chooser_flat_bucket_data_t___vtable;
  v39 = &chooser_flat_bucket_data_t___vtable;
  v40 = 0;
  v42 = nullptr;
  v44 = -1;
  v38 = 0;
  v41 = 0;
  v43 = 0;
  v32 = QT::QAbstractItemView::selectionModel(v6);
  if ( (a3 & 1) != 0 )
  {
    QT::QItemSelectionModel::selectedRows((QT::QItemSelectionModel *)&ptr, v32);
    v22 = v35;
    v30 = v35;
    v31 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2472));
    v25 = 0;
    if ( v22 )
    {
      do
      {
        if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
          sub_3FB980(&ptr, 0, 0, 0, v23, v24);
        v24 = sub_499520(v31, ptr.m128i_i64[1] + 24 * v25);
        v26 = v43.m128i_i64[0];
        v27 = v42;
        if ( v43.m128i_i64[1] < (unsigned __int64)(v43.m128i_i64[0] + 1) )
        {
          v33 = v24;
          v42 = (__m128i *)qvector_reserve(&v42, v42, v43.m128i_i64[0] + 1, 8);
          v27 = v42;
          v24 = v33;
          v26 = v43.m128i_i64[0];
        }
        v27->m128i_i64[v26] = v24;
        ++v25;
        ++v43.m128i_i64[0];
      }
      while ( v30 != v25 );
    }
    if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
      free((void *)ptr.m128i_i64[0]);
  }
  if ( (a3 & 2) != 0
    && (QT::QItemSelectionModel::currentIndex((QT::QItemSelectionModel *)&ptr),
        (ptr.m128i_i32[1] | ptr.m128i_i32[0]) >= 0)
    && v35 )
  {
    v21 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2472));
    v44 = sub_499520(v21, (__int64)&ptr);
    v7 = v44;
  }
  else
  {
    v7 = v44;
  }
  v8 = _mm_loadu_si128(&v43);
  v9 = v42;
  v42 = nullptr;
  v29 = v8.m128i_i64[0];
  v38 = v8;
  v37 = v9;
  v43 = 0;
  if ( v7 != -1 )
  {
    v18 = v41;
    v19 = (const char *)v40;
    if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
    {
      v40 = qvector_reserve(&v40, v40, v41 + 1, 8);
      v19 = (const char *)v40;
      v18 = v41;
    }
    *(_QWORD *)&v19[8 * v18] = v7;
    *(_QWORD *)&v41 = v41 + 1;
    if ( v42 )
    {
      v43.m128i_i64[0] = 0;
      qfree(v42, v19);
    }
  }
  v10 = a2[1];
  v11 = *a2;
  if ( a2[2] < (unsigned __int64)(v10 + 1) )
  {
    v20 = qvector_reserve(a2, v11, v10 + 1, 32);
    *a2 = v20;
    v10 = a2[1];
    v11 = v20;
  }
  v12 = v11 + 32 * v10;
  *(_QWORD *)v12 = 0;
  *(_BYTE *)(v12 + 24) = 0;
  *(_OWORD *)(v12 + 8) = 0;
  ++a2[1];
  if ( v29 )
    *(_QWORD *)v12 = chooser_flat_bucket_data_t__::vfunc_2((__int64)&v36);
  if ( (_QWORD)v41 )
  {
    v42 = nullptr;
    LOBYTE(v44) = 0;
    v43 = 0;
    v42 = chooser_flat_bucket_data_t__::vfunc_2((__int64)&v39);
    v43.m128i_i64[0] = -2;
    sub_4DE310(a2, &v42);
    sub_4DE2C0();
  }
  *(_QWORD *)(v12 + 8) = -2;
  v13 = (_QWORD *)sub_4E07A0(a1 + 104, -2);
  v14 = *(__int64 (__fastcall **)(__int64))(*v13 + 24LL);
  if ( v14 == chooser_flat_bucket_data_t__::vfunc_3 )
    v15 = v13[2];
  else
    v15 = v14((__int64)v13);
  v16 = v40;
  *(_QWORD *)(v12 + 16) = v15;
  v39 = &chooser_flat_bucket_data_t___vtable;
  if ( v16 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v16, (const char *)0xFFFFFFFFFFFFFFFELL);
  }
  if ( v9 )
    qfree(v9, (const char *)0xFFFFFFFFFFFFFFFELL);
  return v45 - __readfsqword(0x28u);
}
