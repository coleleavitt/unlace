__int64 __fastcall sub_204DB70(unsigned int a1, _BYTE *a2, __int64 a3)
{
  if ( *a2 == 1 )
    return sub_2058290(a3);
  if ( *a2 > 1u )
    return sub_204D200(a1, (__int64)a2, a3);
  if ( ((a1 - 39) & 0xFFFFFFFA) != 0 )
    return sub_2057E60(a3);
  return sub_205FC70(a3);
}
