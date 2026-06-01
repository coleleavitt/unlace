char **__fastcall sub_69CDC0(char a1, char **a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx

  v3 = a3;
  if ( a3 == -1 )
    return sub_35A790(a2);
  if ( (a1 & 8) != 0 )
    v3 = a3 & 0xFFFFFFFFFFFFFFFELL;
  if ( get_ea_name(a2, v3, 23, 0) <= 0 )
    return sub_35A790(a2);
  sub_699C00((__int64)a2, "`typeinfo for'", &byte_22F0C30);
  return (char **)sub_699C00((__int64)a2, " `RTTI Type Descriptor'", &byte_22F0C30);
}
