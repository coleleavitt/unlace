__int64 __fastcall sub_3F26A0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r9
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  __int64 v9; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( !a3 )
  {
    netnode_check(&v7, "$ original user", 0, 0);
    sub_3F24B0(a1 - 16, v7, 0);
    netnode_check(&v8, "$ loader name", 0, 0);
    sub_3F24B0(a1 - 16, v8, 0);
    sub_3F24B0(a1 - 16, v8, 1);
    netnode_check(v10, "$ got", 0, 0);
    if ( (unsigned __int8)netnode_exist(v10) )
    {
      v4 = netnode_altval(v10[0], 0, 65);
      v5 = node2ea(v4 - 1);
      if ( v5 != -1 && v5 != 0xFFFFFFFFLL )
      {
        v10[0] = -1;
        netnode_check(v10, "$ got", 0, 1);
        v9 = ea2node(v5) + 1;
        netnode_supset(v10[0], 0, &v9, 8, 65, v6);
      }
    }
  }
  return 1;
}
