int __fastcall sub_577EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[25]; // [rsp+0h] [rbp-C8h] BYREF

  v7[0] = "@param";
  v7[2] = "@return";
  v7[4] = "@returns";
  v7[6] = "@throws";
  v7[8] = "@type";
  v7[10] = "@template";
  v7[12] = "@see";
  v7[14] = "@deprecated";
  v7[16] = "@define";
  v7[18] = "@exports";
  v7[20] = "@mods";
  v7[1] = 6;
  v7[3] = 7;
  v7[5] = 8;
  v7[7] = 7;
  v7[9] = 5;
  v7[11] = 9;
  v7[13] = 4;
  v7[15] = 11;
  v7[17] = 7;
  v7[19] = 8;
  v7[21] = 5;
  v7[22] = "@private";
  v7[23] = 8;
  ((void (__fastcall *)(__int64 *, _QWORD *, __int64, __int64, __int64, __int64))sub_12A8360)(
    qword_4AE8F60,
    v7,
    12,
    a4,
    a5,
    a6);
  return __cxa_atexit(sub_CF9920, qword_4AE8F60, &off_47CFE00);
}

