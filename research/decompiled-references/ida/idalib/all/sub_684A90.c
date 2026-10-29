unsigned __int64 __fastcall sub_684A90(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v4 = sub_505D70(a1 + 1624, a2);
  if ( v4 )
  {
    v5 = v4;
    v6 = ea2node(*v4);
    if ( netnode_supval(v6, 10, &v12, 8, 65) > 0 )
    {
      v7 = v12;
      if ( v12 )
      {
        v8 = ea2node(*v5);
        netnode_supdel(v8, 10, 65);
        v12 = v7;
        v9 = ea2node(a3);
        netnode_supset(v9, 10, &v12, 8, 65, v10);
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}
