__m128i *__fastcall sub_20886E0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 *v9; // r12
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __m128i *v15; // rdx
  unsigned __int64 v16; // rsi
  __m128i si128; // xmm0
  __int64 *v18; // rbp
  __int64 *v19; // r13
  __int64 v20; // rax
  int v21; // r12d
  int v22; // edi
  unsigned __int8 v23; // dl
  __int64 *v24; // r14
  __int64 *v25; // rcx
  int v26; // eax
  __int64 v27; // rsi
  unsigned int v28; // eax
  __int64 *v29; // rcx
  __int64 v30; // rdi
  int v31; // r11d
  __int64 *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __m128i *v35; // rdx
  unsigned __int64 v36; // rsi
  __m128i v37; // xmm0
  __int64 v38; // [rsp+10h] [rbp-78h]
  __int64 *v39; // [rsp+18h] [rbp-70h]
  __int64 v40; // [rsp+28h] [rbp-60h] BYREF
  __int64 v41; // [rsp+30h] [rbp-58h] BYREF
  char v42[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v43[9]; // [rsp+40h] [rbp-48h] BYREF

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
    v38 = 8 * v8;
    v13 = 8 * v12;
    v14 = &v9[v8];
    if ( result != (__m128i *)&result->m128i_i8[v13] )
    {
      v15 = result;
      v16 = ((unsigned __int64)(v13 - 8) >> 3) + 1;
      if ( v13 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v15++ = si128;
      while ( v15 != &result[v16 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v16 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v16 & 0xFFFFFFFFFFFFFFFELL) != v16 )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    v18 = v9;
    v19 = v14;
    if ( v14 != v9 )
    {
      v39 = v9;
      do
      {
        v20 = *v18;
        if ( *v18 != -8192 && v20 != -4096 )
        {
          v21 = *(_DWORD *)(a1 + 16);
          if ( !v21 )
          {
            *(_QWORD *)&dword_0 = *v18;
            BUG();
          }
          v22 = *(unsigned __int16 *)(v20 + 2);
          v23 = *(_BYTE *)(v20 - 16);
          v24 = *(__int64 **)a1;
          if ( (v23 & 2) != 0 )
          {
            v40 = **(_QWORD **)(v20 - 32);
            v41 = *(_QWORD *)(*(_QWORD *)(v20 - 32) + 8LL);
            v25 = *(__int64 **)(v20 - 32);
          }
          else
          {
            v25 = (__int64 *)(v20 + -16 - 8LL * ((v23 >> 2) & 0xF));
            v40 = *v25;
            v41 = v25[1];
          }
          v42[0] = (unsigned __int8)BYTE1(*(_QWORD *)v20) >> 7;
          v43[0] = v25[2];
          v26 = sub_207B170(v22, &v40, &v41, v42, v43);
          v27 = *v18;
          v28 = (v21 - 1) & v26;
          v29 = &v24[v28];
          v30 = *v29;
          if ( *v18 != *v29 && v30 != -4096 )
          {
            v31 = 1;
            v32 = nullptr;
            while ( 1 )
            {
              if ( v30 != -8192 || v32 )
                v29 = v32;
              v28 = (v21 - 1) & (v31 + v28);
              v30 = v24[v28];
              if ( v30 == v27 )
              {
                v29 = &v24[v28];
                goto LABEL_26;
              }
              if ( v30 == -4096 )
                break;
              ++v31;
              v32 = v29;
              v29 = &v24[v28];
            }
            if ( !v29 )
              v29 = &v24[v28];
          }
LABEL_26:
          *v29 = v27;
          ++*(_DWORD *)(a1 + 8);
        }
        ++v18;
      }
      while ( v19 != v18 );
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
      while ( v35 != &result[v36 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v36 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v36 & 0xFFFFFFFFFFFFFFFELL) != v36 )
LABEL_37:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
