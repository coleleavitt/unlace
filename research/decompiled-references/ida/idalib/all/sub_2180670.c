unsigned __int64 __fastcall sub_2180670(_QWORD *a1, unsigned __int64 a2)
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
        sub_2237220(*a1, v2 + 16, a2, 24);
        result = *(unsigned int *)(v2 + 8);
      }
      result = *(_QWORD *)v2 + 24 * result;
      for ( i = *(_QWORD *)v2 + 24 * a2; i != result; *(_QWORD *)(result - 8) = 0 )
      {
        *(_QWORD *)result = 0;
        result += 24LL;
        *(_DWORD *)(result - 16) = 0;
        *(_DWORD *)(result - 12) = 0;
      }
      *(_DWORD *)(v2 + 8) = a2;
    }
  }
  return result;
}
