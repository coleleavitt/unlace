__int64 __fastcall sub_7DA80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rbp
  __int64 i; // r15
  unsigned __int16 v8; // si
  bool v9; // cf
  unsigned __int64 v10; // rsi
  const char *v11; // rsi
  const char *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // r15
  __m128i v17; // xmm0
  __int64 v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int16 v23; // si
  unsigned __int64 v24; // rax
  __m128i v25; // xmm2
  char *v26; // rdx
  unsigned __int64 v27; // rdi
  __m128i v28; // xmm3
  unsigned __int16 epi16; // bp
  __int64 v30; // r15
  char *v31; // rax
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __int64 v34; // r14
  void *v35; // rdi
  unsigned __int16 v36; // ax
  unsigned __int16 v37; // ax
  void *v38; // rdi
  __m128i v39; // xmm4
  unsigned __int64 v40; // rax
  __int64 result; // rax
  unsigned __int64 v42; // rax
  const char *v43; // rdi
  __int64 v44; // r15
  __int64 v45; // rbp
  __int64 v46; // r14
  __m128i v47; // xmm0
  void *v48; // rdi
  __m128i v49; // [rsp+0h] [rbp-98h] BYREF
  __m128i v50; // [rsp+10h] [rbp-88h] BYREF
  __int64 v51; // [rsp+28h] [rbp-70h]
  unsigned __int64 v52; // [rsp+30h] [rbp-68h]
  char *s2; // [rsp+38h] [rbp-60h]
  __m128i v54; // [rsp+40h] [rbp-58h] BYREF
  char *v55; // [rsp+50h] [rbp-48h]
  unsigned int v56; // [rsp+5Ch] [rbp-3Ch]

  v6 = (a3 - 1) / 2;
  v51 = a3;
  v52 = a4;
  if ( a2 >= v6 )
  {
    v14 = a2;
    v15 = a1 + 40 * a2;
  }
  else
  {
    for ( i = a2; ; i = v14 )
    {
      v20 = 80 * (i + 1);
      v21 = a1 + v20 - 40;
      v22 = a1 + v20;
      v23 = *(_WORD *)(v21 + 32);
      v9 = *(_WORD *)(v22 + 32) < v23;
      if ( *(_WORD *)(v22 + 32) == v23
        && (v8 = *(_WORD *)(v21 + 34), v9 = *(_WORD *)(v22 + 34) < v8, *(_WORD *)(v22 + 34) == v8)
        && (v10 = *(_QWORD *)(v21 + 24), v9 = *(_QWORD *)(v22 + 24) < v10, *(_QWORD *)(v22 + 24) == v10) )
      {
        v11 = haystack;
        if ( *(_QWORD *)(v21 + 8) )
          v11 = *(const char **)v21;
        v12 = haystack;
        if ( *(_QWORD *)(v22 + 8) )
          v12 = *(const char **)v22;
        v13 = (unsigned int)strcmp(v12, v11) >> 31;
      }
      else
      {
        LOBYTE(v13) = v9;
      }
      v14 = 2 * (i + 1) - (unsigned __int8)v13;
      v15 = a1 + 40 * v14;
      v16 = a1 + 40 * i;
      v17 = _mm_loadu_si128((const __m128i *)(v15 + 8));
      v18 = *(_QWORD *)v15;
      *(_OWORD *)(v15 + 8) = 0;
      *(_QWORD *)v15 = 0;
      v19 = *(void **)v16;
      if ( *(_QWORD *)v16 )
      {
        *(_QWORD *)(v16 + 8) = 0;
        v49.m128i_i64[0] = v18;
        v50 = v17;
        j__free(v19);
        v17 = _mm_load_si128(&v50);
        v18 = v49.m128i_i64[0];
      }
      *(_QWORD *)v16 = v18;
      *(__m128i *)(v16 + 8) = v17;
      *(_QWORD *)(v16 + 24) = *(_QWORD *)(v15 + 24);
      *(_WORD *)(v16 + 32) = *(_WORD *)(v15 + 32);
      *(_WORD *)(v16 + 34) = *(_WORD *)(v15 + 34);
      if ( v6 <= v14 )
        break;
    }
  }
  if ( (v51 & 1) == 0 && (v51 - 2) / 2 == v14 )
  {
    v44 = 2 * (v14 + 1);
    v45 = a1 + 80 * (v14 + 1) - 40;
    v46 = *(_QWORD *)v45;
    v47 = _mm_loadu_si128((const __m128i *)(v45 + 8));
    *(_OWORD *)(v45 + 8) = 0;
    *(_QWORD *)v45 = 0;
    v48 = *(void **)v15;
    if ( *(_QWORD *)v15 )
    {
      *(_QWORD *)(v15 + 8) = 0;
      v49 = v47;
      j__free(v48);
      v47 = _mm_load_si128(&v49);
    }
    *(_QWORD *)v15 = v46;
    v14 = v44 - 1;
    *(__m128i *)(v15 + 8) = v47;
    *(_QWORD *)(v15 + 24) = *(_QWORD *)(v45 + 24);
    *(_WORD *)(v15 + 32) = *(_WORD *)(v45 + 32);
    *(_WORD *)(v15 + 34) = *(_WORD *)(v45 + 34);
    v15 = a1 + 40 * (v44 - 1);
  }
  v24 = v52;
  v25 = _mm_loadu_si128((const __m128i *)(v52 + 8));
  v26 = *(char **)v52;
  *(_OWORD *)(v52 + 8) = 0;
  v27 = *(_QWORD *)(v24 + 24);
  *(_QWORD *)v24 = 0;
  LODWORD(v24) = *(_DWORD *)(v24 + 32);
  v55 = v26;
  v52 = v27;
  v28 = _mm_cvtsi32_si128(v24);
  v56 = v24;
  v54 = v25;
  epi16 = _mm_extract_epi16(v28, 0);
  LOWORD(v51) = _mm_extract_epi16(v28, 1);
  v30 = (v14 - 1) / 2;
  if ( v14 > a2 )
  {
    v31 = (char *)haystack;
    if ( v25.m128i_i64[0] )
      v31 = v26;
    s2 = v31;
    while ( 1 )
    {
      v15 = a1 + 40 * v30;
      v36 = *(_WORD *)(v15 + 32);
      if ( epi16 == v36 )
      {
        v37 = *(_WORD *)(v15 + 34);
        if ( (_WORD)v51 == v37 )
        {
          v42 = *(_QWORD *)(v15 + 24);
          if ( v52 == v42 )
          {
            v43 = haystack;
            if ( *(_QWORD *)(v15 + 8) )
              v43 = *(const char **)v15;
            LODWORD(v42) = (unsigned int)strcmp(v43, s2) >> 31;
          }
          else
          {
            LOBYTE(v42) = v42 < v52;
          }
          if ( !(_BYTE)v42 )
          {
            v15 = a1 + 40 * v14;
            break;
          }
        }
        else if ( v37 >= (unsigned __int16)v51 )
        {
LABEL_31:
          v15 = a1 + 40 * v14;
          break;
        }
      }
      else if ( v36 >= epi16 )
      {
        goto LABEL_31;
      }
      v32 = *(_QWORD *)v15;
      v33 = _mm_loadu_si128((const __m128i *)(v15 + 8));
      v34 = a1 + 40 * v14;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      v35 = *(void **)v34;
      if ( *(_QWORD *)v34 )
      {
        *(_QWORD *)(v34 + 8) = 0;
        v50.m128i_i64[0] = v32;
        v49 = v33;
        j__free(v35);
        v32 = v50.m128i_i64[0];
        v33 = _mm_load_si128(&v49);
      }
      *(_QWORD *)v34 = v32;
      *(__m128i *)(v34 + 8) = v33;
      *(_QWORD *)(v34 + 24) = *(_QWORD *)(v15 + 24);
      *(_WORD *)(v34 + 32) = *(_WORD *)(v15 + 32);
      *(_WORD *)(v34 + 34) = *(_WORD *)(v15 + 34);
      v14 = v30;
      if ( a2 >= v30 )
        break;
      v30 = (v30 - 1) / 2;
    }
  }
  v38 = *(void **)v15;
  if ( *(_QWORD *)v15 )
  {
    *(_QWORD *)(v15 + 8) = 0;
    j__free(v38);
  }
  v39 = _mm_load_si128(&v54);
  *(_QWORD *)v15 = v55;
  v40 = v52;
  *(__m128i *)(v15 + 8) = v39;
  *(_QWORD *)(v15 + 24) = v40;
  result = v56;
  *(_DWORD *)(v15 + 32) = v56;
  return result;
}

