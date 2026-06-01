/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004F650
// Address: 0x000000010004F650

//----- (000000010004F650) ----------------------------------------------------
__int64 __fastcall sub_10004F650(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        int a6,
        double a7,
        double a8,
        __int64 a9)
{
  int v13; // eax
  unsigned int v14; // r12d
  __int64 (__fastcall ***v16)(); // rax
  int v17; // r8d
  __int64 (__fastcall ***v18)(); // r13
  __int64 v19; // rcx
  __int64 (__fastcall **v20)(); // rax

  v13 = dword_1000AC1D0;
  if ( dword_1000AC1D0 == -1 )
  {
    v13 = (unsigned __int8)qgetenv("IDA_IDB_BIN_SEARCH", 0);
    dword_1000AC1D0 = (unsigned __int8)v13;
  }
  v14 = 0;
  if ( !v13 )
  {
    v14 = 0;
    sub_100060FA0(a1, "dbg_bin_search %a..%a\n", a7, a8);
    if ( a3 < a4 && a5[1] && *(_QWORD *)(a1 + 384) )
    {
      v16 = (__int64 (__fastcall ***)())operator new(0x1098u);
      v17 = a6;
      if ( (a6 & 0x10) != 0 )
      {
        v18 = v16;
        sub_10004F7E0((__int64)v16, a2, a1, a5, v17, a9);
        v20 = &off_1000A9250;
        v19 = 0;
      }
      else
      {
        v18 = v16;
        sub_10004F7E0((__int64)v16, a2, a1, a5, v17, a9);
        v19 = 4096;
        v20 = &off_1000A9300;
      }
      *v18 = v20;
      v18[530] = (__int64 (__fastcall **)())v19;
      v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), unsigned __int64, unsigned __int64))v20[2])(
              v18,
              a3,
              a4);
      if ( v14 == -7 )
      {
        v14 = -7;
        if ( v18[522] != (__int64 (__fastcall **)())-1LL )
        {
          sub_100060FA0(a1, "dbg_bin_search failed to read memory at %a\n", a7);
          if ( a9 )
          {
            if ( *(_QWORD *)(a9 + 8) <= 1u )
              sub_100002D00(a9, "Failed to read memory at %a\n", a7);
          }
        }
      }
    }
  }
  return v14;
}
// 1000A9250: using guessed type __int64 (__fastcall *off_1000A9250)();
// 1000A9300: using guessed type __int64 (__fastcall *off_1000A9300)();
// 1000AC1D0: using guessed type int dword_1000AC1D0;
