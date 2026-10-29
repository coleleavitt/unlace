unsigned __int64 __fastcall sub_A70E40(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return sub_A70C40(a1, a2, a3);
  else
    return a3 | a2 & 0xFFFFFFFFFFFFFFF0LL;
}
