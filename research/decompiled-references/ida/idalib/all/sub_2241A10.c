__int64 __fastcall sub_2241A10(const char ***a1, const char ***a2, const char ***a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r15
  const char ***v8; // r13

  v6 = (a2 - a1 + 1) / 2;
  v7 = 8 * v6;
  v8 = &a1[v6];
  if ( v6 <= a4 )
  {
    sub_2240BF0(a1, &a1[v6], a3);
    sub_2240BF0(v8, a2, a3);
  }
  else
  {
    sub_2241A10(a1, &a1[v6], a3);
    sub_2241A10(v8, a2, a3);
  }
  return sub_22416A0(a1, v8, (__int64)a2, v7 >> 3, a2 - v8, a3, a4);
}
