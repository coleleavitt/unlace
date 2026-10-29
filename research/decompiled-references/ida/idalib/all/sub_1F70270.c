unsigned __int64 __fastcall sub_1F70270(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  unsigned __int64 result; // rax
  __int64 *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r12

  v2 = (__int64 *)a2;
  sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned int *)(a2 + 8));
  v3 = *(unsigned int *)(a2 + 8);
  if ( (unsigned int)v3 <= 0x40 )
  {
    result = (unsigned __int64)(v3 + 63) >> 6;
    if ( !result )
      return result;
  }
  else
  {
    v2 = *(__int64 **)a2;
    result = (unsigned __int64)(v3 + 63) >> 6;
  }
  v5 = &v2[result];
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *v2;
      result = *(unsigned int *)(v6 + 8);
      if ( result + 1 > *(unsigned int *)(v6 + 12) )
        break;
      ++v2;
      *(_QWORD *)(*(_QWORD *)v6 + 8 * result) = v7;
      ++*(_DWORD *)(v6 + 8);
      if ( v5 == v2 )
        return result;
    }
    ++v2;
    sub_2237220(*(_QWORD *)(a1 + 16), v6 + 16, result + 1, 8);
    result = *(_QWORD *)v6;
    *(_QWORD *)(*(_QWORD *)v6 + 8LL * (unsigned int)(*(_DWORD *)(v6 + 8))++) = v7;
  }
  while ( v2 != v5 );
  return result;
}
