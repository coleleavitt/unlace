/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C9D4
// Address: 0x000000010002C9D4

//----- (000000010002C9D4) ----------------------------------------------------
__int64 __fastcall sub_10002C9D4(
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
  __int64 v11; // [xsp+0h] [xbp-30h] BYREF
  __int128 v12; // [xsp+8h] [xbp-28h]

  v11 = 0;
  v12 = 0u;
  sub_10002BD78((__int64 (__fastcall *)(_QWORD))sub_10002CA80, (__int64)&v11, a1, a2, a6, a7, a8, a9, a3);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v11;
  *(_OWORD *)(a2 + 16) = v12;
  return 0;
}
