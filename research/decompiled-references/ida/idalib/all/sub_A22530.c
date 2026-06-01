unsigned __int64 __fastcall sub_A22530(int a1, int *a2)
{
  __m128i *v2; // rax
  int v3; // r8d
  __m128i *v4; // rax
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  signed __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-B0h] BYREF
  __m128i dest; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+50h] [rbp-68h] BYREF
  __int128 v25; // [rsp+60h] [rbp-58h]
  __int128 v26; // [rsp+70h] [rbp-48h]
  __m128i si128; // [rsp+80h] [rbp-38h]

  memset(&dest, 0, 64);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v21 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v2 = sub_A0C4A0(&dest, &v21, &dest, (unsigned __int64)&v24, a1);
  v3 = *a2;
  v22 = v21;
  v4 = sub_A0C4A0(&dest, &v22, v2, (unsigned __int64)&v24, v3);
  v5 = v22;
  if ( v22 )
  {
    v14 = (char *)v4 - (char *)&dest;
    sub_A1EDC0(dest.m128i_i8, v4->m128i_i8, (char *)&v24);
    sub_9B6F20((unsigned __int64 *)&v24, &dest);
    v15 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v5 + v14) >> 47) ^ (v5 + v14))
        + v24
        - 0x622015F714C7D297LL
        * (((0x9DDFEA08EB382D69LL
           * (((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v26)) >> 47)
            ^ (0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v26))
            ^ si128.m128i_i64[0])) >> 47)
         ^ (0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v26)) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v26))
           ^ si128.m128i_i64[0])));
    v16 = 0x9DDFEA08EB382D69LL
        * (v15
         ^ (v25
          - 0x4B6D499041670D8DLL * (*((_QWORD *)&v24 + 1) ^ (*((_QWORD *)&v24 + 1) >> 47))
          - 0x622015F714C7D297LL
          * ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v26 + 1) ^ *((_QWORD *)&v25 + 1)))
             ^ *((_QWORD *)&v26 + 1)
             ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v26 + 1) ^ *((_QWORD *)&v25 + 1))) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v26 + 1) ^ *((_QWORD *)&v25 + 1)))
              ^ *((_QWORD *)&v26 + 1)
              ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v26 + 1) ^ *((_QWORD *)&v25 + 1))) >> 47))) >> 47))));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v15 ^ v16 ^ (v16 >> 47)))
          ^ ((0x9DDFEA08EB382D69LL * (v15 ^ v16 ^ (v16 >> 47))) >> 47));
  }
  v6 = (char *)v4 - (char *)&dest;
  if ( (unsigned __int64)((char *)v4 - (char *)&dest - 4) <= 4 )
  {
    v7 = si128.m128i_i64[1] ^ *(unsigned int *)((char *)&v22 + v6 + 4);
    v8 = 0x9DDFEA08EB382D69LL * (v7 ^ (v6 + 8LL * dest.m128i_u32[0]));
    v9 = (v8 >> 47) ^ v8 ^ v7;
    return 0x9DDFEA08EB382D69LL * ((0x9DDFEA08EB382D69LL * v9) ^ ((0x9DDFEA08EB382D69LL * v9) >> 47));
  }
  if ( v6 - 9 <= 7 )
  {
    v17 = *(__int64 *)((char *)&v22 + v6);
    v18 = __ROR8__(v6 + v17, v6);
    v19 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v18 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1])) >> 47)
         ^ (0x9DDFEA08EB382D69LL * (v18 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1]))
         ^ v18);
    return v17 ^ (0x9DDFEA08EB382D69LL * (v19 ^ (v19 >> 47)));
  }
  if ( v6 - 17 <= 0xF )
  {
    v11 = 0x9AE16A3B2F90404FLL * *(__int64 *)((char *)&v22 + v6);
    v12 = v6
        + si128.m128i_i64[1]
        - 0x4B6D499041670D8DLL * dest.m128i_i64[0]
        + __ROR8__(dest.m128i_i64[1] ^ 0xC949D7C7509E6557LL, 20)
        - v11;
    v13 = 0x9DDFEA08EB382D69LL
        * (v12
         ^ (__ROL8__(0xB492B66FBE98F273LL * dest.m128i_i64[0] - dest.m128i_i64[1], 21)
          - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)&v21 + v6)
          + __ROR8__(si128.m128i_i64[1] ^ v11, 30)));
    v9 = v13 ^ v12 ^ (v13 >> 47);
    return 0x9DDFEA08EB382D69LL * ((0x9DDFEA08EB382D69LL * v9) ^ ((0x9DDFEA08EB382D69LL * v9) >> 47));
  }
  if ( v6 > 0x20 )
    return sub_A1F620(&dest, v6, si128.m128i_i64[1]);
  result = si128.m128i_i64[1] ^ 0x9AE16A3B2F90404FLL;
  if ( v6 )
  {
    v20 = si128.m128i_i64[1]
        ^ (0xC949D7C7509E6557LL * ((unsigned int)v6 + 4 * *((unsigned __int8 *)&v22 + v6 + 7)))
        ^ (0x9AE16A3B2F90404FLL * (dest.m128i_u8[0] + (dest.m128i_u8[v6 >> 1] << 8)));
    return 0x9AE16A3B2F90404FLL * (v20 ^ (v20 >> 47));
  }
  return result;
}
