__int64 __fastcall sub_D3D780(unsigned __int64 a1)
{
  __int64 v1; // rax
  __m128i si128; // xmm0
  __int64 v3; // rbx
  _OWORD *v4; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  void *v9[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  int v11[2]; // [rsp+18h] [rbp-20h] BYREF

  *(__m128i *)v9 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  v1 = sub_186B270(0xA8u);
  si128 = _mm_load_si128((const __m128i *)v9);
  *(_DWORD *)(v1 + 8) = 0;
  v3 = v1;
  *(_QWORD *)v1 = &off_1C5A590;
  *(_QWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 40) = a1;
  *(__m128i *)(v1 + 16) = si128;
  v10 = 0;
  sub_180C5A0(v11, "pb");
  *(_DWORD *)(v3 + 48) = sub_15DA4C0(a1 + 560, v11);
  *(_QWORD *)(v3 + 72) = 0;
  *(_QWORD *)(v3 + 80) = 0;
  *(_QWORD *)(v3 + 88) = 1;
  *(_QWORD *)(v3 + 96) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  v4 = (_OWORD *)sub_186B270(0xC0u);
  *(_QWORD *)(v3 + 104) = v4;
  *(_QWORD *)(v3 + 112) = 8;
  *(_DWORD *)(v3 + 120) = 0;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[8] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[11] = 0;
  *(_OWORD *)(v3 + 128) = 0;
  *(_QWORD *)v11 = 0;
  sub_14B7810(v3 + 152, a1, (int)v11, v5, v6, v7, v9[0]);
  sub_18572D0(v11);
  sub_18572D0(&v10);
  return v3;
}

