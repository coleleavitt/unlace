__int64 __fastcall sub_20949C0(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rbx
  int v3; // r12d
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 *v7; // r12
  __int64 result; // rax
  unsigned __int64 *i; // r13
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  __int64 *v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax

  v2 = (__int64 *)*a1;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = *(unsigned int *)(*a1 + 8LL);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 12LL) )
  {
    sub_2237220(*a1, v2 + 2, v4 + 1, 4);
    v4 = *((unsigned int *)v2 + 2);
  }
  *(_DWORD *)(*v2 + 4 * v4) = v3;
  v5 = *((unsigned int *)v2 + 3);
  v6 = (unsigned int)(*((_DWORD *)v2 + 2) + 1);
  *((_DWORD *)v2 + 2) = v6;
  if ( v6 + 1 > v5 )
  {
    sub_2237220(v2, v2 + 2, v6 + 1, 4);
    v6 = *((unsigned int *)v2 + 2);
  }
  *(_DWORD *)(*v2 + 4 * v6) = 0;
  v7 = *(unsigned __int64 **)a2;
  ++*((_DWORD *)v2 + 2);
  result = *(unsigned int *)(a2 + 8);
  for ( i = &v7[result]; i != v7; ++*((_DWORD *)v12 + 2) )
  {
    while ( 1 )
    {
      v12 = (__int64 *)*a1;
      v13 = *v7;
      v14 = *(unsigned int *)(*a1 + 8LL);
      if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 12LL) )
      {
        sub_2237220(*a1, v12 + 2, v14 + 1, 4);
        v14 = *((unsigned int *)v12 + 2);
      }
      *(_DWORD *)(*v12 + 4 * v14) = v13;
      v10 = HIDWORD(v13);
      v11 = *((unsigned int *)v12 + 3);
      result = (unsigned int)(*((_DWORD *)v12 + 2) + 1);
      *((_DWORD *)v12 + 2) = result;
      if ( result + 1 > v11 )
        break;
      ++v7;
      *(_DWORD *)(*v12 + 4 * result) = v10;
      ++*((_DWORD *)v12 + 2);
      if ( i == v7 )
        return result;
    }
    ++v7;
    sub_2237220(v12, v12 + 2, result + 1, 4);
    result = *v12;
    *(_DWORD *)(*v12 + 4LL * *((unsigned int *)v12 + 2)) = v10;
  }
  return result;
}
