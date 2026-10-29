__int64 __fastcall sub_39D4C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r12

  result = sub_4EE820(a1 + 1624, a2);
  if ( result )
  {
    v3 = result;
    if ( *(char *)(result + 9) < 0 )
    {
      sub_5AD260(a1, result);
      result = *(unsigned int *)(v3 + 20);
      if ( (int)result > 0 )
      {
        v4 = 0;
        do
        {
          result = *(_QWORD *)(v3 + 24);
          if ( *(_DWORD *)(v3 + 16) != *(_DWORD *)(result + 4 * v4) )
          {
            result = sub_5AFCE0(a1);
            v5 = result;
            if ( result )
            {
              result = sub_5AE850(a1, result);
              if ( (_DWORD)result != -1 )
              {
                result = sub_3BCA60(a1, (unsigned int)result, (unsigned int)a2, sub_39AFB0, 0);
                if ( (_DWORD)a2 == (_DWORD)result && (*(_BYTE *)(v5 + 10) & 4) != 0 )
                {
                  reanalyze_function(v5, 0, 0xFFFFFFFFLL, 0);
                  *(_QWORD *)(v5 + 8) &= ~0x40000uLL;
                  result = update_func(v5);
                }
              }
            }
          }
          ++v4;
        }
        while ( *(_DWORD *)(v3 + 20) > (int)v4 );
      }
    }
  }
  return result;
}

