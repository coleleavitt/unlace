void __fastcall aes_decrypt_cbc(__m128i *a1, const __m128i *a2, __int64 a3, __int64 a4, __m128i *a5)
{
  __m128i v6; // xmm1
  _DWORD *v7; // rcx
  int v8; // r8d
  unsigned int v9; // edx
  _DWORD *v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // edi
  __m128i *v14; // r14
  _DWORD *v15; // r9
  __int64 v16; // r12
  unsigned int v17; // ecx
  int v18; // r8d
  unsigned int v19; // edi
  unsigned int v20; // r8d
  int v21; // eax
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  unsigned int v24; // ebx
  unsigned int v25; // eax
  int v26; // edi
  int v27; // esi
  int v28; // ecx
  int v29; // ebx
  __int64 v30; // rax
  unsigned int v32; // [rsp+0h] [rbp-70h]
  const __m128i *v33; // [rsp+8h] [rbp-68h]
  _DWORD *v34; // [rsp+10h] [rbp-60h]
  __int64 v35; // [rsp+18h] [rbp-58h]
  __m128i *v36; // [rsp+20h] [rbp-50h]
  const __m128i *v38; // [rsp+30h] [rbp-40h]

  if ( a3 )
  {
    v33 = a2;
    v38 = (const __m128i *)((char *)a2 + a3);
    do
    {
      v6 = _mm_loadu_si128(v33);
      v7 = *(_DWORD **)(a4 + 8);
      v8 = *(int *)a4 >> 1;
      v9 = *v7 ^ v33->m128i_i32[0];
      v10 = v7 + 4;
      v11 = v7[1] ^ v33->m128i_i32[1];
      v12 = v7[2] ^ v33->m128i_i32[2];
      v13 = v7[3] ^ v33->m128i_i32[3];
      if ( v8 - 1 > 0 )
      {
        v34 = v7 + 4;
        v14 = a5;
        v15 = v7 + 4;
        v36 = a1;
        v35 = 8LL * (unsigned int)(v8 - 2);
        v16 = (__int64)&v7[v35 + 12];
        do
        {
          v32 = dword_2397280[BYTE2(v12)]
              ^ dword_2397680[BYTE1(v13)]
              ^ *v15
              ^ dword_2396E80[HIBYTE(v11)]
              ^ dword_2397A80[(unsigned __int8)v9];
          v17 = dword_2397280[BYTE2(v13)]
              ^ dword_2397680[BYTE1(v9)]
              ^ v15[1]
              ^ dword_2396E80[HIBYTE(v12)]
              ^ dword_2397A80[(unsigned __int8)v11];
          v18 = dword_2397680[BYTE1(v11)] ^ v15[2] ^ dword_2396E80[HIBYTE(v13)] ^ dword_2397A80[(unsigned __int8)v12];
          v19 = dword_2397280[BYTE2(v11)]
              ^ dword_2397680[BYTE1(v12)]
              ^ v15[3]
              ^ dword_2396E80[HIBYTE(v9)]
              ^ dword_2397A80[(unsigned __int8)v13];
          v20 = dword_2397280[BYTE2(v9)] ^ v18;
          v9 = dword_2397280[BYTE2(v20)]
             ^ dword_2397680[BYTE1(v19)]
             ^ v15[4]
             ^ dword_2396E80[HIBYTE(v17)]
             ^ dword_2397A80[(unsigned __int8)v32];
          v21 = dword_2397680[BYTE1(v32)] ^ v15[5] ^ dword_2396E80[HIBYTE(v20)] ^ dword_2397A80[(unsigned __int8)v17];
          v15 += 8;
          v11 = dword_2397280[BYTE2(v19)] ^ v21;
          v12 = dword_2397280[BYTE2(v32)]
              ^ dword_2397680[BYTE1(v17)]
              ^ *(v15 - 2)
              ^ dword_2396E80[HIBYTE(v19)]
              ^ dword_2397A80[(unsigned __int8)v20];
          v13 = dword_2397280[BYTE2(v17)]
              ^ dword_2397680[BYTE1(v20)]
              ^ *(v15 - 1)
              ^ dword_2396E80[HIBYTE(v32)]
              ^ dword_2397A80[(unsigned __int8)v19];
        }
        while ( (_DWORD *)v16 != v15 );
        a5 = v14;
        a1 = v36;
        v10 = &v34[v35 + 8];
      }
      v22 = dword_2397280[BYTE2(v12)]
          ^ dword_2397680[BYTE1(v13)]
          ^ *v10
          ^ dword_2396E80[HIBYTE(v11)]
          ^ dword_2397A80[(unsigned __int8)v9];
      v23 = dword_2397280[BYTE2(v13)]
          ^ dword_2397680[BYTE1(v9)]
          ^ v10[1]
          ^ dword_2396E80[HIBYTE(v12)]
          ^ dword_2397A80[(unsigned __int8)v11];
      v24 = dword_2397280[BYTE2(v9)]
          ^ dword_2397680[BYTE1(v11)]
          ^ v10[2]
          ^ dword_2396E80[HIBYTE(v13)]
          ^ dword_2397A80[(unsigned __int8)v12];
      v25 = dword_2397280[BYTE2(v11)]
          ^ dword_2397680[BYTE1(v12)]
          ^ v10[3]
          ^ dword_2396E80[HIBYTE(v9)]
          ^ dword_2397A80[(unsigned __int8)v13];
      v26 = (byte_2397E80[BYTE2(v24)] << 16)
          ^ (byte_2397E80[BYTE1(v25)] << 8)
          ^ (byte_2397E80[HIBYTE(v23)] << 24)
          ^ v10[4]
          ^ byte_2397E80[(unsigned __int8)v22];
      v27 = (byte_2397E80[BYTE2(v25)] << 16)
          ^ (byte_2397E80[BYTE1(v22)] << 8)
          ^ (byte_2397E80[HIBYTE(v24)] << 24)
          ^ v10[5]
          ^ byte_2397E80[(unsigned __int8)v23];
      v28 = (byte_2397E80[BYTE2(v22)] << 16)
          ^ (byte_2397E80[BYTE1(v23)] << 8)
          ^ (byte_2397E80[HIBYTE(v25)] << 24)
          ^ v10[6]
          ^ byte_2397E80[(unsigned __int8)v24];
      v29 = (byte_2397E80[BYTE2(v23)] << 16)
          ^ (byte_2397E80[BYTE1(v24)] << 8)
          ^ v10[7]
          ^ byte_2397E80[(unsigned __int8)v25]
          ^ (byte_2397E80[HIBYTE(v22)] << 24);
      v30 = 0;
      *a1 = _mm_unpacklo_epi64(
              (__m128i)((unsigned __int8)v26
                      | ((BYTE1(v26)
                        | ((BYTE2(v26)
                          | ((HIBYTE(v26)
                            | (((unsigned __int8)v27
                              | ((BYTE1(v27) | ((BYTE2(v27) | ((unsigned __int64)HIBYTE(v27) << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8)),
              (__m128i)((unsigned __int8)v28
                      | ((BYTE1(v28)
                        | ((BYTE2(v28)
                          | ((HIBYTE(v28)
                            | (((unsigned __int8)v29
                              | ((BYTE1(v29) | ((BYTE2(v29) | ((unsigned __int64)HIBYTE(v29) << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8)));
      do
      {
        a1->m128i_i8[v30] ^= a5->m128i_u8[v30];
        ++v30;
      }
      while ( v30 != 16 );
      ++v33;
      ++a1;
      *a5 = v6;
    }
    while ( v33 != v38 );
  }
}

