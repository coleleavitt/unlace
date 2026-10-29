void __fastcall sub_4FFD30(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rdi
  __m128i v6[3]; // [rsp+8h] [rbp-30h] BYREF

  sub_180C5A0(v6, "bound_relation");
  v3 = _mm_loadl_epi64(v6);
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &off_1C501B8;
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)a2);
  v4 = sub_4D6490(a2);
  sub_16669D0(a1 + 40, v4);
  v5 = *(_QWORD *)(a1 + 24);
  v6[0].m128i_i64[0] = 0;
  *(_QWORD *)(a1 + 56) = sub_4D6490(v5);
  *(_WORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 64) = 256;
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 128) = a1 + 144;
  *(_QWORD *)(a1 + 136) = 0x1000000000LL;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  sub_14DC230(a1 + 56, v6);
  sub_18572D0(v6);
}

