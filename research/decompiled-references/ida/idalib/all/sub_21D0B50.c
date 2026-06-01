__int64 __fastcall sub_21D0B50(_QWORD *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 *v3; // r12
  __int64 *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 *v9; // r13
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  __int64 *v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax

  v3 = a2;
  v5 = (__int64 *)*a1;
  v6 = *(unsigned int *)(*a1 + 8LL);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 12LL) )
  {
    sub_2237220(*a1, v5 + 2, v6 + 1, 4);
    v6 = *((unsigned int *)v5 + 2);
  }
  *(_DWORD *)(*v5 + 4 * v6) = a3;
  v7 = *((unsigned int *)v5 + 3);
  result = (unsigned int)(*((_DWORD *)v5 + 2) + 1);
  *((_DWORD *)v5 + 2) = result;
  if ( result + 1 > v7 )
  {
    sub_2237220(v5, v5 + 2, result + 1, 4);
    result = *((unsigned int *)v5 + 2);
  }
  *(_DWORD *)(*v5 + 4 * result) = HIDWORD(a3);
  v9 = &a2[a3];
  ++*((_DWORD *)v5 + 2);
  if ( v9 != a2 )
  {
    do
    {
      while ( 1 )
      {
        v12 = (__int64 *)*a1;
        v13 = *v3;
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
        ++v3;
        *(_DWORD *)(*v12 + 4 * result) = v10;
        ++*((_DWORD *)v12 + 2);
        if ( v9 == v3 )
          return result;
      }
      ++v3;
      sub_2237220(v12, v12 + 2, result + 1, 4);
      result = *v12;
      *(_DWORD *)(*v12 + 4LL * (unsigned int)(*((_DWORD *)v12 + 2))++) = v10;
    }
    while ( v9 != v3 );
  }
  return result;
}
