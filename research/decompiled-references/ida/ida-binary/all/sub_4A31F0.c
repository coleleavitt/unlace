__int64 __fastcall sub_4A31F0(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64), char a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r15
  int v9; // eax
  char v10; // r13
  __int64 v12; // rdi
  __int64 v13; // rax
  char v14; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, a2);
  if ( !v7 )
    return 6;
  v8 = v7;
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(QT::QCoreApplication::self[2] + 40LL))(
         QT::QCoreApplication::self + 2,
         a1,
         a2);
  v10 = v9 <= 3;
  if ( a3 && v9 <= 3 )
    v10 = a3(a2, v8);
  if ( a4 )
  {
    v12 = *(_QWORD *)(a2 + 72);
    v14 = v10;
    v13 = sub_534430(v12);
    if ( v13 )
      sub_537630(v13, 8, &v14);
  }
  return v10 == 0 ? 7 : 3;
}
