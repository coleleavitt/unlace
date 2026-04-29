unsigned __int64 __fastcall sub_F3E50(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // r12d
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 72);
  v9 = __readfsqword(0x28u);
  if ( v2 <= 0x10 )
  {
    if ( (unsigned int)getinf(99) != 176 )
      return v9 - __readfsqword(0x28u);
  }
  else if ( v2 != 176 )
  {
    return v9 - __readfsqword(0x28u);
  }
  if ( (unsigned __int64)getinf(88) <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag(3, 4) )
      return v9 - __readfsqword(0x28u);
    netnode_check(&v8, "$ golang", 0, 0);
    v4 = netnode_altval(v8, 0, 65);
    if ( v4 <= 0x74 )
      return v9 - __readfsqword(0x28u);
    v5 = *(_DWORD *)(get_ph() + 4);
    if ( v5 )
    {
      v6 = (unsigned int)(v5 - 13);
      if ( (unsigned int)v6 > 0x3B )
        return v9 - __readfsqword(0x28u);
      v7 = 0x800000000000005LL;
      if ( !_bittest64(&v7, v6) || v4 == 117 )
        return v9 - __readfsqword(0x28u);
    }
  }
  return sub_CC570(*(_QWORD *)(a1 + 1496), a2);
}
