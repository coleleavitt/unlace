void __fastcall sub_E2A5A0(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rsi
  const __m128i *v5; // rbx
  _BYTE *v6; // rax
  const __m128i *v7; // rbp
  __int64 m128i_i64; // r14
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __m128 *v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rdx
  unsigned __int64 v15; // rbp
  void *ptr; // [rsp+10h] [rbp-108h] BYREF
  __int64 v17; // [rsp+18h] [rbp-100h]
  _BYTE v18[248]; // [rsp+20h] [rbp-F8h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v17 = 0x800000000LL;
  v5 = *(const __m128i **)(v4 + 64);
  v6 = v18;
  ptr = v18;
  if ( !v5
    || (v7 = v5 + 1, m128i_i64 = (__int64)v5[2 * v5->m128i_u32[2] + 1].m128i_i64, (const __m128i *)m128i_i64 == &v5[1]) )
  {
    v10 = 0;
    v14 = v18;
  }
  else
  {
    v9 = (unsigned __int64)&v5[3];
    v10 = 0;
    while ( 1 )
    {
      a3 = (__m128)_mm_loadu_si128(v7);
      v12 = (__m128 *)&v6[24 * v10];
      *v12 = a3;
      v13 = v7[1].m128i_i64[0];
      v7 = (const __m128i *)v9;
      v12[1].m128_u64[0] = v13;
      v10 = (unsigned int)(v17 + 1);
      LODWORD(v17) = v17 + 1;
      if ( m128i_i64 == v9 )
        break;
      v11 = v10 + 1;
      v6 = ptr;
      if ( v10 + 1 > (unsigned __int64)HIDWORD(v17) )
      {
        if ( (unsigned __int64)ptr > v9 || (unsigned __int64)ptr + 24 * v10 <= v9 )
        {
          sub_22134E0(&ptr, v18, v11, 24);
          v6 = ptr;
          v10 = (unsigned int)v17;
        }
        else
        {
          v15 = v9 - (_QWORD)ptr;
          sub_22134E0(&ptr, v18, v11, 24);
          v6 = ptr;
          v10 = (unsigned int)v17;
          v7 = (const __m128i *)((char *)ptr + v15);
        }
      }
      v9 += 32LL;
    }
    v4 = *(_QWORD *)(a2 + 8);
    v14 = ptr;
  }
  sub_E2A500(a1, *(_QWORD *)(v4 + 56), (__int64)v14, v10, a3);
  if ( ptr != v18 )
    free(ptr);
}

