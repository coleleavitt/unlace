__int16 __fastcall sub_1047220(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  bool v4; // zf
  int v5; // edx
  bool v6; // al
  bool v7; // dl
  __m128i si128; // xmm0
  char *v9; // rsi
  __int16 v10; // ax
  __int16 result; // ax
  __m128i v12; // xmm0
  int v13; // edx
  int v14; // ecx

  sub_102D220(a1, a2, a3);
  *(_DWORD *)(a1 + 512) = 0;
  *(_QWORD *)a1 = &unk_2C34B58;
  *(_WORD *)(a1 + 628) = 0;
  *(_BYTE *)(a1 + 516) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0;
  *(_DWORD *)(a1 + 624) = 0;
  *(_BYTE *)(a1 + 630) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_BYTE *)(a1 + 640) = 0;
  *(_WORD *)(a1 + 18) = 4112;
  *(_QWORD *)(a1 + 88) = sub_21F9090();
  v3 = sub_21F90E0();
  *(_BYTE *)(a1 + 393) |= 0x10u;
  v4 = *(_DWORD *)(a1 + 260) == 15;
  *(_QWORD *)(a1 + 112) = v3;
  *(_QWORD *)(a1 + 352) = &unk_24B7DC0;
  *(_BYTE *)(a1 + 285) = 1;
  if ( v4 )
  {
    v13 = *(_DWORD *)(a1 + 268);
    if ( v13 == 1 )
      *(_QWORD *)(a1 + 68) = 0x1000000010000LL;
    v14 = *(_DWORD *)(a1 + 264);
    *(_BYTE *)(a1 + 641) = 0;
    *(_QWORD *)a1 = &off_2C35338;
    v6 = v14 == 25 || v14 == 12;
    v7 = v13 == 1;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 264);
    *(_BYTE *)(a1 + 641) = 0;
    *(_QWORD *)a1 = &off_2C35338;
    v6 = v5 == 25 || v5 == 12;
    v7 = 0;
  }
  if ( v6 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9580);
    *(_WORD *)(a1 + 8) = 8224;
    v9 = "e-m:e-p:32:32-p270:32:32-p271:32:32-p272:64:64-i64:64-i128:128-f80:128-n8:16:32:64-S128";
    *(_WORD *)(a1 + 24) = -32640;
    *(_DWORD *)(a1 + 28) = 539000960;
    *(_WORD *)(a1 + 62) = 128;
    *(_DWORD *)(a1 + 168) = 9;
    *(_BYTE *)(a1 + 336) = 6;
    *(__m128i *)(a1 + 136) = si128;
  }
  else
  {
    v12 = _mm_load_si128((const __m128i *)&xmmword_23A9590);
    *(_WORD *)(a1 + 8) = 16448;
    *(_WORD *)(a1 + 62) = 128;
    v9 = "e-m:w-p270:32:32-p271:32:32-p272:64:64-i64:64-i128:128-f80:128-n8:16:32:64-S128";
    *(_WORD *)(a1 + 24) = -32640;
    if ( !v7 )
      v9 = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-i128:128-f80:128-n8:16:32:64-S128";
    *(_DWORD *)(a1 + 28) = 1077969024;
    *(__m128i *)(a1 + 136) = v12;
    *(_DWORD *)(a1 + 168) = 7;
    *(_BYTE *)(a1 + 336) = 6;
  }
  sub_102D780((_QWORD *)a1, v9, strlen(v9), (__int64)&byte_22F0C30);
  v10 = *(_WORD *)(a1 + 392);
  *(_WORD *)(a1 + 286) = 16512;
  result = v10 & 0xFE01 | 0x190;
  *(_WORD *)(a1 + 392) = result;
  return result;
}
