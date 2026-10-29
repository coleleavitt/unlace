void __fastcall sub_37E840(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 *v5; // r15
  __int64 v6; // r13
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __m128i v13; // xmm5
  __m128 v14; // xmm3
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r14
  __m128i v20; // xmm0
  __int64 v21; // rdi
  __int64 v22; // r14
  __m128i v23; // xmm0
  int v24; // eax
  const char *v25; // rdi
  __m128i v26; // xmm6
  __int64 v27; // rdi
  __m128i si128; // xmm7
  int v29; // eax
  __m128i v30; // [rsp+0h] [rbp-88h] BYREF
  __m128i v31; // [rsp+10h] [rbp-78h] BYREF
  __int64 v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+30h] [rbp-58h]
  int v35; // [rsp+3Ch] [rbp-4Ch]
  __m128i v36[4]; // [rsp+40h] [rbp-48h] BYREF

  v32 = a2;
  if ( a1 != a2 && a2 != a1 + 56 )
  {
    v3 = a1 + 112;
    do
    {
      v4 = *(_QWORD *)(v3 - 48);
      v5 = (__int64 *)(v3 - 56);
      v6 = v3;
      if ( *(_QWORD *)(a1 + 8) )
      {
        v7 = *(const char **)a1;
        v8 = &s1;
        if ( !v4 )
          goto LABEL_7;
      }
      else
      {
        v7 = &s1;
        if ( !v4 )
          goto LABEL_22;
      }
      v8 = *(const char **)(v3 - 56);
LABEL_7:
      if ( strcmp(v8, v7) < 0 )
      {
        v12 = *(_QWORD *)(v3 - 56);
        v13 = _mm_loadu_si128((const __m128i *)(v3 - 24));
        v14 = _mm_loadh_ps((const double *)(v3 - 40));
        *(_QWORD *)(v3 - 56) = 0;
        v15 = 0x6DB6DB6DB6DB6DB7LL;
        v33 = v12;
        v16 = *(_QWORD *)(v3 - 32);
        v31 = (__m128i)v14;
        v34 = v16;
        LODWORD(v16) = *(_DWORD *)(v3 - 8);
        *(_QWORD *)(v3 - 32) = 0;
        v35 = v16;
        *(_OWORD *)(v3 - 48) = 0;
        v36[0] = v13;
        *(_OWORD *)(v3 - 24) = 0;
        v17 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v5 - a1) >> 3);
        if ( (__int64)v5 - a1 > 0 )
        {
          do
          {
            v18 = *v5;
            v5 -= 7;
            v19 = *v5;
            v20 = _mm_loadu_si128((const __m128i *)(v5 + 1));
            *v5 = 0;
            *(_OWORD *)(v5 + 1) = 0;
            if ( v18 )
            {
              v5[8] = 0;
              qfree(v18, v7, v15, v9, v10, v11, *(_OWORD *)&v20, *(_OWORD *)&v31);
              v20 = _mm_load_si128(&v30);
            }
            v21 = v5[10];
            v5[7] = v19;
            *((__m128i *)v5 + 4) = v20;
            v22 = v5[3];
            v23 = _mm_loadu_si128((const __m128i *)v5 + 2);
            v5[3] = 0;
            *((_OWORD *)v5 + 2) = 0;
            if ( v21 )
            {
              v5[11] = 0;
              v30 = v23;
              qfree(v21, v7);
              v23 = _mm_load_si128(&v30);
            }
            v24 = *((_DWORD *)v5 + 12);
            v5[10] = v22;
            *(__m128i *)(v5 + 11) = v23;
            *((_DWORD *)v5 + 26) = v24;
            --v17;
          }
          while ( v17 );
        }
        v25 = *(const char **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          qfree(v25, v7);
        }
        v26 = _mm_load_si128(&v31);
        v27 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)a1 = v33;
        *(__m128i *)(a1 + 8) = v26;
        if ( v27 )
        {
          *(_QWORD *)(a1 + 32) = 0;
          qfree(v27, v7);
        }
        si128 = _mm_load_si128(v36);
        *(_QWORD *)(a1 + 24) = v34;
        v29 = v35;
        *(__m128i *)(a1 + 32) = si128;
        *(_DWORD *)(a1 + 48) = v29;
        goto LABEL_19;
      }
LABEL_22:
      sub_37E6A0((__int64 *)(v3 - 56), v7);
LABEL_19:
      v3 += 56;
    }
    while ( v32 != v6 );
  }
}
