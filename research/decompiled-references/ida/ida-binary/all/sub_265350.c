void __fastcall sub_265350(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  const char *v4; // rsi
  const char *v5; // rdi
  int v6; // eax
  int v7; // eax
  unsigned __int8 v8; // cl
  const char *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 *v12; // r15
  __int64 v13; // r13
  __int64 v14; // rax
  __m128i v15; // xmm5
  __m128 v16; // xmm3
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r14
  __m128i v21; // xmm0
  char v22; // al
  __int64 v23; // rdi
  __int64 v24; // r14
  __m128i v25; // xmm0
  char v26; // al
  const char *v27; // rdi
  __m128i v28; // xmm6
  __int64 v29; // rdi
  char v30; // al
  __m128i si128; // xmm7
  __m128i v32; // [rsp+0h] [rbp-88h] BYREF
  __int64 v33; // [rsp+10h] [rbp-78h]
  __int64 v34; // [rsp+18h] [rbp-70h]
  char v35; // [rsp+26h] [rbp-62h]
  char v36; // [rsp+27h] [rbp-61h]
  __int64 v37; // [rsp+28h] [rbp-60h]
  __m128i v38; // [rsp+30h] [rbp-58h] BYREF
  __m128i v39[4]; // [rsp+40h] [rbp-48h] BYREF

  v33 = a2;
  if ( a1 != a2 && a2 != a1 + 56 )
  {
    v3 = a1 + 112;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v3 - 48);
      v12 = (__int64 *)(v3 - 56);
      v13 = v3;
      if ( !*(_QWORD *)(a1 + 8) )
        break;
      v4 = *(const char **)a1;
      v5 = &s1;
      if ( v11 )
        goto LABEL_5;
LABEL_6:
      v6 = strcmp(v5, v4);
      if ( v6 )
      {
        if ( v6 < 0 )
          goto LABEL_18;
LABEL_14:
        v10 = v3 - 56;
        v3 += 56;
        sub_265140(v10);
        if ( v33 == v13 )
          return;
      }
      else
      {
        v7 = *(unsigned __int8 *)(v3 - 32);
        v8 = *(_BYTE *)(a1 + 24);
        if ( (unsigned __int8)v7 >= v8 )
          goto LABEL_8;
LABEL_18:
        v14 = *(_QWORD *)(v3 - 56);
        v15 = _mm_loadu_si128((const __m128i *)(v3 - 16));
        v16 = _mm_loadh_ps((const double *)(v3 - 40));
        *(_QWORD *)(v3 - 56) = 0;
        v34 = v14;
        LOBYTE(v14) = *(_BYTE *)(v3 - 32);
        v38 = (__m128i)v16;
        v35 = v14;
        LOBYTE(v14) = *(_BYTE *)(v3 - 31);
        *(_OWORD *)(v3 - 48) = 0;
        v36 = v14;
        v17 = *(_QWORD *)(v3 - 24);
        v39[0] = v15;
        v37 = v17;
        *(_QWORD *)(v3 - 24) = 0;
        *(_OWORD *)(v3 - 16) = 0;
        v18 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v12 - a1) >> 3);
        if ( (__int64)v12 - a1 > 0 )
        {
          do
          {
            v19 = *v12;
            v12 -= 7;
            v20 = *v12;
            v21 = _mm_loadu_si128((const __m128i *)(v12 + 1));
            *v12 = 0;
            *(_OWORD *)(v12 + 1) = 0;
            if ( v19 )
            {
              v12[8] = 0;
              v32 = v21;
              qfree(v19, v4);
              v21 = _mm_load_si128(&v32);
            }
            v22 = *((_BYTE *)v12 + 24);
            v23 = v12[11];
            v12[7] = v20;
            *((__m128i *)v12 + 4) = v21;
            v24 = v12[4];
            v25 = _mm_loadu_si128((const __m128i *)(v12 + 5));
            *((_BYTE *)v12 + 80) = v22;
            v26 = *((_BYTE *)v12 + 25);
            v12[4] = 0;
            *((_BYTE *)v12 + 81) = v26;
            *(_OWORD *)(v12 + 5) = 0;
            if ( v23 )
            {
              v12[12] = 0;
              v32 = v25;
              qfree(v23, v4);
              v25 = _mm_load_si128(&v32);
            }
            v12[11] = v24;
            *((__m128i *)v12 + 6) = v25;
            --v18;
          }
          while ( v18 );
        }
        v27 = *(const char **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          qfree(v27, v4);
        }
        v28 = _mm_load_si128(&v38);
        v29 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)a1 = v34;
        v30 = v35;
        *(__m128i *)(a1 + 8) = v28;
        *(_BYTE *)(a1 + 24) = v30;
        *(_BYTE *)(a1 + 25) = v36;
        if ( v29 )
        {
          *(_QWORD *)(a1 + 40) = 0;
          qfree(v29, v4);
        }
        si128 = _mm_load_si128(v39);
        v3 += 56;
        *(_QWORD *)(a1 + 32) = v37;
        *(__m128i *)(a1 + 40) = si128;
        if ( v33 == v13 )
          return;
      }
    }
    v4 = &s1;
    if ( !v11 )
    {
      LOBYTE(v7) = *(_BYTE *)(v3 - 32);
      v8 = *(_BYTE *)(a1 + 24);
      if ( (unsigned __int8)v7 < v8 )
        goto LABEL_18;
LABEL_8:
      if ( v8 >= (unsigned __int8)v7 )
      {
        v4 = &s1;
        if ( *(_QWORD *)(a1 + 40) )
          v4 = *(const char **)(a1 + 32);
        v9 = &s1;
        if ( *(_QWORD *)(v3 - 16) )
          v9 = *(const char **)(v3 - 24);
        if ( strcmp(v9, v4) < 0 )
          goto LABEL_18;
      }
      goto LABEL_14;
    }
LABEL_5:
    v5 = *(const char **)(v3 - 56);
    goto LABEL_6;
  }
}
