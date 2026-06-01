void __fastcall __noreturn sub_387F90(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = qword_2CCB598;
  *a1 = qword_2CCB598;
  *(_DWORD *)(v1 + 932) = -1;
  set_database_flag(0xFFFFFFFFLL, 0);
  *(_BYTE *)(*a1 + 158LL) = 0;
  a1[1] = *(_QWORD *)(*a1 + 1672LL);
  sub_835590(0);
  v2 = sub_5FF0F0();
  sub_603BA0(a1[1] + 40LL, v2);
  callui();
}
