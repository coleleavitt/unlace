/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459BF8
// Address: 0x0000000000459BF8

//----- (0000000000459BF8) ----------------------------------------------------
__int64 __fastcall sub_459BF8(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // x0
  unsigned __int64 *v6; // x19
  unsigned __int64 *v7; // x2
  unsigned __int64 v8; // x20
  unsigned __int64 v9; // x25
  double v10; // d0
  double v11; // d1
  __int64 result; // x0
  _QWORD *v13; // x0
  _QWORD *v14; // x19
  unsigned __int64 v15; // x25
  __int64 v16; // x26
  double v17; // d0
  double v18; // d1
  char v19; // [xsp+57h] [xbp-9h] BYREF

  v5 = (_QWORD *)a1[2];
  v6 = (unsigned __int64 *)v5[57];
  v7 = &v6[10 * v5[58]];
  if ( v6 >= v7 )
  {
LABEL_12:
    if ( v7 == v6 )
      return 0xFFFFFFFFLL;
LABEL_13:
    v8 = *v6;
  }
  else
  {
    while ( 1 )
    {
      v8 = *v6;
      if ( a2 < *v6 )
        break;
      if ( a2 < v6[1] )
      {
        v8 = a2;
        if ( a2 != -1 )
          goto LABEL_4;
        goto LABEL_13;
      }
      v6 += 10;
      if ( v6 >= v7 )
        goto LABEL_12;
    }
  }
  if ( a3 <= v8 )
    return 0xFFFFFFFFLL;
LABEL_4:
  if ( v6[1] > a3 )
    v9 = a3;
  else
    v9 = v6[1];
  if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v5 + 288LL))(
         v5,
         v8,
         &v19,
         1,
         0) != 1 )
  {
    sub_45CDF8(a1[2], (__int64)"dbg_bin_search memory range %a..%a is unreadable, skip it\n", v10, v11);
LABEL_16:
    v13 = (_QWORD *)a1[2];
    v14 = v6 + 10;
    if ( (unsigned __int64)v14 >= v13[57] + 80LL * v13[58] )
      return 0xFFFFFFFFLL;
    v15 = v14[1];
    if ( a3 < v15 )
      return 0xFFFFFFFFLL;
    do
    {
      v16 = *v14;
      if ( (*(__int64 (__fastcall **)(_QWORD *, _QWORD, char *, __int64, _QWORD))(*v13 + 288LL))(v13, *v14, &v19, 1, 0) == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64))(*a1 + 24))(a1, v16, v15);
        if ( (_DWORD)result != -1 )
          return result;
      }
      else
      {
        sub_45CDF8(a1[2], (__int64)"dbg_bin_search memory range %a..%a is unreadable, skip it\n", v17, v18);
      }
      v13 = (_QWORD *)a1[2];
      v14 += 10;
      if ( (unsigned __int64)v14 >= v13[57] + 80LL * v13[58] )
        break;
      v15 = v14[1];
    }
    while ( v15 <= a3 );
    return 0xFFFFFFFFLL;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v8, v9);
  if ( (_DWORD)result == -1 )
    goto LABEL_16;
  return result;
}
// 459BF8: could not find valid save-restore pair for x25
// 459BF8: could not find valid save-restore pair for x26
// 459D2C: variable 'v10' is possibly undefined
// 459D2C: variable 'v11' is possibly undefined
// 459E04: variable 'v17' is possibly undefined
// 459E04: variable 'v18' is possibly undefined
