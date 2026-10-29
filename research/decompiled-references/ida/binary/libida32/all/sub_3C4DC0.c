unsigned __int64 __fastcall sub_3C4DC0(__int64 *a1, unsigned int a2, int a3, char a4)
{
  unsigned __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v4 = a3 & 0xF0000000;
  v11 = __readfsqword(0x28u);
  v5 = a2;
  if ( v4 == 2952790016 )
  {
    v9 = (unsigned int)ea2node(a2);
    return netnode_supdel(v9, 17, 65);
  }
  else
  {
    if ( v4 > 0xB0000000 )
    {
      if ( v4 == 3489660928 )
      {
        v7 = (unsigned int)ea2node(a2);
        return netnode_supdel(v7, 28, 83);
      }
    }
    else if ( v4 == 1342177280 )
    {
      if ( a2 != -1 )
        v5 = sub_614FB0(*a1, 29) + a2;
      v8 = *a1;
      v10 = v5;
      sub_79B4D0(&v10, v8, 16, 65);
    }
    else if ( v4 == 1610612736 )
    {
      return sub_3C4D20(*a1, a2, a4);
    }
    return v11 - __readfsqword(0x28u);
  }
}

