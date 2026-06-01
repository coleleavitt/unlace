__m128i *__fastcall sub_21973E0(__m128i *a1, __int64 a2, const __m128i *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v11; // r11d
  unsigned __int32 v12; // r13d
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r10
  __m128i v16; // xmm0
  unsigned int v17; // ecx
  unsigned int v18; // esi
  unsigned __int64 v19; // rdi
  __m128i v20; // xmm1
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned __int64 v23; // rbp
  unsigned __int32 v24; // r14d
  unsigned __int32 v25; // r15d
  __int64 v26; // r12
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __m128i v29; // xmm4
  __m128i v30; // xmm5
  unsigned __int32 v31; // [rsp+0h] [rbp-C8h]
  unsigned __int32 v32; // [rsp+4h] [rbp-C4h]
  unsigned __int32 v33; // [rsp+8h] [rbp-C0h]
  unsigned __int32 v34; // [rsp+Ch] [rbp-BCh]
  unsigned __int64 v35; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v36; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v38; // [rsp+28h] [rbp-A0h]
  __int64 v39; // [rsp+38h] [rbp-90h] BYREF
  __m128i v40; // [rsp+40h] [rbp-88h] BYREF
  __m128i v41; // [rsp+50h] [rbp-78h] BYREF
  __m128i v42; // [rsp+60h] [rbp-68h] BYREF
  __m128i v43; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+80h] [rbp-48h]

  if ( (unsigned __int64)a3 >= sub_215DEC0(a2)
    && (v8 = sub_215DEC0(a2), v7 = (__int64)&a3[4].m128i_i64[1], (unsigned __int64)&a3[4].m128i_u64[1] <= v6 + v8) )
  {
    v11 = a3->m128i_u32[1];
    v12 = a3->m128i_i32[0];
    v13 = a3[2].m128i_u64[0];
    v14 = a3[2].m128i_u64[1];
    v15 = a3[1].m128i_u64[1];
    v16 = _mm_loadu_si128(a3);
    v32 = _byteswap_ulong(v11);
    v17 = a3[3].m128i_u32[3];
    v31 = _byteswap_ulong(a3->m128i_i32[0]);
    v37 = _byteswap_uint64(v13);
    v18 = a3[3].m128i_u32[2];
    v36 = _byteswap_uint64(v14);
    v19 = a3[3].m128i_u64[0];
    v20 = _mm_loadu_si128(a3 + 1);
    v38 = _byteswap_uint64(v15);
    v34 = _byteswap_ulong(v17);
    v21 = a3[4].m128i_u32[0];
    v22 = a3[4].m128i_u32[1];
    v23 = *(unsigned int *)(a2 + 8);
    v33 = _byteswap_ulong(v18);
    v35 = _byteswap_uint64(v19);
    v40 = v16;
    v24 = _byteswap_ulong(v21);
    v25 = _byteswap_ulong(v22);
    v41 = v20;
    if ( (unsigned int)v23 <= 0x14 )
    {
      v26 = 1398784;
      if ( _bittest64(&v26, v23) )
      {
        v17 = v34;
        v18 = v33;
        v22 = v25;
        v21 = v24;
        v19 = v35;
        v14 = v36;
        v13 = v37;
        v15 = v38;
        v11 = v32;
        v12 = v31;
      }
    }
    v40.m128i_i64[0] = __PAIR64__(v11, v12);
    v27 = _mm_load_si128(&v40);
    v41.m128i_i64[1] = v15;
    v28 = _mm_load_si128(&v41);
    v42.m128i_i64[0] = v13;
    v42.m128i_i64[1] = v14;
    v29 = _mm_load_si128(&v42);
    v43.m128i_i64[0] = v19;
    v43.m128i_i64[1] = __PAIR64__(v17, v18);
    v30 = _mm_load_si128(&v43);
    v44 = __PAIR64__(v22, v21);
    a1[4].m128i_i8[8] &= ~1u;
    *a1 = v27;
    a1[1] = v28;
    a1[2] = v29;
    a1[3] = v30;
    a1[4].m128i_i64[0] = __PAIR64__(v22, v21);
  }
  else
  {
    v40.m128i_i64[0] = (__int64)"Structure read out-of-range";
    v42.m128i_i16[0] = 259;
    sub_21967F0(&v39, v40.m128i_i64, v6, v7);
    v9 = v39;
    a1[4].m128i_i8[8] |= 1u;
    a1->m128i_i64[0] = v9;
  }
  return a1;
}
