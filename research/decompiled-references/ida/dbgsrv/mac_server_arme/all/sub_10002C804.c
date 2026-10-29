/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C804
// Address: 0x000000010002C804

//----- (000000010002C804) ----------------------------------------------------
__int64 __fastcall sub_10002C804(
        __int64 a1,
        __int64 a2,
        int8x16x2_t a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  void *v10; // [xsp+10h] [xbp-30h] BYREF
  unsigned __int64 v11; // [xsp+18h] [xbp-28h]
  __int64 v12; // [xsp+20h] [xbp-20h]

  v10 = nullptr;
  v11 = 0;
  v12 = 0;
  sub_10002BD78((__int64 (__fastcall *)(_QWORD))sub_10002C8D4, (__int64)&v10, a1, a2, a6, a7, a8, a9, a3);
  if ( v11 >= 2 )
    sub_100000B44();
  if ( v10 )
  {
    v11 = 0;
    qfree(v10);
  }
  return 0;
}
