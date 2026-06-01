bool __fastcall sub_59A220(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  char v4; // al
  unsigned __int64 v5; // rdx

  if ( (unsigned __int8)sub_631C90(*a1, 3, 32) )
  {
    v4 = sub_3BDA80((__int64)a1, a2);
    sub_59A180(a1, a2, a3 >> (2 * v4));
    v5 = a3;
  }
  else
  {
    sub_59A180(a1, a2, a3);
    v5 = a3 >> (2 * (unsigned __int8)sub_3BDA80((__int64)a1, a2));
  }
  return sub_59A180(a1, a2 + 2, v5);
}
