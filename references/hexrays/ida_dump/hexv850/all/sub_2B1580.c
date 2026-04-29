unsigned __int64 __fastcall sub_2B1580(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( a2 == *(_QWORD *)(a1 + 1112) )
  {
    v2 = *(_QWORD *)(a1 + 1120);
  }
  else
  {
    v2 = sub_2B0CC0(a2, 0);
    if ( v2 != -1 )
    {
      *(_QWORD *)(a1 + 1112) = a2;
      *(_QWORD *)(a1 + 1120) = v2;
      v4 = v2;
      if ( !(unsigned __int8)netnode_exist(&v4) )
        return v5 - __readfsqword(0x28u);
LABEL_7:
      netnode_supdel_all(v4, 103);
      return v5 - __readfsqword(0x28u);
    }
  }
  v4 = v2;
  if ( (unsigned __int8)netnode_exist(&v4) )
    goto LABEL_7;
  return v5 - __readfsqword(0x28u);
}
