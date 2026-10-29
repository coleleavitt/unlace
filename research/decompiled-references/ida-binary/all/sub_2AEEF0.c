void __fastcall sub_2AEEF0(_QWORD *a1, const char *a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rax

  *(a1 - 5) = &UserGraphViewer___vtable;
  *(a1 - 3) = UserGraphViewer___vtable_at__16;
  *a1 = UserGraphViewer___vtable_at__40;
  a1[8] = UserGraphViewer___vtable_at__104;
  v3 = (_QWORD *)a1[107];
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
  *(a1 - 5) = &TCustomViewer___vtable;
  *(a1 - 3) = TCustomViewer___vtable_at__16;
  *a1 = TCustomViewer___vtable_at__40;
  a1[8] = TCustomViewer___vtable_at__104;
  CustomIDAMemo__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 5), a2);
}
