__int64 __fastcall sub_A02E0(__int64 a1, char a2)
{
  char **v2; // rbx

  if ( byte_250980 == a2 )
    return 1;
  v2 = &off_22E7C0;
  if ( a2 )
  {
    while ( (unsigned __int8)add_idc_func() )
    {
      v2 += 5;
      if ( v2 == (char **)&unk_22EA90 )
        goto LABEL_5;
    }
    return 0;
  }
  if ( !(unsigned __int8)del_idc_func() )
    return 0;
  while ( 1 )
  {
    v2 += 5;
    if ( v2 == (char **)&unk_22EA90 )
      break;
    if ( !(unsigned __int8)del_idc_func() )
      return 0;
  }
LABEL_5:
  byte_250980 = a2;
  return 1;
}

