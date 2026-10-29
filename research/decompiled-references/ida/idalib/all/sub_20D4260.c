_QWORD *__fastcall sub_20D4260(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v4 == sub_20CEB40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  else
    v4((__int64)a2, v3);
  sub_20D1ED0(a2, 5u, "[abi:");
  sub_20D1ED0(a2, *(_QWORD *)(a1 + 24), *(const void **)(a1 + 32));
  return sub_20D1ED0(a2, 1u, "]");
}
