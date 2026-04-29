__int64 __fastcall sub_4B90(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  if ( a2 == 95 )
  {
    if ( *(_QWORD *)(a1 + 136) == -1 )
    {
      if ( *(_QWORD *)(a1 + 144) == -1 )
        return 0;
    }
    else
    {
      netnode_check(a1 + 136, "$ NE header", 0, 1);
      if ( *(_QWORD *)(a1 + 144) == -1 )
        return 0;
    }
    netnode_check(v3, "$ PE header", 0, 0);
    *(_QWORD *)(a1 + 144) = v3[0];
  }
  return 0;
}
