__int64 __fastcall sub_55E60(__int64 a1, __int64 a2)
{
  __m128i *v4; // rax
  void *v5; // rdi
  unsigned __int64 v6; // r12
  size_t v7; // r15
  unsigned __int64 v8; // r12
  size_t v9; // r15
  unsigned __int64 v10; // r12
  size_t v11; // r15
  int v12; // r12d
  __m128i *v14; // rax
  void *v15; // rdi
  unsigned __int64 v16; // r12
  size_t v17; // r15
  __int64 v18; // r14
  size_t v19; // r8
  __int64 v20; // rsi
  __int64 v21; // r14
  size_t v22; // r8
  __int64 v23; // rsi
  __int64 v24; // r14
  unsigned __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // r14
  size_t v28; // r8
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // rsi
  unsigned __int64 v32; // r12
  __int64 v33; // r13
  __m128i si128; // xmm0
  __int64 v35; // rbp
  __m128i *v36; // rax
  void *v37; // rdi
  unsigned __int64 v38; // r12
  size_t v39; // r14
  __int64 v40; // r13
  size_t v41; // r15
  __int64 v42; // rsi
  unsigned int i; // r12d
  int v44; // eax
  __int64 v45; // r12
  unsigned __int64 v46; // r14
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // [rsp+0h] [rbp-60h]
  size_t v56; // [rsp+0h] [rbp-60h]
  size_t v57; // [rsp+0h] [rbp-60h]
  size_t v58; // [rsp+0h] [rbp-60h]
  void *src; // [rsp+8h] [rbp-58h] BYREF
  __int128 v60; // [rsp+10h] [rbp-50h]
  unsigned __int64 v61; // [rsp+20h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  src = 0;
  v60 = 0;
  v4 = (__m128i *)qvector_reserve((__int64)&src, 0, 20, 1);
  src = v4;
  *(_QWORD *)&v60 = 20;
  *v4 = _mm_load_si128((const __m128i *)&xmmword_89630);
  *(__int32 *)((char *)&v4->m128i_i32[3] + 3) = 540697970;
  v5 = src;
  *((_BYTE *)src + 19) = 0;
  v6 = v60;
  if ( (_QWORD)v60 )
  {
    v7 = v60 - 1;
    if ( (_QWORD)v60 != 1 )
    {
      v27 = *(_QWORD *)(a1 + 8);
      v28 = v60 - 1;
      if ( v27 )
      {
        --v27;
        v28 = v7 + v27;
        v6 = v60 + v27;
      }
      v29 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v6 )
      {
        v57 = v28;
        v52 = qvector_reserve(a1, v29, v6, 1);
        *(_QWORD *)a1 = v52;
        v28 = v57;
        v29 = v52;
      }
      *(_QWORD *)(a1 + 8) = v6;
      *(_BYTE *)(v29 + v28) = 0;
      memcpy((void *)(v27 + *(_QWORD *)a1), src, v7);
      v5 = src;
    }
  }
  if ( v5 )
  {
    *(_QWORD *)&v60 = 0;
    qfree((__int64)v5);
  }
  v8 = *(_QWORD *)(a2 + 56);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v8 != 1 )
    {
      v24 = *(_QWORD *)(a1 + 8);
      v25 = v8 - 1;
      if ( v24 )
      {
        --v24;
        v25 = v9 + v24;
        v8 += v24;
      }
      v26 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v8 )
      {
        v55 = v25;
        v50 = qvector_reserve(a1, v26, v8, 1);
        *(_QWORD *)a1 = v50;
        v25 = v55;
        v26 = v50;
      }
      *(_QWORD *)(a1 + 8) = v8;
      *(_BYTE *)(v26 + v25) = 0;
      memcpy((void *)(v24 + *(_QWORD *)a1), *(const void **)(a2 + 48), v9);
    }
  }
  v60 = 0;
  src = 0;
  src = (void *)qvector_reserve((__int64)&src, 0, 2, 1);
  *(_QWORD *)&v60 = 2;
  *(_BYTE *)src = 10;
  *((_BYTE *)src + 1) = 0;
  v10 = v60;
  if ( (_QWORD)v60 )
  {
    v11 = v60 - 1;
    if ( (_QWORD)v60 != 1 )
    {
      v21 = *(_QWORD *)(a1 + 8);
      v22 = v60 - 1;
      if ( v21 )
      {
        --v21;
        v22 = v11 + v21;
        v10 = v60 + v21;
      }
      v23 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v10 )
      {
        v56 = v22;
        v51 = qvector_reserve(a1, v23, v10, 1);
        *(_QWORD *)a1 = v51;
        v22 = v56;
        v23 = v51;
      }
      *(_QWORD *)(a1 + 8) = v10;
      *(_BYTE *)(v23 + v22) = 0;
      memcpy((void *)(v21 + *(_QWORD *)a1), src, v11);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v60 = 0;
    qfree((__int64)src);
  }
  sub_55D90((__int64 *)a1);
  v12 = *(_DWORD *)(a2 + 24);
  if ( v12 < 0 )
  {
    sub_55D90((__int64 *)a1);
  }
  else
  {
    if ( (unsigned __int64)v12 > 2 )
    {
      sub_55D90((__int64 *)a1);
    }
    else
    {
      sub_55D90((__int64 *)a1);
      if ( v12 != 2 )
        goto LABEL_14;
    }
    if ( *(_DWORD *)(a2 + 40) )
    {
      v60 = 0;
      src = 0;
      v14 = (__m128i *)qvector_reserve((__int64)&src, 0, 26, 1);
      src = v14;
      *(_QWORD *)&v60 = 26;
      *v14 = _mm_load_si128((const __m128i *)&xmmword_89640);
      *(__m128i *)((char *)v14 + 9) = _mm_load_si128((const __m128i *)&xmmword_89650);
      v15 = src;
      *((_BYTE *)src + 25) = 0;
      v16 = v60;
      if ( (_QWORD)v60 )
      {
        v17 = v60 - 1;
        if ( (_QWORD)v60 != 1 )
        {
          v18 = *(_QWORD *)(a1 + 8);
          v19 = v60 - 1;
          if ( v18 )
          {
            --v18;
            v19 = v17 + v18;
            v16 = v60 + v18;
          }
          v20 = *(_QWORD *)a1;
          if ( *(_QWORD *)(a1 + 16) < v16 )
          {
            v58 = v19;
            v54 = qvector_reserve(a1, v20, v16, 1);
            *(_QWORD *)a1 = v54;
            v19 = v58;
            v20 = v54;
          }
          *(_QWORD *)(a1 + 8) = v16;
          *(_BYTE *)(v20 + v19) = 0;
          memcpy((void *)(v18 + *(_QWORD *)a1), src, v17);
          v15 = src;
        }
      }
      if ( v15 )
      {
        *(_QWORD *)&v60 = 0;
        qfree((__int64)v15);
      }
    }
  }
