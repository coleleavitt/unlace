__int64 __fastcall sub_1419FC0(__int64 a1, int a2)
{
  __int64 v2; // rax
  int *v4; // r13
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rbp
  int *v8; // r15

  if ( !a2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 56) == v2 )
    return 0;
  if ( sub_10246C0(*(_QWORD *)(a1 + 8), *(_DWORD *)(v2 - 8), a2) )
    return *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * *(unsigned int *)(a1 + 24) - 4);
  v4 = *(int **)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (__int64)(*(_QWORD *)(a1 + 64) - (_QWORD)v4) >> 3;
  if ( (__int64)(*(_QWORD *)(a1 + 64) - (_QWORD)v4) > 0 )
  {
    while ( 1 )
    {
      v7 = v6 >> 1;
      v8 = &v4[2 * (v6 >> 1)];
      if ( sub_10246C0(v5, *v8, a2) )
      {
        v4 = v8 + 2;
        v7 = v6 - v7 - 1;
        if ( v7 <= 0 )
          return (unsigned int)v4[1];
      }
      else if ( !v7 )
      {
        return (unsigned int)v4[1];
      }
      v6 = v7;
    }
  }
  return (unsigned int)v4[1];
}
