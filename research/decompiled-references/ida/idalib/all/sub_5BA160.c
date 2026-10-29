__int64 __fastcall sub_5BA160(__int64 a1)
{
  __int64 v1; // r13
  __int64 result; // rax
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rbp
  __int64 v7; // rax

  v1 = switch_dbctx(*(int *)(a1 + 8));
  result = get_func_qty();
  if ( result )
  {
    v3 = result;
    for ( i = 0; i != v3; ++i )
    {
      v5 = i;
      v6 = *(_QWORD **)(v1 + 1672);
      v7 = getn_func(v5);
      result = sub_5B9D80(v6, v7);
    }
  }
  return result;
}
