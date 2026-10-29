__int64 __fastcall sub_B7CBC0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        __int64 a12)
{
  __int64 v12; // rbp

  v12 = sub_B902D0(168, a1, a2, 0);
  sub_B7C930(v12, 0x22u, a1, a2, a3, a4, a5, a6, a7, a8, a9, a11, a12);
  *(_BYTE *)(v12 + 82) = (32 * (a10 & 1)) | *(_BYTE *)(v12 + 82) & 0xDF;
  return v12;
}
