__int64 __fastcall sub_8508E0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  _OWORD *v4; // rax
  __m128i si128; // xmm0
  void *v6; // rbp
  void *v7; // rbp
  void *v8; // rbp

  v3 = *(_QWORD *)(a3 + 72);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = 0;
  sub_842490(a1 + 32, a2, a3);
  *(_OWORD *)(a1 + 176) = 0;
  sub_1862300(a1 + 184, "drat.disable", 1);
  *(_QWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 216) = v4;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B66A0);
  *(_QWORD *)(a1 + 224) = 8;
  *(_DWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 256) = -1;
  *(__m128i *)(a1 + 240) = si128;
  sub_180C5A0(a1 + 264, "mbqi");
  *(_OWORD *)(a1 + 272) = 0;
  v6 = (void *)sub_186B270(0x98u);
  sub_E98EB0(v6, *(_QWORD *)(a1 + 16));
  sub_E98F60(v6, 0);
  sub_E98F70(v6, 1);
  sub_8488C0(a1, v6);
  v7 = (void *)sub_186B270(0x98u);
  sub_ECCA20(v7, *(_QWORD *)(a1 + 16));
  sub_8488C0(a1, v7);
  v8 = (void *)sub_186B270(0x98u);
  sub_EAD0A0(v8, *(_QWORD *)(a1 + 16));
  return sub_8488C0(a1, v8);
}

