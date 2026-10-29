unsigned __int64 __fastcall sub_9FDE00(int a1, __int8 *a2, int *a3)
{
  __m128i *v3; // rax
  __int8 v4; // dl
  __int64 v5; // r15
  _DWORD *v6; // r12
  char *v7; // r13
  __m128i *v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  signed __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  __m128i v29; // [rsp+8h] [rbp-108h] BYREF
  __m128i v30; // [rsp+18h] [rbp-F8h] BYREF
  __m128i v31; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+38h] [rbp-D8h]
  __int64 v33; // [rsp+48h] [rbp-C8h] BYREF
  __int64 src; // [rsp+50h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+58h] [rbp-B8h] BYREF
  __m128i v36; // [rsp+98h] [rbp-78h] BYREF
  __m128i v37; // [rsp+A8h] [rbp-68h]
  __m128i v38; // [rsp+B8h] [rbp-58h]
  __m128i si128; // [rsp+C8h] [rbp-48h]

  memset(&dest, 0, 64);
  v36 = 0;
  v37 = 0;
  v38 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D10);
  v33 = 0;
  v3 = sub_9E8760(&dest, &v33, &dest, (unsigned __int64)&v36, a1);
  v4 = *a2;
  v5 = v33;
  v6 = (__int32 *)((char *)v3->m128i_i32 + 1);
  LOBYTE(src) = *a2;
  if ( &v3->m128i_i8[1] <= (__int8 *)&v36 )
  {
    v3->m128i_i8[0] = v4;
  }
  else
  {
    v7 = (char *)((char *)&v36 - (char *)v3);
    memcpy(v3, &src, (char *)&v36 - (char *)v3);
    if ( v5 )
    {
      v5 += 64;
      sub_9931E0((unsigned __int64 *)&v36, &dest);
    }
    else
    {
      v5 = 64;
      sub_9E5E40((unsigned __int64 *)&v29, &dest, si128.m128i_u64[1]);
      v22 = _mm_loadu_si128(&v30);
      v23 = _mm_loadu_si128(&v31);
      v36 = _mm_loadu_si128(&v29);
      v37 = v22;
      v38 = v23;
      si128.m128i_i64[0] = v32;
    }
    v6 = (__int32 *)((char *)dest.m128i_i32 + 1LL - (_QWORD)v7);
    memcpy(&dest, (char *)&src + (_QWORD)v7, 1LL - (_QWORD)v7);
  }
  src = v5;
  v8 = sub_9E8760(&dest, &src, v6, (unsigned __int64)&v36, *a3);
  v9 = src;
  if ( src )
  {
    v19 = (char *)v8 - (char *)&dest;
    sub_9FB080(dest.m128i_i8, v8->m128i_i8, v36.m128i_i8);
    sub_9931E0((unsigned __int64 *)&v36, &dest);
    v20 = v36.m128i_i64[0]
        - 0x622015F714C7D297LL
        * (((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v38.m128i_i64[0]))
            ^ si128.m128i_i64[0]
            ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v38.m128i_i64[0])) >> 47))) >> 47)
         ^ (0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v38.m128i_i64[0]))
           ^ si128.m128i_i64[0]
           ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v38.m128i_i64[0])) >> 47))))
        - 0x4B6D499041670D8DLL * (((unsigned __int64)(v9 + v19) >> 47) ^ (v9 + v19));
    v21 = 0x9DDFEA08EB382D69LL
        * (v20
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
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v20 ^ v21 ^ (v21 >> 47)))
          ^ ((0x9DDFEA08EB382D69LL * (v20 ^ v21 ^ (v21 >> 47))) >> 47));
  }
  else
  {
    v10 = (char *)v8 - (char *)&dest;
    if ( (unsigned __int64)((char *)v8 - (char *)&dest - 4) > 4 )
    {
      if ( v10 - 9 <= 7 )
      {
        v24 = *(__int64 *)((char *)&src + v10);
        v25 = __ROR8__(v10 + v24, v10);
        v26 = 0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v25 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1]))
             ^ v25
             ^ ((0x9DDFEA08EB382D69LL * (v25 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1])) >> 47));
        return v24 ^ (0x9DDFEA08EB382D69LL * (v26 ^ (v26 >> 47)));
      }
      else if ( v10 - 17 > 0xF )
      {
        if ( v10 > 0x20 )
        {
          return sub_9FB8E0(&dest, v10, si128.m128i_i64[1]);
        }
        else
        {
          result = si128.m128i_i64[1] ^ 0x9AE16A3B2F90404FLL;
          if ( v10 )
          {
            v27 = (0xC949D7C7509E6557LL * ((unsigned int)v10 + 4 * *((unsigned __int8 *)&src + v10 + 7)))
                ^ (0x9AE16A3B2F90404FLL * (dest.m128i_u8[0] + (dest.m128i_u8[v10 >> 1] << 8)))
                ^ si128.m128i_i64[1];
            return 0x9AE16A3B2F90404FLL * (v27 ^ (v27 >> 47));
          }
        }
      }
      else
      {
        v14 = 0x9AE16A3B2F90404FLL * *(__int64 *)((char *)&src + v10);
        v15 = __ROL8__(0xB492B66FBE98F273LL * dest.m128i_i64[0] - dest.m128i_i64[1], 21)
            - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)&v33 + v10);
        v16 = v10
            + si128.m128i_i64[1]
            - 0x4B6D499041670D8DLL * dest.m128i_i64[0]
            + __ROR8__(dest.m128i_i64[1] ^ 0xC949D7C7509E6557LL, 20)
            - v14;
        v17 = __ROR8__(si128.m128i_i64[1] ^ v14, 30);
        v18 = 0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (v16 ^ (v15 + v17))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v16 ^ (v15 + v17))) ^ v16);
        return 0x9DDFEA08EB382D69LL * (v18 ^ (v18 >> 47));
      }
    }
    else
    {
      v11 = si128.m128i_i64[1] ^ *(unsigned int *)((char *)&src + v10 + 4);
      v12 = 0x9DDFEA08EB382D69LL * (v11 ^ (v10 + 8LL * dest.m128i_u32[0]));
      return 0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * ((v12 >> 47) ^ v12 ^ v11))
            ^ ((0x9DDFEA08EB382D69LL * ((v12 >> 47) ^ v12 ^ v11)) >> 47));
    }
  }
  return result;
}

