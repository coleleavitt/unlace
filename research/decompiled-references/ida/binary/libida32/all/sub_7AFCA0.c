void sub_7AFCA0()
{
  __int64 idc_class; // rbx
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax

  find_idc_class("object");
  set_idc_method();
  set_idc_method();
  idc_class = find_idc_class("typeinfo");
  set_idc_method();
  set_idc_method();
  set_idc_method();
  set_idc_dtor(idc_class, "typeinfo.__dtor__");
  add_idc_func(&off_2B10F60);
  add_idc_func(&off_2B10F20);
  v1 = add_idc_class("loader_input_t", 0);
  sub_7AE230(v1, (__int64 *)&off_2B110C0, 13);
  add_idc_func(&off_2B11080);
  v2 = add_idc_class("Breakpoint", 0);
  sub_7AE230(v2, (__int64 *)&off_2B112E0, 13);
  v3 = add_idc_class("enum_type_data_t", 0);
  sub_7AE230(v3, (__int64 *)&off_2B10FA0, 5);
}

