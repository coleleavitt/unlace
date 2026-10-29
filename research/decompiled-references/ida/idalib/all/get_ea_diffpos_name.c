__int64 __fastcall get_ea_diffpos_name(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx

  v2 = getinf(48);
  v3 = 271;
  if ( (v2 & 1) != 0 )
    v3 = (unsigned __int8)getinf_flag(44, 64) == 0 ? 302 : 270;
  return get_nice_colored_name(a1, a2, v3);
}
