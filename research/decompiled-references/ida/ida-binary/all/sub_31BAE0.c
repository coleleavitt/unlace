__int64 __fastcall sub_31BAE0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // r15
  __int64 plugin; // rax
  __int64 v7; // r13
  char v8; // r14
  __int64 v9; // rax
  __int64 v12; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v13[11]; // [rsp+20h] [rbp-58h] BYREF

  LODWORD(v4) = 0;
  v13[3] = __readfsqword(0x28u);
  plugin = find_plugin("dbg", 1);
  if ( plugin )
  {
    v7 = plugin;
    v8 = 0;
    if ( a1 )
    {
      v8 = 1;
      v9 = qbasename(a1);
      sub_1C76F0((int)"HIDECANCEL\nRetrieving symbol information from '%s'", v9);
    }
    v13[2] = a4;
    v13[0] = a2;
    v13[1] = a3;
    v12 = -1;
    netnode_check(&v12, "$ dbg_params", 0, 1);
    netnode_supset(v12, 0, v13, 24, 83);
    if ( !a2 )
      netnode_supset(v12, 1, a1, 0, 83);
    run_plugin(v7, 0);
    v4 = (unsigned __int64)netnode_supval(v12, 0, 0, 0, 83) >> 63;
    netnode_kill(&v12);
    if ( v8 )
      sub_1C78D0();
  }
  return (unsigned int)v4;
}
