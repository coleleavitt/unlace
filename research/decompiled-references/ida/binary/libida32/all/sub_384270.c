void __fastcall __noreturn sub_384270(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = qword_2CA1698;
  *a1 = qword_2CA1698;
  *(_DWORD *)(v1 + 764) = -1;
  set_database_flag(0xFFFFFFFFLL, 0);
  *(_BYTE *)(*a1 + 158LL) = 0;
  a1[1] = *(_QWORD *)(*a1 + 1480LL);
  v2 = sub_5E3230();
  sub_5E7CE0(a1[1] + 40LL, v2);
  callui();
}

