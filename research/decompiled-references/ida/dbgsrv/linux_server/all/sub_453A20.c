/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453A20
// Address: 0x0000000000453A20

//----- (0000000000453A20) ----------------------------------------------------
__int64 __fastcall sub_453A20(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        int a6,
        double a7,
        double a8,
        _QWORD *a9)
{
  int v13; // eax
  unsigned int v14; // ebx
  __int64 (__fastcall *v16)(__int64 *, unsigned __int64, unsigned __int64, double, double); // rax
  __int64 *v17; // [rsp+8h] [rbp-40h]

  v13 = dword_4C61E4;
  if ( dword_4C61E4 == -1 )
  {
    v13 = (unsigned __int8)sub_4837D0("IDA_IDB_BIN_SEARCH", 0);
    dword_4C61E4 = (unsigned __int8)v13;
  }
  if ( !v13 && (sub_4563D0(a1, "dbg_bin_search %a..%a\n", a7, a8), a3 < a4) && a5[1] && *(_QWORD *)(a1 + 464) )
  {
    v17 = (__int64 *)operator new(0x1098u);
    sub_4537E0((__int64)v17, a2, a1, a5, a6, (__int64)a9);
    if ( (a6 & 0x10) != 0 )
    {
      v16 = sub_452020;
      v17[530] = 0;
      *v17 = (__int64)&off_4C3288;
    }
    else
    {
      v16 = sub_452480;
      v17[530] = 4096;
      *v17 = (__int64)&off_4C3258;
    }
    v14 = v16(v17, a3, a4, a7, a8);
    if ( v14 == -7 && v17[522] != -1 )
    {
      sub_4563D0(a1, "dbg_bin_search failed to read memory at %a\n", a7);
      if ( a9 )
      {
        if ( a9[1] <= 1u )
          sub_4172B0((__int64)a9, "Failed to read memory at %a\n", a7);
      }
    }
  }
  else
  {
    return 0;
  }
  return v14;
}
// 4C3258: using guessed type __int64 (__fastcall *off_4C3258)();
// 4C3288: using guessed type __int64 (__fastcall *off_4C3288)();
// 4C61E4: using guessed type int dword_4C61E4;
