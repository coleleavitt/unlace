__int64 __fastcall sub_BC0970(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  unsigned int **v7; // rbx
  unsigned int **v8; // r13
  unsigned int v9; // ebp
  unsigned int *v10; // rsi

  v7 = *(unsigned int ***)(a1 + 1048);
  if ( !v7 )
    return 0;
  v8 = &v7[*((unsigned int *)v7 - 1)];
  if ( v8 == v7 )
    return 0;
  v9 = 0;
  do
  {
    v10 = *v7++;
    v9 |= sub_BC0690(a1, v10, a2, a4, a5, a6, a7);
  }
  while ( v8 != v7 );
  return v9;
}

