bool __fastcall sub_59A180(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // rdx

  v3 = (unsigned int)a3;
  v4 = a3 >> sub_3BDA80((__int64)a1, a2);
  if ( (unsigned __int8)sub_631C90(*a1, 3, 32) )
  {
    sub_3CF0D0((__int64)a1, a2, (unsigned int)v4);
    v5 = v3;
  }
  else
  {
    sub_3CF0D0((__int64)a1, a2, v3);
    v5 = (unsigned int)v4;
  }
  return sub_3CF0D0((__int64)a1, a2 + 1, v5);
}
