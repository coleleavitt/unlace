__int64 __fastcall sub_1023250(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v4; // rax
  char *v5; // rcx
  char *v6; // rsi
  bool v7; // zf
  int v8; // eax
  __int64 result; // rax

  sub_10094E0(a1, a2, a3);
  *(_WORD *)(a1 + 628) = 0;
  *(_WORD *)(a1 + 18) = 4112;
  *(_QWORD *)a1 = &unk_2C0AB58;
  *(_DWORD *)(a1 + 512) = 0;
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
  *(_QWORD *)(a1 + 88) = sub_21D5350();
  v4 = sub_21D53A0();
  *(_BYTE *)(a1 + 393) |= 0x10u;
  v7 = *(_DWORD *)(a1 + 260) == 15;
  *(_QWORD *)(a1 + 112) = v4;
  *(_QWORD *)(a1 + 352) = &unk_2493C60;
  *(_BYTE *)(a1 + 285) = 1;
  if ( v7 && *(_DWORD *)(a1 + 268) == 1 )
    *(_QWORD *)(a1 + 68) = 0x1000000010000LL;
  *(_BYTE *)(a1 + 33) = 32;
  *(_QWORD *)a1 = &off_2C0AF48;
  v5 = (char *)&byte_22CD811;
  v6 = "e-m:e-p:32:32-p270:32:32-p271:32:32-p272:64:64-i128:128-f64:32:64-f80:32-n8:16:32-S128";
  *(_WORD *)(a1 + 24) = 8288;
  *(_BYTE *)(a1 + 23) = 32;
  v7 = a2[3].m128i_i32[1] == 5;
  if ( a2[3].m128i_i32[1] == 5 )
    v5 = "_";
  *(_WORD *)(a1 + 62) = 128;
  if ( v7 )
    v6 = "e-m:o-p:32:32-p270:32:32-p271:32:32-p272:64:64-i128:128-f64:32:64-f80:32-n8:16:32-S128";
  sub_1009A40((_QWORD *)a1, v6, 86, (__int64)v5);
  *(_DWORD *)(a1 + 136) = 6;
  *(_QWORD *)(a1 + 144) = 0x500000005LL;
  v8 = *(unsigned __int8 *)(a1 + 392);
  *(_BYTE *)(a1 + 336) = 3;
  *(_WORD *)(a1 + 286) = 8256;
  result = v8 & 0xFFFFFF81 | 0x1C;
  *(_BYTE *)(a1 + 392) = result;
  return result;
}

