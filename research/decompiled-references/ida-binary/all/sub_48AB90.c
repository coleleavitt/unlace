void __fastcall sub_48AB90(QT::QAbstractItemModel *this, const char *a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 j; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 k; // rbp
  __int64 *v20; // rax
  __int64 v21; // rdi

  *(_QWORD *)this = &dirtree_item_model_base_t___vtable;
  if ( (*((_BYTE *)this + 120) & 4) != 0 )
  {
    v3 = *((_QWORD **)this + 26);
    if ( v3 )
    {
      delete_dirtree(*v3);
      a2 = &byte_8;
      operator delete(v3, 8u);
    }
    *((_QWORD *)this + 26) = 0;
  }
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
  {
    *((_QWORD *)this + 21) = 0;
    qfree(v4, a2);
  }
  v5 = *((_QWORD *)this + 17);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 18);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 40 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9, a2);
          v5 = *((_QWORD *)this + 17);
        }
      }
    }
    *((_QWORD *)this + 18) = 0;
    qfree(v5, a2);
  }
  QT::QIcon::~QIcon((QT::QAbstractItemModel *)((char *)this + 128));
  v10 = *((_QWORD *)this + 12);
  if ( v10 )
  {
    *((_QWORD *)this + 13) = 0;
    qfree(v10, a2);
  }
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v11, a2);
  }
  v12 = *((_QWORD *)this + 6);
  if ( v12 )
  {
    v13 = *((_QWORD *)this + 7);
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = (__int64 *)(v12 + 24 * j);
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          qfree(v16, a2);
          v12 = *((_QWORD *)this + 6);
        }
      }
    }
    *((_QWORD *)this + 7) = 0;
    qfree(v12, a2);
  }
  v17 = *((_QWORD *)this + 3);
  if ( v17 )
  {
    v18 = *((_QWORD *)this + 4);
    if ( v18 )
    {
      for ( k = 0; k != v18; ++k )
      {
        v20 = (__int64 *)(v17 + 24 * k);
        v21 = *v20;
        if ( *v20 )
        {
          v20[1] = 0;
          qfree(v21, a2);
          v17 = *((_QWORD *)this + 3);
        }
      }
    }
    *((_QWORD *)this + 4) = 0;
    qfree(v17, a2);
  }
  *(_QWORD *)this = &filtered_item_view_model_t___vtable;
  QT::QAbstractItemModel::~QAbstractItemModel(this);
}
