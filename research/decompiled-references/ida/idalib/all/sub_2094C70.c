unsigned __int64 __fastcall sub_2094C70(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  int v5; // r12d
  __int64 v6; // r13
  _QWORD *v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 result; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rbp
  _QWORD *v17; // r15
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // r11
  __int64 v29; // r8
  __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  __m128i v35; // [rsp+18h] [rbp-60h]
  __m128i v36; // [rsp+28h] [rbp-50h]

  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(unsigned __int8 *)(a2 + 168);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v5;
  ++*(_DWORD *)(a3 + 8);
  v33 = a3;
  sub_20949C0(&v33, a2 + 8);
  sub_20949C0(&v33, a2 + 88);
  sub_20949C0(&v33, a2 + 120);
  sub_20949C0(&v33, a2 + 152);
  v6 = *(unsigned int *)(a3 + 8);
  v7 = *(_QWORD **)a3;
  v8 = 4 * v6;
  if ( (unsigned __int64)(4 * v6) > 0x40 )
  {
    v16 = v7 + 8;
    v33 = 0;
    v17 = (_QWORD *)((char *)v7 + (v8 & 0xFFFFFFFFFFFFFFC0LL));
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CC0);
    v35 = _mm_load_si128((const __m128i *)&xmmword_23A8CD0);
    v36 = _mm_load_si128((const __m128i *)&xmmword_23A8CE0);
    sub_9B6F20(&v33, v7);
    if ( v17 != v7 + 8 )
    {
      do
      {
        v18 = v16;
        v16 += 8;
        sub_9B6F20(&v33, v18);
      }
      while ( v17 != v16 );
    }
    if ( (v8 & 0x3C) != 0 )
      sub_9B6F20(&v33, (_QWORD *)((char *)v7 + v8 - 64));
    v14 = 0xD24AD9BEFA63C9CCLL * v6
        + v33
        - 0x622015F714C7D297LL
        * (((0x9DDFEA08EB382D69LL
           * (((0x9DDFEA08EB382D69LL * (v36.m128i_i64[1] ^ v35.m128i_i64[1])) >> 47)
            ^ (0x9DDFEA08EB382D69LL * (v36.m128i_i64[1] ^ v35.m128i_i64[1]))
            ^ v36.m128i_i64[1])) >> 47)
         ^ (0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (v36.m128i_i64[1] ^ v35.m128i_i64[1])) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (v36.m128i_i64[1] ^ v35.m128i_i64[1]))
           ^ v36.m128i_i64[1])));
    v15 = v14
        ^ (si128.m128i_i64[1]
         - 0x4B6D499041670D8DLL * (si128.m128i_i64[0] ^ ((unsigned __int64)si128.m128i_i64[0] >> 47))
         - 0x622015F714C7D297LL
         * (((0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (v36.m128i_i64[0] ^ v35.m128i_i64[0])) >> 47)
             ^ (0x9DDFEA08EB382D69LL * (v36.m128i_i64[0] ^ v35.m128i_i64[0]))
             ^ v36.m128i_i64[0])) >> 47)
          ^ (0x9DDFEA08EB382D69LL
           * (((0x9DDFEA08EB382D69LL * (v36.m128i_i64[0] ^ v35.m128i_i64[0])) >> 47)
            ^ (0x9DDFEA08EB382D69LL * (v36.m128i_i64[0] ^ v35.m128i_i64[0]))
            ^ v36.m128i_i64[0]))));
    goto LABEL_15;
  }
  if ( v8 - 4 <= 4 )
  {
    v9 = *(unsigned int *)((char *)v7 + v8 - 4) ^ 0xFF51AFD7ED558CCDLL;
    v10 = 0x9DDFEA08EB382D69LL * (v9 ^ (v8 + 8LL * *(unsigned int *)v7));
    return -348639895
         * ((-348639895 * ((v10 >> 47) ^ (unsigned int)v10 ^ (unsigned int)v9))
          ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v10 >> 47) ^ v10 ^ v9)) >> 32) >> 15));
  }
  if ( v8 - 9 <= 7 )
  {
    v20 = *(_QWORD *)((char *)v7 + v8 - 8);
    v21 = __ROR8__(v8 + v20, v8);
    v22 = 0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (v21 ^ *v7 ^ 0xFF51AFD7ED558CCDLL))
         ^ v21
         ^ ((0x9DDFEA08EB382D69LL * (v21 ^ *v7 ^ 0xFF51AFD7ED558CCDLL)) >> 47));
    return (unsigned int)v20 ^ (-348639895 * ((unsigned int)v22 ^ (HIDWORD(v22) >> 15)));
  }
  if ( v8 - 17 <= 0xF )
  {
    v12 = v7[1];
    v13 = 0x9AE16A3B2F90404FLL * *(_QWORD *)((char *)v7 + v8 - 8);
    v14 = v8 - 0x4B6D499041670D8DLL * *v7 - 0xAE502812AA7333LL + __ROR8__(v12 ^ 0xC949D7C7509E6557LL, 20) - v13;
    v15 = v14
        ^ (__ROL8__(0xB492B66FBE98F273LL * *v7 - v12, 21)
         - 0x3C5A37A36834CED9LL * *(_QWORD *)((char *)v7 + v8 - 16)
         + __ROR8__(v13 ^ 0xFF51AFD7ED558CCDLL, 30));
LABEL_15:
    v19 = 0x9DDFEA08EB382D69LL * ((0x9DDFEA08EB382D69LL * v15) ^ v14 ^ ((0x9DDFEA08EB382D69LL * v15) >> 47));
    return -348639895 * ((unsigned int)v19 ^ (HIDWORD(v19) >> 15));
  }
  if ( v8 > 0x20 )
  {
    v23 = *(_QWORD *)((char *)v7 + v8 - 16);
    v24 = v7[3];
    v25 = v7[2];
    v26 = *v7 - 0x3C5A37A36834CED9LL * (v8 + v23);
    v27 = v26 + v7[1];
    v28 = v27 + v25;
    v29 = *(_QWORD *)((char *)v7 + v8 - 32) + v25;
    v30 = __ROL8__(v24 + v26, 12) + __ROR8__(v27, 7) + __ROL8__(v26, 27) + __ROR8__(v28, 31);
    v31 = 0x9AE16A3B2F90404FLL
        * (__ROR8__(v23 + v29 + *(_QWORD *)((char *)v7 + v8 - 24), 31)
         + v24
         + __ROL8__(v29, 27)
         + __ROL8__(v29 + *(_QWORD *)((char *)v7 + v8 - 8), 12)
         + __ROR8__(v29 + *(_QWORD *)((char *)v7 + v8 - 24), 7)
         + v28)
        - 0x3C5A37A36834CED9LL
        * (v30 + *(_QWORD *)((char *)v7 + v8 - 8) + v23 + v29 + *(_QWORD *)((char *)v7 + v8 - 24));
    v32 = v30 + ((0xC3A5C85C97CB3127LL * ((v31 >> 47) ^ v31)) ^ 0xFF51AFD7ED558CCDLL);
    return 797982799 * ((unsigned int)v32 ^ (v32 >> 47));
  }
  else
  {
    result = 3267742850LL;
    if ( v8 )
      return 797982799
           * ((1352557911 * ((_DWORD)v8 + 4 * *((unsigned __int8 *)v7 + v8 - 1)))
            ^ (797982799 * (*(unsigned __int8 *)v7 + (*((unsigned __int8 *)v7 + (v8 >> 1)) << 8)))
            ^ 0xED558CCD
            ^ (((0xC949D7C7509E6557LL * ((unsigned int)v8 + 4 * *((unsigned __int8 *)v7 + v8 - 1)))
              ^ (0x9AE16A3B2F90404FLL * (*(unsigned __int8 *)v7 + (*((unsigned __int8 *)v7 + (v8 >> 1)) << 8)))
              ^ 0xFF51AFD7ED558CCDLL) >> 47));
  }
  return result;
}
