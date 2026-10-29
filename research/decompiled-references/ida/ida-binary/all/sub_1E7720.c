void __fastcall bookmarks_place_cache_t__::vfunc_4(QT::QObject *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 j; // rbp
  __int64 v10; // rax

  *(_QWORD *)this = &bookmarks_place_cache_t___vtable;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 7);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = i;
        qfree(*(_QWORD *)(v3 + 16 * v6), a2);
        v3 = *((_QWORD *)this + 6);
      }
    }
    *((_QWORD *)this + 7) = 0;
    qfree(v3, a2);
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 3);
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = j;
        qfree(*(_QWORD *)(v7 + 16 * v10), a2);
        v7 = *((_QWORD *)this + 2);
      }
    }
    *((_QWORD *)this + 3) = 0;
    qfree(v7, a2);
  }
  QT::QObject::~QObject(this);
  operator delete(this, 0x50u);
}
