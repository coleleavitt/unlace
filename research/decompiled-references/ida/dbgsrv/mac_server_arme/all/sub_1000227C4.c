/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000227C4
// Address: 0x00000001000227C4

//----- (00000001000227C4) ----------------------------------------------------
__int64 __fastcall sub_1000227C4(
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
  unsigned __int64 v9; // x8
  __int64 v10; // x8

  v9 = *(_QWORD *)(a1 + 8);
  if ( qword_1000A5928 > v9 && (v10 = *(_QWORD *)(qword_1000A5920 + 8 * v9)) != 0 )
  {
    --*(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = (int)sub_10002BD78(
                                 (__int64 (__fastcall *)(_QWORD))sub_100022E74,
                                 v10,
                                 a1 + 32,
                                 a2,
                                 a6,
                                 a7,
                                 a8,
                                 a9,
                                 a3);
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
