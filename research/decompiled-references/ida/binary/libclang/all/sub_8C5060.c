__m128i *__fastcall sub_8C5060(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        void *src,
        __int64 a9,
        unsigned int a10,
        unsigned __int8 a11)
{
  __int64 v11; // r10
  __m128i v12; // xmm1
  __int64 v14; // r11
  int v15; // ecx
  unsigned __int64 v16; // r11
  _QWORD *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __m128i *v21; // rbx
  __m128i v22; // xmm0
  __int32 v23; // edx
  int v24; // eax
  __m128i *v25; // rbp
  size_t v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rdi
  __int64 (__fastcall *v29)(__int64); // rax
  __int64 v30; // rax
  unsigned __int8 v31; // al
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+0h] [rbp-70h]
  unsigned __int64 v37; // [rsp+0h] [rbp-70h]
  __m128i v38; // [rsp+8h] [rbp-68h] BYREF
  int v39; // [rsp+1Ch] [rbp-54h]
  int v40; // [rsp+20h] [rbp-50h]
  int v41; // [rsp+24h] [rbp-4Ch]
  unsigned __int64 v42[8]; // [rsp+30h] [rbp-40h] BYREF

  v11 = a3;
  v12 = _mm_cvtsi32_si128(a5);
  v14 = *(_QWORD *)(a2 + 48);
  v15 = a7;
  if ( v14 )
  {
    v16 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    v17 = (_QWORD *)v16;
  }
  else
  {
    v40 = a7;
    v39 = a6;
    v38.m128i_i32[0] = a5;
    v33 = sub_6E8D60((__int64)a1, a2);
    v15 = a7;
    a6 = v39;
    v12 = _mm_cvtsi32_si128(v38.m128i_u32[0]);
    v11 = a3;
    v16 = v33;
    v17 = (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v18 = a1[274];
  v19 = (unsigned int)(8 * a9 + 40);
  a1[284] += v19;
  v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v19 + v20 && v18 )
  {
    a1[274] = v19 + v20;
    v21 = (__m128i *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v41 = v15;
    v40 = a6;
    v38.m128i_i64[0] = v11;
    v37 = v16;
    v39 = _mm_cvtsi128_si32(v12);
    v34 = sub_8C1090((__int64)(a1 + 274), v19, 3);
    v15 = v41;
    a6 = v40;
    v12 = _mm_cvtsi32_si128(v39);
    v11 = v38.m128i_i64[0];
    v21 = (__m128i *)v34;
    v16 = v37;
  }
  v22 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(HIDWORD(v11))),
          _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(a10)));
  v21->m128i_i16[0] = v21->m128i_i16[0] & 0xFE00 | 0x34;
  if ( byte_4AD234C )
  {
    v40 = v15;
    v39 = a6;
    v35 = v16;
    v38 = v22;
    sub_AC4570(52);
    LOBYTE(v15) = v40;
    LOBYTE(a6) = v39;
    v22 = _mm_load_si128(&v38);
    v16 = v35;
  }
  v23 = v21->m128i_i32[0];
  v24 = a4 << 19;
  v21->m128i_i64[1] = v16;
  v25 = v21 + 2;
  v21->m128i_i16[2] = a9;
  v21[1] = v22;
  v21->m128i_i32[0] = v23 & 0xFF8001FF
                    | ((unsigned __int8)v15 << 22) & 0x7FFE00
                    | ((unsigned __int8)a6 << 21) & 0x7FFE00
                    | v24 & 0x180000;
  sub_B0E910(*v17);
  if ( (_DWORD)a9 )
  {
    v26 = 8LL * (unsigned int)a9;
    v25 = (__m128i *)((char *)v25 + v26);
    memmove(&v21[2], src, v26);
  }
  v27 = sub_B0E910(*(_QWORD *)(v21->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL));
  v28 = (_QWORD *)sub_7A3750(v27);
  v29 = *(__int64 (__fastcall **)(__int64))(*v28 + 64LL);
  if ( v29 == sub_5F7E00 )
    v30 = sub_78BC30(v28, v42);
  else
    v30 = v29((__int64)v28);
  v25->m128i_i64[0] = v30;
  v31 = sub_76D040((__int64)v21, a11);
  v21->m128i_i8[1] = (v31 << 6) | v21->m128i_i8[1] & 0x3F;
  v21->m128i_i8[2] = v21->m128i_i8[2] & 0xF8 | (v31 >> 2) & 7;
  return v21;
}

