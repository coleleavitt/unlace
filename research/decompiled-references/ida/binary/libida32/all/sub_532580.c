__int64 __fastcall sub_532580(__int64 *a1, const char *a2, __int64 a3, __int64 a4, __int32 a5)
{
  char v6; // r12
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 *v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // r12
  int v16; // r14d
  __int64 v17; // rax
  const char *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 *v22; // rax
  unsigned __int64 v23; // rbp
  __int64 v24; // r13
  __int64 v25; // r12
  int v26; // r14d
  __int64 v27; // rax
  const char *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // rbx
  void *v32; // rbp
  __m128i v33; // xmm0
  void *v34; // rdi
  __int64 v35; // rdi
  __m128i v37; // [rsp+10h] [rbp-58h] BYREF
  __int64 v38[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = (char)a2;
  v8 = *a1;
  v37.m128i_i32[0] = a5;
  v9 = *(__int64 **)(v8 + 1632);
  v38[1] = __readfsqword(0x28u);
  v10 = sub_5312B0(v9, (unsigned __int64)a2, v38);
  if ( !v10 )
    return 0;
  v11 = v10;
  if ( (~*(_BYTE *)(v10 + 68) & 0x70) != 0 )
  {
    a2 = (const char *)*a1;
    if ( !sub_524160(v10, *a1, v6, 1) )
      return 0;
  }
  v12 = *(__int64 **)(v11 + 40);
  if ( !v12 || (v13 = v12[1]) == 0 )
  {
LABEL_15:
    if ( !v37.m128i_i8[0] )
      return 0;
    goto LABEL_16;
  }
  v14 = *v12;
  v15 = *(_QWORD *)(a3 + 8);
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    v19 = v14 + 48 * v17;
    v20 = *(_QWORD *)(v19 + 8);
    if ( v15 )
    {
      a2 = *(const char **)a3;
      v18 = haystack;
      if ( !v20 )
        goto LABEL_7;
    }
    else
    {
      if ( !v20 )
      {
        v30 = v37.m128i_i8[0] & (v19 == 0);
        goto LABEL_28;
      }
      a2 = haystack;
    }
    v18 = *(const char **)v19;
LABEL_7:
    if ( !strcmp(v18, a2) )
      break;
    v17 = ++v16;
    if ( v16 >= v13 )
      goto LABEL_15;
  }
  LOBYTE(v30) = v37.m128i_i8[0] & (v19 == 0);
LABEL_28:
  if ( (_BYTE)v30 )
  {
LABEL_16:
    if ( !v38[0] )
      return 0;
    v22 = *(__int64 **)(v38[0] + 40);
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
      v29 = *(_QWORD *)(v19 + 8);
      if ( !v25 )
        break;
      a2 = *(const char **)a3;
      v28 = haystack;
      if ( v29 )
        goto LABEL_26;
LABEL_21:
      if ( !strcmp(v28, a2) )
        goto LABEL_29;
      v27 = ++v26;
      if ( v26 >= v23 )
        return 0;
    }
    if ( !v29 )
      goto LABEL_29;
    a2 = haystack;
LABEL_26:
    v28 = *(const char **)v19;
    goto LABEL_21;
  }
LABEL_29:
  if ( !v19 )
    return 0;
  if ( a4 )
  {
    v31 = *(_QWORD *)(v19 + 32);
    v32 = nullptr;
    v33 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
    if ( v31 )
    {
      v35 = *(_QWORD *)(v19 + 32);
      v37 = v33;
      v32 = (void *)qalloc_or_throw(v35, a2);
      memcpy(v32, *(const void **)(v19 + 24), v31);
      v33 = _mm_load_si128(&v37);
    }
    v34 = *(void **)a4;
    if ( *(_QWORD *)a4 )
    {
      *(_QWORD *)(a4 + 8) = 0;
      v37 = v33;
      qfree(v34);
      v33 = _mm_load_si128(&v37);
    }
    *(_QWORD *)a4 = v32;
    *(__m128i *)(a4 + 8) = v33;
  }
  return 1;
}

