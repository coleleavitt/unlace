bool __fastcall sub_5807F0(_QWORD *a1, unsigned int a2, unsigned __int64 a3)
{
  char v4; // al
  unsigned __int64 v5; // rdx

  if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
  {
    v4 = sub_3B8DF0((__int64)a1, a2);
    sub_580740(a1, a2, a3 >> (4 * v4));
    v5 = a3;
  }
  else
  {
    sub_580740(a1, a2, a3);
    v5 = a3 >> (4 * (unsigned __int8)sub_3B8DF0((__int64)a1, a2));
  }
  return sub_580740(a1, a2 + 4, v5);
}

