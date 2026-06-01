__m128i *__fastcall sub_21969B0(__m128i *a1, __int64 a2, const __m128i *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v11; // r11d
  unsigned __int32 v12; // r13d
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  unsigned int v15; // r10d
  __m128i v16; // xmm0
  unsigned int v17; // ecx
  unsigned int v18; // esi
  unsigned int v19; // edi
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
  unsigned __int32 v30; // [rsp+0h] [rbp-A8h]
  unsigned __int32 v31; // [rsp+4h] [rbp-A4h]
  unsigned __int32 v32; // [rsp+8h] [rbp-A0h]
  unsigned __int32 v33; // [rsp+Ch] [rbp-9Ch]
  unsigned __int32 v34; // [rsp+10h] [rbp-98h]
  unsigned __int32 v35; // [rsp+14h] [rbp-94h]
  unsigned __int32 v36; // [rsp+18h] [rbp-90h]
  unsigned __int32 v37; // [rsp+1Ch] [rbp-8Ch]
  __int64 v38; // [rsp+28h] [rbp-80h] BYREF
  __m128i v39; // [rsp+30h] [rbp-78h] BYREF
  __m128i v40; // [rsp+40h] [rbp-68h] BYREF
  __m128i v41; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-48h]

  if ( (unsigned __int64)a3 >= sub_215DEC0(a2)
    && (v8 = sub_215DEC0(a2), v7 = (__int64)&a3[3].m128i_i64[1], (unsigned __int64)&a3[3].m128i_u64[1] <= v6 + v8) )
  {
    v11 = a3->m128i_u32[1];
    v12 = a3->m128i_i32[0];
    v13 = a3[1].m128i_u32[3];
    v14 = a3[2].m128i_u32[0];
    v15 = a3[1].m128i_u32[2];
    v16 = _mm_loadu_si128(a3);
    v31 = _byteswap_ulong(v11);
    v17 = a3[2].m128i_u32[3];
    v30 = _byteswap_ulong(a3->m128i_i32[0]);
    v33 = _byteswap_ulong(v13);
    v18 = a3[2].m128i_u32[2];
    v34 = _byteswap_ulong(v14);
    v19 = a3[2].m128i_u32[1];
    v20 = _mm_loadu_si128(a3 + 1);
    v32 = _byteswap_ulong(v15);
    v37 = _byteswap_ulong(v17);
    v21 = a3[3].m128i_u32[0];
    v22 = a3[3].m128i_u32[1];
    v23 = *(unsigned int *)(a2 + 8);
    v36 = _byteswap_ulong(v18);
    v35 = _byteswap_ulong(v19);
    v39 = v16;
    v24 = _byteswap_ulong(v21);
    v25 = _byteswap_ulong(v22);
    v40 = v20;
    if ( (unsigned int)v23 <= 0x14 )
    {
      v26 = 1398784;
      if ( _bittest64(&v26, v23) )
      {
        v17 = v37;
        v18 = v36;
        v22 = v25;
        v21 = v24;
        v19 = v35;
        v14 = v34;
        v13 = v33;
        v15 = v32;
        v11 = v31;
        v12 = v30;
      }
    }
    v39.m128i_i64[0] = __PAIR64__(v11, v12);
    v27 = _mm_load_si128(&v39);
    v40.m128i_i64[1] = __PAIR64__(v13, v15);
    v28 = _mm_load_si128(&v40);
    v41.m128i_i64[0] = __PAIR64__(v19, v14);
    v41.m128i_i64[1] = __PAIR64__(v17, v18);
    v29 = _mm_load_si128(&v41);
    v42 = __PAIR64__(v22, v21);
    a1[3].m128i_i8[8] &= ~1u;
    *a1 = v27;
    a1[1] = v28;
    a1[2] = v29;
    a1[3].m128i_i64[0] = __PAIR64__(v22, v21);
  }
  else
  {
    v39.m128i_i64[0] = (__int64)"Structure read out-of-range";
    v41.m128i_i16[0] = 259;
    sub_21967F0(&v38, v39.m128i_i64, v6, v7);
    v9 = v38;
    a1[3].m128i_i8[8] |= 1u;
    a1->m128i_i64[0] = v9;
  }
  return a1;
}
