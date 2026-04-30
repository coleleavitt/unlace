void __fastcall deskcfg_target_t__::vfunc_0(__int64 a1)
{
  __int64 v2; // rdi
  volatile signed __int32 *v3; // rax

  *(_QWORD *)a1 = &deskcfg_target_t___vtable;
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(volatile signed __int32 **)(a1 + 16);
  if ( v3 )
  {
    if ( !_InterlockedSub(v3, 1u) )
      free(*(void **)(a1 + 16));
  }
}
