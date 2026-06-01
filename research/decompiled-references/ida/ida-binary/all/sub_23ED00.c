__int64 __fastcall sub_23ED00(
        int a1,
        int a2,
        int a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15)
{
  __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  double v21; // xmm4_8
  double v22; // xmm5_8

  v16 = operator new(0x118u);
  *(_DWORD *)v16 = a1;
  *(_DWORD *)(v16 + 4) = a2;
  *(_DWORD *)(v16 + 8) = a3;
  *(_QWORD *)(v16 + 64) = 0;
  *(_DWORD *)(v16 + 88) = 1;
  *(_QWORD *)(v16 + 104) = 0;
  *(_QWORD *)(v16 + 112) = 0;
  *(_QWORD *)(v16 + 96) = dthr_executor_t___vtable;
  *(_QWORD *)(v16 + 200) = 0;
  *(_QWORD *)(v16 + 128) = 0xFFFFFFFFLL;
  *(_QWORD *)(v16 + 136) = -1;
  *(_QWORD *)(v16 + 144) = 0;
  *(_QWORD *)(v16 + 208) = 0;
  *(_DWORD *)(v16 + 232) = 30;
  *(_QWORD *)(v16 + 240) = 0;
  *(_DWORD *)(v16 + 272) = 0;
  *(_WORD *)(v16 + 276) = 0;
  *(_BYTE *)(v16 + 278) = 1;
  *(_OWORD *)(v16 + 152) = 0;
  *(_OWORD *)(v16 + 168) = 0;
  *(_OWORD *)(v16 + 184) = 0;
  *(_OWORD *)(v16 + 216) = 0;
  *(_OWORD *)(v16 + 248) = 0;
  return sub_23EA50(
           (_QWORD *)v16,
           (int *)((char *)&dword_0 + 1),
           v17,
           v18,
           (__m128)0LL,
           a5,
           a6,
           a7,
           v21,
           v22,
           a10,
           a11,
           v19,
           v20,
           a15);
}
