__int64 *__fastcall metadata_dumper_t__::vfunc_4(__int64 a1, __int64 a2, char a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rsi
  const char *v8; // rcx
  __int64 v9; // rdi
  const char *v10; // rdx
  __int64 v12; // rax

  v5 = *(__int64 **)(a1 + 56);
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < (unsigned __int64)(v6 + 1) )
  {
    v12 = qvector_reserve(*(_QWORD *)(a1 + 56), v7, v6 + 1, 24);
    v6 = v5[1];
    *v5 = v12;
    v7 = v12;
  }
  v8 = &s1;
  v9 = v7 + 24 * v6;
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 8) = 0;
  ++v5[1];
  if ( *(_QWORD *)(a2 + 8) )
    v8 = *(const char **)a2;
  v10 = "regular";
  if ( a3 )
    v10 = "repeatable";
  return sub_169A50((__int64 *)v9, (__int64)"Function comment (%s): \"%s\"", v10, v8);
}
