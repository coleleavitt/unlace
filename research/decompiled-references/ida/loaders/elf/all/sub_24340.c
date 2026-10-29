__int64 __fastcall sub_24340(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebx
  __int64 v5; // r13

  v4 = a2;
  v5 = a2 - 2;
  if ( (unsigned __int8)get_byte(a2 - 1) == 37 )
  {
    put_byte(v5, 233);
    v4 = a2 - 1;
    put_byte(a2 + 3, 144);
  }
  else
  {
    put_byte(v5, 103);
    put_byte(a2 - 1, 232);
  }
  sub_40E20(a1, v5, 0);
  sub_42050(a1, v4, a3, a3 - 4 - v4, -4, 4, 0, 0, 0);
  return 1;
}

