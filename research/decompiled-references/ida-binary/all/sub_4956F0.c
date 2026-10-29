__int64 __fastcall sub_4956F0(QT::QAbstractItemView *this, __int64 *a2, char a3, double a4, double a5, __m128 a6)
{
  QT::QItemSelectionModel *v7; // rax
  __int32 v8; // r15d
  __int32 v9; // r12d
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  volatile signed __int32 *v16; // rdx
  __int64 v17; // [rsp+8h] [rbp-70h]
  __m128i v18; // [rsp+10h] [rbp-68h] BYREF
  __m128i ptr; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+30h] [rbp-48h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v7 = (QT::QItemSelectionModel *)QT::QAbstractItemView::selectionModel(this);
  if ( (a3 & 4) != 0 )
  {
    QT::QItemSelectionModel::currentIndex((QT::QItemSelectionModel *)&ptr);
    v8 = ptr.m128i_i32[0];
    v9 = ptr.m128i_i32[1];
    v10 = ptr.m128i_u64[1];
    v11 = v20;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)QT::QItemSelectionModel::hasSelection(v7) )
    return 0;
  QT::QItemSelectionModel::selectedIndexes((QT::QItemSelectionModel *)&ptr);
  v16 = (volatile signed __int32 *)ptr.m128i_i64[0];
  if ( !v20 )
  {
    if ( !ptr.m128i_i64[0] )
      return 0;
    v9 = -1;
    v11 = 0;
    v10 = 0;
    v8 = -1;
    goto LABEL_13;
  }
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
  {
    sub_3FB980(&ptr, 0, 0, 0, v14, v15);
    v16 = (volatile signed __int32 *)ptr.m128i_i64[0];
  }
  v8 = *(_DWORD *)ptr.m128i_i64[1];
  v9 = *(_DWORD *)(ptr.m128i_i64[1] + 4);
  v10 = *(_QWORD *)(ptr.m128i_i64[1] + 8);
  v11 = *(_QWORD *)(ptr.m128i_i64[1] + 16);
  if ( v16 )
  {
LABEL_13:
    if ( !_InterlockedSub(v16, 1u) )
    {
      v17 = v11;
      free((void *)ptr.m128i_i64[0]);
      v11 = v17;
    }
  }
LABEL_3:
  if ( (v8 | v9) < 0 || !v11 )
    return 0;
  QT::QAbstractItemView::model(this);
  v12 = HIDWORD(v10);
  if ( HIDWORD(v10) == 0xFFFFFFFF )
    v12 = -1;
  v18.m128i_i64[1] = (unsigned int)v10;
  v18.m128i_i64[0] = v12;
  return sub_48DE20(this, a2, &v18, a3, a4, a5, a6);
}
