unsigned __int64 __fastcall sub_3661C0(__int64 a1, __m128 a2, double a3)
{
  __int64 v3; // rax
  __m128i *v4; // r15
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  int v7; // r9d
  unsigned __int64 v8; // rdx
  __int64 v9; // r12
  __m128i *v10; // rbx
  __int64 v11; // rdi
  __int64 *v12; // rdx
  __int64 *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 i; // rbp
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 j; // rbp
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v27; // r15
  __int64 v28; // r14
  __m128i *v29; // rbx
  __int32 v30; // eax
  __m128i v31; // xmm0
  __int32 v32; // eax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rax
  size_t v37; // r13
  void *v38; // rax
  __m128i *v39; // rbp
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  const __m128i *v42; // rbx
  __m128i *v43; // [rsp+8h] [rbp-C0h]
  __int64 v44; // [rsp+10h] [rbp-B8h]
  __int64 v45; // [rsp+18h] [rbp-B0h]
  char v46[72]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 192);
  v43 = nullptr;
  v44 = v3;
  if ( v3 )
  {
    v27 = 0;
    v45 = 15 * v3;
    v28 = 0;
    v43 = (__m128i *)qalloc_or_throw(120 * v3);
    v29 = v43;
    do
    {
      v35 = v27 + *(_QWORD *)(a1 + 184);
      v36 = *(_QWORD *)v35;
      v29->m128i_i64[0] = *(_QWORD *)v35;
      if ( v36 )
        ++*(_DWORD *)(v36 + 104);
      a3 = 0.0;
      v29->m128i_i64[1] = 0;
      v29[1] = 0;
      v37 = *(_QWORD *)(v35 + 16);
      if ( v37 )
      {
        v38 = (void *)qalloc_or_throw(*(_QWORD *)(v35 + 16));
        v29->m128i_i64[1] = (__int64)v38;
        v29[1].m128i_i64[1] = v37;
        memcpy(v38, *(const void **)(v35 + 8), v37);
        v29[1].m128i_i64[0] = v37;
      }
      v30 = *(_DWORD *)(v35 + 96);
      ++v28;
      v27 += 120;
      v29 = (__m128i *)((char *)v29 + 120);
      *(__m128i *)((char *)v29 - 88) = _mm_loadu_si128((const __m128i *)(v35 + 32));
      v31 = _mm_loadu_si128((const __m128i *)(v35 + 48));
      v29[-2].m128i_i32[2] = v30;
      v32 = *(_DWORD *)(v35 + 100);
      *(__m128i *)((char *)v29 - 72) = v31;
      v33 = _mm_loadu_si128((const __m128i *)(v35 + 64));
      v29[-2].m128i_i32[3] = v32;
      v34 = *(_QWORD *)(v35 + 104);
      *(__m128i *)((char *)v29 - 56) = v33;
      a2 = (__m128)_mm_loadu_si128((const __m128i *)(v35 + 80));
      v29[-1].m128i_i64[0] = v34;
      LODWORD(v34) = *(_DWORD *)(v35 + 112);
      *(__m128 *)((char *)v29 - 40) = a2;
      v29[-1].m128i_i32[2] = v34;
    }
    while ( v44 != v28 );
    v39 = (__m128i *)((char *)v43 + v45 * 8);
    if ( &v43->m128i_i8[v45 * 8] != (__int8 *)v43 )
    {
      v40 = 0xEEEEEEEEEEEEEEEFLL * ((v45 * 8) >> 3);
      if ( v40 )
      {
        _BitScanReverse64(&v41, v40);
        sub_365720((__int64)v43, (__int64)&v43->m128i_i64[v45], 2LL * (int)v41);
        if ( v45 > 240 )
        {
          v42 = v43 + 120;
          sub_35FF20(v43, v43 + 120);
          do
          {
            sub_35F8F0(v42);
            v42 = (const __m128i *)((char *)v42 + 120);
          }
          while ( v39 != v42 );
          goto LABEL_2;
        }
      }
      else
      {
        sub_365720((__int64)v43, (__int64)&v43->m128i_i64[v45], -2);
      }
      sub_35FF20(v43, v39);
    }
  }
LABEL_2:
  sub_6D0A0((__int64)"     Address          Size          Time\n---------------- ---------------- --------\n");
  v4 = v43 + 2;
  do
  {
    v8 = v4[4].m128i_i64[1] / 0x3B9ACA00uLL;
    v7 = v8;
    if ( (int)v8 > 59 )
    {
      v5 = 0;
      v6 = (int)v8 / 60;
      v7 = (int)v8 % 60;
      if ( (int)v8 > 3599 )
      {
        v5 = v6 / 0x3C;
        v6 %= 0x3Cu;
      }
    }
    else
    {
      v5 = 0;
      v6 = 0;
    }
    qsnprintf(v46, 64, "%02d:%02d:%02d", v5, v6, v7);
    sub_6D0A0((__int64)"%08a %08a %s\n", *(double *)a2.m128_u64, a3, (const char *)v4->m128i_i64[0]);
    v4 = (__m128i *)((char *)v4 + 120);
  }
  while ( v4 != &v43[242] );
  if ( v43 )
  {
    v9 = 0;
    if ( v44 )
    {
      v10 = v43;
      do
      {
        v11 = v10->m128i_i64[1];
        if ( v11 )
        {
          v10[1].m128i_i64[0] = 0;
          qfree(v11);
        }
        v12 = (__int64 *)v10->m128i_i64[0];
        if ( v10->m128i_i64[0] )
        {
          if ( (*((_DWORD *)v12 + 26))-- == 1 )
          {
            v14 = (__int64 *)v10->m128i_i64[0];
            if ( v10->m128i_i64[0] )
            {
              sub_258970((__int64 *)v10->m128i_i64[0]);
              v15 = v14[23];
              if ( v15 )
              {
                v16 = v14[24];
                if ( v16 )
                {
                  for ( i = 0; i != v16; ++i )
                  {
                    v18 = (__int64 *)(v15 + 24 * i);
                    v19 = *v18;
                    if ( *v18 )
                    {
                      v18[1] = 0;
                      qfree(v19);
                      v15 = v14[23];
                    }
                  }
                }
                v14[24] = 0;
                qfree(v15);
              }
              v20 = v14[20];
              if ( v20 )
              {
                v14[21] = 0;
                qfree(v20);
              }
              v21 = v14[16];
              if ( v21 )
              {
                v22 = v14[17];
                if ( v22 )
                {
                  for ( j = 0; j != v22; ++j )
                  {
                    v24 = (__int64 *)(v21 + 32 * j);
                    v25 = *v24;
                    if ( *v24 )
                    {
                      v24[1] = 0;
                      qfree(v25);
                      v21 = v14[16];
                    }
                  }
                }
                v14[17] = 0;
                qfree(v21);
              }
              sub_255050((__int64)(v14 + 2));
              j__qfree(v14);
            }
          }
        }
        ++v9;
        v10 = (__m128i *)((char *)v10 + 120);
      }
      while ( v44 != v9 );
    }
    qfree(v43);
  }
  return v47 - __readfsqword(0x28u);
}
