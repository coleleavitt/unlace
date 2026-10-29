__int64 __fastcall sub_59FCF0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r13
  __int64 result; // rax
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rbp
  __int64 v8; // rax

  v1 = *(int *)(a1 + 8);
  v2 = switch_dbctx(v1);
  result = get_func_qty(v1);
  if ( result )
  {
    v4 = result;
    for ( i = 0; i != v4; ++i )
    {
      v6 = i;
      v7 = *(_QWORD **)(v2 + 1480);
      v8 = getn_func(v6);
      result = sub_59F920(v7, v8);
    }
  }
  return result;
}

