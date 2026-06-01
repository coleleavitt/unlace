unsigned __int64 __fastcall sub_517CF0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned __int64 *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = *(_DWORD *)(a1 + 72);
  v3 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16 * a2);
  v4 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 8)) + 1768);
  if ( !*(_BYTE *)(v4 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v5 = v2 - *(_DWORD *)(*(_QWORD *)(v4 + 8) + 68LL);
  if ( v5 >= *(_QWORD *)(v4 + 40) )
    sub_5144F0();
  v6 = v5 << 6;
  *(_DWORD *)(*(_QWORD *)(v4 + 32) + v6 + 56) = v2;
  return sub_5178A0((__int64 *)(*(_QWORD *)(v4 + 32) + v6), *v3, v3[1]);
}
