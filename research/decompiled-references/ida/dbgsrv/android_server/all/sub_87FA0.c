/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87FA0
// Address: 0x0000000000087FA0

//----- (0000000000087FA0) ----------------------------------------------------
__int64 __fastcall sub_87FA0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        int a6,
        __int64 a7,
        double a8,
        double a9)
{
  __int64 *v16; // x23
  __int64 (__fastcall **v17)(); // x8
  __int64 v18; // x9
  __int64 result; // x0
  __int64 (__fastcall *v20)(__int64 *, unsigned __int64, unsigned __int64); // x10
  double v21; // d0
  double v22; // d0

  if ( dword_164B2C != -1 )
  {
    if ( !dword_164B2C )
      goto LABEL_5;
    return 0;
  }
  dword_164B2C = qgetenv("IDA_IDB_BIN_SEARCH", 0) & 1;
  if ( dword_164B2C )
    return 0;
LABEL_5:
  sub_99D18(a1, "dbg_bin_search %a..%a\n", a8, a9);
  if ( a3 >= a4 || !a5[1] || !*(_QWORD *)(a1 + 384) )
    return 0;
  v16 = (__int64 *)operator new(0x1098u);
  sub_8814C((__int64)v16, a2, a1, a5, a6, a7);
  if ( (a6 & 0x10) != 0 )
  {
    v18 = 0;
    v17 = off_15DBD8;
  }
  else
  {
    v17 = &off_15DC88;
    v18 = 4096;
  }
  v20 = (__int64 (__fastcall *)(__int64 *, unsigned __int64, unsigned __int64))v17[2];
  *v16 = (__int64)v17;
  v16[530] = v18;
  result = v20(v16, a3, a4);
  if ( (_DWORD)result == -7 )
  {
    if ( v16[522] != -1 )
    {
      sub_99D18(a1, "dbg_bin_search failed to read memory at %a\n", v21);
      if ( a7 )
      {
        if ( *(_QWORD *)(a7 + 8) <= 1u )
          sub_3C748(a7, "Failed to read memory at %a\n", v22);
      }
    }
    return 4294967289LL;
  }
  return result;
}
// 88018: variable 'a8' is possibly undefined
// 88018: variable 'a9' is possibly undefined
// 880F8: variable 'v21' is possibly undefined
// 8811C: variable 'v22' is possibly undefined
// 15DBD8: using guessed type __int64 (__fastcall *off_15DBD8[4])();
// 15DC88: using guessed type __int64 (__fastcall *off_15DC88)();
// 164B2C: using guessed type int dword_164B2C;
