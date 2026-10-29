__int64 __fastcall sub_58FF70(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 1672);
  netnode_check(v1 + 2416, "$ nmSerEA", 0, 1);
  netnode_check(v1 + 2424, "$ nmSerN", 0, 1);
  *(_QWORD *)(v1 + 2432) = netnode_altval(*(_QWORD *)(v1 + 2424), -1, 65);
  netnode_check(v1 + 2464, "$ fixups", 0, 1);
  sub_7BF040(v1 + 2400, a1, "$ patches", 0);
  return sub_7BF040(v1 + 2328, a1, "$ imports", 0);
}
