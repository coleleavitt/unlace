__int64 __fastcall set_debug_names(unsigned int *a1, __int64 *a2, int a3)
{
  __int64 *v3; // rbx
  unsigned int v5; // r12d
  __int64 *v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdi

  if ( a3 <= 0 )
    return 0;
  v3 = a2;
  v5 = 0;
  v6 = &a2[a3];
  do
  {
    v7 = *v3;
    v8 = *a1;
    ++v3;
    ++a1;
    v5 += (unsigned __int8)set_debug_name(v8, v7);
  }
  while ( v3 != v6 );
  return v5;
}

