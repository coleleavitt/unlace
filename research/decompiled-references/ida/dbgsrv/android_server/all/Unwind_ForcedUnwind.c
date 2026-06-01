/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_ForcedUnwind
// Address: 0x00000000000EF550

//----- (00000000000EF550) ----------------------------------------------------
_QWORD *__fastcall Unwind_ForcedUnwind(
        _QWORD *a1,
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
  _QWORD v15[120]; // [xsp+D0h] [xbp+D0h] BYREF
  __int64 v16[120]; // [xsp+490h] [xbp+490h] BYREF

  sub_EF00C(v15, (__int64)&a9, v9);
  memcpy(v16, v15, sizeof(v16));
  a1[2] = a2;
  a1[3] = a3;
  if ( (unsigned int)sub_EF1F4(a1, v16) == 7 )
  {
    sub_EDCE0((__int64)v15, (__int64)v16);
    nullsub_8(v16[98], v16[99]);
  }
  return a1;
}
// EF5A8: variable 'v9' is possibly undefined
// EF3D4: using guessed type __int64 __fastcall nullsub_8(_QWORD, _QWORD);
