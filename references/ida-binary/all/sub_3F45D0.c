unsigned __int64 __fastcall sub_3F45D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+8h] [rbp-C0h]
  __int64 v6; // [rsp+10h] [rbp-B8h]
  _BYTE v7[16]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-98h]
  unsigned __int64 v9; // [rsp+A8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_532F10(v7, a1);
  v8 = *(_QWORD *)(a2 + 48);
  v2 = *QT::QCoreApplication::self;
  v4 = 1;
  v5 = a2;
  v6 = 0;
  (*(void (__fastcall **)(_QWORD *, _BYTE *, int *))(v2 + 184))(QT::QCoreApplication::self, v7, &v4);
  sub_531E50(v7);
  return v9 - __readfsqword(0x28u);
}
