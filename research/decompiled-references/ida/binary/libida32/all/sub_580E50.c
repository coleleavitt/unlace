__int64 __fastcall sub_580E50(_QWORD *a1, __int64 a2)
{
  int v2; // r13d
  __int64 v3; // r12
  __int64 v4; // rbx

  v2 = 4 * sub_3B8DF0((__int64)a1, a2);
  v3 = sub_580DB0(a1, (unsigned int)a2);
  v4 = sub_580DB0(a1, (unsigned int)(a2 + 4));
  if ( (unsigned __int8)sub_615160(*a1, 3, 32) )
    v3 <<= v2;
  else
    v4 <<= v2;
  return v4 | v3;
}

