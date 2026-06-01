__int64 __fastcall sub_71DF90(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  int v3; // eax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v9[48]; // [rsp+18h] [rbp-30h] BYREF

  v1 = sub_186B270(0x100u);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)(unsigned __int64)v2);
  sub_180C5A0(v9, "datatype");
  v3 = sub_15DA4C0(v2 + 560, v9);
  *(_QWORD *)(v1 + 8) = v2;
  *(_DWORD *)(v1 + 16) = v3;
  *(_QWORD *)v1 = &off_1C537C0;
  *(_QWORD *)(v1 + 24) = a1;
  sub_15F01E0(v1 + 32, v2);
  v4 = _mm_load_si128(&v8);
  *(_QWORD *)(v1 + 72) = 0;
  *(_QWORD *)(v1 + 80) = v2;
  *(_QWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 96) = 0;
  *(_QWORD *)(v1 + 104) = 0;
  *(_QWORD *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 120) = v2;
  *(_QWORD *)(v1 + 128) = 0;
  *(_QWORD *)(v1 + 136) = v1 + 184;
  *(_QWORD *)(v1 + 144) = 1;
  *(_QWORD *)(v1 + 152) = 0;
  *(_QWORD *)(v1 + 160) = 0;
  *(_DWORD *)(v1 + 168) = 1065353216;
  *(_QWORD *)(v1 + 176) = 0;
  *(_QWORD *)(v1 + 184) = 0;
  *(__m128i *)(v1 + 56) = v4;
  v5 = sub_186B270(0x100u);
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 88) = 0;
  *(_DWORD *)(v5 + 120) = 0;
  *(_DWORD *)(v5 + 152) = 0;
  *(_DWORD *)(v5 + 184) = 0;
  *(_DWORD *)(v5 + 216) = 0;
  *(_DWORD *)(v5 + 248) = 0;
  *(_QWORD *)(v1 + 192) = v5;
  *(_QWORD *)(v1 + 200) = 8;
  *(_DWORD *)(v1 + 208) = 0;
  *(_OWORD *)v5 = 0;
  *(_OWORD *)(v5 + 32) = 0;
  *(_OWORD *)(v5 + 64) = 0;
  *(_OWORD *)(v5 + 96) = 0;
  *(_OWORD *)(v5 + 128) = 0;
  *(_OWORD *)(v5 + 160) = 0;
  *(_OWORD *)(v5 + 192) = 0;
  *(_OWORD *)(v5 + 224) = 0;
  v6 = sub_186B270(0x100u);
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  *(_DWORD *)(v6 + 88) = 0;
  *(_DWORD *)(v6 + 120) = 0;
  *(_DWORD *)(v6 + 152) = 0;
  *(_DWORD *)(v6 + 184) = 0;
  *(_DWORD *)(v6 + 216) = 0;
  *(_DWORD *)(v6 + 248) = 0;
  *(_QWORD *)(v1 + 216) = v6;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 96) = 0;
  *(_OWORD *)(v6 + 128) = 0;
  *(_OWORD *)(v6 + 160) = 0;
  *(_OWORD *)(v6 + 192) = 0;
  *(_OWORD *)(v6 + 224) = 0;
  *(_QWORD *)(v1 + 224) = 8;
  *(_DWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 240) = v2;
  *(_QWORD *)(v1 + 248) = 0;
  return v1;
}

