__m128i *__fastcall sub_15BD5F0(__m128i *a1, __int64 a2, __int64 a3, unsigned int a4, char a5, char a6)
{
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  const __m128i *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // r9
  __m128i v18; // xmm1
  const __m128i *v19; // rbp
  __m128i si128; // xmm0
  __int64 v21; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rax
  size_t v28; // r12
  __int64 v29; // rax
  size_t v30; // rax
  size_t *v31; // r13
  size_t **v32; // [rsp+0h] [rbp-A8h]
  _QWORD *v33; // [rsp+10h] [rbp-98h]
  __int64 v34; // [rsp+18h] [rbp-90h]
  __int64 v35; // [rsp+20h] [rbp-88h]
  __int64 v36; // [rsp+28h] [rbp-80h]
  __int64 v37[15]; // [rsp+30h] [rbp-78h] BYREF

  sub_15B9890((__int64)v37, a3, a2);
  v9 = a4;
  v10 = sub_15BCF10(v37, a4, a5, a6, 2);
  v11 = sub_15BC920(v10);
  v12 = sub_15BCA50(v11);
  v13 = (const __m128i *)sub_15BCC50(v12);
  v18 = _mm_loadu_si128(v13);
  v19 = v13;
  a1[1] = _mm_loadu_si128(v13 + 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *a1 = v18;
  v21 = v13[2].m128i_i64[0];
  a1[3] = si128;
  a1[2].m128i_i64[0] = v21;
  LODWORD(v21) = v19[3].m128i_i32[1];
  a1[2].m128i_i64[1] = 0;
  if ( (_DWORD)v21 )
  {
    v9 = v19[3].m128i_u32[0];
    sub_2244BF0(&a1[2].m128i_u64[1], v9);
    v15 = v19[2].m128i_i64[1];
    v23 = a1[2].m128i_i64[1];
    v24 = a1[3].m128i_u32[0];
    v25 = 8 * v24 + 8;
    v35 = v15;
    v34 = v23;
    a1[3].m128i_i32[1] = v19[3].m128i_i32[1];
    v14 = v19[3].m128i_u32[2];
    a1[3].m128i_i32[2] = v14;
    if ( (_DWORD)v24 )
    {
      v26 = 0;
      v36 = 8LL * (unsigned int)(v24 - 1);
      v27 = v15;
      while ( 1 )
      {
        v31 = *(size_t **)(v27 + v26);
        v32 = (size_t **)(v23 + v26);
        if ( v31 == (size_t *)-8LL || !v31 )
        {
          *v32 = v31;
        }
        else
        {
          v28 = *v31;
          v9 = 8;
          v29 = sub_22300B0(*v31 + 17, 8, v14, v15, v16, v17);
          v16 = (_QWORD *)v29;
          if ( v28 )
          {
            v9 = (__int64)(v31 + 2);
            v33 = (_QWORD *)v29;
            memcpy((void *)(v29 + 16), v31 + 2, v28);
            v16 = v33;
          }
          *((_BYTE *)v16 + v28 + 16) = 0;
          v30 = v31[1];
          *v16 = v28;
          v15 = v34;
          v16[1] = v30;
          *v32 = v16;
          *(_DWORD *)(v34 + v25) = *(_DWORD *)(v35 + v25);
        }
        v25 += 4;
        if ( v26 == v36 )
          break;
        v27 = v19[2].m128i_i64[1];
        v23 = a1[2].m128i_i64[1];
        v26 += 8;
      }
    }
  }
  sub_15B9900((__int64)v37, v9, v14, v15, (__int64)v16, v17);
  return a1;
}
