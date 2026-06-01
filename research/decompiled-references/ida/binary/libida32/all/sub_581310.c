__int64 __fastcall sub_581310(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v4; // r14
  unsigned int v5; // r13d

  v3 = a3;
  v4 = a3 >> sub_3B8DF0((__int64)a1, a2);
  if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
  {
    v5 = sub_580EF0(a1, (unsigned int)a2, (unsigned int)v4);
    if ( (unsigned int)a2 > 0xFFFFFFFD )
      return v5;
    return (unsigned int)sub_580EF0(a1, (unsigned int)(a2 + 1), v3) | v5;
  }
  else
  {
    v5 = sub_580EF0(a1, (unsigned int)a2, v3);
    if ( (unsigned int)a2 > 0xFFFFFFFD )
      return v5;
    return (unsigned int)sub_580EF0(a1, (unsigned int)(a2 + 1), (unsigned int)v4) | v5;
  }
}

