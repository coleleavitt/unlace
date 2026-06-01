__int64 __fastcall worklists_item_model_t__::vfunc_3(QT::QAbstractItemModel *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 i; // r12
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  void *v17; // rdi
  char *v18; // rdi

  *(_QWORD *)this = &worklists_item_model_t___vtable;
  v3 = *((_QWORD *)this + 60);
  if ( v3 )
  {
    *((_QWORD *)this + 61) = 0;
    qfree(v3, a2);
  }
  sub_441670(*((void **)this + 55), a2);
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 51);
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (__int64 *)(v4 + v6);
        v9 = *(_QWORD *)(v4 + v6 + 48);
        if ( v9 )
        {
          v8[7] = 0;
          qfree(v9, a2);
        }
        v10 = v8[3];
        if ( v10 )
        {
          v8[4] = 0;
          qfree(v10, a2);
        }
        v11 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v11, a2);
        }
        v4 = *((_QWORD *)this + 50);
        v6 += 88;
      }
    }
    *((_QWORD *)this + 51) = 0;
    qfree(v4, a2);
  }
  v12 = *((_QWORD *)this + 46);
  *(_QWORD *)this = &files_dirtree_item_model_t___vtable;
  while ( v12 )
  {
    v13 = (_QWORD *)v12;
    sub_441AB0(*(_QWORD **)(v12 + 24), a2);
    v14 = *(_QWORD *)(v12 + 32);
    v12 = *(_QWORD *)(v12 + 16);
    if ( v14 )
    {
      v13[5] = 0;
      qfree(v14, a2);
    }
    a2 = (_BYTE *)off_50;
    operator delete(v13, 0x50u);
  }
  v15 = *((_QWORD *)this + 41);
  if ( v15 )
  {
    *((_QWORD *)this + 42) = 0;
    qfree(v15, a2);
  }
  v16 = *((_QWORD **)this + 31);
  *(_QWORD *)this = &standalone_dirtree_item_model_t___vtable;
  *((_QWORD *)this + 28) = &off_86FDF8;
  while ( v16 )
  {
    v17 = v16;
    v16 = (_QWORD *)*v16;
    operator delete(v17, 0x10u);
  }
  memset(*((void **)this + 29), 0, 8LL * *((_QWORD *)this + 30));
  v18 = *((char **)this + 29);
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 31) = 0;
  if ( v18 != (char *)this + 280 )
    operator delete(v18, 8LL * *((_QWORD *)this + 30));
  *(_QWORD *)this = &dirtree_item_model_t___vtable;
  return sub_48AB90(this);
}
