__int64 __fastcall sub_1667020(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  bool v7; // al
  int v8; // r12d
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax

  if ( *(_WORD *)(*(_QWORD *)(a3 + 72) + 8LL) == 420 )
    return 0;
  if ( !(unsigned __int8)sub_15DD600(a3, a1)
    || !(unsigned __int8)sub_15D8280(a3, a1, a2)
    || !(unsigned __int8)sub_15D82C0(a3, a1, a2)
    || (unsigned __int8)sub_1815DD0(a1, a3) )
  {
    return 1;
  }
  v7 = sub_15D8270(a3);
  if ( a4 || v7 )
    return 0;
  v8 = sub_15D8230(a3);
  if ( v8 == (unsigned int)sub_15D8240(a3) )
  {
    v11 = sub_15D8230(a3);
    return (unsigned int)sub_15EB880(a3, a1, v11) ^ 1;
  }
  if ( (unsigned int)sub_15D8230(a3) )
  {
    v9 = sub_15D8230(a3);
    if ( !(unsigned __int8)sub_15EAA10(a3, a1, v9) )
      return 1;
  }
  if ( sub_15D8720(a3) || !(unsigned int)sub_15D8240(a3) )
    return 0;
  v10 = sub_15D8240(a3);
  return (unsigned int)sub_15EB980(a3, a1, v10) ^ 1;
}
