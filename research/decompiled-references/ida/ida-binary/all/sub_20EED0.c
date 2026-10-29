__int64 __fastcall sub_20EED0(__int64 a1, char a2)
{
  char **v2; // rbx

  if ( byte_8CB580 == a2 )
    return 1;
  v2 = &off_85EE00;
  if ( a2 )
  {
    while ( (unsigned __int8)add_idc_func(v2) )
    {
      v2 += 5;
      if ( v2 == (char **)&unk_85F0D0 )
        goto LABEL_5;
    }
    return 0;
  }
  if ( !(unsigned __int8)del_idc_func("load_trace_file") )
    return 0;
  while ( 1 )
  {
    v2 += 5;
    if ( v2 == (char **)&unk_85F0D0 )
      break;
    if ( !(unsigned __int8)del_idc_func(*v2) )
      return 0;
  }
LABEL_5:
  byte_8CB580 = a2;
  return 1;
}
