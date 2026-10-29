__int64 __fastcall sub_130B900(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rbp
  size_t v6; // rdx

  result = 0;
  v3 = a1[1];
  v4 = *a1;
  v5 = *a2;
  if ( a2[1] - *a2 == v3 - *a1 )
  {
    if ( v4 == v3 )
    {
      return 1;
    }
    else
    {
      v6 = *(_QWORD *)(v4 + 8);
      if ( *(_QWORD *)(v5 + 8) == v6 )
      {
        do
        {
          if ( v6 && memcmp(*(const void **)v4, *(const void **)v5, v6) )
            return 0;
          v4 += 32;
          v5 += 32;
          if ( v3 == v4 )
            return 1;
          v6 = *(_QWORD *)(v4 + 8);
        }
        while ( v6 == *(_QWORD *)(v5 + 8) );
        return 0;
      }
    }
  }
  return result;
}
