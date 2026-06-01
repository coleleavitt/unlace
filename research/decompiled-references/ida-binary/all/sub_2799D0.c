unsigned __int64 __fastcall sub_2799D0(QT::QObject *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  QT::QObject::QObject(a1, nullptr);
  *(_QWORD *)a1 = &merge_progress_chooser_slotpoline_t___vtable;
  *((_QWORD *)a1 + 2) = a2;
  v5 = sub_277DF0();
  if ( !v5 )
  {
    if ( !under_debugger )
      interr(41122, 0, v3, v4, a3);
    BUG();
  }
  QT::QObject::connect(&v7, v5, "2start_merge_step()", a1, "1on_start_merge_step()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v7);
  return v8 - __readfsqword(0x28u);
}
