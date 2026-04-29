__int64 __fastcall sub_3EAFE0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  sub_1D2A50(*(_QWORD *)(a1 + 96));
  sub_33E110((__int64)sub_3F7A20, 0);
  return unhook_event_listener(0, a1 + 352, v1, v2, v3, v4);
}
