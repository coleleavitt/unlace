__int64 __fastcall sub_3781F0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rdi

  v3 = sub_17D870(a1);
  if ( v3 && (v6 = v3, (unsigned int)sub_1EB590(v3, a2, v4, v5, a3) == 3) && (v8 = *(_QWORD *)(v6 + 904)) != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 648LL))(v8);
  else
    return 0;
}
