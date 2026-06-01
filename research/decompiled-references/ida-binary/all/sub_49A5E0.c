__int64 __fastcall sub_49A5E0(QT::QAbstractItemView *this, char a2)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  volatile signed __int32 *v7; // rax
  __int64 v8; // rbx
  __m128i ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v2 = QT::QAbstractItemView::selectionModel(this);
  QT::QItemSelectionModel::selectedRows((QT::QItemSelectionModel *)&ptr, v2);
  if ( v11 )
  {
    if ( a2 )
    {
      v7 = (volatile signed __int32 *)ptr.m128i_i64[0];
      if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
      {
        sub_3FB980(&ptr, 0, 0, 0, v3, v4);
        v7 = (volatile signed __int32 *)ptr.m128i_i64[0];
      }
      v8 = *(int *)ptr.m128i_i64[1];
    }
    else
    {
      QT::QAbstractItemView::model(this);
      v7 = (volatile signed __int32 *)ptr.m128i_i64[0];
      if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
      {
        sub_3FB980(&ptr, 0, 0, 0, v5, v6);
        v7 = (volatile signed __int32 *)ptr.m128i_i64[0];
      }
      v8 = *(_QWORD *)(ptr.m128i_i64[1] + 8);
    }
  }
  else
  {
    v7 = (volatile signed __int32 *)ptr.m128i_i64[0];
    v8 = -1;
  }
  if ( v7 && !_InterlockedSub(v7, 1u) )
    free((void *)ptr.m128i_i64[0]);
  return v8;
}
