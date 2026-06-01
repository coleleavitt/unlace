/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000CC90
// Address: 0x000000014000CC90

//----- (000000014000CC90) ----------------------------------------------------
__int64 __fastcall sub_14000CC90(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 result; // rax
  _QWORD *v8; // rcx
  _QWORD *i; // rdx
  _QWORD *v10; // r11
  _QWORD *v11; // r9
  __int64 v12; // r8
  __int64 v13; // r10
  _QWORD *v14; // r9
  _QWORD *v15; // r8
  _QWORD *v16; // r10
  __int64 *v17; // r9
  _QWORD *v18; // r8
  __int64 v19; // r10
  _QWORD *v20; // r9
  _QWORD *v21; // r8

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    sub_14006A9C4((__int64)"invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  sub_14000C2B0((__int64)(a1 + 3), 2 * v6, v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  v8 = *(_QWORD **)a1[1];
  for ( i = v8; i != (_QWORD *)v4; v8 = i )
  {
    i = (_QWORD *)*i;
    result = *((unsigned __int8 *)v8 + 23);
    v10 = (_QWORD *)(a1[3]
                   + 16
                   * (a1[6]
                    & (0x100000001B3LL
                     * (result
                      ^ (0x100000001B3LL
                       * (*((unsigned __int8 *)v8 + 22)
                        ^ (0x100000001B3LL
                         * (*((unsigned __int8 *)v8 + 21)
                          ^ (0x100000001B3LL
                           * (*((unsigned __int8 *)v8 + 20)
                            ^ (0x100000001B3LL
                             * (*((unsigned __int8 *)v8 + 19)
                              ^ (0x100000001B3LL
                               * (*((unsigned __int8 *)v8 + 18)
                                ^ (0x100000001B3LL
                                 * (*((unsigned __int8 *)v8 + 17)
                                  ^ (0x100000001B3LL * (*((unsigned __int8 *)v8 + 16) ^ 0xCBF29CE484222325uLL))))))))))))))))));
    v11 = (_QWORD *)*v10;
    if ( *v10 == v4 )
    {
      *v10 = v8;
      v10[1] = v8;
    }
    else
    {
      result = v10[1];
      v12 = v8[2];
      if ( v12 == *(_QWORD *)(result + 16) )
      {
        v13 = *(_QWORD *)result;
        if ( *(_QWORD **)result != v8 )
        {
          v14 = (_QWORD *)v8[1];
          *v14 = i;
          v15 = (_QWORD *)i[1];
          *v15 = v13;
          result = *(_QWORD *)(v13 + 8);
          *(_QWORD *)result = v8;
          *(_QWORD *)(v13 + 8) = v15;
          i[1] = v14;
          v8[1] = result;
        }
        v10[1] = v8;
      }
      else if ( v11 == (_QWORD *)result )
      {
LABEL_12:
        v16 = (_QWORD *)v8[1];
        *v16 = i;
        v17 = (__int64 *)i[1];
        *v17 = result;
        v18 = *(_QWORD **)(result + 8);
        *v18 = v8;
        *(_QWORD *)(result + 8) = v17;
        i[1] = v16;
        v8[1] = v18;
        *v10 = v8;
      }
      else
      {
        while ( 1 )
        {
          result = *(_QWORD *)(result + 8);
          if ( v12 == *(_QWORD *)(result + 16) )
            break;
          if ( v11 == (_QWORD *)result )
            goto LABEL_12;
        }
        v19 = *(_QWORD *)result;
        v20 = (_QWORD *)v8[1];
        *v20 = i;
        v21 = (_QWORD *)i[1];
        *v21 = v19;
        result = *(_QWORD *)(v19 + 8);
        *(_QWORD *)result = v8;
        *(_QWORD *)(v19 + 8) = v21;
        i[1] = v20;
        v8[1] = result;
      }
    }
  }
  return result;
}
