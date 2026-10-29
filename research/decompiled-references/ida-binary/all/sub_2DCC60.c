__int64 __fastcall sub_2DCC60(QT::QWidget *a1)
{
  __int64 result; // rax

  sub_504BC0(a1);
  *(_QWORD *)a1 = &ida_form_widget_t___vtable;
  *((_QWORD *)a1 + 2) = ida_form_widget_t___vtable_at__16;
  result = get_dbctx_id();
  *((_QWORD *)a1 + 54) = result;
  return result;
}
