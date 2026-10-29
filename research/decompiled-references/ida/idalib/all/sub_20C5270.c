unsigned __int64 __fastcall sub_20C5270(
        __int64 **a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rdx

  v6 = HIDWORD(a2);
  if ( BYTE4(a2) )
    return sub_20C4A10(a1, a2, v6, a4, a5, a6);
  else
    return sub_20C4FC0(a1, a2, v6, a4, a5, a6);
}
