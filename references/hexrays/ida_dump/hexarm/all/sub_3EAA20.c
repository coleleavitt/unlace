__int64 __fastcall sub_3EAA20(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  sub_33E570((__int64)sub_3EA9C0, 0);
  unhook_event_listener(3, a1 + 664, v2, v3, v4, v5);
  sub_1511B0(a1, a1 + 696);
  sub_1511B0(a1, a1 + 712);
  return sub_1D2490(*(_QWORD *)(a1 + 96));
}
