__int64 __fastcall sub_3F5D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  void *v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __m128i v13; // xmm0
  void *v14; // r12
  __m128i v15; // xmm1
  QT::QPersistentModelIndex *v16; // rbp
  __int64 v17; // rax
  QT::QPersistentModelIndex *v18; // r13
  QT::QPersistentModelIndex *v19; // rdi
  QT::QPersistentModelIndex *v20; // rbp
  QT::QPersistentModelIndex *v21; // r12
  QT::QPersistentModelIndex *v22; // rdi
  __m128i v23[3]; // [rsp+0h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 344) == 0;
  v23[0].m128i_i64[1] = __readfsqword(0x28u);
  if ( !v6 )
  {
    v8 = *(void **)(a1 + 336);
    *(_QWORD *)(a1 + 352) = 0;
    *(_OWORD *)(a1 + 336) = 0;
    if ( v8 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v8, 1u) )
        free(v8);
    }
  }
  if ( *(_QWORD *)(a1 + 376) )
  {
    v10 = *(_QWORD *)(a1 + 360);
    v11 = 0;
    if ( v10 )
    {
      if ( *(int *)v10 <= 1 )
      {
        v20 = *(QT::QPersistentModelIndex **)(a1 + 368);
        v21 = (QT::QPersistentModelIndex *)((char *)v20 + 8 * *(_QWORD *)(a1 + 376));
        while ( v21 != v20 )
        {
          v22 = v20;
          v20 = (QT::QPersistentModelIndex *)((char *)v20 + 8);
          QT::QPersistentModelIndex::~QPersistentModelIndex(v22);
        }
        *(_QWORD *)(a1 + 376) = 0;
        goto LABEL_6;
      }
      v11 = *(_QWORD *)(v10 + 8);
    }
    v12 = QT::QArrayData::allocate(v23, 8, 16, v11, 1, a6);
    v13 = _mm_loadl_epi64(v23);
    v14 = *(void **)(a1 + 360);
    v15 = (__m128i)(unsigned __int64)v12;
    v16 = *(QT::QPersistentModelIndex **)(a1 + 368);
    v17 = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(a1 + 376) = 0;
    *(__m128i *)(a1 + 360) = _mm_unpacklo_epi64(v13, v15);
    if ( v14 && !_InterlockedSub((volatile signed __int32 *)v14, 1u) )
    {
      v18 = (QT::QPersistentModelIndex *)((char *)v16 + 8 * v17);
      while ( v18 != v16 )
      {
        v19 = v16;
        v16 = (QT::QPersistentModelIndex *)((char *)v16 + 8);
        QT::QPersistentModelIndex::~QPersistentModelIndex(v19);
      }
      free(v14);
    }
  }
LABEL_6:
  *(_DWORD *)(a1 + 384) = -1;
  QT::QLineEdit::clear(*(QT::QLineEdit **)(a1 + 152));
  sub_3F5B20(a1);
  return QT::QSortFilterProxyModel::invalidate(*(QT::QSortFilterProxyModel **)(a1 + 120));
}
