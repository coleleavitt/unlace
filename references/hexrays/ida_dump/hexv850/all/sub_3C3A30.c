__int64 __fastcall sub_3C3A30(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbp
  unsigned int v6; // r14d
  __int64 result; // rax
  __int64 (__fastcall *v8)(__int64, int); // rax
  int v9; // eax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, int, int); // rcx
  int v12; // eax
  const char *v13; // rdx
  char *v14; // rax

  v5 = (int)a3;
  v6 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 144LL))(a1, a3, a4);
  result = 0;
  if ( v6 != -1 )
  {
    sub_62040(a2, (__int64)"edge: { sourcename: \"%d\" targetname: \"%d\" ", v5, a4);
    v8 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
    if ( v8 == sub_12F730 )
      v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8LL * (int)v5) + 376LL);
    else
      v9 = v8((__int64)a1, v5);
    if ( v9 == 2 )
    {
      v10 = a1[5];
      if ( (unsigned int)v5 >= *(_DWORD *)(v10 + 64)
        || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8LL * (unsigned int)v5) + 76LL) != 5 )
      {
        v11 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
        if ( v11 == sub_12F770 )
          v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v5) + 368LL) + 4LL);
        else
          v12 = v11((__int64)a1, v5, 1);
        v13 = "false";
        if ( a4 == v12 )
          v13 = "true";
        sub_62040(a2, (__int64)"label: \"%s\" ", v13);
        v14 = sub_3C22D0(v6);
        sub_62040(a2, (__int64)"color: %s ", v14);
      }
    }
    sub_62040(a2, (__int64)"}\n");
    return 1;
  }
  return result;
}
