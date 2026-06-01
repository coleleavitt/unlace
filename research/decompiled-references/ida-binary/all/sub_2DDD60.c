QT::QWidget *__fastcall sub_2DDD60(QT::QWidget *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  void *v5; // rbx
  QT::QWidget *v6; // rbx
  struct _Unwind_Exception *v8; // rbp

  if ( !a1 )
  {
    if ( under_debugger )
      goto LABEL_8;
    interr(40632, a2, a3, a4, a5);
LABEL_6:
    if ( !under_debugger )
    {
      v8 = (struct _Unwind_Exception *)interr(40633, a2, a3, a4, a5);
      operator delete(v5, 0x48u);
      _Unwind_Resume(v8);
    }
LABEL_8:
    BUG();
  }
  if ( (a2 & 0x400001C0) != 0 )
    goto LABEL_6;
  v6 = (QT::QWidget *)operator new(0x48u);
  sub_4D31A0(v6, a1);
  *((_QWORD *)v6 + 2) = IDADockWidget___vtable_at__16;
  *(_QWORD *)v6 = &IDADockWidget___vtable;
  return v6;
}
