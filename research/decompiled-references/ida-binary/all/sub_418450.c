__int64 __fastcall sub_418450(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  char v5; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(v2 + 329) == a2 )
    return v6 - __readfsqword(0x28u);
  *(_BYTE *)(v2 + 329) = a2;
  reg_int_op("ShowIgnoredFiles", 1, *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 329LL), "Config");
  v5 = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 329LL);
  v4 = sub_5313F0(qword_8CAB38);
  if ( v4 )
    sub_537630(v4, 7, &v5);
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(QT::QCoreApplication::self[2] + 176LL))(
           QT::QCoreApplication::self + 2,
           0,
           2,
           1);
}
