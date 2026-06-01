/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DBD0
// Address: 0x000000000008DBD0

//----- (000000000008DBD0) ----------------------------------------------------
__int64 __fastcall sub_8DBD0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        int a6,
        double a7,
        double a8,
        _QWORD *ptr)
{
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // r12d
  int v16; // r8d
  _QWORD *v17; // rbp
  __int64 (__fastcall **v18)(); // rax
  __int64 v19; // rcx
  _QWORD *v21; // [rsp+8h] [rbp-40h]

  v13 = a2;
  v14 = dword_154B24;
  if ( dword_154B24 == -1 )
  {
    v13 = a2;
    v14 = (unsigned __int8)qgetenv("IDA_IDB_BIN_SEARCH", 0);
    dword_154B24 = (unsigned __int8)v14;
  }
  v15 = 0;
  if ( !v14 )
  {
    v15 = 0;
    sub_9FDA0(a1, "dbg_bin_search %a..%a\n", a7, a8);
    if ( a3 < a4 && a5[1] && *(_QWORD *)(a1 + 384) )
    {
      v21 = operator new(0x1098u);
      v16 = a6;
      if ( (a6 & 0x10) != 0 )
      {
        v17 = ptr;
        sub_8DDA0((__int64)v21, v13, a1, a5, v16, (__int64)ptr);
        v18 = &off_14E380;
        v19 = 0;
      }
      else
      {
        v17 = ptr;
        sub_8DDA0((__int64)v21, v13, a1, a5, v16, (__int64)ptr);
        v18 = &off_14E430;
        v19 = 4096;
      }
      *v21 = v18;
      v21[530] = v19;
      v15 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, unsigned __int64))v18[2])(v21, a3, a4);
      if ( v15 == -7 )
      {
        v15 = -7;
        if ( v21[522] != -1 )
        {
          sub_9FDA0(a1, "dbg_bin_search failed to read memory at %a\n", a7);
          if ( v17 )
          {
            if ( v17[1] <= 1u )
              sub_3BBA0((__int64)v17, "Failed to read memory at %a\n", a7);
          }
        }
      }
    }
  }
  return v15;
}
// 14E380: using guessed type __int64 (__fastcall *off_14E380)();
// 14E430: using guessed type __int64 (__fastcall *off_14E430)();
// 154B24: using guessed type int dword_154B24;
