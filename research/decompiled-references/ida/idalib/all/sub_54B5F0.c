__int64 __fastcall sub_54B5F0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int32 a5)
{
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 *v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // r12
  int v15; // r14d
  __int64 v16; // rax
  const char *v17; // rsi
  const char *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 *v22; // rax
  unsigned __int64 v23; // rbp
  __int64 v24; // r13
  __int64 v25; // r12
  int v26; // r14d
  __int64 v27; // rax
  const char *v28; // rsi
  const char *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  size_t v32; // rbx
  void *v33; // rbp
  __m128i v34; // xmm0
  void *v35; // rdi
  __int64 v36; // rdi
  __m128i v38; // [rsp+10h] [rbp-58h] BYREF
  __int64 v39[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a1;
  v38.m128i_i32[0] = a5;
  v8 = *(__int64 **)(v7 + 1824);
  v39[1] = __readfsqword(0x28u);
  v9 = sub_54A320(v8, a2, v39);
  if ( !v9 )
    return 0;
  v10 = v9;
  if ( (~*(_BYTE *)(v9 + 68) & 0x70) != 0 && !sub_53CE30(v9, *a1, a2, 1) )
    return 0;
  v11 = *(__int64 **)(v10 + 40);
  if ( !v11 || (v12 = v11[1]) == 0 )
  {
LABEL_15:
    if ( !v38.m128i_i8[0] )
      return 0;
    goto LABEL_16;
  }
  v13 = *v11;
  v14 = *(_QWORD *)(a3 + 8);
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v19 = v13 + 48 * v16;
    v20 = *(_QWORD *)(v19 + 8);
    if ( v14 )
    {
      v17 = *(const char **)a3;
      v18 = haystack;
      if ( !v20 )
        goto LABEL_7;
    }
    else
    {
      if ( !v20 )
      {
        v31 = v38.m128i_i8[0] & (v19 == 0);
        goto LABEL_28;
      }
      v17 = haystack;
    }
    v18 = *(const char **)v19;
LABEL_7:
    if ( !strcmp(v18, v17) )
      break;
    v16 = ++v15;
    if ( v15 >= v12 )
      goto LABEL_15;
  }
  LOBYTE(v31) = v38.m128i_i8[0] & (v19 == 0);
LABEL_28:
  if ( (_BYTE)v31 )
  {
LABEL_16:
    if ( !v39[0] )
      return 0;
    v22 = *(__int64 **)(v39[0] + 40);
    if ( !v22 )
      return 0;
    v23 = v22[1];
    if ( !v23 )
      return 0;
    v24 = *v22;
    v25 = *(_QWORD *)(a3 + 8);
    v26 = 0;
    v27 = 0;
    while ( 1 )
    {
      v19 = v24 + 48 * v27;
      v30 = *(_QWORD *)(v19 + 8);
      if ( !v25 )
        break;
      v28 = *(const char **)a3;
      v29 = haystack;
      if ( v30 )
        goto LABEL_26;
LABEL_21:
      if ( !strcmp(v29, v28) )
        goto LABEL_29;
      v27 = ++v26;
      if ( v26 >= v23 )
        return 0;
    }
    if ( !v30 )
      goto LABEL_29;
    v28 = haystack;
LABEL_26:
    v29 = *(const char **)v19;
    goto LABEL_21;
  }
LABEL_29:
  if ( !v19 )
    return 0;
  if ( a4 )
  {
    v32 = *(_QWORD *)(v19 + 32);
    v33 = nullptr;
    v34 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
    if ( v32 )
    {
      v36 = *(_QWORD *)(v19 + 32);
      v38 = v34;
      v33 = (void *)qalloc_or_throw(v36);
      memcpy(v33, *(const void **)(v19 + 24), v32);
      v34 = _mm_load_si128(&v38);
    }
    v35 = *(void **)a4;
    if ( *(_QWORD *)a4 )
    {
      *(_QWORD *)(a4 + 8) = 0;
      v38 = v34;
      qfree(v35);
      v34 = _mm_load_si128(&v38);
    }
    *(_QWORD *)a4 = v33;
    *(__m128i *)(a4 + 8) = v34;
  }
  return 1;
}
