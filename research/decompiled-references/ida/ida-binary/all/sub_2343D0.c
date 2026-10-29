__int64 __fastcall sub_2343D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v5[5]; // [rsp+10h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  netnode_check(&v4, "$ debugger configuration", 0, 0);
  v2 = netnode_hashval(v4, a1, v5, 8, 72);
  result = a2;
  if ( v2 > 0 )
    return v5[0];
  return result;
}
