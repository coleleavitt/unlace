/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Resume_or_Rethrow
// Address: 0x00000000000EF740

//----- (00000000000EF740) ----------------------------------------------------
void __fastcall __noreturn Unwind_Resume_or_Rethrow(
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
  char v11; // [xsp+0h] [xbp+0h]
  _QWORD v12[120]; // [xsp+D0h] [xbp+D0h] BYREF
  __int64 v13[120]; // [xsp+490h] [xbp+490h] BYREF

  if ( a1[2] )
  {
    sub_EF00C(v12, (__int64)&a9, v9);
    memcpy(v13, v12, sizeof(v13));
    if ( (unsigned int)sub_EF1F4(a1, v13) != 7 )
      abort();
    sub_EDCE0((__int64)v12, (__int64)v13);
    nullsub_8(v13[98], v13[99]);
  }
  else
  {
    Unwind_RaiseException(a1, 0, v9, a4, a5, a6, a7, a8, v11);
  }
}
// EF788: variable 'v9' is possibly undefined
// EF788: variable 'v11' is possibly undefined
// EF3D4: using guessed type __int64 __fastcall nullsub_8(_QWORD, _QWORD);
