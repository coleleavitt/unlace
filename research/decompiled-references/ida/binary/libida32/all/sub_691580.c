char __fastcall sub_691580(__int64 a1)
{
  char result; // al
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbp

  if ( *(_DWORD *)a1 == 2 )
  {
    v2 = *(__int64 **)(a1 + 8);
    result = 0;
    v3 = v2[1];
    if ( (int)v3 <= 127 )
    {
      if ( (int)v3 <= 0 )
      {
        return 1;
      }
      else
      {
        v4 = *v2;
        v5 = *v2 + 24LL * (unsigned int)(v3 - 1) + 24;
        while ( *(_WORD *)(v4 + 16) <= 0x7FFEu )
        {
          result = sub_691580(v4);
          if ( result )
          {
            v4 += 24;
            if ( v4 != v5 )
              continue;
          }
          return result;
        }
        return 0;
      }
    }
  }
  else
  {
    result = 1;
    if ( (unsigned int)(*(_DWORD *)a1 - 3) <= 1 )
      return *(_WORD *)(a1 + 10) <= 0x7FFEu;
  }
  return result;
}

