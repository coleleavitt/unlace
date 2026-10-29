unsigned __int64 __fastcall sub_A94460(
        _QWORD *a1,
        __int64 a2,
        const __m128i *a3,
        unsigned __int64 a4,
        void *a5,
        __int64 a6,
        unsigned __int64 a7)
{
  char *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  const __m128i *v15; // rbx
  unsigned __int64 v16; // rdx
  const __m128i *v17; // r15
  __m128i *v18; // rax
  unsigned __int64 v19; // rbx
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-A0h]
  _BYTE v24[152]; // [rsp+30h] [rbp-98h] BYREF

  v11 = v24;
  ptr = v24;
  v23 = 0x400000000LL;
  if ( a4 > 4 )
  {
    sub_22134E0(&ptr, v24, a4, 24);
    v12 = (unsigned int)v23;
    v11 = (char *)ptr;
    v13 = (unsigned int)v23;
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  v14 = 2 * a4;
  v15 = &a3[v14];
  if ( &a3[v14] != a3 )
  {
    do
    {
      v16 = v13 + 1;
      v17 = a3;
      v18 = (__m128i *)&v11[24 * v13];
      if ( v16 > HIDWORD(v23) )
      {
        if ( v11 > (char *)a3 || v18 <= a3 )
        {
          sub_22134E0(&ptr, v24, v16, 24);
          v18 = (__m128i *)((char *)ptr + 24 * (unsigned int)v23);
        }
        else
        {
          sub_22134E0(&ptr, v24, v16, 24);
          v17 = (const __m128i *)((char *)ptr + (char *)a3 - v11);
          v18 = (__m128i *)((char *)ptr + 24 * (unsigned int)v23);
        }
      }
      a3 += 2;
      *v18 = _mm_loadu_si128(v17);
      v11 = (char *)ptr;
      v18[1].m128i_i64[0] = v17[1].m128i_i64[0];
      v13 = (unsigned int)(v23 + 1);
      LODWORD(v23) = v23 + 1;
    }
    while ( v15 != a3 );
    v12 = (unsigned int)v13;
  }
  v19 = sub_A93F70(a1, a2, v11, v12, a5, a6, a7);
  if ( ptr != v24 )
    free(ptr);
  return v19;
}

