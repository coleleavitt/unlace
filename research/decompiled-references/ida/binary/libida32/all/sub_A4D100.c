unsigned __int64 __fastcall sub_A4D100(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return sub_A4CF00(a1, a2, a3);
  else
    return a3 | a2 & 0xFFFFFFFFFFFFFFF0LL;
}

