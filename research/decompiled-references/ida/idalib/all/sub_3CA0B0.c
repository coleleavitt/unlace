unsigned __int64 __fastcall sub_3CA0B0(__int64 *a1, unsigned __int64 a2, int a3, char a4)
{
  unsigned __int64 v4; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v4 = a3 & 0xF0000000;
  v9 = __readfsqword(0x28u);
  if ( v4 == 2952790016 )
  {
    v7 = ea2node(a2);
    return netnode_supdel(v7, 17, 65);
  }
  else
  {
    if ( v4 > 0xB0000000 )
    {
      if ( v4 == 3489660928 )
      {
        v6 = ea2node(a2);
        return netnode_supdel(v6, 28, 83);
      }
    }
    else if ( v4 == 1342177280 )
    {
      if ( a2 != -1 )
        a2 = sub_3B9DC0(a1, a2);
      v8 = a2;
      sub_7BE850(&v8, *a1, 16, 65);
    }
    else if ( v4 == 1610612736 )
    {
      return sub_3CA000(*a1, a2, a4);
    }
    return v9 - __readfsqword(0x28u);
  }
}
