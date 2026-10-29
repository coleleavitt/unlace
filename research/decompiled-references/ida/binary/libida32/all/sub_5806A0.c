bool __fastcall sub_5806A0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // rdx

  v3 = (unsigned int)a3;
  v4 = a3 >> sub_3B8DF0((__int64)a1, a2);
  if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
  {
    sub_3C98C0((__int64)a1, (unsigned int)a2, (unsigned int)v4);
    v5 = v3;
  }
  else
  {
    sub_3C98C0((__int64)a1, (unsigned int)a2, v3);
    v5 = (unsigned int)v4;
  }
  return sub_3C98C0((__int64)a1, (unsigned int)(a2 + 1), v5);
}

