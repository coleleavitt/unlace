/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_RaiseException
// Address: 0x00000000000EF3D8

//----- (00000000000EF3D8) ----------------------------------------------------
_QWORD *__fastcall Unwind_RaiseException(
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
  __int64 CFA; // x0
  _QWORD v15[120]; // [xsp+D0h] [xbp+D0h] BYREF
  __int64 v16[120]; // [xsp+490h] [xbp+490h] BYREF
  __int64 v17[202]; // [xsp+850h] [xbp+850h] BYREF
  __int64 (__fastcall *v18)(__int64, __int64, _QWORD, _QWORD *, __int64 *); // [xsp+EA0h] [xbp+EA0h]

  sub_EF00C(v15, (__int64)&a9, v9);
  memcpy(v16, v15, sizeof(v16));
  while ( !(unsigned int)sub_EE428(v16, (char *)v17) )
  {
    if ( v18 )
    {
      v11 = v18(1, 1, *a1, a1, v16);
      if ( v11 == 6 )
      {
        a1[2] = 0;
        CFA = Unwind_GetCFA((__int64)v16);
        a1[3] = CFA - ((unsigned __int64)v16[104] >> 63);
        memcpy(v16, v15, sizeof(v16));
        if ( (unsigned int)sub_EF134(a1, v16) == 7 )
        {
          sub_EDCE0((__int64)v15, (__int64)v16);
          nullsub_8(v16[98], v16[99]);
        }
        return a1;
      }
      if ( v11 != 8 )
        return a1;
    }
    sub_EF0E8(v16, v17);
  }
  return a1;
}
// EF428: variable 'v9' is possibly undefined
// EF3D4: using guessed type __int64 __fastcall nullsub_8(_QWORD, _QWORD);
