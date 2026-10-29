unsigned __int64 __fastcall sub_234450(__int64 a1, _BYTE *a2)
{
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  netnode_check(&v3, "$ debugger configuration", 0, 1);
  if ( *a2 )
    netnode_hashset(v3, a1, a2, 0, 72);
  else
    netnode_hashdel(v3, a1, 72);
  return v4 - __readfsqword(0x28u);
}
