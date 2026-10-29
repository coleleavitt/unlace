__m128i *__fastcall sub_2089320(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 *v9; // r13
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 *v12; // rdi
  __int64 v13; // rcx
  __m128i *v14; // rdx
  unsigned __int64 v15; // rsi
  __m128i si128; // xmm0
  __int64 *v17; // rbp
  __int64 *v18; // r14
  __int64 v19; // rax
  int v20; // r12d
  unsigned __int8 v21; // dl
  __int64 *v22; // r13
  __int64 v23; // rdi
  __int64 *v24; // rdx
  int v25; // r12d
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 *v29; // rdx
  __int64 v30; // rsi
  int v31; // r8d
  __int64 *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rcx
  __m128i *v35; // rdx
  unsigned __int64 v36; // rsi
  __m128i v37; // xmm0
  __int64 v38; // [rsp+10h] [rbp-78h]
  __int64 *v39; // [rsp+18h] [rbp-70h]
  __int64 v40[2]; // [rsp+28h] [rbp-60h] BYREF
  int v41; // [rsp+38h] [rbp-50h] BYREF
  int v42; // [rsp+3Ch] [rbp-4Ch] BYREF
  char v43[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v44[8]; // [rsp+44h] [rbp-44h] BYREF

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
    v38 = 8 * v8;
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
      if ( (v15 & 0xFFFFFFFFFFFFFFFELL) != v15 )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    v17 = v9;
    v18 = v12;
    if ( v12 != v9 )
    {
      v39 = v9;
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
            v40[0] = *(_QWORD *)(*(_QWORD *)(v19 - 32) + 8LL);
            v24 = *(__int64 **)(v19 - 32);
          }
          else
          {
            v24 = (__int64 *)(v19 + -16 - 8LL * ((v21 >> 2) & 0xF));
            v23 = *v24;
            v40[0] = v24[1];
          }
          v25 = v20 - 1;
          v40[1] = v24[2];
          v41 = *(_DWORD *)(v19 + 4);
          v42 = *(_DWORD *)(v19 + 16);
          v43[0] = *(_BYTE *)(v19 + 28);
          v44[0] = *(_QWORD *)(v19 + 20);
          v26 = sub_207C060(v23, v40, &v41, &v42, v43, (__int64)v44);
          v27 = *v17;
          v28 = v25 & v26;
          v29 = &v22[v28];
          v30 = *v29;
          if ( *v17 != *v29 && v30 != -4096 )
          {
            v31 = 1;
            v32 = nullptr;
            while ( 1 )
            {
              if ( v30 != -8192 || v32 )
                v29 = v32;
              v28 = v25 & (v31 + v28);
              v30 = v22[v28];
              if ( v30 == v27 )
              {
                v29 = &v22[v28];
                goto LABEL_26;
              }
              if ( v30 == -4096 )
                break;
              ++v31;
              v32 = v29;
              v29 = &v22[v28];
            }
            if ( !v29 )
              v29 = &v22[v28];
          }
LABEL_26:
          *v29 = v27;
          ++*(_DWORD *)(a1 + 8);
        }
        ++v17;
      }
      while ( v18 != v17 );
      v9 = v39;
    }
    return (__m128i *)operator delete(v9, v38, 8);
  }
  else
  {
    v33 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v34 = 8 * v33;
    if ( result != (__m128i *)&result->m128i_i8[v34] )
    {
      v35 = result;
      v36 = ((unsigned __int64)(v34 - 8) >> 3) + 1;
      if ( v34 == 8 )
        goto LABEL_37;
      v37 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v35++ = v37;
      while ( &result[v36 >> 1] != v35 );
      result = (__m128i *)((char *)result + 8 * (v36 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v36 & 0xFFFFFFFFFFFFFFFELL) != v36 )
LABEL_37:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
