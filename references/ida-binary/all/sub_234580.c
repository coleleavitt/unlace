__int64 __fastcall sub_234580(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v10; // [rsp+18h] [rbp-50h] BYREF
  unsigned int v11; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  netnode_check(&v10, "$ debugger configuration", 0, 0);
  v5 = a2;
  if ( netnode_hashval(v10, a1, &v11, 8, 72) > 0 )
    v5 = v11;
  netnode_check(&v10, "$ debugger configuration", 0, 0);
  v6 = netnode_hashval(v10, a3, &v11, 8, 72);
  v7 = a4;
  if ( v6 > 0 )
    v7 = v11;
  return a4 & a2 ^ v7 & (a4 & a2 ^ v5);
}
