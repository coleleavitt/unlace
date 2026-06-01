__int64 __fastcall sub_3BFC50(char a1)
{
  char **v2; // rbx

  if ( a1 )
  {
    v2 = &off_4E8020;
    while ( (unsigned __int8)add_idc_func() )
    {
      v2 += 5;
      if ( &algn_4E8088[16] == (_BYTE *)v2 )
        goto LABEL_5;
    }
    if ( !under_debugger )
      sub_37EA20(51640);
LABEL_14:
    BUG();
  }
  if ( !(unsigned __int8)del_idc_func() || !(unsigned __int8)del_idc_func() || !(unsigned __int8)del_idc_func() )
  {
    if ( !under_debugger )
      sub_37EA20(51664);
    goto LABEL_14;
  }
LABEL_5:
  add_idc_class();
  set_idc_dtor();
  return set_idc_getattr();
}
