__int64 __fastcall sub_10D00(const char *a1, unsigned int a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = open64(a1, 66, a2);
  if ( v4 == -1 )
  {
    sub_F2F0(1u);
  }
  else
  {
    v5 = v4;
    if ( !(unsigned int)sub_10A70(v4, 66, a3) && !sub_10C10(v5, 0) )
      return v5;
    sub_10C40(v5);
  }
  return 0xFFFFFFFFLL;
}

