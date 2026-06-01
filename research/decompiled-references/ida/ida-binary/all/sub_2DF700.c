void __fastcall IDAView__::vfunc_3(QT::QAbstractScrollArea *this, const char *a2)
{
  __int64 v2; // rax

  *(_QWORD *)this = &IDAView___vtable;
  *((_QWORD *)this + 2) = IDAView___vtable_at__16;
  *((_QWORD *)this + 13) = IDAView___vtable_at__104;
  v2 = *((int *)this + 258);
  *((_QWORD *)this + 5) = IDAView___vtable_at__40;
  if ( (_DWORD)v2 != -1 )
  {
    qword_8CD320[v2] = 0;
    if ( (QT::QAbstractScrollArea *)qword_8CD7E8 == this )
      qword_8CD7E8 = 0;
  }
  EAView__::vfunc_3(this, a2);
}
