signed __int64 __fastcall sub_8E0D50(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _WORD *a5)
{
  if ( a4 + (a4 >> 7) + 12 > a2 )
    return sub_8DFF60(a1, a2, a3, a4, a5, 0);
  else
    return sub_8DFF60(a1, a2, a3, a4, a5, 1);
}

