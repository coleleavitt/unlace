void __fastcall EAView__::vfunc_3(QT::QAbstractScrollArea *this, const char *a2)
{
  bool v3; // zf
  QT::QAbstractScrollArea **v4; // rdi
  QT::QAbstractScrollArea **v5; // rdx
  __int64 v6; // rdi

  *(_QWORD *)this = &EAView___vtable;
  *((_QWORD *)this + 2) = EAView___vtable_at__16;
  v3 = qword_8CC7C0 == (_QWORD)this;
  *((_QWORD *)this + 5) = EAView___vtable_at__40;
  *((_QWORD *)this + 13) = EAView___vtable_at__104;
  if ( v3 )
    qword_8CC7C0 = 0;
  v4 = (QT::QAbstractScrollArea **)qword_8CC7D0;
  v5 = (QT::QAbstractScrollArea **)(qword_8CC7D0 + 8 * xmmword_8CC7D8);
  if ( (QT::QAbstractScrollArea **)qword_8CC7D0 != v5 )
  {
    while ( this != *v4 )
    {
      if ( v5 == ++v4 )
        goto LABEL_9;
    }
    if ( v5 != v4 )
    {
      a2 = (const char *)(v4 + 1);
      memmove(v4, v4 + 1, (char *)v5 - (char *)v4 - 8);
      *(_QWORD *)&xmmword_8CC7D8 = xmmword_8CC7D8 - 1;
    }
  }
LABEL_9:
  v6 = *((_QWORD *)this + 125);
  if ( v6 )
  {
    *((_QWORD *)this + 126) = 0;
    qfree(v6, a2);
  }
  CustomIDAMemo__::vfunc_3(this, a2);
}
