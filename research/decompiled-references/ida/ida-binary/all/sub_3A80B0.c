__int64 __fastcall sub_3A80B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int ordinal_limit; // eax
  int v6; // edx
  __int64 *v7; // rdi
  int v8; // ebp
  int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rdi

  ordinal_limit = get_ordinal_limit(0, a2, a3, a4);
  v6 = 1;
  v7 = (__int64 *)(a1 + 8);
  if ( ordinal_limit )
    v6 = ordinal_limit;
  v8 = v6;
  sub_169A50(v7, (__int64)"struct_%u");
  sub_169A50((__int64 *)(a1 + 64), (__int64)"enum_%u", v8);
  v10 = *(_QWORD *)(a1 + 168);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 176) = 0;
    qfree(v10, "enum_%u", v9);
    *(_QWORD *)(a1 + 168) = 0;
    *(_QWORD *)(a1 + 184) = 0;
  }
  v11 = *(_QWORD *)(a1 + 144);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v11, "enum_%u");
    *(_QWORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  clear_tinfo_t(a1 + 136);
  *(_WORD *)(a1 + 32) = 1;
  return 1;
}
