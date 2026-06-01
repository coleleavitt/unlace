void __fastcall sub_AB0E50(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r8

  v2 = *(unsigned int **)(a2 + 24);
  if ( v2 )
  {
    v3 = (__int64 *)(v2 + 4);
    v4 = (__int64)&v2[2 * *v2 + 4];
    if ( (unsigned int *)v4 != v2 + 4 )
    {
      do
      {
        v5 = *v3++;
        sub_AB0990(a1 + 8, &byte_22CD811, 0, a1, v5);
      }
      while ( (__int64 *)v4 != v3 );
    }
  }
}

