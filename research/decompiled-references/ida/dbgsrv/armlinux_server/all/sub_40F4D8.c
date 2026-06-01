/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F4D8
// Address: 0x000000000040F4D8

//----- (000000000040F4D8) ----------------------------------------------------
__int64 __fastcall sub_40F4D8(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v7; // [xsp+28h] [xbp-8h] BYREF

  v7 = a3;
  if ( !a4
    || a5 != (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64, _QWORD, _QWORD))(*a1 + 296LL))(
               a1,
               a3,
               a4,
               a5,
               0) )
  {
    return 0;
  }
  sub_40F3A0(a1 + 257, &v7);
  return 1;
}
