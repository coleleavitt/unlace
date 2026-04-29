unsigned __int64 __fastcall sub_33F540(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  netnode_check(&v3, a2, 0, 0);
  if ( (unsigned __int8)netnode_exist(&v3) )
  {
    *(_DWORD *)(a1 + 1420) |= 1u;
    netnode_kill(&v3);
  }
  return v4 - __readfsqword(0x28u);
}
