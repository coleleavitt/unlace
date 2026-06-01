unsigned __int64 __fastcall sub_37F990(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v6; // r12
  __int64 v7; // r14
  const char *v8; // rcx
  __int64 v9; // rdx
  int v10; // esi
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  char *v13; // rcx
  const char *v14; // r13
  const char *v15; // rsi
  const char *v16; // rdi
  __int64 v17; // r13
  int v19; // eax
  const char *v20; // r14
  __m128i v21; // xmm4
  __m128 v22; // xmm3
  __int64 v23; // r13
  __m128i v24; // xmm1
  const char *v25; // rax
  const char *v26; // rdi
  const char *v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __m128i v30; // xmm5
  int v31; // eax
  __m128i v32; // xmm6
  char *v33; // rdx
  const char *v34; // r13
  char *v35; // [rsp+8h] [rbp-C0h]
  int v36; // [rsp+8h] [rbp-C0h]
  __m128i v37; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v38; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+30h] [rbp-98h]
  const char *v40; // [rsp+38h] [rbp-90h]
  __m128i v41; // [rsp+40h] [rbp-88h] BYREF
  const char *v42; // [rsp+50h] [rbp-78h] BYREF
  __m128i v43; // [rsp+58h] [rbp-70h]
  __int64 v44; // [rsp+68h] [rbp-60h]
  __m128i v45; // [rsp+70h] [rbp-58h]
  int v46; // [rsp+80h] [rbp-48h]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v3 = a2;
  v47 = __readfsqword(0x28u);
  v38.m128i_i64[0] = a2 - a1;
  if ( (__int64)(a2 - a1) > 56 )
  {
    v35 = (char *)(0x6DB6DB6DB6DB6DB7LL * (v38.m128i_i64[0] >> 3));
    v6 = (__int64)(v35 - 2) / 2;
    v7 = a1 + 56 * v6;
    v37.m128i_i64[0] = (__int64)&v42;
    while ( 1 )
    {
      v8 = *(const char **)v7;
      v9 = *(_QWORD *)(v7 + 24);
      v10 = *(_DWORD *)(v7 + 48);
      *(_QWORD *)v7 = 0;
      *(_QWORD *)(v7 + 24) = 0;
      v11 = _mm_loadu_si128((const __m128i *)(v7 + 8));
      v12 = _mm_loadu_si128((const __m128i *)(v7 + 32));
      v42 = v8;
      v44 = v9;
      v13 = (char *)v37.m128i_i64[0];
      v46 = v10;
      *(_OWORD *)(v7 + 8) = 0;
      *(_OWORD *)(v7 + 32) = 0;
      v43 = v11;
      v45 = v12;
      sub_37EA60(a1, v6, v35, v13);
      v14 = v42;
      if ( v44 )
        *(double *)v12.m128i_i64 = qfree(v44, (const char *)v6);
      if ( v14 )
        qfree(v14, (const char *)v6, *(double *)v12.m128i_i64);
      v7 -= 56;
      if ( !v6 )
        break;
      --v6;
    }
  }
  if ( v3 < a3 )
  {
    v39 = 0x6DB6DB6DB6DB6DB7LL * (v38.m128i_i64[0] >> 3);
    do
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v3 + 8);
        if ( !*(_QWORD *)(a1 + 8) )
          break;
        v15 = *(const char **)a1;
        v16 = &s1;
        if ( v17 )
          goto LABEL_12;
LABEL_13:
        if ( strcmp(v16, v15) < 0 )
        {
          v19 = *(_DWORD *)(v3 + 48);
          v20 = *(const char **)v3;
          v21 = _mm_loadu_si128((const __m128i *)(v3 + 32));
          v22 = _mm_loadh_ps((const double *)(v3 + 16));
          v23 = *(_QWORD *)(v3 + 24);
          *(_QWORD *)v3 = 0;
          *(_QWORD *)(v3 + 24) = 0;
          *(_OWORD *)(v3 + 8) = 0;
          *(_OWORD *)(v3 + 32) = 0;
          v24 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          v36 = v19;
          v25 = *(const char **)a1;
          *(_OWORD *)(a1 + 8) = 0;
          *(_QWORD *)a1 = 0;
          v26 = *(const char **)v3;
          v37 = (__m128i)v22;
          v38 = v21;
          if ( v26 )
          {
            *(_QWORD *)(v3 + 8) = 0;
            v40 = v25;
            v41 = v24;
            qfree(v26, v15);
            v24 = _mm_load_si128(&v41);
            v25 = v40;
          }
          *(__m128i *)(v3 + 8) = v24;
          *(_QWORD *)v3 = v25;
          v27 = *(const char **)(a1 + 24);
          v28 = _mm_loadu_si128((const __m128i *)(a1 + 32));
          *(_QWORD *)(a1 + 24) = 0;
          *(_OWORD *)(a1 + 32) = 0;
          v29 = *(_QWORD *)(v3 + 24);
          if ( v29 )
          {
            *(_QWORD *)(v3 + 32) = 0;
            v40 = v27;
            v41 = v28;
            qfree(v29, v15);
            v28 = _mm_load_si128(&v41);
            v27 = v40;
          }
          *(_QWORD *)(v3 + 24) = v27;
          v30 = _mm_load_si128(&v37);
          *(__m128i *)(v3 + 32) = v28;
          v31 = *(_DWORD *)(a1 + 48);
          v32 = _mm_load_si128(&v38);
          v33 = (char *)v39;
          v44 = v23;
          *(_DWORD *)(v3 + 48) = v31;
          v42 = v20;
          v46 = v36;
          v43 = v30;
          v45 = v32;
          sub_37EA60(a1, 0, v33, (char *)&v42);
          v34 = v42;
          if ( v44 )
            *(double *)v28.m128i_i64 = qfree(v44, nullptr);
          if ( v34 )
            qfree(v34, nullptr, *(double *)v28.m128i_i64);
        }
        v3 += 56LL;
        if ( v3 >= a3 )
          return v47 - __readfsqword(0x28u);
      }
      v15 = &s1;
      if ( v17 )
      {
LABEL_12:
        v16 = *(const char **)v3;
        goto LABEL_13;
      }
      v3 += 56LL;
    }
    while ( v3 < a3 );
  }
  return v47 - __readfsqword(0x28u);
}
