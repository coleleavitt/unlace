__int64 __fastcall sub_340050(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rax

  v2 = -1;
  if ( a2 >= a1[23] && a2 < a1[24] )
  {
    v3 = sub_33FA20((__int64)a1, a2);
    if ( v3 != -1 )
      return v3 - a1[25];
  }
  return v2;
}
