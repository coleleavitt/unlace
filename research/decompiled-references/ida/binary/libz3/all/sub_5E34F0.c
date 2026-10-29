__int64 __fastcall sub_5E34F0(__int64 a1, __int64 a2, __int64 a3, int **a4, unsigned int a5, unsigned int a6)
{
  int *v9; // rcx
  __int64 v10; // rax
  int v12; // r8d
  unsigned int i; // ebx
  int *v14; // rax

  v9 = *a4;
  v10 = *(_QWORD *)(a3 + 8LL * a6 + 80) & 7LL;
  if ( !v9 || !*(v9 - 1) )
    return 0;
  v12 = *v9;
  if ( v10 != 1 )
  {
    for ( i = 0; ; v12 = v14[i] )
    {
      sub_5E3020(a1, a2, a3, a6, v12);
      v14 = *a4;
      ++i;
      if ( !*a4 || i >= *(v14 - 1) )
        break;
    }
    return 0;
  }
  sub_5E3460(a1, a2, a5, a6, v12);
  return 1;
}

