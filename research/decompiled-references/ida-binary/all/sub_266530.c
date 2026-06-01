__int64 __fastcall desktop_chooser_t__::vfunc_11(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 result; // rax

  sub_266310(56 * a2 + a1[23], nullptr, 0, a3);
  v4 = (__int64 *)(a1[23] + 56 * a2);
  v5 = v4[4];
  if ( v5 )
  {
    v4[5] = 0;
    a3 = qfree(v5, nullptr);
  }
  v6 = *v4;
  if ( *v4 )
  {
    v4[1] = 0;
    a3 = qfree(v6, nullptr, a3);
  }
  memmove(v4, v4 + 7, a1[23] + 56 * a1[24] - (_QWORD)v4 - 56);
  v7 = a1[24] - 1;
  v8 = *a1;
  a1[24] = v7;
  v9 = *(__int64 (__fastcall **)(__int64))(v8 + 40);
  if ( v9 != desktop_chooser_t__::vfunc_5 )
    v7 = ((__int64 (__fastcall *)(__int64 *, double))v9)(a1, a3);
  if ( !v7 )
    return -1;
  result = v7 - 1;
  if ( a2 < v7 )
    return a2;
  return result;
}
