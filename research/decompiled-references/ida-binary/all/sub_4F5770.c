unsigned __int64 __fastcall sub_4F5770(__m128i *a1, QT::QObject *a2, __int64 a3, __int64 a4, double a5)
{
  QT::QObject *v5; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // rax
  struct _Unwind_Exception *v16; // rbp

  if ( !a2 )
  {
    if ( !under_debugger )
    {
      v16 = (struct _Unwind_Exception *)interr(70108, 0, a3, a4, a5);
      QT::QObject::~QObject(v5);
      operator delete(v5, 0x30u);
      _Unwind_Resume(v16);
    }
    BUG();
  }
  v8 = operator new(0x30u);
  QT::QObject::QObject((QT::QObject *)v8, nullptr);
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)v8 = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)v8, (__int64)a2, a5, v9, v10, v11);
  v12 = a1[3].m128i_i64[1];
  v13 = a1[3].m128i_i64[0];
  *(_QWORD *)(v8 + 32) = a3;
  *(_DWORD *)(v8 + 40) = -1;
  if ( a1[4].m128i_i64[0] < (unsigned __int64)(v12 + 1) )
  {
    v15 = qvector_reserve(&a1[3], v13, v12 + 1, 8);
    a1[3].m128i_i64[0] = v15;
    v13 = v15;
    v12 = a1[3].m128i_i64[1];
  }
  *(_QWORD *)(v13 + 8 * v12) = v8;
  ++a1[3].m128i_i64[1];
  return sub_4F4BB0(a1, a2, a3, v8);
}
