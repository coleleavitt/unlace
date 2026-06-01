__int64 __fastcall sub_1111490(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _QWORD *v8; // r14
  size_t v9; // rax
  size_t v10; // r12
  size_t v11; // rdx
  size_t v12; // r13
  __int64 v13; // r12
  char v14; // al
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __m128i v17; // xmm1
  __m128 v18; // xmm1
  __m128i v19; // xmm2
  char *v20; // r15
  __m128i v21; // xmm3
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rsi
  int v27; // eax
  bool v28; // r13
  const char *v29; // r14
  size_t v30; // rax
  size_t v31; // rax
  size_t v32; // r15
  __m128i v33; // [rsp+8h] [rbp-100h] BYREF
  char *v34; // [rsp+18h] [rbp-F0h]
  _QWORD **v35; // [rsp+20h] [rbp-E8h]
  char *v36; // [rsp+28h] [rbp-E0h]
  __m128i v37; // [rsp+30h] [rbp-D8h]
  int v38; // [rsp+40h] [rbp-C8h]
  __m128i si128; // [rsp+50h] [rbp-B8h]
  int v40; // [rsp+60h] [rbp-A8h]
  __m128i v41; // [rsp+70h] [rbp-98h] BYREF
  __m128i v42; // [rsp+80h] [rbp-88h] BYREF
  int v43; // [rsp+90h] [rbp-78h]
  void *v44[2]; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v45; // [rsp+B0h] [rbp-58h] BYREF
  int v46; // [rsp+C0h] [rbp-48h]

  if ( sub_10BB400(a2, 0xCC0u) )
    goto LABEL_2;
  v14 = sub_10B7CD0(a2);
  v5 = 1;
  if ( !v14 )
  {
    v33.m128i_i64[1] = (__int64)v44;
    *(__m128i *)v44 = _mm_load_si128((const __m128i *)&xmmword_23858F0);
    v45.m128i_i32[0] = 795;
    v15 = sub_2193060(a2, v44, 5);
    v16 = *(_QWORD *)(a2 + 8);
    v40 = 795;
    v46 = 795;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23858F0);
    v33.m128i_i64[0] = v16 + 8 * HIDWORD(v15);
    v17 = _mm_loadl_epi64(&v33);
    v34 = (char *)(v16 + 8LL * (unsigned int)v15);
    v45 = si128;
    *(__m128i *)v44 = _mm_unpacklo_epi64(v17, v17);
    sub_1111410((__int64)v44);
    v38 = 795;
    v18 = _mm_loadh_ps((const double *)v33.m128i_i64);
    v37 = _mm_load_si128((const __m128i *)&xmmword_23858F0);
    v41 = (__m128i)v18;
    v42 = v37;
    v43 = 795;
    sub_1111410((__int64)&v41);
    v19 = _mm_load_si128(&v41);
    v20 = (char *)v41.m128i_i64[0];
    v21 = _mm_load_si128(&v42);
    v33.m128i_i64[0] = v41.m128i_i64[1];
    v36 = (char *)v44[0];
    *(__m128i *)v44 = v19;
    v46 = v43;
    v45 = v21;
    v34 = &v45.m128i_i8[4];
    if ( (char *)v41.m128i_i64[0] == v36 )
      goto LABEL_2;
    do
    {
      v22 = *(_QWORD *)v20;
      v23 = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
      v35 = *(_QWORD ***)v20;
      if ( !v23 )
        v23 = v22;
      v20 += 8;
      *(_BYTE *)(v23 + 44) |= 1u;
      for ( v44[0] = v20; (char *)v33.m128i_i64[0] != v20; v44[0] = v20 )
      {
        v24 = *(_QWORD *)v20;
        v25 = v33.m128i_i64[1];
        if ( *(_QWORD *)v20 )
        {
          do
          {
            v26 = *(unsigned int *)(v25 + 16);
            if ( !(_DWORD)v26 )
              break;
            if ( (unsigned __int8)sub_2195AD0(v24, v26) )
            {
              v20 = (char *)v44[0];
              goto LABEL_23;
            }
            v25 += 4;
          }
          while ( v34 != (char *)v25 );
        }
        v20 += 8;
      }
LABEL_23:
      ;
    }
    while ( v36 != v20 );
    v27 = *((_DWORD *)*v35 + 10);
    v28 = v27 != 1134 && v27 != 1456;
    if ( v27 != 795 )
      goto LABEL_25;
    v29 = (const char *)*v35[6];
    v30 = j__strlen("fast");
    if ( !v29 )
    {
      if ( !v30 || !j__strlen("aggressive") )
        goto LABEL_25;
      goto LABEL_2;
    }
    v33.m128i_i64[0] = v30;
    v31 = j__strlen(v29);
    v32 = v31;
    if ( v31 == v33.m128i_i64[0] )
    {
      if ( !v31 || !memcmp(v29, "fast", v31) )
        goto LABEL_25;
      if ( v32 != j__strlen("aggressive") )
        goto LABEL_2;
    }
    else
    {
      if ( v31 != j__strlen("aggressive") )
        goto LABEL_2;
      if ( !v32 )
        goto LABEL_25;
    }
    if ( !memcmp(v29, "aggressive", v32) )
    {
LABEL_25:
      v5 = v28;
      goto LABEL_3;
    }
LABEL_2:
    v5 = 0;
  }
LABEL_3:
  v6 = sub_2193B10(a2, 2330, 2577, v5);
  if ( (_BYTE)v6 )
  {
    v8 = *(_QWORD **)(a1 + 8);
    v9 = j__strlen("crtfastmath.o");
    sub_10C27E0(v44, v8, (void *)"crtfastmath.o", v9, a1);
    sub_9E6D90(a3, v44);
    if ( v44[0] != &v45 )
      operator delete(v44[0]);
    v10 = *(_QWORD *)(a3 + 8);
    v11 = j__strlen("crtfastmath.o");
    v12 = v11;
    if ( v10 <= v11 )
      v11 = v10;
    if ( !sub_990B80(*(const void **)a3, "crtfastmath.o", v11) )
    {
      v13 = v10 - v12;
      if ( v13 <= 0x7FFFFFFF && v13 >= (__int64)0xFFFFFFFF80000000LL )
        LOBYTE(v6) = (_DWORD)v13 != 0;
    }
  }
  return v6;
}

