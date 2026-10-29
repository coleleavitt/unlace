__int64 __fastcall sub_A09110(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  __int64 i; // rbx
  __int64 v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  result = *(_QWORD *)(a1 + 336);
  if ( *(_DWORD *)(result + 40) )
  {
    result = *(_QWORD *)(a1 + 32);
    if ( result )
    {
      v2 = *(unsigned int *)(result - 4);
      if ( (int)v2 > 0 )
      {
        for ( i = 0; i != v2; ++i )
        {
          result = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8 * i);
          if ( !result || !*(_DWORD *)(result - 4) )
          {
            result = *(_QWORD *)(a1 + 616);
            if ( !*(_QWORD *)(result + 8 * i) )
            {
              result = *(_QWORD *)(a1 + 624);
              if ( !*(_QWORD *)(result + 8 * i) )
              {
                v4 = 4 * i;
                v5 = 4 * i + *(_QWORD *)(a1 + 592);
                result = (*(_BYTE *)(v5 + 3) >> 4) & 3;
                if ( ((*(_BYTE *)(v5 + 3) >> 4) & 3) != 0 )
                {
                  if ( (_BYTE)result == 1 )
                  {
                    if ( (*(_BYTE *)(v5 + 3) & 0x40) != 0
                      && (result = *(_QWORD *)(*(_QWORD *)(a1 + 568) + 24LL * (*(_DWORD *)v5 & 0xFFFFFFF))) != 0
                      && (v6 = result + 40LL * *(unsigned int *)(result - 4), result != v6) )
                    {
                      while ( *(_DWORD *)(result + 32) == -1
                           || (*(_BYTE *)(result + 20) & 1) == 0 && *(_DWORD *)(result + 16) == 1 )
                      {
                        result += 40;
                        if ( v6 == result )
                          goto LABEL_19;
                      }
                    }
                    else
                    {
LABEL_19:
                      result = sub_A08A40((_QWORD *)a1, i, *(_BYTE *)(a1 + 932));
                    }
                  }
                }
                else
                {
                  result = (__int64)sub_99D0F0((_QWORD *)a1, i);
                  if ( result )
                  {
                    v7 = *(_QWORD *)(a1 + 568) + 24LL * *(unsigned int *)result;
                    sub_A08E70(
                      a1,
                      *(_DWORD *)(v7 + 12),
                      i,
                      (int *)(*(_QWORD *)v7 + 40LL * *(unsigned int *)(result + 4)),
                      *(_BYTE *)(a1 + 932));
                    v8 = *(_QWORD *)(a1 + 592);
                    result = *(_BYTE *)(v8 + v4 + 3) & 0xCF | 0x20u;
                    *(_BYTE *)(v8 + v4 + 3) = *(_BYTE *)(v8 + v4 + 3) & 0xCF | 0x20;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

