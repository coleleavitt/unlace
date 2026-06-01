void __fastcall sub_AE0B10(__int64 a1, __int64 a2)
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
        sub_AE05C0((char *)(a1 + 8), (char *)&byte_22F0C30, 0, a1, v5);
      }
      while ( (__int64 *)v4 != v3 );
    }
  }
}
