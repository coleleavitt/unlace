__int64 __fastcall sub_3EC7E0(__int64 a1, __int64 a2, double a3)
{
  const char *v3; // rax
  __int16 v4; // dx
  unsigned __int16 v5; // cx

  *(_DWORD *)(a1 + 48) |= 0x800u;
  if ( *(_DWORD *)(a1 + 80) == 8 )
    sub_3EC590((_QWORD *)a1, a2, a3);
  sub_1D2470(*(_QWORD *)(a1 + 96));
  netnode_check(*(_QWORD *)(a1 + 96) + 104LL, "$ ignore micro", 0, 1);
  sub_151110(a1, a1 + 696);
  sub_33E3B0((__int64)sub_3EA9C0, 0);
  hook_event_listener(3, a1 + 664, a1, 0);
  v3 = (const char *)&unk_42E382;
  v4 = 1;
  do
  {
    v5 = v4;
    v4 = *(_WORD *)v3;
    if ( v5 >= *(_WORD *)v3 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC82Cu, (__int64)"bhsdq", a3);
      BUG();
    }
    v3 += 2;
  }
  while ( v3 != "bhsdq" );
  sub_33F540(*(_QWORD *)(a1 + 96), (__int64)"$ arm micro asked for ldbl size");
  return 1;
}
