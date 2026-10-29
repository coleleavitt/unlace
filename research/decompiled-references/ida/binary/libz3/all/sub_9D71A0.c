__int64 __fastcall sub_9D71A0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int *v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rdx

  result = a2;
  v3 = (unsigned int *)(*(_QWORD *)(a1 + 1008) + 4LL * a2);
  v4 = *(_DWORD *)(a1 + 1000);
  if ( v4 >= *v3 )
  {
    result = *(_QWORD *)(a1 + 696) + 24LL * a2;
    if ( *(_DWORD *)(result + 12) != -1 )
    {
      result = *(_QWORD *)(a1 + 992);
      *v3 = v4 + 1;
      if ( !result || (v5 = *(unsigned int *)(result - 4), (_DWORD)v5 == *(_DWORD *)(result - 8)) )
      {
        sub_2FD3F0((unsigned int **)(a1 + 992));
        result = *(_QWORD *)(a1 + 992);
        *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = a2;
      }
      else
      {
        *(_DWORD *)(result + 4 * v5) = a2;
        ++*(_DWORD *)(result - 4);
      }
    }
  }
  return result;
}

