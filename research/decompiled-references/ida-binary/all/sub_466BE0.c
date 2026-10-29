__int64 __fastcall sub_466BE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  QT::QObject::QObject((QT::QObject *)a2, nullptr);
  *(_QWORD *)a2 = &blinking_t___vtable;
  *(_WORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = -1;
  *(_DWORD *)(a2 + 28) = 0;
  result = reg_int_op("DbgEdgeBlinkInterval", 0, 250, 0);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
