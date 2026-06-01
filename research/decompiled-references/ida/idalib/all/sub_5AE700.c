unsigned __int64 __fastcall sub_5AE700(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || (v4 = 32 * a3, v5 = v4 + *(_QWORD *)(a1 + 40), *(_QWORD *)(v5 + 8) > 1u)
    || *(_DWORD *)(v5 + 24)
    || (v6 = v4 + *(_QWORD *)(a2 + 40), *(_QWORD *)(v6 + 8) <= 1u) && !*(_DWORD *)(v6 + 24) )
  {
    if ( !under_debugger )
      interr(1937);
    BUG();
  }
  v8 = v4;
  switch_dbctx(*(int *)(a1 + 8));
  return sub_5AE600(v8 + *(_QWORD *)(a1 + 40), v8 + *(_QWORD *)(a2 + 40), a1, a2);
}
