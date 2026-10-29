__int64 __fastcall sub_22707C0(
        __int64 *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const void **a9,
        const void **a10)
{
  __int64 v12; // rbx
  __m128i si128; // xmm0
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax

  v12 = operator new(0x158u);
  *(_QWORD *)v12 = a2;
  *(_BYTE *)(v12 + 76) = a3;
  *(_OWORD *)(v12 + 80) = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 144) = v12 + 160;
  *(_QWORD *)(v12 + 176) = v12 + 176;
  *(_QWORD *)(v12 + 184) = v12 + 176;
  *(_QWORD *)(v12 + 96) = v12 + 112;
  *(_QWORD *)(v12 + 192) = v12 + 208;
  *(_QWORD *)(v12 + 104) = 0x400000000LL;
  *(__m128i *)(v12 + 160) = si128;
  *(_QWORD *)(v12 + 200) = 0x400000000LL;
  *(_QWORD *)(v12 + 224) = v12 + 240;
  *(_QWORD *)(v12 + 232) = 0x400000000LL;
  *(_QWORD *)(v12 + 336) = a4;
  *(_QWORD *)(v12 + 152) = 0;
  result = sub_22706E0(v12, a7, v12 + 240, a8, v14, v15, a7, a8, a9, a10);
  *a1 = v12;
  a1[1] = 0;
  return result;
}
