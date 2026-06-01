__int64 __fastcall sub_30DA30(__int64 a1)
{
  if ( (unsigned int)a1 > 0xFF )
    return 0;
  if ( (unsigned __int8)is_valid_cp(a1, 6, 0) )
    return (unsigned int)get_cp_validity(4, (unsigned int)a1, 0xFFFFFFFFLL) ^ 1;
  return 0;
}
