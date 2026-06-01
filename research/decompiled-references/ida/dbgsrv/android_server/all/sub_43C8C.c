/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C8C
// Address: 0x0000000000043C8C

//----- (0000000000043C8C) ----------------------------------------------------
__int64 __fastcall sub_43C8C(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        unsigned int a6,
        char *a7,
        unsigned int a8)
{
  int v9; // w20
  __int64 v11[2]; // [xsp+10h] [xbp-30h] BYREF

  v11[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v9 = sub_98FD4(a1, a2, a3, a4, a5, a6, a7, a8, v11);
  if ( v9 >= 1 && v11[0] && (((__int64 (__fastcall *)(__int64, __int64, _QWORD))loc_4330C)(a1, v11[0], 0) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
    return (unsigned int)-2;
  }
  return (unsigned int)v9;
}
