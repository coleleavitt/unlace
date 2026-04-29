void __fastcall __noreturn sub_3835A0(unsigned int a1, __int64 a2, double a3)
{
  _DWORD *exception; // rbp
  size_t v4; // r12
  void *v5; // rax
  __int64 module_data; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx

  module_data = get_module_data((unsigned int)dword_4EB8F8);
  if ( !module_data )
    module_data = interr(a1, a2, v7, v8, v9);
  v10 = module_data;
  sub_6B2B0((__int64 *)(module_data + 928), (__int64)"%d", a1);
  v11 = *(_QWORD *)(v10 + 416);
  *(_DWORD *)(v10 + 448) = 0;
  if ( v11 == -1 )
    v11 = *(_QWORD *)(v10 + 408);
  sub_33E5A0(v10, 0xBu, a1);
  if ( (get_merge_state(v10, 11, v12, v13) & 3) == 0 )
    sub_6CAE0((__int64)"%a: INTERR %d\n", a3, v11);
  exception = __cxa_allocate_exception(0x30u);
  *(_QWORD *)exception = off_4D6390;
  exception[2] = -1;
  *((_QWORD *)exception + 2) = v11;
  *((_QWORD *)exception + 3) = 0;
  *((_OWORD *)exception + 2) = 0;
  v4 = *(_QWORD *)(v10 + 936);
  if ( v4 )
  {
    v5 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 936));
    *((_QWORD *)exception + 3) = v5;
    *((_QWORD *)exception + 5) = v4;
    memcpy(v5, *(const void **)(v10 + 928), v4);
    *((_QWORD *)exception + 4) = v4;
  }
  *(_QWORD *)exception = off_4DE238;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_interr_t, (void (*)(void *))sub_33AF30);
}
