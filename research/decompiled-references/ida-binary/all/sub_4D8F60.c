__int64 __fastcall sub_4D8F60(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int8 *v5; // rbx
  __int64 v6; // rbp
  unsigned __int8 *v7; // r12
  int v8; // edi
  __int64 v10; // rdx

  if ( a2 == -1 )
  {
    if ( under_debugger )
      BUG();
    interr(40527, -1, a3, a4, a5);
    return sub_4D8FE0(40527, -1, v10);
  }
  else
  {
    v5 = a1;
    v6 = 0;
    if ( a1 && a2 )
    {
      v7 = &a1[a2];
      do
      {
        v8 = *v5++;
        v6 |= 1LL << toupper(v8);
      }
      while ( v5 != v7 );
    }
    return v6;
  }
}
