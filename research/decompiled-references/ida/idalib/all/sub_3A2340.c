__int64 __fastcall sub_3A2340(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12

  result = sub_505D70(a1 + 1704, a2);
  if ( result )
  {
    v3 = result;
    if ( *(char *)(result + 17) < 0 )
    {
      sub_5C7D50(a1, result);
      result = *(unsigned int *)(v3 + 32);
      if ( (int)result > 0 )
      {
        v4 = 0;
        do
        {
          result = *(_QWORD *)(v3 + 40);
          if ( *(_QWORD *)(v3 + 24) != *(_QWORD *)(result + 8 * v4) )
          {
            result = sub_5CAA10(a1);
            v5 = result;
            if ( result )
            {
              result = sub_5C9490(a1, result);
              if ( result != -1 )
              {
                result = sub_3C19F0(a1, result, a2, sub_39FD10, 0);
                if ( a2 == result && (*(_BYTE *)(v5 + 18) & 4) != 0 )
                {
                  reanalyze_function(v5, 0, -1, 0);
                  *(_QWORD *)(v5 + 16) &= ~0x40000uLL;
                  result = update_func(v5);
                }
              }
            }
          }
          ++v4;
        }
        while ( *(_DWORD *)(v3 + 32) > (int)v4 );
      }
    }
  }
  return result;
}
