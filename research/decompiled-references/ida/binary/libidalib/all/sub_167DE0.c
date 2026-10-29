__int64 __fastcall sub_167DE0(__int64 a1, __int64 a2)
{
  const char *v3; // rdi
  bool v4; // zf
  __int64 v6; // rax
  const char *v7; // rdi
  __int64 v8; // rax
  int v9; // ecx
  int v10; // esi
  const char *v11; // r12
  size_t v12; // rax
  size_t v13; // rbp
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // r14
  __m128i si128; // xmm0
  __int64 v20; // rax
  size_t v21; // r13
  void *v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r14
  unsigned __int64 v25; // r13
  __int64 v26; // rsi
  __m128i v27; // xmm0
  __int64 v28; // rbp
  _QWORD v29[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v30; // [rsp+10h] [rbp-68h] BYREF
  __int128 v31; // [rsp+18h] [rbp-60h]
  __m128i v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+40h] [rbp-38h]
  unsigned __int64 v34; // [rsp+48h] [rbp-30h]

  v3 = s1;
  v4 = *(_QWORD *)(a1 + 16) == 0;
  v34 = __readfsqword(0x28u);
  if ( !v4 )
    v3 = *(const char **)(a1 + 8);
  v6 = strtol(v3, nullptr, 16);
  v4 = *(_QWORD *)(a1 + 48) == 0;
  v7 = s1;
  v29[0] = v6;
  if ( !v4 )
    v7 = *(const char **)(a1 + 40);
  v8 = strtol(v7, nullptr, 16);
  v9 = *(_DWORD *)(a1 + 72);
  v10 = *(_DWORD *)(a1 + 104);
  v29[1] = v8;
  v30 = 0;
  v31 = 0;
  if ( !v9 )
  {
    v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2355B0, (__m128i)(unsigned __int64)&v30);
    sub_166A90((__int64)&v32, v10, (__int64)v29);
    if ( !byte_2544FC )
      goto LABEL_8;
LABEL_17:
    v15 = v31;
    if ( (_QWORD)v31 )
    {
      v18 = v31 + 92;
      v17 = v31 + 93;
      v16 = v30;
      v15 = v31 - 1;
      if ( *((_QWORD *)&v31 + 1) >= (unsigned __int64)(v31 + 93) )
        goto LABEL_19;
    }
    else
    {
      v16 = v30;
      v17 = 94;
      v18 = 93;
      if ( *((_QWORD *)&v31 + 1) >= 0x5Eu )
      {
LABEL_19:
        *(_QWORD *)&v31 = v17;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1D3A30);
        *(_BYTE *)(v16 + v18) = 0;
        v20 = v15 + v30;
        *(__m128i *)v20 = si128;
        *(__m128i *)(v20 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D3A40);
        *(__m128i *)(v20 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D3A50);
        *(__m128i *)(v20 + 48) = _mm_load_si128((const __m128i *)&xmmword_1D3A60);
        *(__m128i *)(v20 + 64) = _mm_load_si128((const __m128i *)&xmmword_1D3A70);
        *(__m128i *)(v20 + 77) = _mm_load_si128((const __m128i *)&xmmword_1D3A80);
        goto LABEL_8;
      }
    }
    v30 = qvector_reserve();
    v16 = v30;
    goto LABEL_19;
  }
  v33 = 0x10000;
  v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_235588, (__m128i)(unsigned __int64)&v30);
  if ( !(unsigned __int8)sub_166A90((__int64)&v32, v10, (__int64)v29) )
  {
    v23 = v31;
    if ( (_QWORD)v31 )
    {
      v24 = v31 + 24;
      v25 = v31 + 25;
      v23 = v31 - 1;
    }
    else
    {
      v25 = 26;
      v24 = 25;
    }
    v26 = v30;
    if ( *((_QWORD *)&v31 + 1) < v25 )
    {
      v30 = qvector_reserve();
      v26 = v30;
    }
    v27 = _mm_load_si128((const __m128i *)&xmmword_1D3A10);
    *(_QWORD *)&v31 = v25;
    *(_BYTE *)(v26 + v24) = 0;
    v28 = v30 + v23;
    *(__m128i *)v28 = v27;
    *(__m128i *)(v28 + 9) = _mm_load_si128((const __m128i *)&xmmword_1D3A20);
  }
  if ( byte_2544FC )
    goto LABEL_17;
LABEL_8:
  v11 = s1;
  if ( (_QWORD)v31 )
    v11 = (const char *)v30;
  free_idcv();
  if ( v11 )
  {
    v12 = strlen(v11);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v13 = v12;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v12 )
    {
      v21 = v12 + 1;
      v22 = (void *)qvector_reserve();
      *(_QWORD *)(a2 + 8) = v22;
      *(_QWORD *)(a2 + 16) = v21;
      memmove(v22, v11, v13);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v13) = 0;
    }
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  return 0;
}

