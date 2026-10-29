unsigned int *__fastcall sub_8E8B50(__int64 a1, unsigned int *a2)
{
  unsigned int *result; // rax
  __int64 v3; // rdx
  unsigned int *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx

  result = *(unsigned int **)(a1 + 112);
  if ( result[128] == 6 )
  {
    result = a2 + 2;
    v3 = *a2;
    v4 = &a2[v3 + 2];
    if ( v3 * 4 )
    {
      v5 = *(_QWORD *)(a1 + 8864);
      do
      {
        v6 = *result++;
        ++*(_DWORD *)(v5 + 4 * v6);
      }
      while ( v4 != result );
    }
  }
  return result;
}

