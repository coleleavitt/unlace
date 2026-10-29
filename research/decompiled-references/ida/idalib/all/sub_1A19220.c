void __fastcall sub_1A19220(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  unsigned __int32 v10; // r10d

  *(_DWORD *)(a1 + 188) = 0;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  *(_QWORD *)(a1 + 16) = 0x400000000LL;
  v10 = a4->m128i_u32[1];
  *(_QWORD *)(a1 + 3088) = 0x400000000LL;
  *(_QWORD *)(a1 + 192) = a1 + 208;
  *(_QWORD *)(a1 + 3128) = a1 + 3144;
  *(_QWORD *)(a1 + 200) = 0x1000000000LL;
  *(_QWORD *)(a1 + 8064) = a1 + 8080;
  *(_QWORD *)(a1 + 2896) = a1 + 2920;
  *(_QWORD *)(a1 + 2904) = 16;
  *(_DWORD *)(a1 + 2912) = 0;
  *(_BYTE *)(a1 + 2916) = 1;
  *(_QWORD *)(a1 + 3048) = 0;
  *(_DWORD *)(a1 + 3056) = 0;
  *(_QWORD *)(a1 + 3064) = 0;
  *(_QWORD *)(a1 + 3072) = 0;
  *(_QWORD *)(a1 + 3080) = a1 + 3096;
  *(_QWORD *)(a1 + 3136) = 0;
  *(_QWORD *)(a1 + 3144) = 0;
  *(_QWORD *)(a1 + 3152) = 1;
  *(_QWORD *)(a1 + 3160) = v10;
  *(_QWORD *)(a1 + 3168) = 0;
  *(_BYTE *)(a1 + 3176) = 0;
  *(_DWORD *)(a1 + 3180) = 0;
  *(_DWORD *)(a1 + 8048) = 0;
  *(_QWORD *)(a1 + 8056) = 0;
  *(_QWORD *)(a1 + 8072) = 0;
  *(_BYTE *)(a1 + 8080) = 0;
  *(_DWORD *)(a1 + 8096) = 0;
  sub_1A172F0((_DWORD *)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
