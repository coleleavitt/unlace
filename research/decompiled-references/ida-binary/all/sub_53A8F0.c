unsigned __int64 __fastcall sub_53A8F0(QT::QWidget *a1)
{
  __int64 (__fastcall **v2[3])(_QWORD, _QWORD); // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2[0] = (__int64 (__fastcall **)(_QWORD, _QWORD))ui_dialog_t::import_actions;
  v2[2] = (__int64 (__fastcall **)(_QWORD, _QWORD))QT::QWidget::window(a1);
  v2[1] = (__int64 (__fastcall **)(_QWORD, _QWORD))a1;
  sub_5313B0(v2);
  return v3 - __readfsqword(0x28u);
}
