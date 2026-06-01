unsigned __int64 __fastcall sub_5000D0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned int *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = *(_DWORD *)(a1 + 72);
  v3 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8 * a2);
  v4 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1576);
  if ( !*(_BYTE *)(v4 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v5 = v2 - *(_DWORD *)(*(_QWORD *)(v4 + 8) + 68LL);
  if ( v5 >= *(_QWORD *)(v4 + 40) )
    sub_4FC970();
  v6 = v5 << 6;
  *(_DWORD *)(*(_QWORD *)(v4 + 32) + v6 + 56) = v2;
  return sub_4FFCC0((__int64 *)(*(_QWORD *)(v4 + 32) + v6), *v3, v3[1]);
}

