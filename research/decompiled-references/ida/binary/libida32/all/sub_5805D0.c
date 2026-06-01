__int64 __fastcall sub_5805D0(__int64 *a1, int a2, unsigned int a3, int a4)
{
  int v4; // r13d
  int i; // ebx
  unsigned int v7; // ebp
  int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // eax

  v4 = a4 + 1;
  if ( ((a4 + 1) & a4) == 0 )
  {
    for ( i = a2; !__CFADD__(v4, i); i = sub_3B8BE0(a1, v7) + v8 )
    {
      v9 = -v4 & (a4 + i);
      v7 = v9;
      if ( !sub_3B8910((__int64)a1, v9) )
      {
        v10 = sub_3B8950((__int64)a1, v9);
        if ( v10 - v9 >= a3 )
          return v7;
        if ( v10 == -1 )
          return (unsigned int)-1;
        v7 = v10;
      }
      v8 = sub_3B8AB0((__int64)a1, v7);
    }
  }
  return (unsigned int)-1;
}

