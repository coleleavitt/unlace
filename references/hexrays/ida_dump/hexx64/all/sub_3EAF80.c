__int64 __fastcall sub_3EAF80(__int64 a1)
{
  sub_1D2A30(*(_QWORD *)(a1 + 96));
  netnode_check(*(_QWORD *)(a1 + 96) + 104LL, "$ ignore micro", 0, 1);
  sub_33DF40((__int64)sub_3F7A20, 0);
  hook_event_listener(0, a1 + 352, *(_QWORD *)(a1 + 96), 0);
  return 1;
}
