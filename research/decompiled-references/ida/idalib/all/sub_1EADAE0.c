__m128i *__fastcall sub_1EADAE0(__m128i *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __m128i v8; // xmm4
  __m128i v9; // xmm5
  const __m128i *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r13
  __m128i v20; // rax
  __int32 v21; // ecx
  __m128i v22; // xmm0
  __m128i v23; // xmm6
  __m128i v24; // xmm7
  __m128i v25; // xmm6
  __m128i v26; // xmm7
  __m128i v27; // [rsp+20h] [rbp-88h] BYREF
  __m128i v28; // [rsp+30h] [rbp-78h] BYREF
  __m128i v29; // [rsp+40h] [rbp-68h] BYREF
  __m128i v30; // [rsp+50h] [rbp-58h] BYREF
  __m128i v31; // [rsp+60h] [rbp-48h] BYREF

  if ( a3 )
  {
    if ( a3 > *(_DWORD *)(a2 + 4480) )
    {
      sub_1EAD680(a2, "submodule ID out of range in AST file", 37);
    }
    else
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a2 + 4472) + 8LL * (a3 - 1));
      if ( v4 )
      {
        sub_F95CD0(&v27, v4);
        v5 = _mm_load_si128(&v27);
        a1[5].m128i_i8[0] = 1;
        v6 = _mm_load_si128(&v28);
        v7 = _mm_load_si128(&v29);
        v8 = _mm_load_si128(&v30);
        v9 = _mm_load_si128(&v31);
        *a1 = v5;
        a1[1] = v6;
        a1[2] = v7;
        a1[3] = v8;
        a1[4] = v9;
        return a1;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 200) )
  {
    v11 = **(const __m128i ***)(a2 + 160);
    v12 = sub_228AA60(v11[6].m128i_i64[1], v11[7].m128i_i64[0], 0);
    v14 = v13;
    v15 = v12;
    v16 = sub_228AA60(v11->m128i_i64[1], v11[1].m128i_i64[0], 0);
    v18 = v17;
    v19 = v16;
    v20.m128i_i64[0] = sub_228A4B0(v11->m128i_i64[1], v11[1].m128i_i64[0], 0);
    v21 = v11[15].m128i_i32[0];
    a1[5].m128i_i8[0] = 1;
    v22 = _mm_loadu_si128(v11 + 14);
    v27.m128i_i64[0] = v15;
    v27.m128i_i64[1] = v14;
    v23 = _mm_load_si128(&v27);
    v28 = v20;
    v24 = _mm_load_si128(&v28);
    v31.m128i_i32[0] = v21;
    v29.m128i_i64[0] = v19;
    v29.m128i_i64[1] = v18;
    v31.m128i_i64[1] = 0;
    *a1 = v23;
    v25 = _mm_load_si128(&v29);
    a1[1] = v24;
    v26 = _mm_load_si128(&v31);
    a1[2] = v25;
    a1[3] = v22;
    a1[4] = v26;
  }
  else
  {
    a1[5].m128i_i8[0] = 0;
  }
  return a1;
}
