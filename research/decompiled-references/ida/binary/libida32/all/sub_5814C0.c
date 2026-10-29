__int64 __fastcall sub_5814C0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  unsigned int v5; // r13d

  v4 = a3 >> (4 * (unsigned __int8)sub_3B8DF0((__int64)a1, a2));
  if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
  {
    v5 = sub_5813E0(a1, (unsigned int)a2, v4);
    if ( (unsigned int)a2 > 0xFFFFFFFA )
      return v5;
    return (unsigned int)sub_5813E0(a1, (unsigned int)(a2 + 4), a3) | v5;
  }
  else
  {
    v5 = sub_5813E0(a1, (unsigned int)a2, a3);
    if ( (unsigned int)a2 > 0xFFFFFFFA )
      return v5;
    return (unsigned int)sub_5813E0(a1, (unsigned int)(a2 + 4), v4) | v5;
  }
}

