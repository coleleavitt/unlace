bool __fastcall sub_7B73C0(__int64 a1)
{
  int v1; // edx
  bool result; // al
  unsigned __int64 *v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v1 = sub_7B6F20(a1);
  result = 0;
  if ( v1 == 3 )
  {
    result = *(_BYTE *)(a1 + 29) & 1;
    if ( result )
    {
      v3 = sub_79A2B0(a1);
      v4 = *v3;
      v5 = *v3 + 8LL * *((unsigned int *)v3 + 2);
      if ( v4 < v5 )
      {
        while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 417 )
        {
          v4 += 8LL;
          if ( v5 == v4 )
            return 0;
        }
      }
      else
      {
        if ( v4 == v5 )
          return 0;
        while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 417 )
        {
          v5 += 8LL;
          if ( v4 == v5 )
            return 0;
        }
      }
      return v4 != v5;
    }
  }
  return result;
}

