void __fastcall sub_1182690(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  __int64 v10; // rax
  size_t v11; // r14
  void *v12; // r15
  size_t v13; // r14
  __int64 v14; // rax
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  char *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // r12
  unsigned __int64 v21; // [rsp+28h] [rbp-250h]
  __m128 v22; // [rsp+30h] [rbp-248h] BYREF
  _QWORD v23[4]; // [rsp+40h] [rbp-238h] BYREF
  __int16 v24; // [rsp+60h] [rbp-218h]
  _QWORD v25[4]; // [rsp+70h] [rbp-208h] BYREF
  __int16 v26; // [rsp+90h] [rbp-1E8h]
  _BYTE v27[32]; // [rsp+A0h] [rbp-1D8h] BYREF
  __int16 v28; // [rsp+C0h] [rbp-1B8h]
  _QWORD v29[4]; // [rsp+D0h] [rbp-1A8h] BYREF
  __int16 v30; // [rsp+F0h] [rbp-188h]
  void *ptr; // [rsp+100h] [rbp-178h] BYREF
  __m128i si128; // [rsp+108h] [rbp-170h] BYREF
  __int64 v33; // [rsp+118h] [rbp-160h] BYREF
  __int16 v34; // [rsp+120h] [rbp-158h]
  void *src; // [rsp+1A0h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+1A8h] [rbp-D0h] BYREF
  _WORD v37[96]; // [rsp+1B8h] [rbp-C0h] BYREF

  LODWORD(src) = 3053;
  v6 = sub_21B6DA0(a2, &src, 1);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 == v9 )
    goto LABEL_5;
  while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 3053) )
  {
    if ( v9 == ++v8 )
      goto LABEL_5;
  }
  if ( v8 == v9 )
  {
LABEL_5:
    if ( !sub_10DCD30(a2, 0xBD9u) )
    {
      v14 = a1[1];
      v15 = *(_BYTE **)(v14 + 248);
      v16 = *(_QWORD *)(v14 + 256);
      *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      src = v37;
      sub_A1FE50(&src, v15, &v15[v16]);
      v30 = 257;
      v34 = 257;
      v28 = 257;
      v25[0] = "include";
      v26 = 259;
      sub_228A3B0(&src, v25, v27, v29, &ptr);
      v34 = 261;
      ptr = src;
      si128.m128i_i64[0] = n[0];
      sub_112FA80(a2, a3, (__int64)&ptr);
      if ( src != v37 )
        free(src);
    }
    if ( sub_10DCD30(a2, 0xBEFu) )
      return;
    sub_1131210((__int64)&ptr, (__int64)a1);
    if ( (_BYTE)v34 )
    {
      v37[4] = 260;
      src = &ptr;
      sub_112FA80(a2, a3, (__int64)&src);
      if ( (_BYTE)v34 )
      {
        if ( ptr != &si128.m128i_u64[1] )
          operator delete(ptr);
      }
    }
    (*(void (__fastcall **)(void **, _QWORD *))(*a1 + 552LL))(&src, a1);
    v11 = n[0];
    v12 = src;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr = &v33;
    if ( n[0] > 0x80 )
    {
      sub_2236E10(&ptr, &v33, n[0], 1);
      v17 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !n[0] )
      {
        si128.m128i_i64[0] = 0;
        if ( src == &n[1] )
        {
LABEL_24:
          if ( ptr != &v33 )
            free(ptr);
          return;
        }
LABEL_22:
        operator delete(v12);
        v13 = si128.m128i_i64[0];
LABEL_23:
        if ( v13 )
        {
          sub_11824E0(&v22, (__int64)a1);
          v21 = v22.m128_u64[1];
          if ( v22.m128_u64[1] != v22.m128_u64[0] )
          {
            v18 = a2;
            v19 = v22.m128_u64[0];
            v20 = v18;
            do
            {
              while ( 1 )
              {
                src = v37;
                *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
                if ( si128.m128i_i64[0] )
                  sub_9C3DB0(&src, (const void **)&ptr);
                v24 = 260;
                v28 = 257;
                v30 = 257;
                v26 = 257;
                v23[0] = v19 - 128;
                sub_228A3B0(&src, v23, v25, v27, v29);
                v30 = 257;
                v28 = 257;
                v26 = 257;
                v23[0] = "include";
                v24 = 259;
                sub_228A3B0(&src, v23, v25, v27, v29);
                v30 = 261;
                v29[0] = src;
                v29[1] = n[0];
                sub_112FA80(v20, a3, (__int64)v29);
                if ( src == v37 )
                  break;
                free(src);
                v19 -= 192LL;
                if ( v21 == v19 )
                  goto LABEL_24;
              }
              v19 -= 192LL;
            }
            while ( v21 != v19 );
          }
        }
        goto LABEL_24;
      }
      v17 = (char *)&v33;
    }
    memcpy(v17, v12, v11);
    v12 = src;
    v13 = si128.m128i_i64[0] + v11;
    si128.m128i_i64[0] = v13;
    if ( src == &n[1] )
      goto LABEL_23;
    goto LABEL_22;
  }
  do
  {
    v10 = *v8;
    if ( *(_QWORD *)(*v8 + 16LL) )
      v10 = *(_QWORD *)(*v8 + 16LL);
    ++v8;
    *(_BYTE *)(v10 + 44) |= 1u;
    if ( v8 == v9 )
      break;
    while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 3053) )
    {
      if ( v9 == ++v8 )
        return;
    }
  }
  while ( v9 != v8 );
}
