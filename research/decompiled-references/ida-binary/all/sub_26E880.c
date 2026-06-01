void __fastcall sub_26E880(QT::QAbstractItemModel *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rax

  *(_QWORD *)this = &off_870F18;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 3);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + (i << 6);
        v7 = *(_QWORD *)(v6 + 56);
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
          *(_QWORD *)(v6 + 56) = 0;
        }
        v8 = *(volatile signed __int32 **)(v6 + 32);
        if ( v8 && !_InterlockedSub(v8, 1u) )
          free(*(void **)(v6 + 32));
        v9 = *(volatile signed __int32 **)(v6 + 8);
        if ( v9 && !_InterlockedSub(v9, 1u) )
          free(*(void **)(v6 + 8));
        v3 = *((_QWORD *)this + 2);
      }
    }
    *((_QWORD *)this + 3) = 0;
    qfree(v3, a2);
  }
  QT::QAbstractItemModel::~QAbstractItemModel(this);
  operator delete(this, 0x28u);
}
