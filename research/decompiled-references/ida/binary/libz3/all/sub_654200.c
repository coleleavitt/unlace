void __fastcall sub_654200(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 (__fastcall *v4)(__int64, _QWORD); // r12
  __int64 v5; // rax
  void *v6; // rbp
  void *v7; // r12
  void (*v8)(); // rax
  void *v9; // rdi

  if ( !*(_QWORD *)(a1 + 2976) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 16LL);
    sub_653BE0((__int64 *)a1, a2);
    v5 = v4(v2, *(unsigned int *)(a1 + 3024));
    v6 = *(void **)(a1 + 2976);
    v7 = (void *)v5;
    if ( (void *)v5 != v6 )
    {
      if ( v6 )
      {
        (**(void (__fastcall ***)(_QWORD))v6)(*(_QWORD *)(a1 + 2976));
        sub_186B220(v6);
      }
      *(_QWORD *)(a1 + 2976) = v7;
      v6 = v7;
    }
    v8 = *(void (**)())(*(_QWORD *)v6 + 168LL);
    if ( v8 != nullsub_188 )
      ((void (__fastcall *)(void *))v8)(v6);
    sub_653BE0((__int64 *)a1, 0);
    if ( !*(_DWORD *)(a1 + 3024) )
    {
      v9 = *(void **)(a1 + 2976);
      if ( v9 )
        v9 = __dynamic_cast(
               v9,
               (const struct __class_type_info *)&`typeinfo for'datalog::engine_base,
               (const struct __class_type_info *)&`typeinfo for'datalog::rel_context_base,
               0);
      *(_QWORD *)(a1 + 2968) = v9;
    }
  }
}

