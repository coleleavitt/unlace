__int64 __fastcall sub_407AA0(QT::QAbstractProxyModel *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rcx
  signed __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  volatile signed __int32 *v13; // rax
  void *ptr[2]; // [rsp+8h] [rbp-78h] BYREF
  __int64 v16; // [rsp+18h] [rbp-68h]
  __m128i v17; // [rsp+28h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h]
  unsigned __int64 v19; // [rsp+40h] [rbp-40h]

  v2 = 3LL * *(_QWORD *)(a2 + 16);
  v19 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  *(_OWORD *)ptr = 0;
  v16 = 0;
  v4 = v3 + 8 * v2;
  if ( v4 == v3 )
    goto LABEL_13;
  v5 = v3;
  do
  {
    (*(void (__fastcall **)(__m128i *, QT::QAbstractProxyModel *, __int64))(*(_QWORD *)this + 400LL))(&v17, this, v5);
    if ( (v17.m128i_i32[1] | v17.m128i_i32[0]) >= 0 )
    {
      if ( v18 )
      {
        sub_3FBE30((__m128i *)ptr, v16, &v17, v6, v7, v8);
        if ( !ptr[0] || *(int *)ptr[0] > 1 )
          sub_3FB980((__m128i *)ptr, 0, 0, 0, v9, v10);
      }
    }
    v5 += 24;
  }
  while ( v4 != v5 );
  if ( v16 && QT::QAbstractProxyModel::sourceModel(this) )
  {
    v11 = QT::QAbstractProxyModel::sourceModel(this);
    v12 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v11 + 208LL))(v11, ptr);
    v13 = (volatile signed __int32 *)ptr[0];
    if ( !ptr[0] )
      return v12;
  }
  else
  {
LABEL_13:
    v12 = QT::QSortFilterProxyModel::mimeData(this, a2);
    v13 = (volatile signed __int32 *)ptr[0];
    if ( !ptr[0] )
      return v12;
  }
  if ( !_InterlockedSub(v13, 1u) )
    free(ptr[0]);
  return v12;
}
