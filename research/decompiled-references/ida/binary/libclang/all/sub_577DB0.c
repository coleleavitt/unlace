int __fastcall sub_577DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[19]; // [rsp+0h] [rbp-98h] BYREF

  v7[0] = "assembly";
  v7[2] = "module";
  v7[4] = "field";
  v7[6] = "event";
  v7[8] = "method";
  v7[10] = "param";
  v7[12] = "property";
  v7[14] = "return";
  v7[1] = 8;
  v7[3] = 6;
  v7[5] = 5;
  v7[7] = 5;
  v7[9] = 6;
  v7[11] = 5;
  v7[13] = 8;
  v7[15] = 6;
  v7[16] = "type";
  v7[17] = 4;
  ((void (__fastcall *)(__int64 *, _QWORD *, __int64, __int64, __int64, __int64))sub_12A8360)(
    qword_4AE8F40,
    v7,
    9,
    a4,
    a5,
    a6);
  return __cxa_atexit(sub_CF9920, qword_4AE8F40, &off_47CFE00);
}

