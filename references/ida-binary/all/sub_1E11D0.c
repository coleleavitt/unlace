void __fastcall TCpuRegs__::vfunc_3(QT::QAbstractScrollArea *this, const char *a2)
{
  _QWORD *v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rdi

  *(_QWORD *)this = &TCpuRegs___vtable;
  *((_QWORD *)this + 2) = TCpuRegs___vtable_at__16;
  *((_QWORD *)this + 5) = TCpuRegs___vtable_at__40;
  *((_QWORD *)this + 13) = TCpuRegs___vtable_at__104;
  sub_236750();
  v3 = *((_QWORD **)this + 126);
  v4 = *((_QWORD **)this + 125);
  if ( v3 != v4 )
  {
    do
    {
      v5 = v4[2];
      if ( v5 )
      {
        v4[3] = 0;
        qfree(v5, a2);
      }
      v4 += 7;
    }
    while ( v3 != v4 );
    v4 = *((_QWORD **)this + 125);
  }
  if ( v4 )
  {
    a2 = (const char *)(*((_QWORD *)this + 127) - (_QWORD)v4);
    operator delete(v4, (unsigned __int64)a2);
  }
  CustomIDAMemo__::vfunc_3(this, a2);
}
