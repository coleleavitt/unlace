__int64 __fastcall sub_DFAF90(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int **v2; // r14
  unsigned int **i; // r13
  unsigned int *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax

  result = a1[4];
  if ( result )
  {
    v2 = *(unsigned int ***)(result + 80);
    result = *(unsigned int *)(result + 88);
    for ( i = &v2[18 * result]; i != v2; v2 += 18 )
    {
      v4 = *v2;
      v5 = (__int64)&(*v2)[4 * *((unsigned int *)v2 + 2)];
      if ( *v2 != (unsigned int *)v5 )
      {
        do
        {
          v6 = *v4;
          v4 += 4;
          result = sub_DFDFB0(a1[2], a1[20] + v6 - 40);
        }
        while ( (unsigned int *)v5 != v4 );
      }
    }
  }
  return result;
}

