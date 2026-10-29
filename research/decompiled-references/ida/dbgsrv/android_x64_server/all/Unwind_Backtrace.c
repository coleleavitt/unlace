/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Backtrace
// Address: 0x00000000000E9336

//----- (00000000000E9336) ----------------------------------------------------
__int64 __fastcall Unwind_Backtrace(
        unsigned int (__fastcall *a1)(_QWORD *, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  int v7; // eax
  int v8; // r12d
  __int64 v9; // rdx
  _QWORD v11[30]; // [rsp+0h] [rbp-2A0h] BYREF
  _BYTE v12[432]; // [rsp+F0h] [rbp-1B0h] BYREF
  __int64 retaddr; // [rsp+2A8h] [rbp+8h]

  sub_E8C20(v11, (__int64)&a7, retaddr);
  while ( 1 )
  {
    v7 = sub_E891E(v11, (__int64)v12);
    v8 = v7;
    if ( v7 != 5 && v7 || a1(v11, a2) )
      return 3;
    if ( v8 == 5 )
      break;
    sub_E88DB((__int64)v11, (__int64)v12, v9);
  }
  return 5;
}
// E939F: variable 'v9' is possibly undefined
