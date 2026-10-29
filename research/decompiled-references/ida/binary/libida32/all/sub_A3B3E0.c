void __fastcall sub_A3B3E0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // r14
  size_t v4; // r12
  size_t v5; // r15
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  size_t v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __m128i *v16; // r12
  const __m128i *v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i *v23; // rax
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v28; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v29[2]; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v30; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-90h]
  void *s1; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-80h]
  _BYTE v35[120]; // [rsp+60h] [rbp-78h] BYREF

  v3 = 0;
  v4 = j__strlen("default");
  v31 = *(_QWORD *)(a1 + 48);
  v32 = *(unsigned int *)(a1 + 40);
  v5 = j__strlen(asc_22BE270);
  v6 = sub_2223270(&v31, asc_22BE270, v5, 0);
  v7 = v32;
  if ( v6 < v32 )
  {
    v3 = v32 - v6;
    v7 = v6;
  }
  v34 = v3;
  s1 = (void *)(v31 + v7);
  v8 = sub_22233F0(&s1, asc_22BE270, v5, -1) + 1;
  if ( v8 > v34 )
    v8 = v34;
  v9 = v34 - v3 + v8;
  if ( v9 > v34 )
    v9 = v34;
  if ( v4 != v9 || v4 && memcmp(s1, "default", v4) )
  {
    v31 = *(_QWORD *)(a1 + 48);
    v10 = 0;
    v32 = *(unsigned int *)(a1 + 40);
    v11 = j__strlen(asc_22BE270);
    v12 = sub_2223270(&v31, asc_22BE270, v11, 0);
    v13 = v32;
    if ( v12 < v32 )
    {
      v10 = v32 - v12;
      v13 = v12;
    }
    s1 = (void *)(v31 + v13);
    v34 = v10;
    v14 = sub_22233F0(&s1, asc_22BE270, v11, -1) + 1;
    v29[0] = s1;
    if ( v14 > v34 )
      v14 = v34;
    v15 = v34 - v10 + v14;
    if ( v15 > v34 )
      v15 = v34;
    v29[1] = v15;
    s1 = v35;
    v34 = 0x400000000LL;
    sub_22239B0(v29, &s1, (unsigned int)a3, 0xFFFFFFFFLL, 1);
    v16 = (__m128i *)((char *)s1 + 16 * (unsigned int)v34);
    if ( s1 != v16 )
    {
      v17 = (const __m128i *)s1;
      do
      {
        v24 = 0;
        v30 = _mm_loadu_si128(v17);
        v25 = sub_2223270(&v30, asc_22BE270, 6, 0);
        v26 = v30.m128i_i64[1];
        if ( v25 < v30.m128i_i64[1] )
        {
          v24 = v30.m128i_i64[1] - v25;
          v26 = v25;
        }
        v32 = v24;
        v31 = v30.m128i_i64[0] + v26;
        v18 = sub_22233F0(&v31, asc_22BE270, 6, -1) + 1;
        v30.m128i_i64[0] = v31;
        if ( v18 > v32 )
          v18 = v32;
        v19 = v32 - v24 + v18;
        v20 = *(unsigned int *)(a2 + 12);
        if ( v19 > v32 )
          v19 = v32;
        v30.m128i_i64[1] = v19;
        v21 = *(unsigned int *)(a2 + 8);
        v22 = _mm_load_si128(&v30);
        if ( v21 + 1 > v20 )
        {
          v28 = v22;
          sub_22134E0(a2, a2 + 16, v21 + 1, 16);
          v22 = _mm_load_si128(&v28);
          v23 = (__m128i *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8));
        }
        else
        {
          v23 = (__m128i *)(*(_QWORD *)a2 + 16 * v21);
        }
        ++v17;
        *v23 = v22;
        ++*(_DWORD *)(a2 + 8);
      }
      while ( v16 != v17 );
      v16 = (__m128i *)s1;
    }
    if ( v16 != (__m128i *)v35 )
      free(v16);
  }
}

