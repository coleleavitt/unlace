__int64 __fastcall sub_499880(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64); // rbp
  __int64 v5; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 544LL);
  v5 = sub_4DE930(a2, a3, v3 + 104);
  return v4(v3, v5);
}
