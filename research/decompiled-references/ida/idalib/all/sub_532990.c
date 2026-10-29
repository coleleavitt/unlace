__int64 __fastcall sub_532990(
        unsigned __int8 a1,
        unsigned __int8 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  if ( a1 != a4 )
    return a4 < a1 ? 1 : -1;
  if ( a2 != a5 )
    return a5 < a2 ? 1 : -1;
  if ( a3 )
    return a6 ^ 1u;
  return (unsigned int)-a6;
}
