void __fastcall sub_4C9B70(__int64 a1, __int64 *a2)
{
  unsigned int *v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // r10
  unsigned int *v6; // rax
  __int64 v7; // rcx

  v2 = *(unsigned int **)(a1 - 8);
  if ( v2 )
  {
    v3 = *(v2 - 1);
    if ( v3 > 1 )
    {
      v4 = *a2;
      v5 = *(_QWORD *)(*a2 + 8LL * *v2);
      v6 = *(unsigned int **)(a1 - 8);
      do
      {
        v7 = v6[1];
        *(_QWORD *)(v4 + 8LL * *v6++) = *(_QWORD *)(v4 + 8 * v7);
      }
      while ( &v2[v3 - 1] != v6 );
      *(_QWORD *)(v4 + 8LL * v2[v3 - 1]) = v5;
    }
  }
}

