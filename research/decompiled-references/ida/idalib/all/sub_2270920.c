__int64 __fastcall sub_2270920(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v9; // rbx
  __m128i si128; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax

  v9 = operator new(0x158u);
  *(_BYTE *)(v9 + 76) = a5;
  *(_QWORD *)v9 = a4;
  *(_OWORD *)(v9 + 80) = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 96) = v9 + 112;
  *(_QWORD *)(v9 + 144) = v9 + 160;
  *(_QWORD *)(v9 + 104) = 0x400000000LL;
  *(_QWORD *)(v9 + 192) = v9 + 208;
  *(_QWORD *)(v9 + 200) = 0x400000000LL;
  *(_QWORD *)(v9 + 232) = 0x400000000LL;
  *(__m128i *)(v9 + 160) = si128;
  *(_QWORD *)(v9 + 176) = v9 + 176;
  *(_QWORD *)(v9 + 184) = v9 + 176;
  *(_QWORD *)(v9 + 224) = v9 + 240;
  *(_QWORD *)(v9 + 336) = a6;
  *(_QWORD *)(v9 + 152) = 0;
  result = sub_22706E0(v9, a2, v9 + 240, v9 + 176, v11, v12, a2, a3, (const void **)"YAML", (const void **)byte_4);
  *a1 = v9;
  a1[1] = 0;
  return result;
}
