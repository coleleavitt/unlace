__m128i *__fastcall sub_1B038B0(__m128i *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __m128i si128; // xmm0
  int v15; // r11d
  __int64 *v16; // r13
  int v17; // edx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __m128i v20; // xmm1
  unsigned int v21; // r10d
  unsigned int v22; // edx
  int v23; // edx
  int v24; // esi
  __int64 *v25; // r11
  int v26; // r12d
  _QWORD *v27; // [rsp+8h] [rbp-40h]
  _QWORD *v28; // [rsp+8h] [rbp-40h]
  __m128 v29[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = (__int64 *)a3;
  v9 = *(_DWORD *)(a2 + 16);
  if ( !v9 )
  {
    v29[0].m128_u64[0] = 0;
LABEL_12:
    v27 = a4;
    sub_1B036A0(a2, 2 * v9, a3, (__int64)a4, a5, a6);
    v9 = *(_DWORD *)(a2 + 16);
    a5 = *(_QWORD *)a2;
    a4 = v27;
    if ( v9 )
    {
      a6 = *v6;
      v21 = v9 - 1;
      v22 = (v9 - 1) & (((unsigned int)*v6 >> 9) ^ ((unsigned int)*v6 >> 4));
      v11 = (__int64 *)(a5 + 16LL * v22);
      v18 = *v11;
      if ( *v6 != *v11 && v18 != -4096 )
      {
        v25 = (__int64 *)(a5 + 16LL * (v21 & (((unsigned int)*v6 >> 9) ^ ((unsigned int)*v6 >> 4))));
        v26 = 1;
        v11 = nullptr;
        while ( 1 )
        {
          if ( !v11 && v18 == -8192 )
            v11 = v25;
          v22 = v21 & (v26 + v22);
          v25 = (__int64 *)(a5 + 16LL * v22);
          v18 = *v25;
          if ( a6 == *v25 )
            goto LABEL_32;
          if ( v18 == -4096 )
            break;
          ++v26;
        }
        if ( !v11 )
        {
LABEL_32:
          v11 = (__int64 *)(a5 + 16LL * v22);
          goto LABEL_14;
        }
        v18 = *v11;
      }
LABEL_14:
      v23 = *(_DWORD *)(a2 + 8);
      v29[0].m128_u64[0] = (unsigned __int64)v11;
      LODWORD(a3) = v23 + 1;
    }
    else
    {
      v24 = *(_DWORD *)(a2 + 8);
      a6 = *v6;
      v29[0].m128_u64[0] = 0;
      v18 = 0x10102464C457FLL;
      LODWORD(a3) = v24 + 1;
      v11 = nullptr;
    }
    goto LABEL_8;
  }
  a6 = *(_QWORD *)a3;
  a5 = *(_QWORD *)a2;
  v10 = (v9 - 1) & (((unsigned int)*(_QWORD *)a3 >> 9) ^ ((unsigned int)*(_QWORD *)a3 >> 4));
  v11 = (__int64 *)(*(_QWORD *)a2 + 16LL * v10);
  v12 = *v11;
  if ( a6 == *v11 )
  {
LABEL_3:
    sub_1AFD000(v29, v11, (_QWORD *)(a5 + 16LL * v9), a2, 1);
    si128 = _mm_load_si128((const __m128i *)v29);
    a1[1].m128i_i8[0] = 0;
    *a1 = si128;
    return a1;
  }
  v15 = 1;
  v16 = nullptr;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( !v16 && v12 == -8192 )
        v16 = v11;
      v10 = (v9 - 1) & (v15 + v10);
      v11 = (__int64 *)(a5 + 16LL * v10);
      v12 = *v11;
      if ( a6 == *v11 )
        goto LABEL_3;
      if ( v12 == -4096 )
      {
        if ( v16 )
          v11 = v16;
        break;
      }
      ++v15;
    }
  }
  v17 = *(_DWORD *)(a2 + 8);
  v29[0].m128_u64[0] = (unsigned __int64)v11;
  a3 = (unsigned int)(v17 + 1);
  if ( 4 * (int)a3 >= 3 * v9 )
    goto LABEL_12;
  if ( v9 - *(_DWORD *)(a2 + 12) - (unsigned int)a3 <= v9 >> 3 )
  {
    v28 = a4;
    sub_1B036A0(a2, v9, a3, (__int64)a4, a5, a6);
    sub_1AF7860((__int64 *)a2, v6, v29);
    v11 = (__int64 *)v29[0].m128_u64[0];
    a6 = *v6;
    a5 = *(_QWORD *)a2;
    LODWORD(a3) = *(_DWORD *)(a2 + 8) + 1;
    v9 = *(_DWORD *)(a2 + 16);
    v18 = *(_QWORD *)v29[0].m128_u64[0];
    a4 = v28;
  }
  else
  {
    v18 = *v11;
  }
LABEL_8:
  *(_DWORD *)(a2 + 8) = a3;
  if ( v18 != -4096 )
    --*(_DWORD *)(a2 + 12);
  v19 = *a4;
  *v11 = a6;
  v11[1] = v19;
  sub_1AFD000(v29, v11, (_QWORD *)(a5 + 16LL * v9), a2, 1);
  v20 = _mm_load_si128((const __m128i *)v29);
  a1[1].m128i_i8[0] = 1;
  *a1 = v20;
  return a1;
}
