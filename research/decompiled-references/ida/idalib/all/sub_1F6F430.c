__int64 __fastcall sub_1F6F430(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 result; // rax
  __int64 *v4; // r14
  __int64 v5; // r15

  sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned int *)(a2 + 32));
  v2 = *(__int64 **)(a2 + 24);
  result = *(_QWORD *)(a2 + 32);
  v4 = &v2[result];
  if ( v4 != v2 )
  {
    result = *(unsigned int *)(a1 + 32);
    do
    {
      v5 = *v2;
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
      {
        sub_2237220(a1 + 24, a1 + 40, result + 1, 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * *(unsigned int *)(a1 + 32)) = v5;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * result) = v5;
      }
      ++v2;
      result = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
      *(_DWORD *)(a1 + 32) = result;
    }
    while ( v4 != v2 );
  }
  return result;
}
