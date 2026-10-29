char **__fastcall sub_67CBE0(char a1, char **a2, unsigned int a3)
{
  unsigned int v3; // ebx

  v3 = a3;
  if ( a3 == -1 )
    return sub_3573A0(a2);
  if ( (a1 & 8) != 0 )
    v3 = a3 & 0xFFFFFFFE;
  if ( get_ea_name(a2, v3, 23, 0) <= 0 )
    return sub_3573A0(a2);
  sub_679CE0((__int64)a2, "`typeinfo for'", &byte_22CD811);
  return (char **)sub_679CE0((__int64)a2, " `RTTI Type Descriptor'", &byte_22CD811);
}

