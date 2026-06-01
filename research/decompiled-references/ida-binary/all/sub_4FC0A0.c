void __fastcall sub_4FC0A0(__int64 a1)
{
  QT::QMetaObject::Connection *v2; // rbx
  QT::QMetaObject::Connection *v3; // r12
  QT::QMetaObject::Connection *v4; // rdi

  if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
  {
    v2 = *(QT::QMetaObject::Connection **)(a1 + 8);
    v3 = (QT::QMetaObject::Connection *)((char *)v2 + 8 * *(_QWORD *)(a1 + 16));
    while ( v3 != v2 )
    {
      v4 = v2;
      v2 = (QT::QMetaObject::Connection *)((char *)v2 + 8);
      QT::QMetaObject::Connection::~Connection(v4);
    }
    free(*(void **)a1);
  }
}
