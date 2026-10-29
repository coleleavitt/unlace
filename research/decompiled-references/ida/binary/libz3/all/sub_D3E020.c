__int64 __fastcall sub_D3E020(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __m128i si128; // xmm0
  __int64 v4; // rbx
  _OWORD *v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  void *v10[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h] BYREF
  int v12[2]; // [rsp+18h] [rbp-20h] BYREF

  *(__m128i *)v10 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  v2 = sub_186B270(0xA8u);
  si128 = _mm_load_si128((const __m128i *)v10);
  *(_DWORD *)(v2 + 8) = 0;
  v4 = v2;
  *(_QWORD *)v2 = &off_1C5A590;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = a2;
  *(__m128i *)(v2 + 16) = si128;
  v11 = 0;
  sub_180C5A0(v12, "pb");
  *(_DWORD *)(v4 + 48) = sub_15DA4C0(a2 + 560, v12);
  *(_QWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)(v4 + 88) = 1;
  *(_QWORD *)(v4 + 96) = 0;
  *(_OWORD *)(v4 + 56) = 0;
  v5 = (_OWORD *)sub_186B270(0xC0u);
  *(_QWORD *)(v4 + 104) = v5;
  *(_QWORD *)(v4 + 112) = 8;
  *(_DWORD *)(v4 + 120) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[11] = 0;
  *(_OWORD *)(v4 + 128) = 0;
  *(_QWORD *)v12 = 0;
  sub_14B7810(v4 + 152, a2, (int)v12, v6, v7, v8, v10[0]);
  sub_18572D0(v12);
  sub_18572D0(&v11);
  return v4;
}

