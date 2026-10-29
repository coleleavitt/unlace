unsigned __int64 __fastcall sub_1A38F90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  _QWORD *v5; // r13
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 result; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rsi
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __m128i v19; // kr00_16
  __int64 v20; // rbx
  unsigned __int64 v21; // r11
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r14
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rdi
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // r11
  __int64 v45; // r8
  __int64 v46; // rdi
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // [rsp+10h] [rbp-78h] BYREF
  __m128i si128; // [rsp+18h] [rbp-70h]
  __m128i v51; // [rsp+28h] [rbp-60h]
  __m128i v52; // [rsp+38h] [rbp-50h]

  sub_2222E50(a3, a2 + 8);
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_QWORD **)a3;
  v6 = 4 * v4;
  if ( (unsigned __int64)(4 * v4) > 0x40 )
  {
    v15 = *(_QWORD **)a3;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CC0);
    v51 = _mm_load_si128((const __m128i *)&xmmword_23A8CD0);
    v49 = 0;
    v52 = _mm_load_si128((const __m128i *)&xmmword_23A8CE0);
    sub_9B6F20(&v49, v15);
    v16 = v5 + 8;
    if ( (_QWORD *)((char *)v5 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) != v5 + 8 )
    {
      v17 = v49;
      v18 = si128.m128i_i64[0];
      v19 = v51;
      v20 = v52.m128i_i64[1];
      v21 = si128.m128i_u64[1];
      v22 = v52.m128i_i64[0];
      do
      {
        v23 = __ROL8__(v16[6] + v18 + v19.m128i_i64[1], 22);
        v24 = __ROL8__(v17 + v16[1] + v18 + v19.m128i_i64[0], 27);
        v17 = 0xB492B66FBE98F273LL * __ROL8__(v21 + v22, 31);
        v25 = v20 ^ (0xB492B66FBE98F273LL * v24);
        v49 = v25;
        v26 = v16[5];
        v51.m128i_i64[1] = v25 + v22;
        v51.m128i_i64[0] = 0xB492B66FBE98F273LL * v19.m128i_i64[1];
        v18 = 0xB492B66FBE98F273LL * v23 + v19.m128i_i64[0] + v26;
        si128.m128i_i64[1] = v17;
        si128.m128i_i64[0] = v18;
        v51.m128i_i64[0] = *v16 - 0x4B6D499041670D8DLL * v19.m128i_i64[1];
        v27 = v16[3];
        v28 = v51.m128i_i64[0];
        v51.m128i_i64[1] = __ROR8__(v25 + v22 + v51.m128i_i64[0] + v27, 21);
        v29 = v16[1] + v16[2];
        v52.m128i_i64[0] = v17 + v20;
        v30 = v51.m128i_i64[0] + v29;
        v51.m128i_i64[0] += v27 + v29;
        v51.m128i_i64[1] += v28 + __ROL8__(v30, 20);
        v52.m128i_i64[1] = v18 + v16[2];
        v52.m128i_i64[0] = v16[4] + v17 + v20;
        v31 = v16[7];
        v52.m128i_i64[1] = __ROR8__(v52.m128i_i64[1] + v52.m128i_i64[0] + v31, 21);
        v32 = v16[5] + v16[6];
        si128.m128i_i64[1] = v25;
        v33 = v52.m128i_i64[0] + v32;
        v49 = v17;
        v20 = v52.m128i_i64[1] + __ROL8__(v33, 20) + v52.m128i_i64[0];
        v22 = v33 + v31;
        v16 += 8;
        v21 = v25;
        v52.m128i_i64[1] = v20;
        v52.m128i_i64[0] = v22;
        v19 = v51;
      }
      while ( (_QWORD *)((char *)v5 + (v6 & 0xFFFFFFFFFFFFFFC0LL)) != v16 );
    }
    if ( (v6 & 0x3C) != 0 )
      sub_9B6F20(&v49, (_QWORD *)((char *)v5 + v6 - 64));
    v34 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL
           * (((0x9DDFEA08EB382D69LL * (v52.m128i_i64[1] ^ v51.m128i_i64[1])) >> 47)
            ^ (0x9DDFEA08EB382D69LL * (v52.m128i_i64[1] ^ v51.m128i_i64[1]))
            ^ v52.m128i_i64[1])) >> 47)
         ^ (0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (v52.m128i_i64[1] ^ v51.m128i_i64[1])) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (v52.m128i_i64[1] ^ v51.m128i_i64[1]))
           ^ v52.m128i_i64[1])))
        + v49
        - 0x2DB52641059C3634LL * v4;
    v35 = 0x9DDFEA08EB382D69LL
        * (v34
         ^ (si128.m128i_i64[1]
          - 0x4B6D499041670D8DLL * (si128.m128i_i64[0] ^ ((unsigned __int64)si128.m128i_i64[0] >> 47))
          - 0x622015F714C7D297LL
          * (((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v52.m128i_i64[0] ^ v51.m128i_i64[0]))
              ^ v52.m128i_i64[0]
              ^ ((0x9DDFEA08EB382D69LL * (v52.m128i_i64[0] ^ v51.m128i_i64[0])) >> 47))) >> 47)
           ^ (0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v52.m128i_i64[0] ^ v51.m128i_i64[0]))
             ^ v52.m128i_i64[0]
             ^ ((0x9DDFEA08EB382D69LL * (v52.m128i_i64[0] ^ v51.m128i_i64[0])) >> 47))))));
    v9 = v35 ^ v34 ^ (v35 >> 47);
    return -348639895 * ((-348639895 * (_DWORD)v9) ^ ((unsigned int)((0x9DDFEA08EB382D69LL * v9) >> 32) >> 15));
  }
  if ( v6 - 4 <= 4 )
  {
    v7 = *(unsigned int *)((char *)v5 + v6 - 4) ^ 0xFF51AFD7ED558CCDLL;
    v8 = 0x9DDFEA08EB382D69LL * (v7 ^ (v6 + 8LL * *(unsigned int *)v5));
    v9 = (v8 >> 47) ^ v8 ^ v7;
    return -348639895 * ((-348639895 * (_DWORD)v9) ^ ((unsigned int)((0x9DDFEA08EB382D69LL * v9) >> 32) >> 15));
  }
  if ( v6 - 9 <= 7 )
  {
    v36 = *(_QWORD *)((char *)v5 + v6 - 8);
    v37 = __ROR8__(v6 + v36, v6);
    v38 = 0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (v37 ^ *v5 ^ 0xFF51AFD7ED558CCDLL))
         ^ v37
         ^ ((0x9DDFEA08EB382D69LL * (v37 ^ *v5 ^ 0xFF51AFD7ED558CCDLL)) >> 47));
    return (unsigned int)v36 ^ (-348639895 * ((unsigned int)v38 ^ (HIDWORD(v38) >> 15)));
  }
  if ( v6 - 17 <= 0xF )
  {
    v11 = v5[1];
    v12 = 0x9AE16A3B2F90404FLL * *(_QWORD *)((char *)v5 + v6 - 8);
    v13 = v6 - 0x4B6D499041670D8DLL * *v5 - 0xAE502812AA7333LL + __ROR8__(v11 ^ 0xC949D7C7509E6557LL, 20) - v12;
    v14 = 0x9DDFEA08EB382D69LL
        * (v13
         ^ (__ROL8__(0xB492B66FBE98F273LL * *v5 - v11, 21)
          - 0x3C5A37A36834CED9LL * *(_QWORD *)((char *)v5 + v6 - 16)
          + __ROR8__(v12 ^ 0xFF51AFD7ED558CCDLL, 30)));
    v9 = v13 ^ v14 ^ (v14 >> 47);
    return -348639895 * ((-348639895 * (_DWORD)v9) ^ ((unsigned int)((0x9DDFEA08EB382D69LL * v9) >> 32) >> 15));
  }
  if ( v6 > 0x20 )
  {
    v39 = *(_QWORD *)((char *)v5 + v6 - 16);
    v40 = v5[3];
    v41 = v5[2];
    v42 = *v5 - 0x3C5A37A36834CED9LL * (v6 + v39);
    v43 = v42 + v5[1];
    v44 = v43 + v41;
    v45 = *(_QWORD *)((char *)v5 + v6 - 32) + v41;
    v46 = __ROL8__(v40 + v42, 12) + __ROR8__(v43, 7) + __ROL8__(v42, 27) + __ROR8__(v44, 31);
    v47 = 0x9AE16A3B2F90404FLL
        * (__ROR8__(v45 + *(_QWORD *)((char *)v5 + v6 - 24) + v39, 31)
         + v40
         + __ROL8__(v45, 27)
         + __ROL8__(v45 + *(_QWORD *)((char *)v5 + v6 - 8), 12)
         + __ROR8__(v45 + *(_QWORD *)((char *)v5 + v6 - 24), 7)
         + v44)
        - 0x3C5A37A36834CED9LL
        * (v46 + *(_QWORD *)((char *)v5 + v6 - 8) + v45 + *(_QWORD *)((char *)v5 + v6 - 24) + v39);
    v48 = v46 + ((0xC3A5C85C97CB3127LL * ((v47 >> 47) ^ v47)) ^ 0xFF51AFD7ED558CCDLL);
    return 797982799 * ((unsigned int)v48 ^ (v48 >> 47));
  }
  else
  {
    result = 3267742850LL;
    if ( v6 )
      return 797982799
           * ((1352557911 * ((_DWORD)v6 + 4 * *((unsigned __int8 *)v5 + v6 - 1)))
            ^ (797982799 * (*(unsigned __int8 *)v5 + (*((unsigned __int8 *)v5 + (v6 >> 1)) << 8)))
            ^ 0xED558CCD
            ^ (((0xC949D7C7509E6557LL * ((unsigned int)v6 + 4 * *((unsigned __int8 *)v5 + v6 - 1)))
              ^ (0x9AE16A3B2F90404FLL * (*(unsigned __int8 *)v5 + (*((unsigned __int8 *)v5 + (v6 >> 1)) << 8)))
              ^ 0xFF51AFD7ED558CCDLL) >> 47));
  }
  return result;
}
