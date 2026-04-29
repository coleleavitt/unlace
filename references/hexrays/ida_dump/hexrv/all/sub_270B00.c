void __fastcall sub_270B00(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rdx
  __m128i *v8; // r14
  __m128i *v11; // rbx
  __m128i *v12; // rbp
  __m128i *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int32 v16; // ecx
  __int64 v17; // rax
  __m128i *i; // rbp
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int32 v21; // edx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int32 v29; // edx
  __int64 v30; // rax
  __m128i v31; // xmm0
  char v32; // al
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int32 v35; // ecx
  __int64 v36; // rdx
  char v37; // al
  __int64 v38; // r8
  __int64 v39; // rdi
  __int32 v40; // esi
  __int64 v41; // rcx
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __m128i *v44; // [rsp+28h] [rbp-60h]

  v7 = (char *)a2 - (char *)a1;
  v8 = a2;
  if ( (char *)a2 - (char *)a1 > 512 )
  {
    if ( a3 )
    {
      while ( 1 )
      {
        v11 = a1 + 2;
        --a3;
        v44 = v8 - 2;
        v12 = &a1[2 * (v7 >> 6)];
        v13 = v8 - 2;
        if ( (unsigned __int8)a4((__int64)a1[2].m128i_i64, (__int64)v12) )
        {
          if ( (unsigned __int8)a4((__int64)v12, (__int64)v13) )
          {
            v14 = a1->m128i_i64[0];
            v15 = a1->m128i_i64[1];
            v16 = a1[1].m128i_i32[0];
            v17 = a1[1].m128i_i64[1];
            *a1 = _mm_loadu_si128(v12);
            a1[1] = _mm_loadu_si128(v12 + 1);
            v12->m128i_i64[0] = v14;
            v12->m128i_i64[1] = v15;
            v12[1].m128i_i32[0] = v16;
            v12[1].m128i_i64[1] = v17;
          }
          else
          {
            v32 = a4((__int64)a1[2].m128i_i64, (__int64)v44);
            v33 = a1->m128i_i64[0];
            v34 = a1->m128i_i64[1];
            v35 = a1[1].m128i_i32[0];
            v36 = a1[1].m128i_i64[1];
            if ( v32 )
            {
              *a1 = _mm_loadu_si128(v8 - 2);
              a1[1] = _mm_loadu_si128(v8 - 1);
              v8[-2].m128i_i64[0] = v33;
              v8[-2].m128i_i64[1] = v34;
              v8[-1].m128i_i32[0] = v35;
              v8[-1].m128i_i64[1] = v36;
            }
            else
            {
              v42 = _mm_loadu_si128(a1 + 2);
              a1[2].m128i_i64[0] = v33;
              a1[2].m128i_i64[1] = v34;
              *a1 = v42;
              v43 = _mm_loadu_si128(a1 + 3);
              a1[3].m128i_i32[0] = v35;
              a1[3].m128i_i64[1] = v36;
              a1[1] = v43;
            }
          }
        }
        else if ( (unsigned __int8)a4((__int64)a1[2].m128i_i64, (__int64)v13) )
        {
          v27 = a1->m128i_i64[0];
          v28 = a1->m128i_i64[1];
          v29 = a1[1].m128i_i32[0];
          v30 = a1[1].m128i_i64[1];
          *a1 = _mm_loadu_si128(a1 + 2);
          v31 = _mm_loadu_si128(a1 + 3);
          a1[2].m128i_i64[0] = v27;
          a1[2].m128i_i64[1] = v28;
          a1[3].m128i_i32[0] = v29;
          a1[3].m128i_i64[1] = v30;
          a1[1] = v31;
        }
        else
        {
          v37 = a4((__int64)v12, (__int64)v44);
          v38 = a1->m128i_i64[0];
          v39 = a1->m128i_i64[1];
          v40 = a1[1].m128i_i32[0];
          v41 = a1[1].m128i_i64[1];
          if ( v37 )
          {
            *a1 = _mm_loadu_si128(v8 - 2);
            a1[1] = _mm_loadu_si128(v8 - 1);
            v8[-2].m128i_i64[0] = v38;
            v8[-2].m128i_i64[1] = v39;
            v8[-1].m128i_i32[0] = v40;
            v8[-1].m128i_i64[1] = v41;
          }
          else
          {
            *a1 = _mm_loadu_si128(v12);
            a1[1] = _mm_loadu_si128(v12 + 1);
            v12->m128i_i64[0] = v38;
            v12->m128i_i64[1] = v39;
            v12[1].m128i_i32[0] = v40;
            v12[1].m128i_i64[1] = v41;
          }
        }
        for ( i = v8; ; i[1].m128i_i64[1] = v22 )
        {
          while ( (unsigned __int8)a4((__int64)v11, (__int64)a1) )
            v11 += 2;
          do
            i -= 2;
          while ( (unsigned __int8)a4((__int64)a1, (__int64)i) );
          if ( v11 >= i )
            break;
          v19 = v11->m128i_i64[0];
          v11 += 2;
          v20 = v11[-2].m128i_i64[1];
          v21 = v11[-1].m128i_i32[0];
          v22 = v11[-1].m128i_i64[1];
          v11[-2] = _mm_loadu_si128(i);
          v11[-1] = _mm_loadu_si128(i + 1);
          i->m128i_i64[0] = v19;
          i->m128i_i64[1] = v20;
          i[1].m128i_i32[0] = v21;
        }
        sub_270B00(v11, v8, a3, a4);
        v7 = (char *)v11 - (char *)a1;
        if ( (char *)v11 - (char *)a1 <= 512 )
          break;
        v8 = v11;
        if ( !a3 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      sub_2709D0(a1, v8, (unsigned __int64)v8, a4, a5, a6);
      while ( (char *)v8 - (char *)a1 > 32 )
      {
        v8 -= 2;
        v25 = (__int128)_mm_loadu_si128(v8);
        *v8 = _mm_loadu_si128(a1);
        v26 = (__int128)_mm_loadu_si128(v8 + 1);
        v8[1] = _mm_loadu_si128(a1 + 1);
        sub_2707B0((__int64)a1, 0, ((char *)v8 - (char *)a1) >> 5, a4, v23, v24, v25, v26);
      }
    }
  }
}
