bool __fastcall sub_3FC1C0(__int64 a1, QT::QAbstractItemView *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  bool result; // al
  bool v10; // [rsp+Fh] [rbp-39h]
  __m128i ptr; // [rsp+10h] [rbp-38h] BYREF
  __int64 v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  QT::QAbstractItemView::selectionModel(a2);
  QT::QItemSelectionModel::selectedIndexes((QT::QItemSelectionModel *)&ptr);
  v4 = (volatile signed __int32 *)ptr.m128i_i64[0];
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
  {
    sub_3FB980(&ptr, 0, 0, 0, v2, v3);
    v4 = (volatile signed __int32 *)ptr.m128i_i64[0];
  }
  v5 = ptr.m128i_i64[1];
  v6 = ptr.m128i_i64[1];
  if ( !v4 || *(int *)v4 > 1 )
  {
    sub_3FB980(&ptr, 0, 0, 0, v2, v3);
    v5 = ptr.m128i_i64[1];
    v4 = (volatile signed __int32 *)ptr.m128i_i64[0];
  }
  v7 = v5 + 24 * v12;
  if ( v6 != v7 )
  {
    v8 = 0;
    while ( *(_DWORD *)(v6 + 4) || ++v8 != 2 )
    {
      v6 += 24;
      if ( v6 == v7 )
      {
        result = v8 == 1;
        goto LABEL_14;
      }
    }
  }
  result = 0;
LABEL_14:
  if ( v4 )
  {
    if ( !_InterlockedSub(v4, 1u) )
    {
      v10 = result;
      free((void *)ptr.m128i_i64[0]);
      return v10;
    }
  }
  return result;
}
