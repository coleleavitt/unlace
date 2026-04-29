__int64 __fastcall sub_3C5710(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // r14d
  __int64 result; // rax
  int v8; // eax
  char *v9; // rdx
  char *v10; // rax

  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, a3, a4);
  result = 0;
  if ( v6 != -1 )
  {
    sub_63080(a2, (__int64)"edge: { sourcename: \"%d\" targetname: \"%d\" ", a3, a4);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 112LL))(a1, a3, 1);
    v9 = "false";
    if ( a4 == v8 )
      v9 = "true";
    sub_63080(a2, (__int64)"label: \"%s\" ", v9);
    v10 = sub_3C41D0(v6);
    sub_63080(a2, (__int64)"color: %s ", v10);
    sub_63080(a2, (__int64)" }\n");
    return 1;
  }
  return result;
}
