/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C718
// Address: 0x000000000040C718

//----- (000000000040C718) ----------------------------------------------------
bool __fastcall sub_40C718(__int64 a1, const char *a2, __int64 a3)
{
  __int64 (**v4)(); // [xsp+10h] [xbp-20h] BYREF
  int v5; // [xsp+18h] [xbp-18h]
  __int64 v6; // [xsp+20h] [xbp-10h]

  v6 = a3;
  v4 = off_519B20;
  v5 = 4;
  return (unsigned int)sub_42E470(a2, &v4, 0) == 1;
}
// 519B20: using guessed type __int64 (__fastcall *off_519B20[3])();
