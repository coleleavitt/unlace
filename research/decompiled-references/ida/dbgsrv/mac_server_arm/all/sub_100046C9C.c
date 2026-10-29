/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046C9C
// Address: 0x0000000100046C9C

//----- (0000000100046C9C) ----------------------------------------------------
__int64 __fastcall sub_100046C9C(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v9; // w24
  __int64 result; // x0
  __int64 *v16; // x23
  _QWORD *(__fastcall **v17)(_QWORD *); // x8
  __int64 v18; // x9
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  __int64 v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7

  v9 = a6;
  if ( dword_10009CAF0 == -1 )
  {
    dword_10009CAF0 = qgetenv("IDA_IDB_BIN_SEARCH", nullptr);
    if ( dword_10009CAF0 )
      return 0;
  }
  else if ( dword_10009CAF0 )
  {
    return 0;
  }
  sub_1000560A0(a1, "dbg_bin_search %a..%a\n", a3, a4, (__int64)a5, a6, a7, a8, a3);
  result = 0;
  if ( a3 >= a4 || !a5[1] )
    return result;
  if ( !*(_QWORD *)(a1 + 384) )
    return 0;
  v16 = (__int64 *)operator new(0x1098u);
  sub_100046E40((__int64)v16, a2, a1, a5, v9, a7);
  if ( (v9 & 0x10) != 0 )
  {
    v18 = 0;
    v17 = &off_10009A970;
  }
  else
  {
    v17 = &off_10009AA20;
    v18 = 4096;
  }
  *v16 = (__int64)v17;
  v16[530] = v18;
  result = ((__int64 (__fastcall *)(__int64 *, unsigned __int64, unsigned __int64))v17[2])(v16, a3, a4);
  if ( (_DWORD)result == -7 )
  {
    v25 = v16[522];
    if ( v25 != -1 )
    {
      sub_1000560A0(a1, "dbg_bin_search failed to read memory at %a\n", v19, v20, v21, v22, v23, v24, v16[522]);
      if ( a7 )
      {
        if ( *(_QWORD *)(a7 + 8) <= 1u )
          sub_10000273C((char **)a7, "Failed to read memory at %a\n", v26, v27, v28, v29, v30, v31, v25);
      }
    }
    return 4294967289LL;
  }
  return result;
}
// 100046D14: variable 'a3' is possibly undefined
// 100046D14: variable 'a4' is possibly undefined
// 100046D14: variable 'a5' is possibly undefined
// 100046D14: variable 'a6' is possibly undefined
// 100046D14: variable 'a7' is possibly undefined
// 100046D14: variable 'a8' is possibly undefined
// 100046DF8: variable 'v19' is possibly undefined
// 100046DF8: variable 'v20' is possibly undefined
// 100046DF8: variable 'v21' is possibly undefined
// 100046DF8: variable 'v22' is possibly undefined
// 100046DF8: variable 'v23' is possibly undefined
// 100046DF8: variable 'v24' is possibly undefined
// 100046E1C: variable 'v26' is possibly undefined
// 100046E1C: variable 'v27' is possibly undefined
// 100046E1C: variable 'v28' is possibly undefined
// 100046E1C: variable 'v29' is possibly undefined
// 100046E1C: variable 'v30' is possibly undefined
// 100046E1C: variable 'v31' is possibly undefined
// 10009A970: using guessed type _QWORD *(__fastcall *off_10009A970)(_QWORD *);
// 10009AA20: using guessed type _QWORD *(__fastcall *off_10009AA20)(_QWORD *);
// 10009CAF0: using guessed type int dword_10009CAF0;
