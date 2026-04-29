__int64 __fastcall sub_49B80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  __int64 v9; // [rsp-10h] [rbp-38h]

  sub_49A70(a1, a2, a4, a5);
  sub_49A70(a2, a3, a4, a5);
  sub_3FE50(
    a1,
    a2,
    a3,
    0x8E38E38E38E38E39LL * ((a2 - a1) >> 4),
    0x8E38E38E38E38E39LL * ((a3 - a2) >> 4),
    a4,
    (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))a5);
  return v9;
}
