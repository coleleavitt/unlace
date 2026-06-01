unsigned __int64 sub_229A550()
{
  const __m128i *v0; // rbx
  __m128i *v1; // r14
  __int64 v2; // r15
  __m128i *v3; // r13
  __m128i *v4; // r13
  const __m128i *v6; // r12
  char *v7; // rax
  const __m128i *v8; // rdx
  char *v9; // rbp
  __m128i *i; // rcx
  __m128i v11; // xmm1
  __m128i *v12; // rsi
  char *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  char *v17; // rax
  __int64 v18; // r15
  char *v19; // rdx
  const __m128i *v20; // rdx
  char *v21; // rcx
  __m128i v22; // xmm3
  __m128i *v23; // rsi
  signed __int64 v24; // r15
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r14
  __m128i *v28; // rax
  __int64 v29; // r14
  char *v30; // rdx
  const __m128i *v31; // rdx
  __m128i *v32; // rcx
  __m128i v33; // xmm5
  void *v34; // [rsp+0h] [rbp-58h] BYREF
  void *v35; // [rsp+8h] [rbp-50h]
  int v36; // [rsp+14h] [rbp-44h] BYREF
  int v37; // [rsp+18h] [rbp-40h] BYREF
  _DWORD v38[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v0 = (const __m128i *)xmmword_2D0B980;
  if ( (unsigned __int64)(qword_2D0B990 - (_QWORD)xmmword_2D0B980) <= 0x59F )
  {
    v6 = (const __m128i *)*(&xmmword_2D0B980 + 1);
    v7 = (char *)operator new(0x5A0u);
    v8 = v0;
    v9 = v7;
    for ( i = (__m128i *)v7; v6 != v8; i[-1] = _mm_loadu_si128(v8 - 1) )
    {
      v11 = _mm_loadu_si128(v8);
      v8 += 2;
      i += 2;
      i[-2] = v11;
    }
    if ( xmmword_2D0B980 )
      operator delete(xmmword_2D0B980);
    xmmword_2D0B980 = v9;
    *(&xmmword_2D0B980 + 1) = &v9[(char *)v6 - (char *)v0];
    qword_2D0B990 = (__int64)(v9 + 1440);
  }
  v38[0] = 0;
  v37 = 12;
  v36 = 15;
  sub_2299550((__int64)&xmmword_2D0B980, "aes", &v36, &v37, v38);
  v38[0] = 4;
  v37 = 25;
  v36 = 27;
  sub_2299750((__int64)&xmmword_2D0B980, "bf16", &v36, &v37, v38);
  v38[0] = 6;
  v37 = 38;
  v36 = 50;
  sub_2299550((__int64)&xmmword_2D0B980, "bti", &v36, &v37, v38);
  v38[0] = 15;
  v37 = 9;
  v36 = 10;
  sub_2299550((__int64)&xmmword_2D0B980, "crc", &v36, &v37, v38);
  v38[0] = 19;
  v37 = 15;
  v36 = 17;
  sub_2299550((__int64)&xmmword_2D0B980, "dit", &v36, &v37, v38);
  v38[0] = 20;
  v37 = 6;
  v36 = 4;
  sub_2299950((__int64)&xmmword_2D0B980, "dotprod", &v36, &v37, v38);
  v38[0] = 9;
  v37 = 16;
  v36 = 18;
  sub_2299550((__int64)&xmmword_2D0B980, "dpb", &v36, &v37, v38);
  v38[0] = 7;
  v37 = 17;
  v36 = 19;
  sub_2299750((__int64)&xmmword_2D0B980, "dpb2", &v36, &v37, v38);
  v38[0] = 23;
  v37 = 27;
  v36 = 34;
  sub_2299B50((__int64)&xmmword_2D0B980, "f32mm", &v36, &v37, v38);
  v38[0] = 24;
  v37 = 28;
  v36 = 35;
  sub_2299B50((__int64)&xmmword_2D0B980, "f64mm", &v36, &v37, v38);
  v38[0] = 13;
  v37 = 19;
  v36 = 21;
  sub_2299750((__int64)&xmmword_2D0B980, "fcma", &v36, &v37, v38);
  v38[0] = 29;
  v37 = 1;
  v36 = 1;
  sub_2299B50((__int64)&xmmword_2D0B980, "flagm", &v36, &v37, v38);
  v38[0] = 1;
  v37 = 2;
  v36 = 2;
  sub_2299D50((__int64)&xmmword_2D0B980, "flagm2", &v36, &v37, v38);
  v38[0] = 30;
  v37 = 4;
  v36 = 8;
  sub_2299F50((__int64)&xmmword_2D0B980, "fp", &v36, &v37, v38);
  v38[0] = 39;
  v37 = 13;
  v36 = 16;
  sub_2299750((__int64)&xmmword_2D0B980, "fp16", &v36, &v37, v38);
  v38[0] = 31;
  v37 = 14;
  v36 = 3;
  sub_2299950((__int64)&xmmword_2D0B980, "fp16fml", &v36, &v37, v38);
  v38[0] = 38;
  v37 = 23;
  v36 = 24;
  sub_2299950((__int64)&xmmword_2D0B980, "frintts", &v36, &v37, v38);
  v38[0] = 43;
  v37 = 24;
  v36 = 26;
  sub_2299750((__int64)&xmmword_2D0B980, "i8mm", &v36, &v37, v38);
  v38[0] = 45;
  v37 = 18;
  v36 = 20;
  sub_2299B50((__int64)&xmmword_2D0B980, "jscvt", &v36, &v37, v38);
  v38[0] = 48;
  v37 = 3;
  v36 = 7;
  sub_2299550((__int64)&xmmword_2D0B980, "lse", &v36, &v37, v38);
  v38[0] = 57;
  v37 = 35;
  v36 = 44;
  sub_2299D50((__int64)&xmmword_2D0B980, "memtag", &v36, &v37, v38);
  v38[0] = 55;
  v37 = 43;
  v36 = 59;
  sub_2299750((__int64)&xmmword_2D0B980, "mops", &v36, &v37, v38);
  v38[0] = 74;
  v37 = 20;
  v36 = 22;
  sub_2299750((__int64)&xmmword_2D0B980, "rcpc", &v36, &v37, v38);
  v38[0] = 75;
  v37 = 21;
  v36 = 23;
  sub_2299B50((__int64)&xmmword_2D0B980, "rcpc2", &v36, &v37, v38);
  v38[0] = 76;
  v37 = 22;
  v36 = 58;
  sub_2299B50((__int64)&xmmword_2D0B980, "rcpc3", &v36, &v37, v38);
  v38[0] = 77;
  v37 = 8;
  v36 = 6;
  sub_2299550((__int64)&xmmword_2D0B980, "rdm", &v36, &v37, v38);
  v38[0] = 71;
  v37 = 0;
  v36 = 0;
  sub_2299550((__int64)&xmmword_2D0B980, "rng", &v36, &v37, v38);
  v38[0] = 79;
  v37 = 36;
  v36 = 46;
  sub_2299F50((__int64)&xmmword_2D0B980, "sb", &v36, &v37, v38);
  v38[0] = 81;
  v37 = 10;
  v36 = 12;
  sub_2299750((__int64)&xmmword_2D0B980, "sha2", &v36, &v37, v38);
  v38[0] = 82;
  v37 = 11;
  v36 = 13;
  sub_2299750((__int64)&xmmword_2D0B980, "sha3", &v36, &v37, v38);
  v38[0] = 58;
  v37 = 5;
  v36 = 9;
  sub_2299750((__int64)&xmmword_2D0B980, "simd", &v36, &v37, v38);
  v38[0] = 83;
  v37 = 7;
  v36 = 5;
  sub_2299550((__int64)&xmmword_2D0B980, "sm4", &v36, &v37, v38);
  v38[0] = 84;
  v37 = 34;
  v36 = 42;
  sub_2299550((__int64)&xmmword_2D0B980, "sme", &v36, &v37, v38);
  v38[0] = 87;
  v37 = 40;
  v36 = 55;
  sub_229A150((__int64)&xmmword_2D0B980, "sme-f64f64", &v36, &v37, v38);
  v38[0] = 91;
  v37 = 41;
  v36 = 56;
  sub_229A150((__int64)&xmmword_2D0B980, "sme-i16i64", &v36, &v37, v38);
  v38[0] = 95;
  v37 = 42;
  v36 = 57;
  sub_2299750((__int64)&xmmword_2D0B980, "sme2", &v36, &v37, v38);
  v38[0] = 102;
  v37 = 37;
  v36 = 49;
  sub_2299750((__int64)&xmmword_2D0B980, "ssbs", &v36, &v37, v38);
  v38[0] = 109;
  v37 = 26;
  v36 = 30;
  sub_2299550((__int64)&xmmword_2D0B980, "sve", &v36, &v37, v38);
  v38[0] = 118;
  v37 = 29;
  v36 = 36;
  sub_2299750((__int64)&xmmword_2D0B980, "sve2", &v36, &v37, v38);
  v38[0] = 119;
  v37 = 30;
  v36 = 38;
  sub_229A350((__int64)&xmmword_2D0B980, "sve2-aes", &v36, &v37, v38);
  v1 = (__m128i *)*(&xmmword_2D0B980 + 1);
  v2 = qword_2D0B990;
  if ( *(&xmmword_2D0B980 + 1) == (void *)qword_2D0B990 )
  {
    v12 = (__m128i *)xmmword_2D0B980;
    v13 = (char *)((_BYTE *)*(&xmmword_2D0B980 + 1) - (_BYTE *)xmmword_2D0B980);
    v14 = ((_BYTE *)*(&xmmword_2D0B980 + 1) - (_BYTE *)xmmword_2D0B980) >> 5;
    if ( v14 )
    {
      v15 = 2 * v14;
      v16 = -32;
      if ( v14 <= 2 * v14 && v15 <= 0x7FFFFFFFFFFFFFFLL )
      {
        if ( !v15 )
        {
          v3 = (__m128i *)&qword_20;
          v18 = 0;
          v17 = nullptr;
LABEL_14:
          v19 = &v13[(_QWORD)v17];
          *(_QWORD *)v19 = "sve2-bitperm";
          *((_QWORD *)v19 + 1) = 12;
          *((_QWORD *)v19 + 2) = 0x1F00000027LL;
          *((_DWORD *)v19 + 6) = 120;
          v19[28] = 1;
          if ( v1 != v12 )
          {
            v20 = v12;
            v21 = v17;
            do
            {
              v22 = _mm_loadu_si128(v20);
              v20 += 2;
              v21 += 32;
              *((__m128i *)v21 - 2) = v22;
              *((__m128i *)v21 - 1) = _mm_loadu_si128(v20 - 1);
            }
            while ( v1 != v20 );
            v3 = (__m128i *)&v17[(((char *)&v1[-2] - (char *)v12) & 0xFFFFFFFFFFFFFFE0LL) + 64];
          }
          if ( v12 )
          {
            v34 = v17;
            operator delete(v12);
          }
          v34 = v3;
          qword_2D0B990 = v18;
          *(__m128 *)&xmmword_2D0B980 = _mm_loadh_ps((const double *)&v34);
          if ( v3 != (__m128i *)v18 )
            goto LABEL_4;
          goto LABEL_21;
        }
        v16 = v14 << 6;
      }
    }
    else
    {
      v16 = 32;
    }
    v35 = (void *)((_BYTE *)*(&xmmword_2D0B980 + 1) - (_BYTE *)xmmword_2D0B980);
    v34 = xmmword_2D0B980;
    v17 = (char *)operator new(v16);
    v12 = (__m128i *)v34;
    v13 = (char *)v35;
    v18 = (__int64)&v17[v16];
    v3 = (__m128i *)(v17 + 32);
    goto LABEL_14;
  }
  v3 = (__m128i *)((char *)*(&xmmword_2D0B980 + 1) + 32);
  *((_QWORD *)*(&xmmword_2D0B980 + 1) + 1) = 12;
  v1->m128i_i64[0] = (__int64)"sve2-bitperm";
  v1[1].m128i_i64[0] = 0x1F00000027LL;
  v1[1].m128i_i32[2] = 120;
  v1[1].m128i_i8[12] = 1;
  *(&xmmword_2D0B980 + 1) = &v1[2];
  if ( &v1[2] != (__m128i *)v2 )
  {
LABEL_4:
    v3[1].m128i_i8[12] = 1;
    v4 = v3 + 2;
    v4[-2].m128i_i64[0] = (__int64)"sve2-sha3";
    v4[-2].m128i_i64[1] = 9;
    v4[-1].m128i_i64[0] = 0x2000000028LL;
    v4[-1].m128i_i32[2] = 121;
    *(&xmmword_2D0B980 + 1) = v4;
    goto LABEL_5;
  }
LABEL_21:
  v23 = (__m128i *)xmmword_2D0B980;
  v24 = (char *)v3 - (_BYTE *)xmmword_2D0B980;
  v25 = ((char *)v3 - (_BYTE *)xmmword_2D0B980) >> 5;
  if ( v25 )
  {
    v26 = 2 * v25;
    if ( 2 * v25 < v25 )
    {
      v27 = -32;
    }
    else
    {
      v27 = -32;
      if ( v26 <= 0x7FFFFFFFFFFFFFFLL )
      {
        if ( !v26 )
        {
          v34 = &qword_20;
          v29 = 0;
          v28 = nullptr;
          goto LABEL_25;
        }
        v27 = v25 << 6;
      }
    }
  }
  else
  {
    v27 = 32;
  }
  v35 = xmmword_2D0B980;
  v28 = (__m128i *)operator new(v27);
  v29 = (__int64)v28->m128i_i64 + v27;
  v34 = &v28[2];
  v23 = (__m128i *)v35;
LABEL_25:
  v30 = &v28->m128i_i8[v24];
  *(_QWORD *)v30 = "sve2-sha3";
  *((_QWORD *)v30 + 1) = 9;
  *((_QWORD *)v30 + 2) = 0x2000000028LL;
  *((_DWORD *)v30 + 6) = 121;
  v30[28] = 1;
  if ( v3 != v23 )
  {
    v31 = v23;
    v32 = v28;
    do
    {
      v33 = _mm_loadu_si128(v31);
      v31 += 2;
      v32 += 2;
      v32[-2] = v33;
      v32[-1] = _mm_loadu_si128(v31 - 1);
    }
    while ( v3 != v31 );
    v34 = &v28[4].m128i_i8[((char *)v3 - (char *)v23 - 32) & 0xFFFFFFFFFFFFFFE0LL];
  }
  if ( v23 )
  {
    v35 = v28;
    operator delete(v23);
    v28 = (__m128i *)v35;
  }
  v35 = v28;
  qword_2D0B990 = v29;
  *(__m128 *)&xmmword_2D0B980 = _mm_loadh_ps((const double *)&v34);
LABEL_5:
  v38[0] = 122;
  v37 = 33;
  v36 = 41;
  sub_229A350((__int64)&xmmword_2D0B980, "sve2-sm4", &v36, &v37, v38);
  v38[0] = 133;
  v37 = 39;
  v36 = 54;
  sub_2299750((__int64)&xmmword_2D0B980, "wfxt", &v36, &v37, v38);
  v38[0] = 17;
  v37 = 44;
  v36 = 11;
  return sub_2299750((__int64)&xmmword_2D0B980, "cssc", &v36, &v37, v38);
}
