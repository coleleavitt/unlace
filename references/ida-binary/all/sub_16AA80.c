__int64 __fastcall sub_16AA80(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v11; // rdi
  bool v12; // zf
  __int64 v14; // rax
  const char *v15; // rdi
  __int64 v16; // rax
  double v17; // xmm4_8
  double v18; // xmm5_8
  int v19; // ecx
  __int64 v20; // rsi
  const char *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  size_t v25; // rax
  size_t v26; // rbp
  __int64 v28; // rbp
  __int64 v29; // r13
  __int64 v30; // r14
  __m128i si128; // xmm0
  __int64 v32; // rax
  size_t v33; // r13
  void *v34; // rax
  __int64 v35; // rbp
  __int64 v36; // r14
  unsigned __int64 v37; // r13
  __m128i v38; // xmm0
  __int64 v39; // rbp
  __int64 v40[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+10h] [rbp-68h] BYREF
  __int128 v42; // [rsp+18h] [rbp-60h]
  __m128i v43; // [rsp+30h] [rbp-48h] BYREF
  Elf64_Sym *v44; // [rsp+40h] [rbp-38h]
  unsigned __int64 v45; // [rsp+48h] [rbp-30h]

  v11 = &s1;
  v12 = *(_QWORD *)(a1 + 16) == 0;
  v45 = __readfsqword(0x28u);
  if ( !v12 )
    v11 = *(const char **)(a1 + 8);
  v14 = strtol(v11, nullptr, 16);
  v12 = *(_QWORD *)(a1 + 48) == 0;
  v15 = &s1;
  v40[0] = v14;
  if ( !v12 )
    v15 = *(const char **)(a1 + 40);
  v16 = strtol(v15, nullptr, 16);
  v19 = *(_DWORD *)(a1 + 72);
  v20 = *(unsigned int *)(a1 + 104);
  v40[1] = v16;
  v41 = 0;
  v42 = 0;
  if ( !v19 )
  {
    v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)idc_export_data, (__m128i)(unsigned __int64)&v41);
    sub_169B10(
      (__int64)&v43,
      v20,
      v40,
      *(double *)v43.m128i_i64,
      a4,
      (__m128)(unsigned __int64)&v41,
      a6,
      v17,
      v18,
      a9,
      a10);
    if ( !byte_8C80C8 )
      goto LABEL_8;
LABEL_17:
    v28 = v42;
    if ( (_QWORD)v42 )
    {
      v30 = v42 + 92;
      v29 = v42 + 93;
      v20 = v41;
      v28 = v42 - 1;
      if ( *((_QWORD *)&v42 + 1) >= (unsigned __int64)(v42 + 93) )
        goto LABEL_19;
    }
    else
    {
      v20 = v41;
      v29 = 94;
      v30 = 93;
      if ( *((_QWORD *)&v42 + 1) >= 0x5Eu )
      {
LABEL_19:
        *(_QWORD *)&v42 = v29;
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DC170);
        *(_BYTE *)(v20 + v30) = 0;
        v32 = v28 + v41;
        *(__m128i *)v32 = si128;
        *(__m128i *)(v32 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC180);
        *(__m128i *)(v32 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DC190);
        *(__m128i *)(v32 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DC1A0);
        *(__m128i *)(v32 + 64) = _mm_load_si128((const __m128i *)&xmmword_5DC1B0);
        *(__m128i *)(v32 + 77) = _mm_load_si128((const __m128i *)&xmmword_5DC1C0);
        goto LABEL_8;
      }
    }
    v41 = qvector_reserve(&v41, v20, v29, 1);
    v20 = v41;
    goto LABEL_19;
  }
  v44 = &stru_10000;
  v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)exp_string_sink_t___vtable, (__m128i)(unsigned __int64)&v41);
  if ( !(unsigned __int8)sub_169B10(
                           (__int64)&v43,
                           v20,
                           v40,
                           *(double *)v43.m128i_i64,
                           (__m128)(unsigned __int64)&v41,
                           a5,
                           a6,
                           v17,
                           v18,
                           a9,
                           a10) )
  {
    v35 = v42;
    if ( (_QWORD)v42 )
    {
      v36 = v42 + 24;
      v37 = v42 + 25;
      v35 = v42 - 1;
    }
    else
    {
      v37 = 26;
      v36 = 25;
    }
    v20 = v41;
    if ( *((_QWORD *)&v42 + 1) < v37 )
    {
      v41 = qvector_reserve(&v41, v41, v37, 1);
      v20 = v41;
    }
    v38 = _mm_load_si128((const __m128i *)&xmmword_5DC150);
    *(_QWORD *)&v42 = v37;
    *(_BYTE *)(v20 + v36) = 0;
    v39 = v41 + v35;
    *(__m128i *)v39 = v38;
    *(__m128i *)(v39 + 9) = _mm_load_si128((const __m128i *)&xmmword_5DC160);
  }
  if ( byte_8C80C8 )
    goto LABEL_17;
LABEL_8:
  v21 = &s1;
  if ( (_QWORD)v42 )
    v21 = (const char *)v41;
  free_idcv(a2);
  if ( v21 )
  {
    v25 = strlen(v21);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v26 = v25;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v25 )
    {
      v33 = v25 + 1;
      v34 = (void *)qvector_reserve(a2 + 8, 0, v25 + 1, 1);
      *(_QWORD *)(a2 + 8) = v34;
      v20 = (__int64)v21;
      *(_QWORD *)(a2 + 16) = v33;
      memmove(v34, v21, v26);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v26) = 0;
    }
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41, v20, v22, v23, v24);
  }
  return 0;
}
