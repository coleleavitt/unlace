__int64 __fastcall sub_672330(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r13
  void (__fastcall *v6)(__int64, __int64); // r14
  __int64 (*v7)(void); // rax
  __int64 v8; // rsi

  v5 = a1[16];
  v6 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 88LL);
  v7 = *(__int64 (**)(void))(*a1 + 104LL);
  if ( (char *)v7 == (char *)sub_2B1DE0 )
    v8 = (__int64)(a1 + 10);
  else
    v8 = v7();
  v6(v5, v8);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)a1[16] + 368LL))(a1[16], a2, a3);
}

