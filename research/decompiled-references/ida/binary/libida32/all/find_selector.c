__int64 __fastcall find_selector(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned int *v3; // rdx
  unsigned int *v4; // rcx

  result = a1;
  v2 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1568LL);
  v3 = *(unsigned int **)(v2 + 16);
  v4 = &v3[2 * *(_QWORD *)(v2 + 24)];
  if ( v3 != v4 )
  {
    while ( a1 != v3[1] )
    {
      v3 += 2;
      if ( v4 == v3 )
        return result;
    }
    return *v3;
  }
  return result;
}

