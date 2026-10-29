unsigned __int64 __fastcall sub_CEFC0(TGroup *a1, unsigned int a2, __int64 a3)
{
  int v3; // esi
  unsigned int v4; // eax
  unsigned int v6; // r12d
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // r15
  const char **v10; // r14
  int dtype_size; // eax
  const char *v12; // r8
  __int64 v13; // r13
  int v14; // r9d
  size_t v15; // r14
  __m128i v16; // xmm3
  __int64 i; // r14
  _QWORD *v18; // r15
  __int64 v19; // rcx
  __int64 v20; // r8
  __m128i v21; // xmm4
  __int64 v22; // r12
  __int64 v23; // r9
  __int64 v24; // r10
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // r13d
  int v28; // ebp
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // r9
  int v34; // r8d
  int v35; // r8d
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  int v38; // r13d
  unsigned int v39; // r12d
  __int64 v40; // rbp
  __m128i v41; // xmm2
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  int v44; // eax
  int v45; // r9d
  int v46; // eax
  unsigned int v48; // [rsp+0h] [rbp-98h]
  unsigned int v49; // [rsp+0h] [rbp-98h]
  const char *src; // [rsp+18h] [rbp-80h]
  unsigned int v52; // [rsp+20h] [rbp-78h]
  unsigned int v53; // [rsp+20h] [rbp-78h]
  int v55; // [rsp+28h] [rbp-70h]
  _DWORD v56[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v57[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+58h] [rbp-40h]

  v3 = *(_DWORD *)(a3 + 40);
  v4 = *(_DWORD *)(a3 + 8) + *(_QWORD *)(a3 + 16) + 2;
  v58 = __readfsqword(0x28u);
  v52 = v4;
  if ( v3 )
  {
    v6 = a2;
    v7 = 0;
    do
    {
      v8 = v6++;
      v56[0] = 1;
      v56[1] = v8;
      v56[3] = v6;
      v56[2] = v52;
      v9 = *(int *)(*(_QWORD *)(a3 + 32) + 4 * v7);
      v10 = (const char **)(*(_QWORD *)(dbg + 56LL) + 32 * v9);
      dtype_size = get_dtype_size();
      v12 = *v10;
      v13 = *(_QWORD *)(a3 + 8);
      memset(v57, 0, sizeof(v57));
      v14 = dtype_size;
      if ( v12 )
      {
        v55 = dtype_size;
        src = v12;
        v15 = strlen(v12);
        *(_QWORD *)v57 = qvector_reserve();
        *(_QWORD *)&v57[8] = v15 + 1;
        memmove(*(void **)v57, src, v15);
        v14 = v55;
        *(_BYTE *)(*(_QWORD *)v57 + v15) = 0;
      }
      sub_CEE60(a1, (__int64)v56, (__int64)v57, v13, v9, v14);
      if ( *(_QWORD *)v57 )
      {
        *(_QWORD *)&v57[8] = 0;
        qfree();
      }
      ++v7;
    }
    while ( *(_DWORD *)(a3 + 40) > (unsigned int)v7 );
  }
  if ( *(_DWORD *)(a3 + 64) )
  {
    v16 = _mm_cvtsi32_si128(v52);
    for ( i = 0; *(_DWORD *)(a3 + 64) > (unsigned int)i; ++i )
    {
      v18 = (_QWORD *)(*(_QWORD *)(a3 + 56) + 24 * i);
      v19 = v18[1];
      v20 = *v18;
      v21 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v16) + 1);
      v22 = *v18;
      v23 = *v18 + 32 * v19;
      if ( 32 * v19 )
      {
        v24 = *v18;
        v25 = 0;
        do
        {
          v26 = (*(_QWORD *)(v24 + 8) == 0) + *(_QWORD *)(v24 + 8) - 1LL;
          if ( v25 >= v26 )
            LODWORD(v26) = v25;
          v24 += 32;
          v25 = (int)v26;
        }
        while ( v23 != v24 );
        v27 = v26 + 1;
        if ( v23 == v20 )
        {
          v35 = v26 + 1;
        }
        else
        {
          v28 = 0;
          v48 = _mm_cvtsi128_si32(v21);
          do
          {
            v29 = *(int *)(v22 + 24);
            if ( (v29 & 0x80000000) == 0LL && v29 < (unsigned __int64)xmmword_251378 )
            {
              v30 = qword_251370 + 56 * v29;
              if ( v30 )
              {
                v31 = sub_C5EC0(v30);
                v20 = *v18;
                v19 = v18[1];
                if ( v28 < v31 )
                  v28 = v31;
              }
            }
            v22 += 32;
            v32 = v20;
            v33 = v20 + 32 * v19;
          }
          while ( v22 != v33 );
          v34 = v28 + 14;
          v21 = _mm_cvtsi32_si128(v48);
          if ( v28 + 7 >= 0 )
            v34 = v28 + 7;
          v35 = v27 + (v34 >> 3);
          if ( v32 != v33 )
          {
            v36 = 0;
            do
            {
              v37 = (*(_QWORD *)(v32 + 8) == 0) + *(_QWORD *)(v32 + 8) - 1LL;
              if ( v36 >= v37 )
                LODWORD(v37) = v36;
              v32 += 32;
              v36 = (int)v37;
            }
            while ( v33 != v32 );
            v38 = v37;
            goto LABEL_31;
          }
        }
      }
      else
      {
        v35 = 1;
      }
      v38 = 0;
LABEL_31:
      v39 = a2;
      v40 = 0;
      v16 = _mm_cvtsi32_si128(v35 + _mm_cvtsi128_si32(v21));
      if ( (_DWORD)v19 )
      {
        do
        {
          v41 = _mm_cvtsi32_si128(v39++);
          *(__m128i *)v57 = _mm_unpacklo_epi64(
                              _mm_unpacklo_epi32(v21, v41),
                              _mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(v39)));
          v42 = *(int *)(*v18 + 32 * v40 + 24);
          if ( (v42 & 0x80000000) == 0LL && v42 < (unsigned __int64)xmmword_251378 )
          {
            v43 = qword_251370 + 56 * v42;
            if ( v43 )
            {
              v53 = _mm_cvtsi128_si32(v16);
              v49 = _mm_cvtsi128_si32(v21);
              v44 = sub_C5EC0(v43);
              v45 = v44 + 14;
              v46 = v44 + 7;
              if ( v46 >= 0 )
                v45 = v46;
              sub_CEE60(a1, (__int64)v57, *v18 + 32 * v40, v38, *(_DWORD *)(*v18 + 32 * v40 + 24), v45 >> 3);
              v16 = _mm_cvtsi32_si128(v53);
              v21 = _mm_cvtsi32_si128(v49);
            }
          }
          ++v40;
        }
        while ( *((_DWORD *)v18 + 2) > (unsigned int)v40 );
      }
    }
  }
  return v58 - __readfsqword(0x28u);
}

