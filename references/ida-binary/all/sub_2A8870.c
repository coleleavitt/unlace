void __fastcall grida_model_data_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rbx
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v3 = a1[19];
  *a1 = &grida_model_data_t___vtable;
  while ( v3 )
  {
    sub_2A8620(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    a2 = (const char *)&qword_28;
    operator delete(v4, 0x28u);
  }
  v5 = a1[14];
  if ( v5 )
  {
    a1[15] = 0;
    qfree(v5, a2);
  }
  v6 = a1[9];
  if ( v6 )
  {
    a1[10] = 0;
    qfree(v6, a2);
  }
  sub_2B49E0(a1);
  operator delete(a1, 0xB8u);
}
