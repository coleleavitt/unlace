_QWORD *__fastcall sub_BC4110(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 *v7; // rbp
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v4 = *(_QWORD *)(sub_B8C330((__int64)a1) + 18360);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 80LL))(v4, a1[9], 1);
  v5 = a1[10];
  if ( !v5 )
    v5 = sub_BC3500(a1);
  v6 = *(__int64 **)(v5 + 120);
  v7 = &v6[*(unsigned int *)(v5 + 128)];
  if ( v7 == v6 )
    return nullptr;
  while ( 1 )
  {
    v8 = *v6;
    v9 = *(_QWORD *)(*(_QWORD *)(*v6 + 80) + 152LL) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 32LL))(v9) == v3 )
      break;
    if ( v7 == ++v6 )
      return nullptr;
  }
  return sub_705340((__int64 *)(*(_QWORD *)(v8 + 80) + 72LL), *(_QWORD *)(v8 + 80), v10, v11, v12, v13);
}
