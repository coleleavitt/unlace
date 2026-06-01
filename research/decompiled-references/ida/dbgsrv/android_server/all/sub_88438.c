/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88438
// Address: 0x0000000000088438

//----- (0000000000088438) ----------------------------------------------------
__int64 __fastcall sub_88438(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // x0
  unsigned __int64 v6; // x9
  unsigned __int64 *v7; // x25
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // t1
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x21
  unsigned __int64 v13; // x22
  double v14; // d0
  double v15; // d1
  __int64 result; // x0
  _QWORD *v17; // x0
  unsigned __int64 v18; // x22
  unsigned __int64 v19; // x23
  double v20; // d0
  double v21; // d1
  __int64 v22; // [xsp+0h] [xbp-50h] BYREF
  __int64 v23; // [xsp+8h] [xbp-48h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (_QWORD *)a1[2];
  v6 = v5[47];
  v7 = (unsigned __int64 *)(v6 + 80LL * v5[48] - 80);
  do
  {
    if ( (unsigned __int64)v7 < v6 )
      return 0xFFFFFFFFLL;
    v9 = *v7;
    v7 -= 10;
    v8 = v9;
  }
  while ( v9 >= a3 );
  v10 = v7[11];
  if ( v10 <= a3 )
    v11 = v7[11];
  else
    v11 = a3;
  if ( v11 == -1 )
    return 0xFFFFFFFFLL;
  if ( v10 <= a2 || v8 > a2 )
    v13 = v8;
  else
    v13 = a2;
  if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v5 + 288LL))(
         v5,
         v13,
         (char *)&v22 + 4,
         1,
         0) != 1 )
  {
    sub_99D18(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v14, v15);
LABEL_18:
    while ( 1 )
    {
      v17 = (_QWORD *)a1[2];
      if ( (unsigned __int64)v7 < v17[47] )
        break;
      v18 = v7[1];
      if ( v18 <= a2 )
        break;
      if ( *v7 <= a2 )
        v19 = a2;
      else
        v19 = *v7;
      if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64 *, __int64, _QWORD))(*v17 + 288LL))(
             v17,
             v19,
             &v22,
             1,
             0) == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v19, v18);
      }
      else
      {
        sub_99D18(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n", v20, v21);
        result = 0xFFFFFFFFLL;
      }
      v7 -= 10;
      if ( (_DWORD)result != -1 )
        return result;
    }
    return 0xFFFFFFFFLL;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v13, v11);
  if ( (_DWORD)result == -1 )
    goto LABEL_18;
  return result;
}
// 88508: variable 'v14' is possibly undefined
// 88508: variable 'v15' is possibly undefined
// 8858C: variable 'v20' is possibly undefined
// 8858C: variable 'v21' is possibly undefined
