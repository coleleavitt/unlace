/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440A28
// Address: 0x0000000000440A28

//----- (0000000000440A28) ----------------------------------------------------
__int64 __fastcall sub_440A28(const char *a1, __int64 a2, const char *a3, __int64 a4)
{
  _QWORD v6[2]; // [xsp+18h] [xbp-18h] BYREF

  if ( a3 )
  {
    v6[0] = &off_51A540;
    v6[1] = a2;
    return (unsigned __int8)sub_440448(a1, a3, a4, (__int64)v6, 0);
  }
  else
  {
    return 0;
  }
}
// 51A540: using guessed type __int64 (__fastcall *off_51A540)();
