__int64 __fastcall sub_791C00(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // [rsp+8h] [rbp-390h] BYREF
  unsigned __int128 v4; // [rsp+10h] [rbp-388h] BYREF
  _QWORD v5[11]; // [rsp+20h] [rbp-378h] BYREF
  char v6; // [rsp+79h] [rbp-31Fh]

  v3 = a2;
  sub_C8D5A0(v5);
  v4 = (unsigned __int64)v4 & 0xFFFF000000000000LL
     | (unsigned __int128)(((unsigned __int64)(v6 & 1) << 47)
                         | ((unsigned __int64)((v5[0] & 0x10000080) == 128) << 34)
                         | ((unsigned __int64)((v5[0] & 0x8000000LL) != 0) << 33)
                         | ((unsigned __int64)((v5[0] & 0x1000LL) == 0) << 30)
                         | ((unsigned __int64)((v5[0] & 0x800LL) == 0) << 29)
                         | ((unsigned __int64)((v5[0] & 2) != 0) << 28)
                         | ((unsigned __int64)((v5[0] & 0x1000LL) != 0) << 27)
                         | ((unsigned __int64)(v5[0] & 1) << 26)
                         | ((unsigned __int64)((v5[0] & 0x800LL) != 0) << 25)
                         | ((unsigned __int64)((v5[0] & 0x1008) != 0) << 24)
                         | ((unsigned __int64)((v5[0] & 0x800LL) != 0) << 9)
                         | 0x660800442002LL
                         | ((unsigned __int64)((v5[0] & 0x4000000LL) != 0) << 23));
  sub_790FC0(&v3, a1, (const __m128i *)&v4);
  sub_7916D0(v5);
  return a1;
}

