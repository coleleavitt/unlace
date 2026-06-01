__m128i *__fastcall sub_2087EA0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 *v9; // r12
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 *v12; // rdi
  __int64 v13; // rcx
  __m128i *v14; // rdx
  unsigned __int64 v15; // rsi
  __m128i si128; // xmm0
  __int64 *v17; // rbp
  __int64 *v18; // r13
  __int64 v19; // rax
  int v20; // r12d
  unsigned __int8 v21; // dl
  __int64 *v22; // r14
  __int64 v23; // rdi
  __int64 *v24; // rdx
  int v25; // eax
  __int64 v26; // rsi
  unsigned int v27; // eax
  __int64 *v28; // rcx
  __int64 v29; // rdi
  int v30; // r11d
  __int64 *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __m128i *v34; // rdx
  unsigned __int64 v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // [rsp+10h] [rbp-78h]
  __int64 *v38; // [rsp+18h] [rbp-70h]
  __int64 v39; // [rsp+28h] [rbp-60h] BYREF
  __int64 v40; // [rsp+30h] [rbp-58h] BYREF
  __int64 v41; // [rsp+38h] [rbp-50h] BYREF
  int v42[18]; // [rsp+40h] [rbp-48h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(__int64 **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (__m128i *)sub_22300B0(8LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v37 = 8 * v8;
    v12 = &v9[v8];
    v13 = 8LL * *(unsigned int *)(a1 + 16);
    if ( result != (__m128i *)&result->m128i_i8[v13] )
    {
      v14 = result;
      v15 = ((unsigned __int64)(v13 - 8) >> 3) + 1;
      if ( v13 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v14++ = si128;
      while ( v14 != &result[v15 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v15 & 0xFFFFFFFFFFFFFFFELL));
      if ( v15 != (v15 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    v17 = v9;
    v18 = v12;
    if ( v12 != v9 )
    {
      v38 = v9;
      do
      {
        v19 = *v17;
        if ( *v17 != -8192 && v19 != -4096 )
        {
          v20 = *(_DWORD *)(a1 + 16);
          if ( !v20 )
          {
            *(_QWORD *)&dword_0 = *v17;
            BUG();
          }
          v21 = *(_BYTE *)(v19 - 16);
          v22 = *(__int64 **)a1;
          if ( (v21 & 2) != 0 )
          {
            v23 = **(_QWORD **)(v19 - 32);
            v39 = *(_QWORD *)(*(_QWORD *)(v19 - 32) + 8LL);
            v40 = *(_QWORD *)(*(_QWORD *)(v19 - 32) + 16LL);
            v24 = *(__int64 **)(v19 - 32);
          }
          else
          {
            v24 = (__int64 *)(v19 + -16 - 8LL * ((v21 >> 2) & 0xF));
            v23 = *v24;
            v39 = v24[1];
            v40 = v24[2];
          }
          v41 = v24[3];
          v42[0] = *(_DWORD *)(v19 + 4);
          v25 = sub_2073790(v23, &v39, &v40, &v41, v42);
          v26 = *v17;
          v27 = (v20 - 1) & v25;
          v28 = &v22[v27];
          v29 = *v28;
          if ( *v17 != *v28 && v29 != -4096 )
          {
            v30 = 1;
            v31 = nullptr;
            while ( 1 )
            {
              if ( v29 != -8192 || v31 )
                v28 = v31;
              v27 = (v20 - 1) & (v30 + v27);
              v29 = v22[v27];
              if ( v26 == v29 )
              {
                v28 = &v22[v27];
                goto LABEL_26;
              }
              if ( v29 == -4096 )
                break;
              ++v30;
              v31 = v28;
              v28 = &v22[v27];
            }
            if ( !v28 )
              v28 = &v22[v27];
          }
LABEL_26:
          *v28 = v26;
          ++*(_DWORD *)(a1 + 8);
        }
        ++v17;
      }
      while ( v18 != v17 );
      v9 = v38;
    }
    return (__m128i *)operator delete(v9, v37, 8);
  }
  else
  {
    v32 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v33 = 8 * v32;
    if ( result != (__m128i *)&result->m128i_i8[v33] )
    {
      v34 = result;
      v35 = ((unsigned __int64)(v33 - 8) >> 3) + 1;
      if ( v33 == 8 )
        goto LABEL_37;
      v36 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v34++ = v36;
      while ( &result[v35 >> 1] != v34 );
      result = (__m128i *)((char *)result + 8 * (v35 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v35 & 0xFFFFFFFFFFFFFFFELL) != v35 )
LABEL_37:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
