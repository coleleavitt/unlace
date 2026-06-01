__int64 __fastcall sub_49E040(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  if ( (int)a2 >= 0 )
  {
    a2 = (int)a2;
    if ( (unsigned __int64)(int)a2 < a1[1] )
      return *(unsigned __int8 *)(*a1 + (int)a2);
  }
  sub_49AF90(a5, (__int64)a1, a2, a3, a4);
  return sub_49E060(a1, a2);
}
