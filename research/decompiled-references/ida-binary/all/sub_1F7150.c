unsigned __int64 __fastcall sub_1F7150(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rax
  int v6; // [rsp+Ch] [rbp-6Ch] BYREF
  char v7[8]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v8; // [rsp+20h] [rbp-58h]
  char v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-48h]
  __int16 v11; // [rsp+38h] [rbp-40h]
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 800));
  v6 = *(_DWORD *)(a2 + 64);
  if ( (unsigned int)(v6 - 16777248) > 1
    && v6 != 16777225
    && qword_8CCE70
    && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
  {
    QT::QWidget::close(qword_8CCE70);
  }
  *(_BYTE *)(a2 + 12) = 0;
  v3 = sub_47B6A0(QT::QCoreApplication::self, a2);
  sub_1E95D0((QT::QObject *)v7, a1, 5, *(_BYTE *)(a2 + 35) & 2, -32768, a3);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, int *, _QWORD, __int64))(*(_QWORD *)a1 + 992LL))(a1, &v6, v3, a2)
    || !v6 )
  {
    *(_BYTE *)(a2 + 12) = 1;
  }
  if ( !v9 )
  {
    v4 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 948) = v10;
      *(_WORD *)(v4 + 956) = v11;
    }
  }
  *(_QWORD *)v7 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)v7);
  return v12 - __readfsqword(0x28u);
}
