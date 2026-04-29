unsigned __int64 __fastcall sub_2B1D70(__int64 a1)
{
  __m128i v1; // xmm0
  int v2; // eax
  __m128i v3; // xmm0
  __int64 v4; // rax
  int v5; // eax
  __m128i v6; // xmm0
  int v7; // eax
  int v8; // eax
  __m128i v10; // [rsp+0h] [rbp-118h] BYREF
  __int64 v11; // [rsp+10h] [rbp-108h]
  _QWORD v12[4]; // [rsp+18h] [rbp-100h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-B0h]
  __m128i v17; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+80h] [rbp-98h]
  _BYTE v19[8]; // [rsp+88h] [rbp-90h] BYREF
  __int128 v20; // [rsp+90h] [rbp-88h]
  _QWORD v21[2]; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v22[2]; // [rsp+B8h] [rbp-60h] BYREF
  _QWORD v23[2]; // [rsp+C8h] [rbp-50h] BYREF
  int v24; // [rsp+D8h] [rbp-40h]
  int v25; // [rsp+E0h] [rbp-38h]
  unsigned __int64 v26; // [rsp+E8h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v11 = 0xFFFFFFFFLL;
  v13[0] = 0xFFFFFFFF00000000LL;
  v10 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  memset(v12, 0, sizeof(v12));
  v13[1] = 0;
  v14[0] = 0xFFFFFFFF00000000LL;
  v14[1] = 0;
  v15[0] = 0xFFFFFFFF00000000LL;
  v15[1] = 0;
  v16 = 0;
  sub_329320(v12, -1);
  v1 = _mm_load_si128(&v10);
  LODWORD(v16) = 0;
  v18 = 0xFFFFFFFFLL;
  v17 = v1;
  v21[0] = 0xFFFFFFFF00000000LL;
  v21[1] = 0;
  v22[0] = 0xFFFFFFFF00000000LL;
  v22[1] = 0;
  v23[0] = 0xFFFFFFFF00000000LL;
  v23[1] = 0;
  v20 = 0;
  sub_11ECE0((__int64)v19, (__int64)v12);
  v2 = v16;
  v3 = _mm_load_si128(&v17);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  v24 = v2;
  *(_QWORD *)a1 = off_4ADC60;
  v4 = v18;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 80) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 96) = 0xFFFFFFFF00000000LL;
  *(__m128i *)(a1 + 8) = v3;
  *(_OWORD *)(a1 + 40) = 0;
  v25 = -1;
  sub_11ECE0(a1 + 32, (__int64)v19);
  v5 = v24;
  v6 = _mm_load_si128(&v17);
  *(_BYTE *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 112) = v5;
  v7 = v25;
  *(__m128i *)(a1 + 136) = v6;
  *(_DWORD *)(a1 + 120) = v7;
  *(_QWORD *)(a1 + 152) = v18;
  sub_2AE870(a1 + 160, (__int64)v19);
  v8 = v24;
  *(_DWORD *)(a1 + 256) = -2;
  *(_DWORD *)(a1 + 240) = v8;
  *(_DWORD *)(a1 + 248) = v25;
  sub_1166E0((__int64)v23);
  sub_1166E0((__int64)v22);
  sub_1166E0((__int64)v21);
  sub_1166E0((__int64)v15);
  sub_1166E0((__int64)v14);
  sub_1166E0((__int64)v13);
  *(_QWORD *)a1 = off_4ADC88;
  return v26 - __readfsqword(0x28u);
}
