unsigned __int64 __fastcall sub_1F77A0(__int64 a1, __int64 a2, double a3)
{
  char v4; // cl
  __int64 v6; // rsi
  __int64 v7; // rcx
  QT::QWidget *v8; // rdi
  unsigned __int8 (__fastcall *v9)(__int64, __int64, __int64); // r13
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 (__fastcall *v13)(__int64, __int64, __int64, __int64, double); // rax
  int v14; // eax
  struct _Unwind_Exception *v15; // rbx
  _QWORD v16[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v17; // [rsp+10h] [rbp-88h]
  char v18; // [rsp+18h] [rbp-80h]
  __int64 v19; // [rsp+20h] [rbp-78h]
  __int16 v20; // [rsp+28h] [rbp-70h]
  _BYTE v21[32]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int16 v23; // [rsp+58h] [rbp-40h]
  unsigned __int64 v24; // [rsp+68h] [rbp-30h]

  v4 = *(_BYTE *)(a2 + 35);
  v24 = __readfsqword(0x28u);
  v6 = a1;
  sub_1E95D0((QT::QObject *)v16, a1, 1, v4 & 2 | 0x10, -32768, a3);
  v8 = qword_8CCE70;
  if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
    QT::QWidget::close(qword_8CCE70);
  v9 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(a1 + 304);
  if ( !v9
    || (v10 = *(_QWORD *)(a1 + 376),
        v6 = (unsigned int)sub_47B6A0(QT::QCoreApplication::self, a2),
        v8 = (QT::QWidget *)a1,
        !v9(a1, v6, v10)) )
  {
    v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, double))(*(_QWORD *)a1 + 1008LL);
    if ( v13 == sub_1E6EF0 )
    {
      if ( !*(_BYTE *)(a1 + 968) )
        goto LABEL_16;
      if ( !*(_QWORD *)(a1 + 424) )
      {
        v15 = (struct _Unwind_Exception *)sub_1E69C0(a3, (__int64)v8, v6, (__int64)sub_1E6EF0, v7);
        sub_1E9680((__int64)v16);
        _Unwind_Resume(v15);
      }
      v14 = *(_DWORD *)(a1 + 416);
      switch ( v14 )
      {
        case 2:
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 896) + 464LL))(*(_QWORD *)(a1 + 896), a2);
          break;
        case 3:
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 904) + 464LL))(*(_QWORD *)(a1 + 904), a2);
          break;
        case 1:
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 888) + 464LL))(*(_QWORD *)(a1 + 888), a2);
          break;
        default:
LABEL_16:
          MEMORY[0x3010102464C474F](0);
          break;
      }
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64))v13)(a1, a2);
    }
  }
  v23 = -1;
  v22 = -1;
  sub_1F73F0(a1, (__int64)v21, a2, v7, a3);
  sub_1F4990(4u, a1, v21);
  QT::QBasicTimer::start(a1 + 800, dword_8BA8F0, a1);
  if ( !v18 )
  {
    v11 = v17;
    if ( v17 )
    {
      *(_QWORD *)(v17 + 948) = v19;
      *(_WORD *)(v11 + 956) = v20;
    }
  }
  v16[0] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)v16);
  return v24 - __readfsqword(0x28u);
}
