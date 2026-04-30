__int64 __fastcall pl_chooser_t__::vfunc_4(_QWORD *a1, const char *a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rdi
  unsigned int i; // ebx
  __int64 j; // rsi
  __int64 v7; // rsi
  __int64 problem; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax

  v3 = a1 + 23;
  v4 = a1[23];
  if ( v4 )
  {
    a1[24] = 0;
    qfree(v4, a2);
    a1[23] = 0;
    a1[25] = 0;
  }
  for ( i = 1; i != 17; ++i )
  {
    for ( j = 0; ; j = problem + 1 )
    {
      problem = get_problem(i, j);
      if ( problem == -1 )
        break;
      v9 = a1[24];
      v10 = a1[23];
      if ( a1[25] < (unsigned __int64)(v9 + 1) )
      {
        v11 = qvector_reserve(v3, v10, v9 + 1, 16);
        a1[23] = v11;
        v10 = v11;
        v9 = a1[24];
      }
      v7 = 16 * v9 + v10;
      *(_QWORD *)v7 = -1;
      *(_BYTE *)(v7 + 8) = 1;
      ++a1[24];
      *(_QWORD *)v7 = problem;
      *(_BYTE *)(v7 + 8) = i;
    }
  }
  return 1;
}
