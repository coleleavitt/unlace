__int64 __fastcall ida_action_t__::vfunc_3(__int64 a1, const QT::QObject **a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax

  v2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *a2);
  v3 = operator new(0x58u);
  v4 = sub_277A50(*a2);
  sub_17F030(v3, v2, a1, v4);
  return v3;
}
