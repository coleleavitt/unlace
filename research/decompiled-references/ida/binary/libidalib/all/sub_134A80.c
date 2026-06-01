__int64 __fastcall sub_134A80(_QWORD *a1)
{
  int i; // ebx
  __int64 v2; // rsi
  __int64 problem; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  if ( a1[23] )
  {
    a1[24] = 0;
    qfree();
    a1[23] = 0;
    a1[25] = 0;
  }
  for ( i = 1; i != 17; ++i )
  {
    while ( 1 )
    {
      problem = get_problem();
      if ( problem == -1 )
        break;
      v4 = a1[24];
      v5 = a1[23];
      if ( a1[25] < (unsigned __int64)(v4 + 1) )
      {
        v6 = qvector_reserve();
        a1[23] = v6;
        v5 = v6;
        v4 = a1[24];
      }
      v2 = 16 * v4 + v5;
      *(_QWORD *)v2 = -1;
      *(_BYTE *)(v2 + 8) = 1;
      ++a1[24];
      *(_QWORD *)v2 = problem;
      *(_BYTE *)(v2 + 8) = i;
    }
  }
  return 1;
}

