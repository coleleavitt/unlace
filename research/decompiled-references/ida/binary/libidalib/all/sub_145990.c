void __fastcall sub_145990(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 *v5; // r15
  __int64 v6; // r13
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // rax
  __m128i v10; // xmm5
  __m128 v11; // xmm3
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // r14
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // r14
  __m128i v19; // xmm0
  int v20; // eax
  __m128i v21; // xmm6
  __int64 v22; // rdi
  __m128i si128; // xmm7
  int v24; // eax
  __m128i v25; // [rsp+0h] [rbp-88h] BYREF
  __m128i v26; // [rsp+10h] [rbp-78h] BYREF
  __int64 v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  int v30; // [rsp+3Ch] [rbp-4Ch]
  __m128i v31[4]; // [rsp+40h] [rbp-48h] BYREF

  v27 = a2;
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
        v8 = s1;
        if ( !v4 )
          goto LABEL_7;
      }
      else
      {
        v7 = s1;
        if ( !v4 )
          goto LABEL_22;
      }
      v8 = *(const char **)(v3 - 56);
LABEL_7:
      if ( strcmp(v8, v7) < 0 )
      {
        v9 = *(_QWORD *)(v3 - 56);
        v10 = _mm_loadu_si128((const __m128i *)(v3 - 24));
        v11 = _mm_loadh_ps((const double *)(v3 - 40));
        *(_QWORD *)(v3 - 56) = 0;
        v28 = v9;
        v12 = *(_QWORD *)(v3 - 32);
        v26 = (__m128i)v11;
        v29 = v12;
        LODWORD(v12) = *(_DWORD *)(v3 - 8);
        *(_QWORD *)(v3 - 32) = 0;
        v30 = v12;
        *(_OWORD *)(v3 - 48) = 0;
        v31[0] = v10;
        *(_OWORD *)(v3 - 24) = 0;
        v13 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v5 - a1) >> 3);
        if ( (__int64)v5 - a1 > 0 )
        {
          do
          {
            v14 = *v5;
            v5 -= 7;
            v15 = *v5;
            v16 = _mm_loadu_si128((const __m128i *)(v5 + 1));
            *v5 = 0;
            *(_OWORD *)(v5 + 1) = 0;
            if ( v14 )
            {
              v5[8] = 0;
              v25 = v16;
              qfree();
              v16 = _mm_load_si128(&v25);
            }
            v17 = v5[10];
            v5[7] = v15;
            *((__m128i *)v5 + 4) = v16;
            v18 = v5[3];
            v19 = _mm_loadu_si128((const __m128i *)v5 + 2);
            v5[3] = 0;
            *((_OWORD *)v5 + 2) = 0;
            if ( v17 )
            {
              v5[11] = 0;
              v25 = v19;
              qfree();
              v19 = _mm_load_si128(&v25);
            }
            v20 = *((_DWORD *)v5 + 12);
            v5[10] = v18;
            *(__m128i *)(v5 + 11) = v19;
            *((_DWORD *)v5 + 26) = v20;
            --v13;
          }
          while ( v13 );
        }
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          qfree();
        }
        v21 = _mm_load_si128(&v26);
        v22 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)a1 = v28;
        *(__m128i *)(a1 + 8) = v21;
        if ( v22 )
        {
          *(_QWORD *)(a1 + 32) = 0;
          qfree();
        }
        si128 = _mm_load_si128(v31);
        *(_QWORD *)(a1 + 24) = v29;
        v24 = v30;
        *(__m128i *)(a1 + 32) = si128;
        *(_DWORD *)(a1 + 48) = v24;
        goto LABEL_19;
      }
LABEL_22:
      sub_1457F0((__int64 *)(v3 - 56));
LABEL_19:
      v3 += 56;
    }
    while ( v27 != v6 );
  }
}

