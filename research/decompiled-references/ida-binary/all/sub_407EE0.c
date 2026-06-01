unsigned __int64 __fastcall sub_407EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __m128i v16; // xmm0
  void *v17; // r12
  __m128i v18; // xmm2
  QT::QPersistentModelIndex *v19; // rbp
  __int64 v20; // rax
  QT::QPersistentModelIndex *v21; // r13
  QT::QPersistentModelIndex *v22; // rdi
  QT::QPersistentModelIndex *v23; // rbp
  QT::QPersistentModelIndex *v24; // r12
  QT::QPersistentModelIndex *v25; // rdi
  __m128i v26; // [rsp+0h] [rbp-78h] BYREF
  __int64 v27; // [rsp+10h] [rbp-68h]
  _QWORD v28[2]; // [rsp+20h] [rbp-58h] BYREF
  __m128i v29; // [rsp+30h] [rbp-48h]
  unsigned __int64 v30; // [rsp+48h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 376) == 0;
  v30 = __readfsqword(0x28u);
  if ( v6 )
    goto LABEL_2;
  v13 = *(_QWORD *)(a1 + 360);
  v14 = 0;
  if ( !v13 )
    goto LABEL_11;
  if ( *(int *)v13 > 1 )
  {
    v14 = *(_QWORD *)(v13 + 8);
LABEL_11:
    v15 = QT::QArrayData::allocate(&v26, 8, 16, v14, 1, a6);
    v16 = _mm_loadl_epi64(&v26);
    v17 = *(void **)(a1 + 360);
    v18 = (__m128i)(unsigned __int64)v15;
    v19 = *(QT::QPersistentModelIndex **)(a1 + 368);
    v20 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 376) = 0;
    *(__m128i *)(a1 + 360) = _mm_unpacklo_epi64(v16, v18);
    if ( v17 && !_InterlockedSub((volatile signed __int32 *)v17, 1u) )
    {
      v21 = (QT::QPersistentModelIndex *)((char *)v19 + 8 * v20);
      while ( v21 != v19 )
      {
        v22 = v19;
        v19 = (QT::QPersistentModelIndex *)((char *)v19 + 8);
        QT::QPersistentModelIndex::~QPersistentModelIndex(v22);
      }
      free(v17);
    }
    goto LABEL_2;
  }
  v23 = *(QT::QPersistentModelIndex **)(a1 + 368);
  v24 = (QT::QPersistentModelIndex *)((char *)v23 + 8 * *(_QWORD *)(a1 + 376));
  while ( v24 != v23 )
  {
    v25 = v23;
    v23 = (QT::QPersistentModelIndex *)((char *)v23 + 8);
    QT::QPersistentModelIndex::~QPersistentModelIndex(v25);
  }
  *(_QWORD *)(a1 + 376) = 0;
LABEL_2:
  v6 = *(_QWORD *)(a1 + 352) == 0;
  *(_DWORD *)(a1 + 384) = -1;
  if ( v6 )
  {
    sub_3F5B20(a1);
    return QT::QSortFilterProxyModel::invalidate(*(QT::QSortFilterProxyModel **)(a1 + 120));
  }
  else
  {
    v28[0] = a1;
    v26 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v28[1] = v28;
    v27 = 0;
    v29 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_86A6F0), (__m128i)(unsigned __int64)sub_407ED0);
    sub_407CC0(v28, (__int64)&v26, *(double *)v29.m128i_i64);
    if ( *(_QWORD *)(a1 + 376) )
    {
      *(_DWORD *)(a1 + 384) = 0;
      sub_3FF1D0(a1, 0, v8, v9, v10, v11);
    }
    sub_3F5B20(a1);
    QT::QSortFilterProxyModel::invalidate(*(QT::QSortFilterProxyModel **)(a1 + 120));
    if ( v29.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v29.m128i_i64[0])(v28, v28, 3);
    return v30 - __readfsqword(0x28u);
  }
}
