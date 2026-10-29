/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047008
// Address: 0x0000000100047008

//----- (0000000100047008) ----------------------------------------------------
__int64 __fastcall sub_100047008(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // x0
  unsigned __int64 v6; // x8
  unsigned __int64 *v7; // x24
  unsigned __int64 v8; // x9
  unsigned __int64 v9; // t1
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x21
  unsigned __int64 v12; // x10
  unsigned __int64 v13; // x22
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  __int64 result; // x0
  _QWORD *v21; // x0
  unsigned __int64 v22; // x22
  unsigned __int64 v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  char v30; // [xsp+16h] [xbp-3Ah] BYREF
  char v31; // [xsp+17h] [xbp-39h] BYREF

  v5 = (_QWORD *)a1[2];
  v6 = v5[47];
  v7 = (unsigned __int64 *)(v6 + 80LL * v5[48] - 80);
  while ( (unsigned __int64)v7 >= v6 )
  {
    v9 = *v7;
    v7 -= 10;
    v8 = v9;
    if ( v9 < a3 )
    {
      v10 = v7[11];
      if ( v10 >= a3 )
        v11 = a3;
      else
        v11 = v7[11];
      if ( v11 != -1 )
      {
        if ( v8 <= a2 )
          v12 = a2;
        else
          v12 = v8;
        if ( v10 <= a2 )
          v13 = v8;
        else
          v13 = v12;
        if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v5 + 288LL))(
               v5,
               v13,
               &v30,
               1,
               0) == 1 )
        {
          result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v13, v11);
          if ( (_DWORD)result != -1 )
            return result;
        }
        else
        {
          sub_1000560A0(
            a1[2],
            "dbg_bin_search memory range %a..%a is unreadable, skip it\n",
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v13);
        }
        v21 = (_QWORD *)a1[2];
        if ( (unsigned __int64)v7 >= v21[47] )
        {
          while ( 1 )
          {
            v22 = v7[1];
            if ( v22 <= a2 )
              break;
            if ( *v7 <= a2 )
              v23 = a2;
            else
              v23 = *v7;
            if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v21 + 288LL))(
                   v21,
                   v23,
                   &v31,
                   1,
                   0) == 1 )
            {
              result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(
                         a1,
                         v23,
                         v22);
              if ( (_DWORD)result != -1 )
                return result;
            }
            else
            {
              sub_1000560A0(
                a1[2],
                "dbg_bin_search memory range %a..%a is unreadable, skip it\n",
                v24,
                v25,
                v26,
                v27,
                v28,
                v29,
                v23);
            }
            v7 -= 10;
            v21 = (_QWORD *)a1[2];
            if ( (unsigned __int64)v7 < v21[47] )
              return 0xFFFFFFFFLL;
          }
        }
      }
      return 0xFFFFFFFFLL;
    }
  }
  return 0xFFFFFFFFLL;
}
// 1000470DC: variable 'v14' is possibly undefined
// 1000470DC: variable 'v15' is possibly undefined
// 1000470DC: variable 'v16' is possibly undefined
// 1000470DC: variable 'v17' is possibly undefined
// 1000470DC: variable 'v18' is possibly undefined
// 1000470DC: variable 'v19' is possibly undefined
// 10004713C: variable 'v24' is possibly undefined
// 10004713C: variable 'v25' is possibly undefined
// 10004713C: variable 'v26' is possibly undefined
// 10004713C: variable 'v27' is possibly undefined
// 10004713C: variable 'v28' is possibly undefined
// 10004713C: variable 'v29' is possibly undefined
