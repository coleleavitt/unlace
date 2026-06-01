void __fastcall sub_22142C0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // [rsp+14h] [rbp-2Ch] BYREF
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-18h] BYREF

  v6 = a4;
  v7[0] = &v5;
  v7[1] = a4;
  v5 = a5;
  sub_2213DA0(
    a1,
    a2,
    a3,
    (void (__fastcall *)(__int64, __int64))sub_2210590,
    (__int64)&v6,
    1,
    (void (__fastcall *)(__int64))sub_22105E0,
    (__int64)v7,
    0);
}
