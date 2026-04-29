__int64 sub_24950()
{
  unsigned int v0; // ebx
  __int64 idati; // [rsp+10h] [rbp-38h] BYREF
  const char *v3; // [rsp+18h] [rbp-30h]
  __int16 v4; // [rsp+20h] [rbp-28h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4 = 256;
  v3 = "__objc_module_info_struct";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_32;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_32;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc_protocol_struct";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_32;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_32;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc_protocol_list_struct";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_32;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_32;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc_property_list";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_32;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_32;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc_property";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_32;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_32;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc_class_ext";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_32;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_32;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc_method_list";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
    goto LABEL_32;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_32;
  clear_tinfo_t();
  v4 = 256;
  v3 = "__objc_method";
  idati = get_idati();
  if ( !(unsigned __int8)create_tinfo()
    || get_tinfo_tid() == -1
    || (clear_tinfo_t(), v4 = 256, v3 = "__objc_category_struct", idati = get_idati(), !(unsigned __int8)create_tinfo())
    || get_tinfo_tid() == -1 )
  {
LABEL_32:
    sub_EC40();
    clear_tinfo_t();
    return 0;
  }
  clear_tinfo_t();
  idati = 0;
  if ( !(unsigned __int8)sub_11E30((__int64)&idati, 0, (__int64)"__objc_instance_vars_list") )
    goto LABEL_43;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_43;
  clear_tinfo_t();
  idati = 0;
  if ( !(unsigned __int8)sub_11E30((__int64)&idati, 0, (__int64)"__objc_instance_vars_struct") )
    goto LABEL_43;
  if ( get_tinfo_tid() == -1 )
    goto LABEL_43;
  clear_tinfo_t();
  idati = 0;
  if ( !(unsigned __int8)sub_11E30((__int64)&idati, 0, (__int64)"__objc_class_struct_ext")
    || get_tinfo_tid() == -1
    || (clear_tinfo_t(), idati = 0, !(unsigned __int8)sub_11E30((__int64)&idati, 0, (__int64)"__objc_symtab_struct"))
    || get_tinfo_tid() == -1
    || (clear_tinfo_t(), idati = 0, !(unsigned __int8)sub_11E30((__int64)&idati, 0, (__int64)"__objc_method_desc_list"))
    || get_tinfo_tid() == -1
    || (clear_tinfo_t(), idati = 0, v0 = sub_11E30((__int64)&idati, 0, (__int64)"__objc_method_desc"), !(_BYTE)v0)
    || get_tinfo_tid() == -1 )
  {
LABEL_43:
    sub_EC40();
    clear_tinfo_t();
    return 0;
  }
  clear_tinfo_t();
  return v0;
}
