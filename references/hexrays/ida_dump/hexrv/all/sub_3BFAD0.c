__int64 __fastcall sub_3BFAD0(char a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  char **v5; // rbx

  if ( a1 )
  {
    v5 = &off_4BB4E0;
    while ( (unsigned __int8)add_idc_func(v5) )
    {
      v5 += 5;
      if ( &algn_4BB548[16] == (_BYTE *)v5 )
        goto LABEL_5;
    }
    if ( !under_debugger )
      sub_37DDE0(0xC9B8u, a2, a3);
LABEL_14:
    BUG();
  }
  if ( !(unsigned __int8)del_idc_func("decompile")
    || !(unsigned __int8)del_idc_func("cfunc_t.__dtor__")
    || !(unsigned __int8)del_idc_func("cfunc_t.__getattr__") )
  {
    if ( !under_debugger )
      sub_37DDE0(0xC9D0u, a2, a3);
    goto LABEL_14;
  }
LABEL_5:
  v3 = add_idc_class("cfunc_t", 0);
  set_idc_dtor(v3, "cfunc_t.__dtor__");
  return set_idc_getattr(v3, "cfunc_t.__getattr__");
}
