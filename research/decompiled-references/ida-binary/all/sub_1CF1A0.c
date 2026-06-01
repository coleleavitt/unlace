__int64 __fastcall registry_persistent_t__::vfunc_8(__int64 *a1, const QT::QString *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(__int64, const QT::QString *); // rax
  char v4; // bl
  __int64 result; // rax
  void *v6; // rax
  void *v7; // rdi
  char v8; // r12
  void *v9; // [rsp+8h] [rbp-E0h]
  __m128i v10; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v11; // [rsp+20h] [rbp-C8h]
  __m128i v12; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-A8h]
  void *v14[4]; // [rsp+50h] [rbp-98h] BYREF
  void *v15; // [rsp+70h] [rbp-78h] BYREF
  void *v16; // [rsp+78h] [rbp-70h]
  void *v17; // [rsp+90h] [rbp-58h] BYREF
  void *v18; // [rsp+98h] [rbp-50h]
  unsigned __int64 v19; // [rsp+A8h] [rbp-40h]

  v2 = *a1;
  v19 = __readfsqword(0x28u);
  v3 = *(__int64 (__fastcall **)(__int64, const QT::QString *))(v2 + 24);
  if ( v3 == registry_persistent_t__::vfunc_3 )
  {
    QT::QString::toUtf8_helper((QT::QString *)&v17, a2);
    v4 = reg_subkey_exists();
    sub_17F470(&v17);
  }
  else
  {
    v4 = v3((__int64)a1, a2);
  }
  result = 1;
  if ( !v4 )
  {
    v11 = 0;
    v10 = 0;
    v13 = 0;
    v12 = 0;
    sub_1CE950((QT::QString *)v14, (const __m128i *)a2);
    if ( !(unsigned __int8)sub_1CF020((QT::QString *)v14, &v10, &v12) )
    {
      sub_16D970(v14);
LABEL_6:
      sub_16D970((void **)&v12);
      sub_16D970((void **)&v10);
      return 0xFFFFFFFFLL;
    }
    QT::QString::toUtf8_helper((QT::QString *)&v17, (const QT::QString *)&v10);
    v6 = v18;
    if ( !v18 )
      v6 = &QT::QByteArray::_empty;
    v9 = v6;
    QT::QString::toUtf8_helper((QT::QString *)&v15, (const QT::QString *)&v12);
    v7 = v16;
    if ( !v16 )
      v7 = &QT::QByteArray::_empty;
    v8 = reg_exists(v7, v9);
    sub_17F470(&v15);
    sub_17F470(&v17);
    sub_16D970(v14);
    if ( !v8 )
      goto LABEL_6;
    sub_16D970((void **)&v12);
    sub_16D970((void **)&v10);
    return 0;
  }
  return result;
}
