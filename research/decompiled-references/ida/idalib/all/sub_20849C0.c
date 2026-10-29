__m128i *__fastcall sub_20849C0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // r12
  __int64 *v9; // r13
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 v12; // rcx
  __int64 *v13; // r14
  __int64 v14; // rcx
  __m128i *v15; // rdx
  unsigned __int64 v16; // rsi
  __m128i si128; // xmm0
  __int64 *v18; // rbp
  __int64 v19; // rax
  int v20; // r15d
  int v21; // edi
  unsigned __int8 v22; // dl
  __int64 *v23; // r13
  __int64 v24; // rdx
  int v25; // edx
  int v26; // r15d
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 *v30; // rdx
  __int64 v31; // rsi
  int v32; // r8d
  __int64 *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rcx
  __m128i *v36; // rdx
  unsigned __int64 v37; // rsi
  __m128i v38; // xmm0
  __int64 *v39; // [rsp+18h] [rbp-70h]
  __int64 v40; // [rsp+28h] [rbp-60h] BYREF
  __int64 v41; // [rsp+30h] [rbp-58h] BYREF
  int v42; // [rsp+38h] [rbp-50h] BYREF
  int v43[19]; // [rsp+3Ch] [rbp-4Ch] BYREF

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
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = &v9[v8];
    v14 = 8 * v12;
    if ( result != (__m128i *)&result->m128i_i8[v14] )
    {
      v15 = result;
      v16 = ((unsigned __int64)(v14 - 8) >> 3) + 1;
      if ( v14 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v15++ = si128;
      while ( v15 != &result[v16 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v16 & 0xFFFFFFFFFFFFFFFELL));
      if ( v16 != (v16 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    v18 = v9;
    if ( v13 != v9 )
    {
      v39 = v9;
      do
      {
        v19 = *v18;
        if ( *v18 != -8192 && v19 != -4096 )
        {
          v20 = *(_DWORD *)(a1 + 16);
          if ( !v20 )
          {
            *(_QWORD *)&dword_0 = *v18;
            BUG();
          }
          v21 = *(unsigned __int16 *)(v19 + 2);
          v22 = *(_BYTE *)(v19 - 16);
          v23 = *(__int64 **)a1;
          if ( (v22 & 2) != 0 )
          {
            v40 = *(_QWORD *)(*(_QWORD *)(v19 - 32) + 16LL);
            v24 = *(_QWORD *)(v19 - 32);
          }
          else
          {
            v24 = v19 + -16 - 8LL * ((v22 >> 2) & 0xF);
            v40 = *(_QWORD *)(v24 + 16);
          }
          v41 = *(_QWORD *)(v24 + 24);
          v25 = 0;
          if ( *(_WORD *)(v19 + 2) != 17152 )
            v25 = *(_DWORD *)(v19 + 4);
          v42 = v25;
          v26 = v20 - 1;
          v43[0] = *(_DWORD *)(v19 + 28);
          v43[1] = *(_DWORD *)(v19 + 24);
          v43[2] = *(_DWORD *)(v19 + 20);
          v27 = sub_2073EA0(v21, &v40, &v41, &v42, v43);
          v28 = *v18;
          v29 = v26 & v27;
          v30 = &v23[v29];
          v31 = *v30;
          if ( *v18 != *v30 && v31 != -4096 )
          {
            v32 = 1;
            v33 = nullptr;
            while ( 1 )
            {
              if ( v31 != -8192 || v33 )
                v30 = v33;
              v29 = v26 & (v32 + v29);
              v31 = v23[v29];
              if ( v31 == v28 )
              {
                v30 = &v23[v29];
                goto LABEL_28;
              }
              if ( v31 == -4096 )
                break;
              ++v32;
              v33 = v30;
              v30 = &v23[v29];
            }
            if ( !v30 )
              v30 = &v23[v29];
          }
LABEL_28:
          *v30 = v28;
          ++*(_DWORD *)(a1 + 8);
        }
        ++v18;
      }
      while ( v13 != v18 );
      v9 = v39;
    }
    return (__m128i *)operator delete(v9, 8 * v8, 8);
  }
  else
  {
    v34 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v35 = 8 * v34;
    if ( result != (__m128i *)&result->m128i_i8[v35] )
    {
      v36 = result;
      v37 = ((unsigned __int64)(v35 - 8) >> 3) + 1;
      if ( v35 == 8 )
        goto LABEL_39;
      v38 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v36++ = v38;
      while ( v36 != &result[v37 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v37 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v37 & 0xFFFFFFFFFFFFFFFELL) != v37 )
LABEL_39:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
