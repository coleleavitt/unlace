__int64 __fastcall sub_4DFE20(__int64 a1, _QWORD *a2, double a3)
{
  __int64 v3; // r12
  void *v4; // rax
  __int64 v5; // rax
  void *v6; // r12

  sub_4DC9E0(a1, a2, a3);
  ++*((_DWORD *)a2 + 17);
  v3 = *a2;
  sub_654200(*a2, 0);
  v4 = __dynamic_cast(
         *(const void **)(v3 + 2968),
         (const struct __class_type_info *)&`typeinfo for'datalog::rel_context_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::rel_context,
         0);
  if ( !v4 )
    __cxa_bad_cast();
  v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v4 + 192LL))(v4);
  v6 = (void *)sub_4C70D0(v5, (__int64 *)(a1 + 72), *(_QWORD *)(a1 + 80));
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v6 + 40LL))(v6, a1 + 96);
  sub_4DF0F0((__int64)a2, *(_DWORD *)(a1 + 88), v6);
  return 1;
}

