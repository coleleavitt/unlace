__int64 __fastcall registry_persistent_t__::vfunc_10(__int64 a1, const QT::QString *a2)
{
  void *v2; // r13
  void *v3; // rdi
  unsigned int v4; // ebx
  void *v6; // [rsp+0h] [rbp-68h] BYREF
  void *v7; // [rsp+8h] [rbp-60h]
  void *v8; // [rsp+20h] [rbp-48h] BYREF
  void *v9; // [rsp+28h] [rbp-40h]
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)&v8, (const QT::QString *)(a1 + 8));
  v2 = v9;
  if ( !v9 )
    v2 = &QT::QByteArray::_empty;
  QT::QString::toUtf8_helper((QT::QString *)&v6, a2);
  v3 = v7;
  if ( !v7 )
    v3 = &QT::QByteArray::_empty;
  v4 = reg_int_op(v3, 0, 0, v2);
  sub_17F470(&v6);
  sub_17F470(&v8);
  return v4;
}
