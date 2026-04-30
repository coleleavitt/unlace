__m128i *__fastcall sub_5752C0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const __m128i a7,
        __int128 a8)
{
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  char *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __m128i si128; // xmm0
  __m128i v21; // xmm1
  __m128i v23[2]; // [rsp+20h] [rbp-78h] BYREF
  __m128i v24; // [rsp+40h] [rbp-58h] BYREF
  __m128i v25[4]; // [rsp+50h] [rbp-48h] BYREF

  v8 = *((_QWORD *)&a8 + 1);
  v9 = a8;
  v24.m128i_i32[2] = a7.m128i_u16[6];
  v25[0] = _mm_loadu_si128(&a7);
  v25[1] = _mm_loadu_si128((const __m128i *)&a8);
  v10 = (char *)off_8C52B8(0x100u);
  v23[0] = _mm_unpacklo_epi64((__m128i)v8, (__m128i)(unsigned __int64)v10);
  LODWORD(v8) = sub_565DC0(256, a2, v11, v12, v13, v14, _mm_load_si128(v25).m128i_u32[0]);
  v19 = sub_565DD0(256, a2, v15, v16, v17, v18, (__int128)_mm_load_si128(v25));
  si128 = _mm_load_si128(v23);
  *(_QWORD *)v10 = v9;
  *(_QWORD *)(v10 + 12) = v19;
  *((_DWORD *)v10 + 2) = v8;
  v24.m128i_i64[0] = 0x800000001LL;
  v21 = _mm_load_si128(&v24);
  *(_QWORD *)(v10 + 20) = 0;
  *((_DWORD *)v10 + 7) = 0;
  *a1 = si128;
  a1[1] = v21;
  return a1;
}
