/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Resume
// Address: 0x00000000000EF644

//----- (00000000000EF644) ----------------------------------------------------
void __fastcall __noreturn Unwind_Resume(
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
  int v11; // w0
  _QWORD v12[120]; // [xsp+D0h] [xbp+D0h] BYREF
  __int64 v13[120]; // [xsp+490h] [xbp+490h] BYREF

  sub_EF00C(v12, (__int64)&a9, v9);
  memcpy(v13, v12, sizeof(v13));
  if ( a1[2] )
    v11 = sub_EF1F4(a1, v13);
  else
    v11 = sub_EF134(a1, v13);
  if ( v11 != 7 )
    abort();
  sub_EDCE0((__int64)v12, (__int64)v13);
  nullsub_8(v13[98], v13[99]);
}
// EF694: variable 'v9' is possibly undefined
// EF3D4: using guessed type __int64 __fastcall nullsub_8(_QWORD, _QWORD);
