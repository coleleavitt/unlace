void __fastcall sub_224FE20(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // rbx
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  __m128i v6; // xmm5
  __m128i *v7; // r14
  __m128i v8; // xmm6
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int8 *v11; // rsi
  __m128i *v12; // rax
  __m128i *v13; // rax
  size_t v14; // r15
  unsigned __int64 v15; // r12
  __int8 *v16; // rsi
  __m128i v17; // xmm1
  __m128i v18; // xmm2
  size_t v19; // r15
  unsigned __int64 v20; // r12
  __int64 v21; // r12
  unsigned __int64 v22; // rdi
  __m128i *v23; // rdi
  __int64 v24; // r12
  unsigned __int64 v25; // rdi
  __m128i *v26; // rdi
  __m128i v27; // xmm7
  __m128i v28; // xmm5
  const __m128i *v29; // r14
  __m128i v30; // xmm6
  __m128i v31; // xmm7
  _BYTE *v32; // rsi
  __int64 v33; // rdx
  const __m128i *v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r12
  __m128i v38; // xmm4
  __m128i v39; // xmm3
  __int64 v40; // rsi
  __int64 v41; // rdi
  __m128i v42; // xmm6
  __m128i v43; // xmm7
  __m128i *v44; // [rsp+0h] [rbp-B8h]
  __m128i *v45; // [rsp+0h] [rbp-B8h]
  __m128i v47; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v48; // [rsp+20h] [rbp-98h] BYREF
  __int64 v49; // [rsp+30h] [rbp-88h]
  void *v50[2]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v51[16]; // [rsp+48h] [rbp-70h] BYREF
  void *v52[2]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v53[80]; // [rsp+68h] [rbp-50h] BYREF

  if ( (const __m128i *)a1 != a2 )
  {
    v2 = (const __m128i *)(a1 + 104);
    if ( a2 != (const __m128i *)(a1 + 104) )
    {
      do
      {
        v4 = (_BYTE *)v2[2].m128i_i64[1];
        v5 = (__int64)&v4[v2[3].m128i_i64[0]];
        if ( *(double *)a1 > *(double *)v2->m128i_i64 )
        {
          v30 = _mm_loadu_si128(v2);
          v29 = (const __m128i *)((char *)v2 + 104);
          v31 = _mm_loadu_si128(v2 + 1);
          v49 = v2[2].m128i_i64[0];
          v47 = v30;
          v48 = v31;
          v50[0] = v51;
          sub_224DA20(v50, v4, v5);
          v32 = (_BYTE *)v2[4].m128i_i64[1];
          v33 = v2[5].m128i_i64[0];
          v52[0] = v53;
          sub_224DA20(v52, v32, (__int64)&v32[v33]);
          v34 = v2;
          v35 = (__int64)&v2[2].m128i_i64[1];
          v36 = (__int64)v34->m128i_i64 - a1;
          v37 = 0x4EC4EC4EC4EC4EC5LL * (v36 >> 3);
          if ( v36 > 0 )
          {
            do
            {
              v38 = _mm_loadu_si128((const __m128i *)(v35 - 128));
              v39 = _mm_loadu_si128((const __m128i *)(v35 - 144));
              *(_QWORD *)(v35 - 8) = *(_QWORD *)(v35 - 112);
              *(__m128i *)(v35 - 40) = v39;
              *(__m128i *)(v35 - 24) = v38;
              sub_9EE8A0(v35, v35 - 104);
              v40 = v35 - 72;
              v41 = v35 + 32;
              v35 -= 104;
              sub_9EE8A0(v41, v40);
              --v37;
            }
            while ( v37 );
          }
          v42 = _mm_load_si128(&v47);
          v43 = _mm_load_si128(&v48);
          *(_QWORD *)(a1 + 32) = v49;
          *(__m128i *)a1 = v42;
          *(__m128i *)(a1 + 16) = v43;
          sub_9EE8A0(a1 + 40, (__int64)v50);
          sub_9EE8A0(a1 + 72, (__int64)v52);
          if ( v52[0] != v53 )
            operator delete(v52[0]);
          if ( v50[0] != v51 )
            operator delete(v50[0]);
        }
        else
        {
          v6 = _mm_loadu_si128(v2);
          v7 = (__m128i *)&v2[-7].m128i_u64[1];
          v8 = _mm_loadu_si128(v2 + 1);
          v49 = v2[2].m128i_i64[0];
          v47 = v6;
          v48 = v8;
          v50[0] = v51;
          sub_224DA20(v50, v4, v5);
          v9 = (_BYTE *)v2[4].m128i_i64[1];
          v10 = v2[5].m128i_i64[0];
          v52[0] = v53;
          sub_224DA20(v52, v9, (__int64)&v9[v10]);
          if ( *(double *)&v2[-7].m128i_i64[1] > *(double *)v47.m128i_i64 )
          {
            while ( 1 )
            {
              v17 = _mm_loadu_si128(v7);
              v18 = _mm_loadu_si128(v7 + 1);
              v19 = v7[3].m128i_u64[0];
              v7[8].m128i_i64[1] = v7[2].m128i_i64[0];
              v12 = (__m128i *)v7[9].m128i_i64[0];
              *(__m128i *)((char *)v7 + 104) = v17;
              *(__m128i *)((char *)v7 + 120) = v18;
              if ( v12 == &v7[10] )
                v20 = 15;
              else
                v20 = v7[10].m128i_u64[0];
              if ( v19 > v20 )
              {
                if ( (v19 & 0x8000000000000000LL) != 0LL )
                  goto LABEL_56;
                v21 = 2 * v20;
                if ( v19 < v21 )
                {
                  v22 = v21 + 1;
                  if ( v21 < 0 )
                  {
                    v22 = 0x8000000000000000LL;
                    v21 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                }
                else
                {
                  v22 = v19 + 1;
                  v21 = v19;
                }
                v12 = (__m128i *)operator new(v22);
                v23 = (__m128i *)v7[9].m128i_i64[0];
                if ( v23 != &v7[10] )
                {
                  v44 = v12;
                  operator delete(v23);
                  v12 = v44;
                }
                v7[9].m128i_i64[0] = (__int64)v12;
                v7[10].m128i_i64[0] = v21;
              }
              if ( v19 )
              {
                v11 = (__int8 *)v7[2].m128i_i64[1];
                if ( v19 == 1 )
                  v12->m128i_i8[0] = *v11;
                else
                  memcpy(v12, v11, v19);
                v12 = (__m128i *)v7[9].m128i_i64[0];
              }
              v7[9].m128i_i64[1] = v19;
              v12->m128i_i8[v19] = 0;
              v13 = (__m128i *)v7[11].m128i_i64[0];
              v14 = v7[5].m128i_u64[0];
              if ( v13 == &v7[12] )
                v15 = 15;
              else
                v15 = v7[12].m128i_u64[0];
              if ( v14 > v15 )
              {
                if ( (v14 & 0x8000000000000000LL) != 0LL )
LABEL_56:
                  std::__throw_length_error("basic_string::_M_create");
                v24 = 2 * v15;
                if ( v14 < v24 )
                {
                  v25 = v24 + 1;
                  if ( v24 < 0 )
                  {
                    v25 = 0x8000000000000000LL;
                    v24 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                }
                else
                {
                  v25 = v14 + 1;
                  v24 = v7[5].m128i_i64[0];
                }
                v13 = (__m128i *)operator new(v25);
                v26 = (__m128i *)v7[11].m128i_i64[0];
                if ( v26 != &v7[12] )
                {
                  v45 = v13;
                  operator delete(v26);
                  v13 = v45;
                }
                v7[11].m128i_i64[0] = (__int64)v13;
                v7[12].m128i_i64[0] = v24;
              }
              if ( v14 )
              {
                v16 = (__int8 *)v7[4].m128i_i64[1];
                if ( v14 == 1 )
                  v13->m128i_i8[0] = *v16;
                else
                  memcpy(v13, v16, v14);
                v13 = (__m128i *)v7[11].m128i_i64[0];
              }
              v7[11].m128i_i64[1] = v14;
              v13->m128i_i8[v14] = 0;
              if ( *(double *)&v7[-7].m128i_i64[1] <= *(double *)v47.m128i_i64 )
                break;
              v7 = (__m128i *)((char *)v7 - 104);
            }
          }
          else
          {
            v7 = (__m128i *)v2;
          }
          v27 = _mm_load_si128(&v47);
          v28 = _mm_load_si128(&v48);
          v7[2].m128i_i64[0] = v49;
          *v7 = v27;
          v7[1] = v28;
          sub_9EE8A0((__int64)&v7[2].m128i_i64[1], (__int64)v50);
          sub_9EE8A0((__int64)&v7[4].m128i_i64[1], (__int64)v52);
          if ( v52[0] != v53 )
            operator delete(v52[0]);
          if ( v50[0] != v51 )
            operator delete(v50[0]);
          v29 = (const __m128i *)((char *)v2 + 104);
        }
        v2 = v29;
      }
      while ( a2 != v29 );
    }
  }
}
