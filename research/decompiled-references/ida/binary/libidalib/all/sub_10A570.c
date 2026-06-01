__int64 __fastcall sub_10A570(int a1, _QWORD *a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rdi

  v7 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
  if ( v7 == sub_104790 )
    v8 = a2[4];
  else
    v8 = v7((__int64)a2);
  if ( a1 == 10 )
  {
    sub_10A410(v8, 1u, nullptr, a4, a5, a6);
    return 0;
  }
  else
  {
    if ( a1 == 11 )
      sub_10A410(v8, 0, nullptr, a4, a5, a6);
    return 0;
  }
}

