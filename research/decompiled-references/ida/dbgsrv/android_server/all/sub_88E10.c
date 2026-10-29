/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88E10
// Address: 0x0000000000088E10

//----- (0000000000088E10) ----------------------------------------------------
__int64 __fastcall sub_88E10(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // x0
  __int64 *v6; // x23
  __int64 *v7; // x8
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x22
  double v11; // d0
  double v12; // d1
  __int64 result; // x0
  _QWORD *i; // x25
  _QWORD *v15; // x0
  unsigned __int64 v16; // x22
  __int64 v17; // x23
  double v18; // d0
  double v19; // d1
  __int64 v20; // [xsp+0h] [xbp-60h] BYREF
  __int64 v21; // [xsp+8h] [xbp-58h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (_QWORD *)a1[2];
  v6 = (__int64 *)v5[47];
  v7 = &v6[10 * v5[48]];
  if ( v6 < v7 )
  {
    v8 = a2;
    do
    {
      if ( *v6 > a2 )
        break;
      v9 = v6[1];
      if ( v9 > a2 )
        goto LABEL_9;
      v6 += 10;
    }
    while ( v6 < v7 );
  }
  if ( v6 != v7 )
  {
    v8 = *v6;
    if ( *v6 < a3 )
    {
      v9 = v6[1];
LABEL_9:
      if ( v9 <= a3 )
        v10 = v9;
      else
        v10 = a3;
      if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v5 + 288LL))(
             v5,
             v8,
             (char *)&v20 + 4,
             1,
             0) == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v8, v10);
        if ( (_DWORD)result != -1 )
          return result;
      }
      else
      {
        sub_99D18(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v11, v12);
      }
      for ( i = v6 + 10; ; i += 10 )
      {
        v15 = (_QWORD *)a1[2];
        if ( (unsigned __int64)i >= v15[47] + 80LL * v15[48] )
          break;
        v16 = i[1];
        if ( v16 > a3 )
          break;
        v17 = *i;
        if ( (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *, __int64, _QWORD))(*v15 + 288LL))(
               v15,
               *i,
               &v20,
               1,
               0) == 1 )
        {
          result = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64))(*a1 + 24))(a1, v17, v16);
        }
        else
        {
          sub_99D18(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v18, v19);
          result = 0xFFFFFFFFLL;
        }
        if ( (_DWORD)result != -1 )
          return result;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
// 88EFC: variable 'v11' is possibly undefined
// 88EFC: variable 'v12' is possibly undefined
// 88F88: variable 'v18' is possibly undefined
// 88F88: variable 'v19' is possibly undefined
