void __fastcall __noreturn sub_383060(unsigned int a1, double a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *exception; // rbp
  size_t v5; // r12
  void *v6; // rax
  __int64 module_data; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rsi

  module_data = get_module_data();
  if ( !module_data )
    module_data = interr();
  v8 = module_data;
  sub_6B870((__int64 *)(module_data + 928));
  v9 = *(_QWORD *)(v8 + 416);
  *(_DWORD *)(v8 + 448) = 0;
  if ( v9 == -1 )
    v9 = *(_QWORD *)(v8 + 408);
  v10 = 11;
  sub_33E140(v8, 0xBu, a1);
  if ( (get_merge_state() & 3) == 0 )
  {
    v10 = v9;
    sub_6D0A0((__int64)"%a: INTERR %d\n", a2, v9);
  }
  exception = __cxa_allocate_exception(0x30u);
  *(_QWORD *)exception = off_4DBCD0;
  exception[2] = -1;
  *((_QWORD *)exception + 2) = v9;
  *((_QWORD *)exception + 3) = 0;
  *((_OWORD *)exception + 2) = 0;
  v5 = *(_QWORD *)(v8 + 936);
  if ( v5 )
  {
    v6 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 936), v10, v2, v3);
    *((_QWORD *)exception + 3) = v6;
    *((_QWORD *)exception + 5) = v5;
    memcpy(v6, *(const void **)(v8 + 928), v5);
    *((_QWORD *)exception + 4) = v5;
  }
  *(_QWORD *)exception = off_4E3B78;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_interr_t, (void (*)(void *))sub_33AAC0);
}
