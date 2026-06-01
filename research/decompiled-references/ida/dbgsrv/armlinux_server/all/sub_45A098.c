/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A098
// Address: 0x000000000045A098

//----- (000000000045A098) ----------------------------------------------------
__int64 __fastcall sub_45A098(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // x0
  unsigned __int64 v6; // x3
  __int64 v7; // x1
  unsigned __int64 *v8; // x19
  __int64 result; // x0
  unsigned __int64 v10; // x1
  __int64 v11; // x20
  unsigned __int64 v12; // x25
  double v13; // d0
  double v14; // d1
  _QWORD *v15; // x0
  unsigned __int64 *v16; // x20
  unsigned __int64 i; // x26
  unsigned __int64 v18; // x19
  double v19; // d0
  double v20; // d1
  char v21; // [xsp+57h] [xbp-9h] BYREF

  v5 = (_QWORD *)a1[2];
  v6 = v5[57];
  v7 = 80LL * v5[58] - 80;
  v8 = (unsigned __int64 *)(v6 + v7);
  if ( v6 + v7 < v6 )
    return 0xFFFFFFFFLL;
  if ( a3 <= *(_QWORD *)(v6 + v7) )
  {
    do
    {
      v8 -= 10;
      if ( (unsigned __int64)v8 < v6 )
        return 0xFFFFFFFFLL;
    }
    while ( *v8 >= a3 );
  }
  v10 = v8[1];
  v11 = v10 > a3 ? a3 : v8[1];
  if ( v11 == -1 )
    return 0xFFFFFFFFLL;
  v12 = *v8;
  if ( a2 >= *v8 && v10 > a2 )
    v12 = a2;
  if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v5 + 288LL))(
         v5,
         v12,
         &v21,
         1,
         0) != 1 )
  {
    sub_45CDF8(a1[2], (__int64)"dbg_bin_search memory range %a..%a is unreadable, skip it\n", v13, v14);
    goto LABEL_19;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64))(*a1 + 24))(a1, v12, v11);
  if ( (_DWORD)result == -1 )
  {
LABEL_19:
    v15 = (_QWORD *)a1[2];
    v16 = v8 - 10;
    if ( (unsigned __int64)(v8 - 10) >= v15[57] )
    {
      for ( i = *(v8 - 9); i > a2; i = v16[1] )
      {
        v18 = *v16;
        if ( *v16 < a2 )
          v18 = a2;
        if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v15 + 288LL))(
               v15,
               v18,
               &v21,
               1,
               0) == 1 )
        {
          result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v18, i);
          if ( (_DWORD)result != -1 )
            return result;
        }
        else
        {
          sub_45CDF8(a1[2], (__int64)"dbg_bin_search memory range %a..%a is unreadable, skip it\n", v19, v20);
        }
        v15 = (_QWORD *)a1[2];
        v16 -= 10;
        if ( (unsigned __int64)v16 < v15[57] )
          break;
      }
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}
// 45A098: could not find valid save-restore pair for x25
// 45A1C8: variable 'v13' is possibly undefined
// 45A1C8: variable 'v14' is possibly undefined
// 45A298: variable 'v19' is possibly undefined
// 45A298: variable 'v20' is possibly undefined
