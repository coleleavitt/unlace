__int64 __fastcall sub_9CECD0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 i; // rbp
  unsigned int v7; // edx

  result = sub_9CE820(a1, (__int64)a2, a3, 1);
  v5 = *a3;
  if ( v5 )
  {
    result = 5LL * *(unsigned int *)(v5 - 4);
    for ( i = v5 + 40LL * *(unsigned int *)(v5 - 4); v5 != i; v5 += 40 )
    {
      v7 = *(_DWORD *)(v5 + 32);
      if ( v7 != -1 )
        result = sub_9C0640(a1, a2, v7);
    }
  }
  return result;
}

