__int64 __fastcall sub_479810(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdi

  v3 = (_QWORD *)operator new(0x28u);
  v3[1] = 0;
  v3[2] = 0;
  *v3 = &_base_app_mixin_t::execute_ui_requests;
  v3[3] = a2;
  v4 = QT::QCoreApplication::self;
  v3[4] = a1;
  if ( v4 )
    return sub_4795B0((__int64)(v4 + 2), (__int64)v3, 6, 0);
  else
    return -1;
}
