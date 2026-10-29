__int64 __fastcall sub_493810(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edx
  __int64 result; // rax
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 v9; // rdx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || (v4 = 184 * a3, *(_BYTE *)(*(_QWORD *)(a1 + 40) + 184 * a3 + 176))
    || !*(_BYTE *)(*(_QWORD *)(a2 + 40) + v4 + 176) )
  {
    if ( !under_debugger )
      interr(1937);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v5 = *(_DWORD *)(a2 + 12);
  result = v4 + *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a2 + 40) + v4 == 0;
  v8 = (__int64 *)(*(_QWORD *)(a2 + 40) + v4);
  *(_QWORD *)(result + 152) = v8;
  *(_DWORD *)(result + 172) = v5;
  v9 = -1;
  if ( !v7 )
    v9 = *v8;
  *(_QWORD *)(result + 160) = v9;
  return result;
}
