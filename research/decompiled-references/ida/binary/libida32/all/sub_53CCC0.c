__int64 __fastcall sub_53CCC0(__int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // rdi

  v3 = *a2;
  if ( a3 )
    return get_tinfo_property(v3, 8);
  else
    return get_tinfo_property(v3, 7);
}

