__int64 __fastcall sub_9FF690(unsigned int *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  unsigned __int64 *v3; // r9
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 *v6; // r13
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r12
  __m128i *v13; // rax
  __m128i *v14; // rax
  __m128i *v15; // r12
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // r8
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r11
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // r11
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // [rsp+18h] [rbp-E0h]
  __int64 v35; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v36; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v40; // [rsp+50h] [rbp-A8h]
  __int128 v41; // [rsp+60h] [rbp-98h]
  __int128 v42; // [rsp+70h] [rbp-88h]
  __int128 v43; // [rsp+80h] [rbp-78h] BYREF
  __int128 v44; // [rsp+90h] [rbp-68h]
  __int128 v45; // [rsp+A0h] [rbp-58h]
  __m128i si128; // [rsp+B0h] [rbp-48h]

  v1 = 0x9DDFEA08EB382D69LL * (8LL * *a1 - 0xAE502812AA7333LL);
  v36 = 0x9DDFEA08EB382D69LL
      * (((0x9DDFEA08EB382D69LL * (v1 ^ (v1 >> 47))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v1 ^ (v1 >> 47))));
  dest.m128i_i64[0] = a1[4];
  v2 = sub_9E70E0(&v36, &dest);
  v3 = *((unsigned __int64 **)a1 + 1);
  v4 = a1[4];
  v36 = v2;
  v5 = v2;
  v6 = &v3[v4];
  if ( v6 != v3 )
  {
    v7 = v3;
    while ( 1 )
    {
      v12 = *v7;
      dest = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D10);
      v37 = 0;
      v13 = sub_9FF5A0(&dest, &v37, &dest, (unsigned __int64)&v43, v5);
      v38 = v37;
      v14 = sub_9E8760(&dest, &v38, v13, (unsigned __int64)&v43, v12 >> 33);
      v15 = v14;
      if ( v38 )
        break;
      v16 = (char *)v14 - (char *)&dest;
      if ( (unsigned __int64)((char *)v14 - (char *)&dest - 4) <= 4 )
      {
        v8 = *(unsigned int *)((char *)&v38 + v16 + 4) ^ si128.m128i_i64[1];
        v9 = 0x9DDFEA08EB382D69LL * (v8 ^ (v16 + 8LL * dest.m128i_u32[0]));
        v10 = v9;
LABEL_4:
        v11 = v9 ^ v8 ^ (v10 >> 47);
        goto LABEL_5;
      }
      if ( v16 - 9 > 7 )
      {
        if ( v16 - 17 > 0xF )
        {
          if ( v16 <= 0x20 )
          {
            v5 = si128.m128i_i64[1] ^ 0x9AE16A3B2F90404FLL;
            if ( v16 )
            {
              v33 = (0xC949D7C7509E6557LL * ((unsigned int)v16 + 4 * *((unsigned __int8 *)&v38 + v16 + 7)))
                  ^ (0x9AE16A3B2F90404FLL * (dest.m128i_u8[0] + (dest.m128i_u8[v16 >> 1] << 8)))
                  ^ si128.m128i_i64[1];
              v5 = 0x9AE16A3B2F90404FLL * (v33 ^ (v33 >> 47));
            }
          }
          else
          {
            v24 = *(__int64 *)((char *)&v37 + v16);
            v25 = dest.m128i_i64[0] - 0x3C5A37A36834CED9LL * (v16 + v24);
            v26 = v25 + dest.m128i_i64[1] + v40;
            v27 = *(__int64 *)((char *)&v35 + v16) + v40;
            v28 = __ROR8__(v26, 31)
                + __ROL8__(*((_QWORD *)&v40 + 1) + v25, 12)
                + __ROR8__(v25 + dest.m128i_i64[1], 7)
                + __ROL8__(v25, 27);
            v29 = *(__int64 *)((char *)&v38 + v16);
            v30 = v27 + *(unsigned __int64 *)((char *)&v36 + v16) + v24;
            v31 = __ROR8__(v30, 31)
                + __ROR8__(v27 + *(unsigned __int64 *)((char *)&v36 + v16), 7)
                + *((_QWORD *)&v40 + 1)
                + __ROL8__(v27, 27)
                + __ROL8__(v27 + v29, 12);
            v32 = ((0xC3A5C85C97CB3127LL
                  * (((0x9AE16A3B2F90404FLL * (v31 + v26) - 0x3C5A37A36834CED9LL * (v28 + v29 + v30)) >> 47)
                   ^ (0x9AE16A3B2F90404FLL * (v31 + v26) - 0x3C5A37A36834CED9LL * (v28 + v29 + v30))))
                 ^ si128.m128i_i64[1])
                + v28;
            v5 = 0x9AE16A3B2F90404FLL * (v32 ^ (v32 >> 47));
          }
          goto LABEL_6;
        }
        v20 = 0x9AE16A3B2F90404FLL * *(__int64 *)((char *)&v38 + v16);
        v21 = __ROR8__(dest.m128i_i64[1] ^ 0xC949D7C7509E6557LL, 20);
        v22 = __ROL8__(0xB492B66FBE98F273LL * dest.m128i_i64[0] - dest.m128i_i64[1], 21)
            - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)&v37 + v16);
        v23 = __ROR8__(v20 ^ si128.m128i_i64[1], 30);
        v11 = (0x9DDFEA08EB382D69LL
             * ((v16 + si128.m128i_i64[1] - 0x4B6D499041670D8DLL * dest.m128i_i64[0] + v21 - v20) ^ (v22 + v23)))
            ^ (v16 + si128.m128i_i64[1] - 0x4B6D499041670D8DLL * dest.m128i_i64[0] + v21 - v20)
            ^ ((0x9DDFEA08EB382D69LL
              * ((v16 + si128.m128i_i64[1] - 0x4B6D499041670D8DLL * dest.m128i_i64[0] + v21 - v20) ^ (v22 + v23))) >> 47);
LABEL_5:
        v5 = 0x9DDFEA08EB382D69LL * (((0x9DDFEA08EB382D69LL * v11) >> 47) ^ (0x9DDFEA08EB382D69LL * v11));
LABEL_6:
        ++v7;
        v36 = v5;
        if ( v6 == v7 )
          return (unsigned int)v5;
      }
      else
      {
        v17 = *(__int64 *)((char *)&v38 + v16);
        ++v7;
        v18 = __ROR8__(v16 + v17, v16);
        v5 = v17
           ^ (0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL * (v18 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1]))
               ^ v18
               ^ ((0x9DDFEA08EB382D69LL * (v18 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1])) >> 47)))
             ^ ((0x9DDFEA08EB382D69LL
               * ((0x9DDFEA08EB382D69LL * (v18 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1]))
                ^ v18
                ^ ((0x9DDFEA08EB382D69LL * (v18 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1])) >> 47))) >> 47)));
        v36 = v5;
        if ( v6 == v7 )
          return (unsigned int)v5;
      }
    }
    v34 = v38;
    sub_9FB080(dest.m128i_i8, v14->m128i_i8, (char *)&v43);
    sub_9931E0((unsigned __int64 *)&v43, &dest);
    v9 = v43
       - 0x622015F714C7D297LL
       * (((0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v45))
           ^ si128.m128i_i64[0]
           ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v45)) >> 47))) >> 47)
        ^ (0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v45))
          ^ si128.m128i_i64[0]
          ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v45)) >> 47))))
       - 0x4B6D499041670D8DLL
       * (((unsigned __int64)(v34 + (char *)v15 - (char *)&dest) >> 47) ^ (v34 + (char *)v15 - (char *)&dest));
    v8 = 0x9DDFEA08EB382D69LL
       * (v9
        ^ (v44
         - 0x4B6D499041670D8DLL * (*((_QWORD *)&v43 + 1) ^ (*((_QWORD *)&v43 + 1) >> 47))
         - 0x622015F714C7D297LL
         * (((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v45 + 1) ^ *((_QWORD *)&v44 + 1)))
             ^ *((_QWORD *)&v45 + 1)
             ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v45 + 1) ^ *((_QWORD *)&v44 + 1))) >> 47))) >> 47)
          ^ (0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v45 + 1) ^ *((_QWORD *)&v44 + 1)))
            ^ *((_QWORD *)&v45 + 1)
            ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v45 + 1) ^ *((_QWORD *)&v44 + 1))) >> 47))))));
    v10 = v8;
    goto LABEL_4;
  }
  return (unsigned int)v5;
}

