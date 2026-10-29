__int64 __fastcall sub_180460(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 *v2; // rbx
  __int64 v3; // rbp
  unsigned __int8 *v4; // rsi
  const __int32_t *v5; // rdi
  __int64 v6; // rax

  if ( a2 == -1 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_1804E0(40527);
  }
  else
  {
    v2 = a1;
    v3 = 0;
    if ( a1 && a2 )
    {
      v4 = &a1[a2];
      v5 = *__ctype_toupper_loc();
      do
      {
        v6 = *v2++;
        v3 |= 1LL << v5[v6];
      }
      while ( v2 != v4 );
    }
    return v3;
  }
}

