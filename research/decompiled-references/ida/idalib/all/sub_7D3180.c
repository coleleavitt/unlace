void sub_7D3180()
{
  _QWORD *idc_class; // rbx
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  idc_class = (_QWORD *)find_idc_class("object");
  set_idc_method(idc_class, "object.retrieve");
  set_idc_method(idc_class, "object.store");
  v1 = (_QWORD *)find_idc_class("typeinfo");
  set_idc_method(v1, "typeinfo.field");
  set_idc_method(v1, "typeinfo.print");
  set_idc_method(v1, "typeinfo.size");
  set_idc_dtor((__int64)v1, "typeinfo.__dtor__");
  add_idc_func(&off_2B3AF00);
  add_idc_func(&off_2B3AEC0);
  v2 = (_QWORD *)add_idc_class("loader_input_t", 0);
  sub_7D1690(v2, &off_2B3B060, 13);
  add_idc_func(&off_2B3B020);
  v3 = (_QWORD *)add_idc_class("Breakpoint", 0);
  sub_7D1690(v3, &off_2B3B280, 13);
  v4 = (_QWORD *)add_idc_class("enum_type_data_t", 0);
  sub_7D1690(v4, &off_2B3AF40, 5);
}
