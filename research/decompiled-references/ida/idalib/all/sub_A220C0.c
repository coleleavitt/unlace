unsigned __int64 __fastcall sub_A220C0(int a1, int *a2, __int8 *a3)
{
  __m128i *v4; // rax
  int v5; // r8d
  __m128i *v6; // rax
  __int8 v7; // dl
  __int64 v8; // r12
  char *v9; // r13
  char *v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 result; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  __m128i v28; // [rsp+0h] [rbp-118h] BYREF
  __m128i v29; // [rsp+10h] [rbp-108h] BYREF
  __m128i v30; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+30h] [rbp-E8h]
  __int8 src; // [rsp+4Fh] [rbp-C9h] BYREF
  __int64 v33; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v36; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v37; // [rsp+B0h] [rbp-68h]
  __m128i v38; // [rsp+C0h] [rbp-58h]
  __m128i si128; // [rsp+D0h] [rbp-48h]

  memset(&dest, 0, 64);
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v33 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v4 = sub_A0C4A0(&dest, &v33, &dest, (unsigned __int64)&v36, a1);
  v5 = *a2;
  v34 = v33;
  v6 = sub_A0C4A0(&dest, &v34, v4, (unsigned __int64)&v36, v5);
  v7 = *a3;
  v8 = v34;
  v9 = &v6->m128i_i8[1];
  src = v7;
  if ( &v6->m128i_i8[1] <= (__int8 *)&v36 )
  {
    v6->m128i_i8[0] = v7;
    v11 = v9 - (char *)&dest;
    if ( v8 )
    {
LABEL_5:
      sub_A1EDC0(dest.m128i_i8, v9, v36.m128i_i8);
      sub_9B6F20((unsigned __int64 *)&v36, &dest);
      v12 = v36.m128i_i64[0]
          - 0x622015F714C7D297LL
          * (((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v38.m128i_i64[0]))
              ^ si128.m128i_i64[0]
              ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v38.m128i_i64[0])) >> 47))) >> 47)
           ^ (0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v38.m128i_i64[0]))
             ^ si128.m128i_i64[0]
             ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v38.m128i_i64[0])) >> 47))))
          - 0x4B6D499041670D8DLL * (((v11 + v8) >> 47) ^ (v11 + v8));
      v13 = 0x9DDFEA08EB382D69LL
          * (v12
           ^ (v37.m128i_i64[0]
            - 0x4B6D499041670D8DLL * (v36.m128i_i64[1] ^ ((unsigned __int64)v36.m128i_i64[1] >> 47))
            - 0x622015F714C7D297LL
            * ((0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL * (v38.m128i_i64[1] ^ v37.m128i_i64[1]))
               ^ v38.m128i_i64[1]
               ^ ((0x9DDFEA08EB382D69LL * (v38.m128i_i64[1] ^ v37.m128i_i64[1])) >> 47)))
             ^ ((0x9DDFEA08EB382D69LL
               * ((0x9DDFEA08EB382D69LL * (v38.m128i_i64[1] ^ v37.m128i_i64[1]))
                ^ v38.m128i_i64[1]
                ^ ((0x9DDFEA08EB382D69LL * (v38.m128i_i64[1] ^ v37.m128i_i64[1])) >> 47))) >> 47))));
      v14 = v12 ^ v13;
      v15 = v13 >> 47;
      return 0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v14 ^ v15)) ^ ((0x9DDFEA08EB382D69LL * (v14 ^ v15)) >> 47));
    }
  }
  else
  {
    v10 = (char *)((char *)&v36 - (char *)v6);
    memcpy(v6, &src, (char *)&v36 - (char *)v6);
    if ( v8 )
    {
      v8 += 64;
      sub_9B6F20((unsigned __int64 *)&v36, &dest);
    }
    else
    {
      v8 = 64;
      sub_A09B80((unsigned __int64 *)&v28, &dest, si128.m128i_u64[1]);
      v22 = _mm_loadu_si128(&v29);
      v23 = _mm_loadu_si128(&v30);
      v36 = _mm_loadu_si128(&v28);
      v37 = v22;
      v38 = v23;
      si128.m128i_i64[0] = v31;
    }
    v9 = &dest.m128i_i8[1LL - (_QWORD)v10];
    memcpy(&dest, &src + (_QWORD)v10, 1LL - (_QWORD)v10);
    v11 = 1LL - (_QWORD)v10;
    if ( v8 )
      goto LABEL_5;
  }
  if ( v11 - 4 > 4 )
  {
    if ( v11 - 9 <= 7 )
    {
      v24 = *(__int64 *)((char *)&v34 + v11);
      v25 = __ROR8__(v24 + v11, v11);
      v26 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (v25 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1])) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (v25 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1]))
           ^ v25);
      return v24 ^ (0x9DDFEA08EB382D69LL * (v26 ^ (v26 >> 47)));
    }
    else
    {
      if ( v11 - 17 <= 0xF )
      {
        v19 = 0x9AE16A3B2F90404FLL * *(__int64 *)((char *)&v34 + v11);
        v20 = v11
            + si128.m128i_i64[1]
            - 0x4B6D499041670D8DLL * dest.m128i_i64[0]
            + __ROR8__(dest.m128i_i64[1] ^ 0xC949D7C7509E6557LL, 20)
            - v19;
        v21 = 0x9DDFEA08EB382D69LL
            * (v20
             ^ (__ROR8__(si128.m128i_i64[1] ^ v19, 30)
              + __ROL8__(0xB492B66FBE98F273LL * dest.m128i_i64[0] - dest.m128i_i64[1], 21)
              - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)&v33 + v11)));
        v14 = v21 ^ v20;
        v15 = v21 >> 47;
        return 0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v14 ^ v15)) ^ ((0x9DDFEA08EB382D69LL * (v14 ^ v15)) >> 47));
      }
      if ( v11 > 0x20 )
      {
        return sub_A1F620(&dest, v11, si128.m128i_i64[1]);
      }
      else
      {
        result = si128.m128i_i64[1] ^ 0x9AE16A3B2F90404FLL;
        if ( v11 )
        {
          v27 = (0xC949D7C7509E6557LL * ((unsigned int)v11 + 4 * *((unsigned __int8 *)&v34 + v11 + 7)))
              ^ (0x9AE16A3B2F90404FLL * (dest.m128i_u8[0] + (dest.m128i_u8[v11 >> 1] << 8)))
              ^ si128.m128i_i64[1];
          return 0x9AE16A3B2F90404FLL * (v27 ^ (v27 >> 47));
        }
      }
    }
  }
  else
  {
    v17 = *(unsigned int *)((char *)&v34 + v11 + 4) ^ si128.m128i_i64[1];
    v18 = 0x9DDFEA08EB382D69LL * (v17 ^ (v11 + 8LL * dest.m128i_u32[0]));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v18 ^ v17 ^ (v18 >> 47)))
          ^ ((0x9DDFEA08EB382D69LL * (v18 ^ v17 ^ (v18 >> 47))) >> 47));
  }
  return result;
}
