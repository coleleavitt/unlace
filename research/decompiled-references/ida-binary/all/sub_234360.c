unsigned __int64 __fastcall sub_234360(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-20h] BYREF
  __int64 v4; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v3 = a2;
  v5 = __readfsqword(0x28u);
  netnode_check(&v4, "$ debugger configuration", 0, 1);
  netnode_hashset(v4, a1, &v3, 8, 72);
  return v5 - __readfsqword(0x28u);
}
