/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BD10
// Address: 0x000000000048BD10

//----- (000000000048BD10) ----------------------------------------------------
__int64 __fastcall sub_48BD10(__int64 a1, void *dest, size_t a3)
{
  __int64 result; // x0
  __int64 v6; // x1
  size_t v7; // x23
  __int64 v8; // x2
  __int64 v9; // x4
  unsigned __int64 v10; // x3
  __int64 v11; // x5
  int v12; // w19
  int v13; // w24
  int v14; // w27
  __int64 v15; // x2
  unsigned __int64 v16; // x21
  unsigned __int64 v17; // x0
  unsigned __int64 v18; // x1
  __int64 v19; // x2
  __int64 i; // x1
  unsigned __int64 v21; // x2
  char v22; // w0

  if ( (a3 & 0x8000000000000000LL) != 0 )
  {
    result = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(1225);
    __break(0x3E8u);
  }
  else
  {
    result = 0;
    v6 = *(_QWORD *)(a1 + 24);
    if ( (v6 & 0x8000000000000000LL) == 0 )
    {
      v7 = a3;
      v8 = a3 + v6;
      v9 = *(_QWORD *)(a1 + 24);
      if ( v6 <= v8 )
      {
        v10 = *(_QWORD *)(a1 + 48);
        if ( v10 )
        {
          v11 = *(_QWORD *)(a1 + 16);
          if ( v8 <= v11 )
          {
LABEL_15:
            v12 = v6 / v10;
            v13 = (v10 - 1 + v8) / v10;
            if ( v13 >= v12 )
            {
              v14 = -1;
              while ( 1 )
              {
                if ( v13 == v12
                  || (((int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)v12 >> 3)) >> (v12 & 7)) & 1) != 0 )
                {
                  if ( v14 != -1 )
                  {
                    v15 = *(_QWORD *)(a1 + 48);
                    v16 = v14;
                    v17 = *(_QWORD *)(a1 + 16);
                    v18 = v12 * v15;
                    v19 = v14 * v15;
                    if ( v17 > v18 )
                      LODWORD(v17) = v18;
                    if ( (int)v17 - (int)v19 < 0
                      || (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64, _QWORD))(a1 + 8))(
                           *(_QWORD *)(a1 + 8),
                           v19,
                           *(_QWORD *)(a1 + 40) + v19,
                           (int)v17 - (int)v19) != (_DWORD)v17 - (_DWORD)v19 )
                    {
                      return -1;
                    }
                    if ( v14 < v12 )
                    {
                      for ( i = v14 + 1LL; ; ++i )
                      {
                        v21 = v16 >> 3;
                        v22 = v16 & 7;
                        v16 = i;
                        *(_BYTE *)(*(_QWORD *)(a1 + 32) + v21) |= 1 << v22;
                        if ( (unsigned int)(v12 - 1 - v14) + v14 + 1LL == i )
                          break;
                      }
                    }
                  }
                  v14 = -1;
                }
                else if ( v14 == -1 )
                {
                  v14 = v12;
                }
                if ( v13 < ++v12 )
                {
                  v9 = *(_QWORD *)(a1 + 24);
                  break;
                }
              }
            }
            memcpy(dest, (const void *)(*(_QWORD *)(a1 + 40) + v9), v7);
            goto LABEL_9;
          }
          if ( v6 < v11 )
          {
            v7 = v11 - v6;
            v8 = *(_QWORD *)(a1 + 16);
            goto LABEL_15;
          }
        }
        else
        {
          result = (***(__int64 (__fastcall ****)(_QWORD, __int64, void *, size_t))(a1 + 8))(
                     *(_QWORD *)(a1 + 8),
                     v6,
                     dest,
                     v7);
          v7 = result;
          if ( (result & 0x8000000000000000LL) == 0 )
          {
LABEL_9:
            result = v7;
            *(_QWORD *)(a1 + 24) += v7;
          }
        }
      }
    }
  }
  return result;
}
// 52451C: using guessed type char under_debugger;
