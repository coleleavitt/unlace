__int64 __fastcall sub_B30D50(__int64 a1, const void *a2, __int64 a3, void *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r12
  __int64 v10; // r9
  char v11; // al
  __m128i v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h]
  __int64 v15; // [rsp+18h] [rbp-50h]
  unsigned int v16; // [rsp+20h] [rbp-48h]

  v13 = 0;
  v15 = a6;
  v14 = 0;
  v16 = v16 & 0xFF000000 | 0x901A2;
  HIBYTE(v16) &= 0xFCu;
  v9 = sub_9C3B30((__int64 *)(a1 + 2352), 96, 3u);
  sub_B2EAA0(v9, a1, &v13, a2, a3, v10, a4, a5);
  v11 = *(_BYTE *)(v9 + 34);
  *(_BYTE *)(v9 + 38) |= 4u;
  if ( (v11 & 0xF0) == 0xF0 && !*(_QWORD *)v9 )
    *(_BYTE *)(v9 + 34) = v11 & 0xF;
  return v9;
}
