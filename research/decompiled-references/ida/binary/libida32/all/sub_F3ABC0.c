unsigned __int64 __fastcall sub_F3ABC0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8

  v3 = *a1;
  if ( (*a1 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return sub_A4CF00(a2, a3, v3);
  else
    return v3 | a3 & 0xFFFFFFFFFFFFFFF0LL;
}

