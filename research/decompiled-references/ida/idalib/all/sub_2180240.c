unsigned __int64 __fastcall sub_2180240(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 result; // rax
  __int64 i; // rdx

  v2 = *a1;
  result = *(unsigned int *)(*a1 + 8LL);
  if ( result != a2 )
  {
    if ( result > a2 )
    {
      *(_DWORD *)(v2 + 8) = a2;
    }
    else
    {
      if ( a2 > *(unsigned int *)(v2 + 12) )
      {
        sub_2237220(*a1, v2 + 16, a2, 16);
        result = *(unsigned int *)(v2 + 8);
      }
      result = *(_QWORD *)v2 + 16 * result;
      for ( i = 16 * a2 + *(_QWORD *)v2; i != result; *(_DWORD *)(result - 4) = 0 )
      {
        *(_DWORD *)result = 0;
        result += 16LL;
        *(_DWORD *)(result - 12) = 0;
        *(_DWORD *)(result - 8) = 0;
      }
      *(_DWORD *)(v2 + 8) = a2;
    }
  }
  return result;
}
