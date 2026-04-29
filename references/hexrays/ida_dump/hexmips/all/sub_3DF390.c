unsigned __int64 __fastcall sub_3DF390(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 *i; // r12
  __int64 v7; // rdx
  unsigned __int64 result; // rax

  if ( a5 >= *(_QWORD *)(a1 + 256) || (a5 = *(_QWORD *)(a1 + 248) + 32 * a5) == 0 )
  {
    if ( !under_debugger )
      interr(561, a2, a3, a4, a5);
    BUG();
  }
  v5 = 0;
  for ( i = (__int64 *)(a5 + 8); v5 < a2[1]; result = sub_3DF060((__int64 *)(*a2 + 8 * v7), i) )
    v7 = 3 * v5++;
  return result;
}
