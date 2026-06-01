__int64 __fastcall ida_app_t__::vfunc_8(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = operator new(0x48u);
  QT::QObject::QObject((QT::QObject *)v2, nullptr);
  *(_QWORD *)(v2 + 40) = a2;
  *(_QWORD *)v2 = &ida_form_controller_t___vtable;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_OWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  return v2;
}
