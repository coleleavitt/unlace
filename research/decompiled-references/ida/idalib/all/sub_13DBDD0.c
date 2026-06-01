__int64 __fastcall sub_13DBDD0(int a1, __int64 *a2, __int64 a3, __m128i a4, double a5)
{
  unsigned int v7; // r13d
  int v8; // r14d
  int v9; // r12^4

  if ( a1 >= 0 )
    return sub_13DBC90(a1, a2, a3, a4, a5);
  if ( !(unsigned __int8)sub_1020490((__int64)a2, a1, nullptr) )
    return (unsigned int)a1;
  v7 = sub_1021B90((__int64)a2, a1);
  v8 = sub_13DBC90(v7, a2, a3, a4, a5);
  v9 = (unsigned __int64)sub_A80750((__int64)a2, v7) >> 32;
  return (unsigned int)(((unsigned __int64)sub_A80750((__int64)a2, v8) >> 32) + a1 - v9);
}