LABEL_14:
  sub_55D90((__int64 *)a1);
  sub_55D90((__int64 *)a1);
  sub_55D90((__int64 *)a1);
  if ( !*(_BYTE *)(a2 + 97) )
    goto LABEL_15;
  sub_55D90((__int64 *)a1);
  for ( i = 0; i != 8; ++i )
  {
    while ( 1 )
    {
      v44 = *(unsigned __int8 *)(a2 + 97);
      if ( _bittest(&v44, i) )
        break;
      if ( ++i == 8 )
        goto LABEL_62;
    }
    sub_55D90((__int64 *)a1);
  }
LABEL_62:
  v45 = *(_QWORD *)(a1 + 8);
  v46 = 2;
  if ( v45 )
  {
    v46 = v45 + 1;
    v47 = *(_QWORD *)a1;
    --v45;
    if ( *(_QWORD *)(a1 + 16) >= v46 )
      goto LABEL_64;
LABEL_66:
    v48 = qvector_reserve(a1, v47, v46, 1);
    *(_QWORD *)a1 = v48;
    v47 = v48;
    goto LABEL_64;
  }
  v47 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < 2u )
    goto LABEL_66;
LABEL_64:
  *(_QWORD *)(a1 + 8) = v46;
  *(_BYTE *)(v47 + v45) = 10;
  *(_BYTE *)(*(_QWORD *)a1 + v45 + 1) = 0;
LABEL_15:
  if ( *(_DWORD *)(a2 + 28) )
  {
    v60 = 0;
    src = 0;
    v36 = (__m128i *)qvector_reserve((__int64)&src, 0, 26, 1);
    src = v36;
    *(_QWORD *)&v60 = 26;
    *v36 = _mm_load_si128((const __m128i *)&xmmword_89660);
    *(__m128i *)((char *)v36 + 9) = _mm_load_si128((const __m128i *)&xmmword_89670);
    v37 = src;
    *((_BYTE *)src + 25) = 0;
    v38 = v60;
    if ( (_QWORD)v60 )
    {
      v39 = v60 - 1;
      if ( (_QWORD)v60 != 1 )
      {
        v40 = *(_QWORD *)(a1 + 8);
        v41 = v60 - 1;
        if ( v40 )
        {
          --v40;
          v41 = v39 + v40;
          v38 = v60 + v40;
        }
        v42 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v38 )
        {
          v53 = qvector_reserve(a1, v42, v38, 1);
          *(_QWORD *)a1 = v53;
          v42 = v53;
        }
        *(_QWORD *)(a1 + 8) = v38;
        *(_BYTE *)(v42 + v41) = 0;
        memcpy((void *)(v40 + *(_QWORD *)a1), src, v39);
        v37 = src;
      }
    }
    if ( v37 )
    {
      *(_QWORD *)&v60 = 0;
      qfree((__int64)v37);
    }
    sub_55D90((__int64 *)a1);
  }
  if ( *(_BYTE *)(a2 + 96) )
  {
    v30 = *(_QWORD *)(a1 + 8);
    if ( v30 )
    {
      v33 = v30 + 43;
      v32 = v30 + 44;
      v31 = *(_QWORD *)a1;
      --v30;
      if ( *(_QWORD *)(a1 + 16) >= v32 )
        goto LABEL_47;
    }
    else
    {
      v31 = *(_QWORD *)a1;
      v32 = 45;
      v33 = 44;
      if ( *(_QWORD *)(a1 + 16) >= 0x2Du )
      {
LABEL_47:
        si128 = _mm_load_si128((const __m128i *)&xmmword_89680);
        *(_QWORD *)(a1 + 8) = v32;
        *(_BYTE *)(v31 + v33) = 0;
        v35 = *(_QWORD *)a1 + v30;
        *(__m128i *)v35 = si128;
        *(__m128i *)(v35 + 16) = _mm_load_si128((const __m128i *)&xmmword_89690);
        *(__m128i *)(v35 + 28) = _mm_load_si128((const __m128i *)&xmmword_896A0);
        return a1;
      }
    }
    v49 = qvector_reserve(a1, v31, v32, 1);
    *(_QWORD *)a1 = v49;
    v31 = v49;
    goto LABEL_47;
  }
  return a1;
}
