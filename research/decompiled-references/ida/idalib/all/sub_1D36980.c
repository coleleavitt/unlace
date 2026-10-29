void __fastcall sub_1D36980(__int64 a1)
{
  unsigned int *v2; // rax
  __int64 v3; // rdi
  unsigned int *v4; // rbx
  __int64 v5; // rcx
  unsigned int *v6; // r12
  unsigned int *v7; // rdi

  v2 = *(unsigned int **)(a1 + 48);
  v3 = 56LL * *(unsigned int *)(a1 + 56);
  v4 = &v2[v3];
  if ( v2 != &v2[v3] )
  {
    do
    {
      v5 = *v2;
      v2 += 56;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 240LL) + 8 * v5) = *((_QWORD *)v2 - 1);
    }
    while ( v4 != v2 );
    v6 = *(unsigned int **)(a1 + 48);
    v4 = &v6[v3];
    if ( v6 != &v6[v3] )
    {
      do
      {
        while ( 1 )
        {
          v4 -= 56;
          v7 = *((unsigned int **)v4 + 9);
          if ( v7 == v4 + 22 )
            break;
          free(v7);
          if ( v6 == v4 )
            goto LABEL_6;
        }
      }
      while ( v6 != v4 );
LABEL_6:
      v4 = *(unsigned int **)(a1 + 48);
    }
  }
  if ( v4 != (unsigned int *)(a1 + 64) )
    free(v4);
}
