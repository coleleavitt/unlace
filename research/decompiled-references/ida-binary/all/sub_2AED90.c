void __fastcall UserGraphViewer__::vfunc_3(QT::QAbstractScrollArea *this, const char *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rax

  *(_QWORD *)this = &UserGraphViewer___vtable;
  *((_QWORD *)this + 2) = UserGraphViewer___vtable_at__16;
  *((_QWORD *)this + 5) = UserGraphViewer___vtable_at__40;
  *((_QWORD *)this + 13) = UserGraphViewer___vtable_at__104;
  v3 = *((_QWORD **)this + 112);
  if ( v3 )
  {
    v4 = v3[55];
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 8) )
      {
        a2 = nullptr;
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v3 + 600LL))(v3, 0);
      }
    }
  }
  *(_QWORD *)this = &TCustomViewer___vtable;
  *((_QWORD *)this + 2) = TCustomViewer___vtable_at__16;
  *((_QWORD *)this + 5) = TCustomViewer___vtable_at__40;
  *((_QWORD *)this + 13) = TCustomViewer___vtable_at__104;
  CustomIDAMemo__::vfunc_3(this, a2);
}
