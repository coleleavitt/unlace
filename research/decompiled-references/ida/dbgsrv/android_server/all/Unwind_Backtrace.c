/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Backtrace
// Address: 0x00000000000EF85C

//----- (00000000000EF85C) ----------------------------------------------------
__int64 __fastcall Unwind_Backtrace(
        unsigned int (__fastcall *a1)(__int64 *, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // x30
  int v12; // w0
  int v13; // w19
  __int64 v15[120]; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v16[208]; // [xsp+460h] [xbp+460h] BYREF

  sub_EF00C(v15, (__int64)&a9, v9);
  while ( 1 )
  {
    v12 = sub_EE428(v15, (char *)v16);
    v13 = v12;
    if ( v12 != 5 && v12 || a1(v15, a2) )
      return 3;
    if ( v13 == 5 )
      break;
    sub_EF0E8(v15, v16);
  }
  return 5;
}
// EF8A8: variable 'v9' is possibly undefined
