unsigned __int64 __fastcall sub_406400(size_t *a1, size_t a2)
{
  size_t v2; // rbp
  size_t v4; // rbx
  __int64 v5; // rdx
  size_t v6; // rax
  size_t v8; // r15
  __int64 v9; // r14
  _QWORD *v10; // rbx
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // rax
  size_t v15; // rcx
  size_t v16; // rbp
  size_t v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __m128i v25; // xmm0
  void *v26; // rdi
  void *v27; // rdi
  size_t v29; // [rsp+0h] [rbp-108h]
  size_t v30; // [rsp+8h] [rbp-100h]
  __int128 v31; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+20h] [rbp-E8h]
  __int128 v33; // [rsp+28h] [rbp-E0h]
  __int64 v34; // [rsp+38h] [rbp-D0h]
  __int128 v35; // [rsp+40h] [rbp-C8h]
  __int64 v36; // [rsp+50h] [rbp-B8h]
  __int128 v37; // [rsp+58h] [rbp-B0h]
  __int128 v38; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+80h] [rbp-88h]
  __int128 v40; // [rsp+88h] [rbp-80h]
  __int64 v41; // [rsp+98h] [rbp-70h]
  __int128 v42; // [rsp+A0h] [rbp-68h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  __int128 v44; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+C8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v31 = -1;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    if ( a2 < v2 )
    {
      v8 = a2;
      v9 = 88 * a2;
      do
      {
        v10 = (_QWORD *)(v9 + *a1);
        v11 = (void *)v10[8];
        if ( v11 )
        {
          v10[9] = 0;
          qfree(v11);
        }
        v12 = (void *)v10[5];
        if ( v12 )
        {
          v10[6] = 0;
          qfree(v12);
        }
        v13 = (void *)v10[2];
        if ( v13 )
        {
          v10[3] = 0;
          qfree(v13);
        }
        ++v8;
        v9 += 88;
      }
      while ( v2 != v8 );
      a1[1] = a2;
    }
    else
    {
      v4 = a1[2];
      if ( (unsigned __int64)&v31 < *a1 || (unsigned __int64)&v31 >= *a1 + 88 * v4 )
      {
        if ( v4 < a2 )
        {
          v14 = qvector_reserve(a1, 0, a2, 88);
          v15 = a1[2];
          v16 = a1[1];
          a1[2] = v4;
          v29 = v14;
          v17 = *a1;
          v30 = v15;
          v18 = v16 - 1;
          if ( v18 >= 0 )
          {
            v19 = v14;
            do
            {
              *(__m128i *)v19 = _mm_loadu_si128((const __m128i *)v17);
              v20 = *(_QWORD *)(v17 + 16);
              v21 = _mm_loadu_si128((const __m128i *)(v17 + 24));
              *(_QWORD *)(v17 + 16) = 0;
              *(_QWORD *)(v19 + 16) = v20;
              *(__m128i *)(v19 + 24) = v21;
              v22 = *(_QWORD *)(v17 + 40);
              v23 = _mm_loadu_si128((const __m128i *)(v17 + 48));
              *(_OWORD *)(v17 + 24) = 0;
              *(_QWORD *)(v19 + 40) = v22;
              *(__m128i *)(v19 + 48) = v23;
              v24 = *(_QWORD *)(v17 + 64);
              v25 = _mm_loadu_si128((const __m128i *)(v17 + 72));
              *(_QWORD *)(v17 + 40) = 0;
              *(_OWORD *)(v17 + 48) = 0;
              *(_QWORD *)(v19 + 64) = v24;
              *(__m128i *)(v19 + 72) = v25;
              v26 = *(void **)(v17 + 40);
              *(_QWORD *)(v17 + 64) = 0;
              *(_QWORD *)(v17 + 80) = 0;
              if ( v26 )
              {
                *(_QWORD *)(v17 + 48) = 0;
                qfree(v26);
              }
              v27 = *(void **)(v17 + 16);
              if ( v27 )
              {
                *(_QWORD *)(v17 + 24) = 0;
                qfree(v27);
              }
              v17 += 88LL;
              v19 += 88;
            }
            while ( v18-- != 0 );
            v17 = *a1;
          }
          qfree((void *)v17);
          v2 = a1[1];
          *a1 = v29;
          a1[2] = v30;
        }
        if ( v2 < a2 )
        {
          v5 = 88 * v2;
          do
          {
            ++v2;
            v6 = v5 + *a1;
            v5 += 88;
            *(_QWORD *)(v6 + 16) = 0;
            *(_QWORD *)(v6 + 40) = 0;
            *(_QWORD *)(v6 + 64) = 0;
            *(_OWORD *)v6 = -1;
            *(_OWORD *)(v6 + 24) = 0;
            *(_OWORD *)(v6 + 48) = 0;
            *(_OWORD *)(v6 + 72) = 0;
          }
          while ( a2 != v2 );
        }
        a1[1] = a2;
      }
      else
      {
        v39 = 0;
        v38 = -1;
        v41 = 0;
        v43 = 0;
        v40 = 0;
        v42 = 0;
        v44 = 0;
        sub_406110(a1, a2, (__int64)&v38);
      }
    }
  }
  return v45 - __readfsqword(0x28u);
}
