unsigned __int64 __fastcall sub_503780(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  char *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __m128i v11; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int *v25; // rbp
  __int64 v26; // r15
  __int64 v27; // r14
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  char *v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rbx
  char *v37; // rax
  void *v38; // rdi
  char *v40; // [rsp+0h] [rbp-78h]
  unsigned __int64 v41; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v43; // [rsp+28h] [rbp-50h]
  unsigned __int64 v44; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v44 = __readfsqword(0x28u);
  v43 = 0;
  ptr = nullptr;
  v3 = *(int *)(v1 + 28);
  v41 = v3;
  if ( v3 )
  {
    v4 = v3;
    v5 = qvector_reserve(&ptr, 0, v3, 24);
    v6 = *((_QWORD *)&v43 + 1);
    *((_QWORD *)&v43 + 1) = 0;
    v7 = (char *)ptr;
    v8 = v43 - 1;
    if ( (__int64)v43 - 1 >= 0 )
    {
      v9 = v5;
      do
      {
        v10 = *(_QWORD *)v7;
        v11 = _mm_loadu_si128((const __m128i *)(v7 + 8));
        v9 += 24;
        v7 += 24;
        *((_QWORD *)v7 - 3) = 0;
        *(_QWORD *)(v9 - 24) = v10;
        *(__m128i *)(v9 - 16) = v11;
        *((_QWORD *)v7 - 1) = 0;
      }
      while ( v8-- != 0 );
      v7 = (char *)ptr;
    }
    v40 = (char *)v5;
    qfree(v7);
    v13 = v43;
    *((_QWORD *)&v43 + 1) = v6;
    ptr = v40;
    if ( (unsigned __int64)v43 < v41 )
    {
      v14 = 24 * v43;
      v15 = &v40[24 * v43];
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      v16 = v13 + 1;
      if ( v13 + 1 < v41 )
      {
        v17 = v14 + 24;
        do
        {
          ++v16;
          v18 = (char *)ptr + v17;
          v17 += 24;
          *(_QWORD *)v18 = 0;
          *(_OWORD *)(v18 + 8) = 0;
        }
        while ( v41 != v16 );
      }
    }
    *(_QWORD *)&v43 = v41;
    if ( v4 > 0 )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = *(_QWORD *)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * (int)v19 + 16)) + 1576);
        v21 = *(_DWORD *)(a1 + 176);
        if ( !*(_BYTE *)(v20 + 144) )
          break;
        v22 = v21 - *(_DWORD *)(*(_QWORD *)(v20 + 8) + 68LL);
        if ( (unsigned __int64)v22 >= *(_QWORD *)(v20 + 40) )
        {
          if ( !under_debugger )
            interr(1335);
          goto LABEL_33;
        }
        v23 = (__int64)v22 << 6;
        *(_DWORD *)(*(_QWORD *)(v20 + 32) + v23 + 56) = v21;
        v24 = *(_QWORD *)(v20 + 32) + v23;
        v25 = *(unsigned int **)v24;
        v26 = *(_QWORD *)v24 + 17LL * *(_QWORD *)(v24 + 8);
        if ( v26 != *(_QWORD *)v24 )
        {
          v27 = 24 * v19;
          do
          {
            v28 = _mm_cvtsi32_si128(*v25);
            v29 = _mm_cvtsi32_si128(v25[1]);
            v30 = (__int64 *)((char *)ptr + v27);
            v31 = *(_QWORD *)((char *)ptr + v27 + 8);
            v32 = *(_QWORD *)((char *)ptr + v27);
            if ( *(_QWORD *)((char *)ptr + v27 + 16) < (unsigned __int64)(v31 + 1) )
            {
              v33 = qvector_reserve((char *)ptr + v27, v32, v31 + 1, 8);
              *v30 = v33;
              v32 = v33;
              v29 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v29));
              v31 = v30[1];
              v28 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v28));
            }
            v25 = (unsigned int *)((char *)v25 + 17);
            *(_QWORD *)(v32 + 8 * v31) = _mm_unpacklo_epi32(v28, v29).m128i_u64[0];
            ++v30[1];
          }
          while ( (unsigned int *)v26 != v25 );
        }
        if ( v41 == ++v19 )
          goto LABEL_19;
      }
      if ( !under_debugger )
        interr(1336);
LABEL_33:
      BUG();
    }
  }
LABEL_19:
  sub_4459B0((__int64 *)(a1 + 152), &ptr);
  v34 = (char *)ptr;
  if ( ptr )
  {
    v35 = v43;
    if ( (_QWORD)v43 )
    {
      v36 = 0;
      do
      {
        v37 = &v34[24 * v36];
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          qfree(v38);
          v34 = (char *)ptr;
        }
        ++v36;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v43 = 0;
    qfree(v34);
  }
  return v44 - __readfsqword(0x28u);
}

