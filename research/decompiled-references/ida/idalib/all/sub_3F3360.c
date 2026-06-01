__int64 __fastcall sub_3F3360(__int64 a1)
{
  __int64 v1; // rax

  *(_QWORD *)a1 = &off_2BF9EE0;
  *(_QWORD *)(a1 + 16) = &off_2BF9F20;
  *(_QWORD *)(a1 + 8) = 0;
  v1 = qword_2CCB598;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = v1;
  *(_OWORD *)(a1 + 48) = 0;
  hook_event_listener(0, a1, 0, 1);
  *(_QWORD *)a1 = off_2B27170;
  *(_QWORD *)(a1 + 16) = off_2B271B0;
  netnode_check(a1 + 64, "$ PE header", 0, 0);
  netnode_check(a1 + 72, "$ NE header", 0, 0);
  netnode_check(a1 + 80, "$ elfnode", 0, 0);
  netnode_check(a1 + 88, "$ tls", 0, 0);
  netnode_check(a1 + 96, "$ arm segflags", 0, 0);
  netnode_check(a1 + 104, "$ COFF secaddr", 0, 0);
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  netnode_check(a1 + 136, "$ toc", 0, 0);
  netnode_check(a1 + 144, "$ IDALDR node for unload $", 0, 0);
  netnode_check(a1 + 152, "$ IDALDR node for ids loading $", 0, 0);
  netnode_check(a1 + 160, "$ dwarf mappings lut", 0, 0);
  *(_OWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  netnode_check(a1 + 192, "$ dwarf_dfr", 0, 0);
  netnode_check(a1 + 200, "$ dwarf_params", 0, 0);
  netnode_check(a1 + 208, "$ merge example1", 0, 0);
  netnode_check(a1 + 216, "$ merge example2", 0, 0);
  netnode_check(a1 + 224, "$ merge example3", 0, 0);
  netnode_check(a1 + 232, "$ merge example4", 0, 0);
  return netnode_check(a1 + 240, "$ sample NEC processor extender parameters", 0, 0);
}
