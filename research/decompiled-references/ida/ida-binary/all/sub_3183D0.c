__int64 __fastcall rs_chooser_t__::vfunc_11(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  const char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax

  v3 = sub_49F240(a1, a2);
  do
  {
    v4 = &s1;
    v5 = *(_QWORD *)(a1 + 184) + 24LL * *(_QWORD *)(*a2 + 8 * a2[1] - 8);
    if ( *(_QWORD *)(v5 + 8) )
      v4 = *(const char **)v5;
    reg_update_strlist("RecentScripts", 0, 512, v4, 0);
  }
  while ( (unsigned __int8)sub_49F220(a2) );
  v6 = *a2;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree(v6, nullptr);
    *a2 = 0;
    a2[2] = 0;
  }
  if ( v3 >= 0 )
  {
    v8 = a2[1];
    v9 = *a2;
    if ( a2[2] < (unsigned __int64)(v8 + 1) )
    {
      v10 = qvector_reserve(a2, v9, v8 + 1, 8);
      *a2 = v10;
      v9 = v10;
      v8 = a2[1];
    }
    *(_QWORD *)(v9 + 8 * v8) = v3;
    ++a2[1];
  }
  return 1;
}
