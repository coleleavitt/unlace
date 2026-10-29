unsigned __int64 __fastcall sub_3AF710(__int64 a1, QT::QWidget **a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  QT::QWidget *v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+8h] [rbp-30h]
  int v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]
  int v14; // [rsp+20h] [rbp-18h]
  int v15; // [rsp+28h] [rbp-10h]
  __int64 v16; // [rsp+30h] [rbp-8h]

  v13 = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self);
  v4 = sub_53E5A0(v3, 0, 1);
  if ( v4 )
    sub_53A3E0((_DWORD)a2, v4, v5, v6, v7, v8, (_DWORD)v10, v11, v12, v13, v14, v15, v16);
  v11 = 0;
  v10 = *a2;
  sub_314AC0((__int64)qword_8CD748, &v10);
  sub_206150(a1, a2, a3);
  return v13 - __readfsqword(0x28u);
}
