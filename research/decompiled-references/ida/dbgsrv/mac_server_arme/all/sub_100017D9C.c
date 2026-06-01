/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017D9C
// Address: 0x0000000100017D9C

//----- (0000000100017D9C) ----------------------------------------------------
__int64 *__fastcall sub_100017D9C(__int64 *result, _QWORD *a2, int a3)
{
  __int64 *v3; // x21
  __int64 v6; // x23
  unsigned __int64 v7; // x24
  __int64 v8; // x27
  __int64 v9; // x8
  bool v10; // cf
  unsigned __int64 v11; // x8
  __int64 v12; // x8
  int v13; // w9
  int v14; // w10
  int v15; // w9
  __int64 *v17; // x22
  __int64 v18; // x28
  __int64 v19; // x25

  if ( result[3] )
  {
    v3 = result;
    if ( result[1] )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        result = (__int64 *)v3[3];
        if ( result )
        {
          v8 = *v3;
          v9 = result[2];
          v10 = v9 != 0;
          v11 = v9 - 1;
          if ( !v10 )
            v11 = 0;
          if ( v11 > *(unsigned int *)(*v3 + v6) )
          {
            result = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 16))(result);
            if ( *(_BYTE *)result )
            {
              v12 = v8 + v6;
              v13 = *(unsigned __int8 *)(v8 + v6 + 4);
              if ( (~v13 & 0xE) == 0 )
              {
                v14 = v13 & 0x11;
                v15 = *(unsigned __int8 *)(v12 + 5);
                if ( v14 == 1 || v15 != 0 )
                {
                  v17 = result;
                  v18 = *(_QWORD *)(v12 + 8);
                  v19 = a2[5];
                  if ( a3 == 12 && v15 == 1 )
                    (*(void (__fastcall **)(_QWORD *, __int64, __int64 *, bool))(*a2 + 40LL))(
                      a2,
                      v19 + v18,
                      result,
                      (*(_WORD *)(v8 + v6 + 6) & 0xF) == 8);
                  result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*a2 + 8LL))(
                                        a2,
                                        v19 + v18,
                                        v17);
                }
              }
            }
          }
        }
        ++v7;
        v6 += 16;
      }
      while ( v7 < v3[1] );
    }
  }
  return result;
}
// 100017E90: mask 0x11111111 is shortened because w9.4 <= 0xFF
