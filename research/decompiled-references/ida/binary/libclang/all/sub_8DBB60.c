__int64 __fastcall sub_8DBB60(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 result; // rax

  v3 = *a1;
  v4 = sub_2575D20(a1, a2, a3);
  result = *a2;
  if ( v3 == v4 )
  {
    if ( v3 == result )
      return sub_257D030(a1, a2);
  }
  else if ( v4 != result )
  {
    return sub_2576220(a1, a2);
  }
  if ( a1 != a2 )
  {
    sub_5FF3B0(a1);
    if ( v4 == *a2 )
      return sub_257CF50(a1, a2);
    else
      return sub_25768A0(a1, a2);
  }
  return result;
}

