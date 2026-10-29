unsigned __int64 __fastcall sub_26F520(QT::QAbstractItemView *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  QT::QAbstractItemModel *v5; // rax
  __int64 v6; // r12
  QT::QAbstractItemModel *v7; // rbp
  __int64 i; // r15
  __int64 v9; // rbx
  __int64 v10; // rdi
  volatile signed __int32 *v11; // rdx
  volatile signed __int32 *v12; // rdx
  unsigned __int64 *v13; // rbx
  __int64 v14; // rax
  _QWORD *(__fastcall *v15)(__int64, __int64, int, int, __int64); // rax
  unsigned int v17; // r15d
  unsigned __int64 v18; // rax
  unsigned __int64 j; // r12
  _QWORD v20[4]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v21[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v3 = sub_279D70((char *)this + 40);
  if ( v3 )
  {
    v4 = v3;
    v5 = (QT::QAbstractItemModel *)QT::QAbstractItemView::model(this);
    v6 = *((_QWORD *)v5 + 3);
    v7 = v5;
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v9 = *((_QWORD *)v7 + 2) + (i << 6);
        v10 = *(_QWORD *)(v9 + 56);
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
          *(_QWORD *)(v9 + 56) = 0;
        }
        v11 = *(volatile signed __int32 **)(v9 + 32);
        if ( v11 && !_InterlockedSub(v11, 1u) )
          free(*(void **)(v9 + 32));
        v12 = *(volatile signed __int32 **)(v9 + 8);
        if ( v12 && !_InterlockedSub(v12, 1u) )
          free(*(void **)(v9 + 8));
      }
    }
    *((_QWORD *)v7 + 3) = 0;
    v13 = *(unsigned __int64 **)(a2 + 8);
    if ( v13 )
    {
      if ( *v13 < v13[1] )
      {
        v17 = *(_DWORD *)(*(_QWORD *)(sub_277DF0() + 112) + 48LL);
        v18 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, *v13, 0);
        for ( j = v18; v18 >= *v13; j = v18 )
        {
          if ( v18 >= v13[1] )
            break;
          sub_26EEC0(v7, v18, v4, v17);
          v18 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, j, 1);
        }
      }
    }
    QT::QAbstractItemModel::beginResetModel(v7);
    QT::QAbstractItemModel::endResetModel(v7);
    if ( *((_QWORD *)v7 + 3) )
    {
      v14 = *(_QWORD *)v7;
      v21[0] = -1;
      v21[1] = 0;
      v21[2] = 0;
      v15 = *(_QWORD *(__fastcall **)(__int64, __int64, int, int, __int64))(v14 + 96);
      if ( v15 == sub_26E570 )
      {
        v20[0] = 0;
        v20[1] = 0;
        v20[2] = v7;
      }
      else
      {
        v15((__int64)v20, (__int64)v7, 0, 0, (__int64)v21);
      }
      QT::QTreeView::expand(this, v20);
    }
  }
  return v22 - __readfsqword(0x28u);
}
