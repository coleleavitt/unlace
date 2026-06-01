__int64 __fastcall sub_47C730(QT::QApplication *this, __int64 a2)
{
  QT::QApplication *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  QT::QApplication *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = this;
  v3 = *(_QWORD *)this;
  ptr[3] = (void *)__readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(QT::QApplication *))(v3 + 224))(this);
  v5 = v4;
  if ( v4 )
    sub_53C4A0(v4);
  sub_52EAB0(ptr, a2, 3);
  QT::QApplication::setStyleSheet(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    this = (QT::QApplication *)ptr[0];
    free(ptr[0]);
  }
  if ( v5 )
  {
    v6 = (QT::QApplication *)QT::QApplication::style(this);
    (*(void (__fastcall **)(QT::QApplication *, __int64))(*(_QWORD *)v6 + 104LL))(v6, v5);
    v7 = QT::QApplication::style(v6);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 96LL))(v7, v5);
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v2 + 2) + 24LL))((__int64)v2 + 16);
  return sub_5312A0(v8, a2);
}
