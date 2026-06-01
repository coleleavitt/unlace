__int64 __fastcall sub_A0490(__int64 a1, char a2)
{
  char **v2; // rbx

  if ( byte_251A00 == a2 )
    return 1;
  v2 = &off_22F840;
  if ( a2 )
  {
    while ( (unsigned __int8)add_idc_func() )
    {
      v2 += 5;
      if ( v2 == (char **)&unk_22FB10 )
        goto LABEL_5;
    }
    return 0;
  }
  if ( !(unsigned __int8)del_idc_func() )
    return 0;
  while ( 1 )
  {
    v2 += 5;
    if ( v2 == (char **)&unk_22FB10 )
      break;
    if ( !(unsigned __int8)del_idc_func() )
      return 0;
  }
LABEL_5:
  byte_251A00 = a2;
  return 1;
}

