__int64 __fastcall sub_47ECF0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edx
  __int64 result; // rax
  bool v7; // zf
  int *v8; // rbx
  int v9; // edx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3
    || *(_QWORD *)(a2 + 48) != v3
    || (v4 = 160 * a3, *(_BYTE *)(*(_QWORD *)(a1 + 40) + 160 * a3 + 156))
    || !*(_BYTE *)(*(_QWORD *)(a2 + 40) + v4 + 156) )
  {
    if ( !under_debugger )
      interr(1937);
    BUG();
  }
  switch_dbctx(*(int *)(a1 + 8));
  v5 = *(_DWORD *)(a2 + 12);
  result = v4 + *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a2 + 40) + v4 == 0;
  v8 = (int *)(*(_QWORD *)(a2 + 40) + v4);
  *(_QWORD *)(result + 136) = v8;
  *(_DWORD *)(result + 152) = v5;
  v9 = -1;
  if ( !v7 )
    v9 = *v8;
  *(_DWORD *)(result + 144) = v9;
  return result;
}

