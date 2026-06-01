void __fastcall sub_2200380(__int64 a1, char a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  void *v4; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v5; // [rsp+8h] [rbp-50h]
  __int64 v6[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = (void *)0x7FEFFFFFFFFFFFFFLL;
  v5 = 64;
  sub_21FBE00((__int64)v6, (__int64 *)&v4);
  sub_C177C0(*(__int64 **)(a1 + 8), v6);
  if ( (_UNKNOWN *)v6[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v6);
  else
    sub_21F9170(v6);
  if ( v5 > 0x40 && v4 )
    operator delete[](v4);
  v5 = 64;
  v4 = (void *)0x7C8FFFFFFFFFFFFELL;
  sub_21FBE00((__int64)v6, (__int64 *)&v4);
  sub_C177C0((__int64 *)(*(_QWORD *)(a1 + 8) + 24LL), v6);
  if ( (_UNKNOWN *)v6[0] == &unk_26F7B20 )
    sub_A4F010((__int64)v6);
  else
    sub_21F9170(v6);
  if ( v5 > 0x40 && v4 )
    operator delete[](v4);
  if ( a2 )
  {
    sub_2011A60(*(_QWORD **)(a1 + 8), (__int64)v6, v2);
    sub_2011A60((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)v6, v3);
  }
}
