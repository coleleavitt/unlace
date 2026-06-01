unsigned __int64 __fastcall sub_52FE90(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(a1 + 32) )
    sub_52F980((__int64 *)a1, 0);
  v3 = *(_QWORD *)(a1 + 16);
  if ( a2 >= v3 )
  {
    if ( !under_debugger )
      interr(913);
    BUG();
  }
  memmove(
    (void *)(*(_QWORD *)(a1 + 8) + 8LL * a2),
    (const void *)(*(_QWORD *)(a1 + 8) + 8LL * a2 + 8),
    8 * (v3 - a2) - 8);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16) - 1LL;
  *(_QWORD *)(a1 + 16) = v5;
  sub_7BE850(a1 + 40, v4, v5, 65);
  return sub_52F890((__int64 *)a1, a2);
}
