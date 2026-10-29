__int64 __fastcall sub_23EBD0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        unsigned int a15)
{
  __int64 v19; // rax
  char *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  double v23; // xmm4_8
  double v24; // xmm5_8

  v19 = operator new(0x118u);
  *(_QWORD *)v19 = a1;
  *(_QWORD *)(v19 + 8) = a2;
  *(_QWORD *)(v19 + 16) = a3;
  *(_QWORD *)(v19 + 24) = a4;
  *(_QWORD *)(v19 + 32) = a6;
  *(_DWORD *)(v19 + 40) = a5;
  *(_DWORD *)(v19 + 44) = a15;
  *(_QWORD *)(v19 + 64) = 0;
  *(_DWORD *)(v19 + 88) = 1;
  *(_QWORD *)(v19 + 104) = 0;
  *(_QWORD *)(v19 + 112) = 0;
  *(_QWORD *)(v19 + 96) = dthr_executor_t___vtable;
  *(_OWORD *)(v19 + 152) = 0;
  *(_QWORD *)(v19 + 128) = 0xFFFFFFFFLL;
  *(_OWORD *)(v19 + 168) = 0;
  *(_OWORD *)(v19 + 184) = 0;
  *(_QWORD *)(v19 + 200) = 0;
  *(_QWORD *)(v19 + 136) = -1;
  *(_QWORD *)(v19 + 144) = 0;
  *(_QWORD *)(v19 + 208) = 0;
  *(_DWORD *)(v19 + 232) = 30;
  *(_QWORD *)(v19 + 240) = 0;
  *(_DWORD *)(v19 + 272) = 0;
  *(_WORD *)(v19 + 276) = 0;
  *(_BYTE *)(v19 + 278) = 1;
  *(_OWORD *)(v19 + 216) = 0;
  *(_OWORD *)(v19 + 248) = 0;
  return sub_23EA50((_QWORD *)v19, nullptr, a15, v20, (__m128)0LL, a8, a9, a10, v23, v24, a13, a14, v21, v22, a15);
}
