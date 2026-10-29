__int64 __fastcall sub_580D10(_QWORD *a1, __int64 a2)
{
  char v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbx

  v2 = sub_3B8DF0((__int64)a1, a2);
  v3 = sub_580C60(a1, a2);
  v4 = sub_580C60(a1, (int)a2 + 1);
  if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
    v3 <<= v2;
  else
    v4 <<= v2;
  return v4 | v3;
}

