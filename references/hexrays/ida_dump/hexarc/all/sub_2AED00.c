__int64 __fastcall sub_2AED00(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = ((__int64 (*)(void))ea2node)();
  v3 = netnode_altval(v2, 2, 65);
  v6 = v3 - 1;
  if ( !v3 && a2 )
  {
    netnode_check(&v6, 0, 0, 1);
    v5 = ea2node(a1);
    v7[0] = v6 + 1;
    netnode_supset(v5, 2, v7, 8, 65);
  }
  return v6;
}
