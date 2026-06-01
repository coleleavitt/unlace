/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43BD20
// Address: 0x000000000043BD20

//----- (000000000043BD20) ----------------------------------------------------
__int64 __fastcall sub_43BD20(__int64 *a1, __int64 a2, const char *a3, __int64 a4)
{
  _QWORD v9[2]; // [xsp+38h] [xbp-18h] BYREF

  if ( a1 )
  {
    sub_448310(a1);
    a1[1] = 0;
    *(_BYTE *)a1 = 2;
  }
  v9[0] = &off_51A540;
  v9[1] = a2;
  return sub_440820(a1, a3, a4, (__int64)v9);
}
// 51A540: using guessed type __int64 (__fastcall *off_51A540)();
