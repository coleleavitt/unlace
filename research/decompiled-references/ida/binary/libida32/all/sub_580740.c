bool __fastcall sub_580740(_QWORD *a1, unsigned int a2, unsigned __int64 a3)
{
  char v4; // al
  unsigned __int64 v5; // rdx

  if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
  {
    v4 = sub_3B8DF0((__int64)a1, a2);
    sub_5806A0(a1, a2, a3 >> (2 * v4));
    v5 = a3;
  }
  else
  {
    sub_5806A0(a1, a2, a3);
    v5 = a3 >> (2 * (unsigned __int8)sub_3B8DF0((__int64)a1, a2));
  }
  return sub_5806A0(a1, a2 + 2, v5);
}

