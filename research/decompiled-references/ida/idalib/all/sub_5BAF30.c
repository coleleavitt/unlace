__int64 __fastcall sub_5BAF30(__m128i *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // rbp

  if ( a4 >= a3 )
  {
    if ( !under_debugger )
      interr(1542);
LABEL_13:
    BUG();
  }
  v6 = sub_5B9070(a1, a2, a3);
  v7 = v6;
  if ( !v6 || *v6 != a3 || a2 != sub_5CAA10(a1) )
    return 0;
  if ( *(unsigned __int64 **)(a2 + 72) != v7 && *(v7 - 2) >= a4 )
  {
    if ( !under_debugger )
      interr(1543);
    goto LABEL_13;
  }
  *v7 = a4;
  return sub_5BA1C0((__int64)a1, a2, 0);
}
