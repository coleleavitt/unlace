/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C4F0
// Address: 0x000000000003C4F0

//----- (000000000003C4F0) ----------------------------------------------------
void __fastcall sub_3C4F0(__int64 a1)
{
  void *v2; // x0

  v2 = *(void **)(a1 + 1528);
  if ( v2 )
  {
    sub_37C50(v2);
    *(_QWORD *)(a1 + 1528) = 0;
    sub_476E8((__int64)&qword_1669D8, off_1669E0);
    qword_1669D8 = (__int64)&off_1669E0;
    qword_1669E8 = 0;
    off_1669E0 = nullptr;
  }
}
// 1669D8: using guessed type __int64 qword_1669D8;
// 1669E0: using guessed type _UNKNOWN *off_1669E0;
// 1669E8: using guessed type __int64 qword_1669E8;
