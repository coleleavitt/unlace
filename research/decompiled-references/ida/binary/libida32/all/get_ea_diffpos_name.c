__int64 __fastcall get_ea_diffpos_name(__int64 a1, unsigned int a2)
{
  char v3; // al

  if ( (getinf(48) & 1) == 0 )
    return get_nice_colored_name(a1, a2, 271);
  v3 = getinf_flag(44, 64);
  return get_nice_colored_name(a1, a2, v3 == 0 ? 302 : 270);
}

