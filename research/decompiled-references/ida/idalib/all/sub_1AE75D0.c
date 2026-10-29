__int64 __fastcall sub_1AE75D0(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+Fh] [rbp-19h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v5[1] = a3;
  v5[0] = a2;
  return sub_EF5A40(
           a1,
           0,
           a3,
           (unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))sub_1AE66B0,
           (__int64)v5,
           a3,
           (void (__fastcall *)(__int64, __int64))nullsub_550,
           (__int64)&v4);
}
