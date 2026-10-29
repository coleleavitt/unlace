unsigned __int8 *__fastcall sub_20602F0(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( *a1 == 5 )
    return a1 + 24;
  if ( *a1 == 18 )
    return sub_205FD90((__int64)a1, 0, a3, a4, a5, a6) + 24;
  return (unsigned __int8 *)(sub_2060180(a1, 0, a3, a4, a5, a6) + 24);
}
