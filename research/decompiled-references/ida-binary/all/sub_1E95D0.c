__int64 __fastcall sub_1E95D0(QT::QObject *a1, __int64 a2, int a3, int a4, __int16 a5, double a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  __int64 result; // rax
  struct _Unwind_Exception *v13; // rax
  struct _Unwind_Exception *v14; // rbp
  __int64 v15; // [rsp+0h] [rbp-28h]

  QT::QObject::QObject(a1, nullptr);
  *((_QWORD *)a1 + 2) = 0;
  *(_QWORD *)a1 = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)a1, v15);
  v11 = *((_BYTE *)a1 + 24) == 0;
  *((_QWORD *)a1 + 4) = 0;
  *((_WORD *)a1 + 20) = 0x8000;
  if ( !v11 )
  {
    sub_1E69E0(a6, (__int64)a1, a2, v9, v10);
    v14 = v13;
    QT::QObject::~QObject(a1);
    _Unwind_Resume(v14);
  }
  result = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 4) = *(_QWORD *)(result + 948);
  *((_WORD *)a1 + 20) = *(_WORD *)(result + 956);
  *(_DWORD *)(result + 948) = a3;
  *(_DWORD *)(result + 952) = a4;
  *(_WORD *)(result + 956) = a5;
  return result;
}
