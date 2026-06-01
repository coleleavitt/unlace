unsigned __int64 __fastcall sub_1E39B0(QT::QWidget *a1, char *s, char a3, __int64 a4)
{
  _QWORD *v6; // rsi
  bool v7; // cc
  int v8; // ecx
  char *v9; // rdi
  int v10; // edx
  unsigned int v11; // eax
  int v12; // edx
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  sub_1E88B0(a4, (char *)a1 + 1000);
  sub_202FB0(a1, s);
  *((_QWORD *)a1 + 127) = 0;
  *((_BYTE *)a1 + 1024) = 0;
  v6 = *((_QWORD **)a1 + 97);
  *((_BYTE *)a1 + 1052) = 1;
  *(_QWORD *)a1 = &TCpuRegs___vtable;
  *((_QWORD *)a1 + 2) = TCpuRegs___vtable_at__16;
  v7 = *((_QWORD *)a1 + 99) <= 8u;
  *((_QWORD *)a1 + 13) = TCpuRegs___vtable_at__104;
  *((_QWORD *)a1 + 5) = TCpuRegs___vtable_at__40;
  *(_QWORD *)((char *)a1 + 1028) = 0x5000000000LL;
  *((_QWORD *)a1 + 130) = 16;
  *((_DWORD *)a1 + 262) = 5;
  *((_DWORD *)a1 + 264) = 0;
  *(_OWORD *)((char *)a1 + 1000) = 0;
  if ( v7 )
  {
    v14 = qvector_reserve((char *)a1 + 776, v6, 9, 1);
    *((_QWORD *)a1 + 97) = v14;
    v6 = (_QWORD *)v14;
  }
  *((_QWORD *)a1 + 98) = 9;
  *v6 = 0x7367655275704354LL;
  *(_BYTE *)(*((_QWORD *)a1 + 97) + 8LL) = 0;
  sub_4B8B20(a1, 256);
  sub_4EBBA0(a1);
  (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 144LL))(
    &v15,
    QT::QCoreApplication::self,
    unk_8CA250);
  QT::QWidget::setWindowIcon(a1, (const QT::QIcon *)&v15);
  QT::QIcon::~QIcon((QT::QIcon *)&v15);
  QT::QWidget::setAutoFillBackground(a1, 1);
  QT::QWidget::setMinimumSize(a1, 0, 50);
  sub_1E06A0();
  *((_BYTE *)a1 + 1024) |= 1 << a3;
  sub_1EAF30(a1, (char *)a1 + 1000);
  v8 = reg_int_op("CpuregsShowAnnotations", 0, 1, "Debugger");
  v9 = (char *)a1 + 1040;
  v10 = *((_DWORD *)a1 + 264);
  v11 = v10 & 0xFFFFFFFE;
  v12 = v10 | 1;
  if ( v8 )
    v11 = v12;
  *((_DWORD *)a1 + 264) = v11;
  sub_209330(v9);
  sub_1E34D0(a1, 0);
  sub_1FC230(a1);
  return v16 - __readfsqword(0x28u);
}
