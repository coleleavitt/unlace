void __fastcall sub_174E40(QT::QObject *this, __int64 a2)
{
  QT::QObject *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi

  v3 = (QT::QObject *)((char *)this + 136);
  *((_QWORD *)v3 - 17) = &AbstractRenderer___vtable;
  sub_173100(v3);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 6);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10, a2, v6, v4, v5);
          v6 = *((_QWORD *)this + 5);
        }
      }
    }
    *((_QWORD *)this + 6) = 0;
    qfree(v6, a2, v6, v4, v5);
  }
  QT::QObject::~QObject(this);
}
