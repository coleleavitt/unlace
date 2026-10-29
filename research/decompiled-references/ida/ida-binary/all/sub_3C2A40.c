unsigned __int64 __fastcall sub_3C2A40(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  char *v6; // r13
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rcx
  const char *v10; // rsi
  char v11; // dl
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // r13
  const char *v18; // rax
  __int64 v19; // r14
  __m128i v20; // xmm4
  __m128 v21; // xmm3
  char v22; // r13
  __m128i v23; // xmm1
  const char *v24; // rax
  const char *v25; // rdi
  const char *v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __m128i v29; // xmm5
  char v30; // al
  __m128i v31; // xmm6
  char *v32; // rdx
  const char *v33; // [rsp+8h] [rbp-C0h]
  __m128i v34; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v35; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-98h]
  const char *v37; // [rsp+38h] [rbp-90h]
  __m128i v38; // [rsp+40h] [rbp-88h] BYREF
  const char *v39; // [rsp+50h] [rbp-78h] BYREF
  __m128i v40; // [rsp+58h] [rbp-70h]
  __int64 v41; // [rsp+68h] [rbp-60h]
  __m128i v42; // [rsp+70h] [rbp-58h]
  char v43; // [rsp+80h] [rbp-48h]
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v3 = a2;
  v44 = __readfsqword(0x28u);
  v34.m128i_i64[0] = a2 - a1;
  if ( (__int64)(a2 - a1) > 56 )
  {
    v6 = (char *)(0x6DB6DB6DB6DB6DB7LL * (v34.m128i_i64[0] >> 3));
    v7 = (__int64)(v6 - 2) / 2;
    v8 = a1 + 56 * v7;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 24);
      v10 = *(const char **)v8;
      v11 = *(_BYTE *)(v8 + 48);
      *(_QWORD *)v8 = 0;
      *(_QWORD *)(v8 + 24) = 0;
      v12 = _mm_loadu_si128((const __m128i *)(v8 + 8));
      v13 = _mm_loadu_si128((const __m128i *)(v8 + 32));
      v41 = v9;
      v39 = v10;
      v43 = v11;
      *(_OWORD *)(v8 + 8) = 0;
      *(_OWORD *)(v8 + 32) = 0;
      v40 = v12;
      v42 = v13;
      sub_3B6440(a1, v7, v6, (char *)&v39);
      if ( v41 )
        *(double *)v13.m128i_i64 = qfree(v41, (const char *)v7);
      if ( v39 )
        qfree(v39, (const char *)v7, *(double *)v13.m128i_i64);
      v8 -= 56;
      if ( !v7 )
        break;
      --v7;
    }
  }
  if ( v3 < a3 )
  {
    v36 = 0x6DB6DB6DB6DB6DB7LL * (v34.m128i_i64[0] >> 3);
    do
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v3 + 8);
        if ( !*(_QWORD *)(a1 + 8) )
          break;
        v14 = *(const char **)a1;
        v15 = &s1;
        if ( v16 )
          goto LABEL_12;
LABEL_13:
        if ( strcmp(v15, v14) < 0 )
        {
          v18 = *(const char **)v3;
          v19 = *(_QWORD *)(v3 + 24);
          v20 = _mm_loadu_si128((const __m128i *)(v3 + 32));
          v21 = _mm_loadh_ps((const double *)(v3 + 16));
          *(_OWORD *)(v3 + 32) = 0;
          v22 = *(_BYTE *)(v3 + 48);
          *(_QWORD *)v3 = 0;
          *(_QWORD *)(v3 + 24) = 0;
          *(_OWORD *)(v3 + 8) = 0;
          v23 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          v33 = v18;
          v24 = *(const char **)a1;
          *(_OWORD *)(a1 + 8) = 0;
          *(_QWORD *)a1 = 0;
          v25 = *(const char **)v3;
          v34 = (__m128i)v21;
          v35 = v20;
          if ( v25 )
          {
            *(_QWORD *)(v3 + 8) = 0;
            v37 = v24;
            v38 = v23;
            qfree(v25, v14);
            v23 = _mm_load_si128(&v38);
            v24 = v37;
          }
          *(__m128i *)(v3 + 8) = v23;
          *(_QWORD *)v3 = v24;
          v26 = *(const char **)(a1 + 24);
          v27 = _mm_loadu_si128((const __m128i *)(a1 + 32));
          *(_QWORD *)(a1 + 24) = 0;
          *(_OWORD *)(a1 + 32) = 0;
          v28 = *(_QWORD *)(v3 + 24);
          if ( v28 )
          {
            *(_QWORD *)(v3 + 32) = 0;
            v37 = v26;
            v38 = v27;
            qfree(v28, v14);
            v27 = _mm_load_si128(&v38);
            v26 = v37;
          }
          *(_QWORD *)(v3 + 24) = v26;
          v29 = _mm_load_si128(&v34);
          *(__m128i *)(v3 + 32) = v27;
          v30 = *(_BYTE *)(a1 + 48);
          v31 = _mm_load_si128(&v35);
          v32 = (char *)v36;
          v41 = v19;
          *(_BYTE *)(v3 + 48) = v30;
          v43 = v22;
          v39 = v33;
          v40 = v29;
          v42 = v31;
          sub_3B6440(a1, 0, v32, (char *)&v39);
          if ( v41 )
            *(double *)v27.m128i_i64 = qfree(v41, nullptr);
          if ( v39 )
            qfree(v39, nullptr, *(double *)v27.m128i_i64);
        }
        v3 += 56LL;
        if ( v3 >= a3 )
          return v44 - __readfsqword(0x28u);
      }
      v14 = &s1;
      if ( v16 )
      {
LABEL_12:
        v15 = *(const char **)v3;
        goto LABEL_13;
      }
      v3 += 56LL;
    }
    while ( v3 < a3 );
  }
  return v44 - __readfsqword(0x28u);
}
