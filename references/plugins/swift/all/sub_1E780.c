__int64 __fastcall sub_1E780(unsigned __int64 a1, __int64 a2)
{
  int v2; // eax

  if ( ((a2 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
    return 0xFFFFFFFFLL;
  v2 = getinf(5);
  if ( v2 != 18 && v2 != 25 )
    return 0xFFFFFFFFLL;
  if ( a1 > 3 )
    return 4294967294LL;
  return dword_21BC0[a1];
}
