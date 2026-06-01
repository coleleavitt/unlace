unsigned __int64 __fastcall sub_146AE0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
  __m128i v29; // xmm5
  int v30; // eax
  __m128i v31; // xmm6
  char *v32; // rdx
  const char *v33; // r13
  char *v34; // [rsp+8h] [rbp-C0h]
  int v35; // [rsp+8h] [rbp-C0h]
  __m128i v36; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v37; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+30h] [rbp-98h]
  const char *v39; // [rsp+38h] [rbp-90h]
  __m128i v40; // [rsp+40h] [rbp-88h] BYREF
  const char *v41; // [rsp+50h] [rbp-78h] BYREF
  __m128i v42; // [rsp+58h] [rbp-70h]
  __int64 v43; // [rsp+68h] [rbp-60h]
  __m128i v44; // [rsp+70h] [rbp-58h]
  int v45; // [rsp+80h] [rbp-48h]
  unsigned __int64 v46; // [rsp+88h] [rbp-40h]

  v3 = a2;
  v46 = __readfsqword(0x28u);
  v37.m128i_i64[0] = a2 - a1;
  if ( (__int64)(a2 - a1) > 56 )
  {
    v34 = (char *)(0x6DB6DB6DB6DB6DB7LL * (v37.m128i_i64[0] >> 3));
    v6 = (__int64)(v34 - 2) / 2;
    v7 = a1 + 56 * v6;
    v36.m128i_i64[0] = (__int64)&v41;
    while ( 1 )
    {
      v8 = *(const char **)v7;
      v9 = *(_QWORD *)(v7 + 24);
      v10 = *(_DWORD *)(v7 + 48);
      *(_QWORD *)v7 = 0;
      *(_QWORD *)(v7 + 24) = 0;
      v11 = _mm_loadu_si128((const __m128i *)(v7 + 8));
      v12 = _mm_loadu_si128((const __m128i *)(v7 + 32));
      v41 = v8;
      v43 = v9;
      v13 = (char *)v36.m128i_i64[0];
      v45 = v10;
      *(_OWORD *)(v7 + 8) = 0;
      *(_OWORD *)(v7 + 32) = 0;
      v42 = v11;
      v44 = v12;
      sub_145BB0(a1, v6, v34, v13);
      v14 = v41;
      if ( v43 )
        qfree();
      if ( v14 )
        qfree();
      v7 -= 56;
      if ( !v6 )
        break;
      --v6;
    }
  }
  if ( v3 < a3 )
  {
    v38 = 0x6DB6DB6DB6DB6DB7LL * (v37.m128i_i64[0] >> 3);
    do
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v3 + 8);
        if ( !*(_QWORD *)(a1 + 8) )
          break;
        v15 = *(const char **)a1;
        v16 = s1;
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
          v35 = v19;
          v25 = *(const char **)a1;
          *(_OWORD *)(a1 + 8) = 0;
          *(_QWORD *)a1 = 0;
          v26 = *(const char **)v3;
          v36 = (__m128i)v22;
          v37 = v21;
          if ( v26 )
          {
            *(_QWORD *)(v3 + 8) = 0;
            v39 = v25;
            v40 = v24;
            qfree();
            v24 = _mm_load_si128(&v40);
            v25 = v39;
          }
          *(__m128i *)(v3 + 8) = v24;
          *(_QWORD *)v3 = v25;
          v27 = *(const char **)(a1 + 24);
          v28 = _mm_loadu_si128((const __m128i *)(a1 + 32));
          *(_QWORD *)(a1 + 24) = 0;
          *(_OWORD *)(a1 + 32) = 0;
          if ( *(_QWORD *)(v3 + 24) )
          {
            *(_QWORD *)(v3 + 32) = 0;
            v39 = v27;
            v40 = v28;
            qfree();
            v28 = _mm_load_si128(&v40);
            v27 = v39;
          }
          *(_QWORD *)(v3 + 24) = v27;
          v29 = _mm_load_si128(&v36);
          *(__m128i *)(v3 + 32) = v28;
          v30 = *(_DWORD *)(a1 + 48);
          v31 = _mm_load_si128(&v37);
          v32 = (char *)v38;
          v43 = v23;
          *(_DWORD *)(v3 + 48) = v30;
          v41 = v20;
          v45 = v35;
          v42 = v29;
          v44 = v31;
          sub_145BB0(a1, 0, v32, (char *)&v41);
          v33 = v41;
          if ( v43 )
            qfree();
          if ( v33 )
            qfree();
        }
        v3 += 56LL;
        if ( v3 >= a3 )
          return v46 - __readfsqword(0x28u);
      }
      v15 = s1;
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
  return v46 - __readfsqword(0x28u);
}

