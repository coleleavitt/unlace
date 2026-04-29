unsigned __int64 __fastcall sub_2ED5F0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rcx
  int v4; // ecx
  __m128i v5; // xmm0
  int v6; // ecx
  __int64 v7; // rcx
  __m128i v8; // xmm0
  int v9; // ecx
  int v10; // edx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  int v13; // edx
  __m128i v15; // [rsp+18h] [rbp-150h] BYREF
  __int64 v16; // [rsp+28h] [rbp-140h]
  _BYTE v17[8]; // [rsp+30h] [rbp-138h] BYREF
  __int128 v18; // [rsp+38h] [rbp-130h]
  _QWORD v19[2]; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-108h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp-F8h] BYREF
  int v22; // [rsp+80h] [rbp-E8h]
  int v23; // [rsp+88h] [rbp-E0h]
  char v24; // [rsp+90h] [rbp-D8h]
  __m128i v25; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-C0h]
  _BYTE v27[8]; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-B0h]
  _QWORD v29[2]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v30[2]; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v31[2]; // [rsp+F0h] [rbp-78h] BYREF
  int v32; // [rsp+100h] [rbp-68h]
  int v33; // [rsp+108h] [rbp-60h]
  int v34; // [rsp+110h] [rbp-58h]
  __int64 v35; // [rsp+118h] [rbp-50h]
  unsigned __int64 v36; // [rsp+128h] [rbp-40h]

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 24);
  v36 = __readfsqword(0x28u);
  v16 = v3;
  v15 = v2;
  v19[0] = 0xFFFFFFFF00000000LL;
  v19[1] = 0;
  v20[0] = 0xFFFFFFFF00000000LL;
  v20[1] = 0;
  v21[0] = 0xFFFFFFFF00000000LL;
  v21[1] = 0;
  v18 = 0;
  sub_11ECE0((__int64)v17, a1 + 32);
  v4 = *(_DWORD *)(a1 + 112);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 136));
  v29[1] = 0;
  v22 = v4;
  v6 = *(_DWORD *)(a1 + 120);
  v25 = v5;
  v23 = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 128);
  v30[1] = 0;
  v24 = v6;
  v7 = *(_QWORD *)(a1 + 152);
  v31[1] = 0;
  v26 = v7;
  v29[0] = 0xFFFFFFFF00000000LL;
  v30[0] = 0xFFFFFFFF00000000LL;
  v31[0] = 0xFFFFFFFF00000000LL;
  v28 = 0;
  sub_11ECE0((__int64)v27, a1 + 160);
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v32 = *(_DWORD *)(a1 + 240);
  v9 = *(_DWORD *)(a1 + 248);
  *(__m128i *)(a1 + 8) = v8;
  v33 = v9;
  v34 = *(_DWORD *)(a1 + 256);
  v35 = *(_QWORD *)(a1 + 264);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  sub_11ECE0(a1 + 32, a2 + 32);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 120);
  *(_BYTE *)(a1 + 128) = *(_BYTE *)(a2 + 128);
  *(__m128i *)(a1 + 136) = _mm_loadu_si128((const __m128i *)(a2 + 136));
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  sub_11ECE0(a1 + 160, a2 + 160);
  v10 = v16;
  v11 = _mm_loadu_si128(&v15);
  *(_DWORD *)(a1 + 240) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(a1 + 256) = *(_DWORD *)(a2 + 256);
  *(_QWORD *)(a1 + 264) = *(_QWORD *)(a2 + 264);
  *(_DWORD *)(a2 + 24) = v10;
  *(__m128i *)(a2 + 8) = v11;
  sub_11ECE0(a2 + 32, (__int64)v17);
  v12 = _mm_loadu_si128(&v25);
  *(_DWORD *)(a2 + 112) = v22;
  v13 = v23;
  *(__m128i *)(a2 + 136) = v12;
  *(_DWORD *)(a2 + 120) = v13;
  *(_BYTE *)(a2 + 128) = v24;
  *(_DWORD *)(a2 + 152) = v26;
  sub_11ECE0(a2 + 160, (__int64)v27);
  *(_DWORD *)(a2 + 240) = v32;
  *(_DWORD *)(a2 + 248) = v33;
  *(_DWORD *)(a2 + 256) = v34;
  *(_QWORD *)(a2 + 264) = v35;
  sub_1166E0((__int64)v31);
  sub_1166E0((__int64)v30);
  sub_1166E0((__int64)v29);
  sub_1166E0((__int64)v21);
  sub_1166E0((__int64)v20);
  sub_1166E0((__int64)v19);
  return v36 - __readfsqword(0x28u);
}
