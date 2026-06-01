unsigned __int64 __fastcall sub_451800(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 v12; // rdx
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  char *v16; // rcx
  __int64 v17; // r14
  int v18; // r12d
  _QWORD *v19; // rbp
  _QWORD *i; // r15
  _DWORD *v21; // rax
  unsigned int v22; // edx
  int v23; // ecx
  unsigned __int64 *v24; // rbx
  __m128i v25; // xmm1
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  char *v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rbx
  char *v31; // rax
  void *v32; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // xmm0_8
  unsigned __int64 v38; // rax
  int v39; // [rsp+4h] [rbp-7Ch]
  char *v40; // [rsp+8h] [rbp-78h]
  void **p_ptr; // [rsp+10h] [rbp-70h]
  unsigned __int64 v42; // [rsp+20h] [rbp-60h] BYREF
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v44; // [rsp+30h] [rbp-50h]
  unsigned __int64 v45; // [rsp+40h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v45 = __readfsqword(0x28u);
  v44 = 0;
  ptr = nullptr;
  v3 = *(int *)(v1 + 28);
  p_ptr = &ptr;
  v39 = v3;
  if ( v3 )
  {
    v4 = qvector_reserve(&ptr, 0, v3, 24);
    v5 = *((_QWORD *)&v44 + 1);
    *((_QWORD *)&v44 + 1) = 0;
    v6 = (char *)ptr;
    v7 = v44 - 1;
    if ( (__int64)v44 - 1 >= 0 )
    {
      v8 = v4;
      do
      {
        v9 = *(_QWORD *)v6;
        v10 = _mm_loadu_si128((const __m128i *)(v6 + 8));
        v8 += 24;
        v6 += 24;
        *((_QWORD *)v6 - 3) = 0;
        *(_QWORD *)(v8 - 24) = v9;
        *(__m128i *)(v8 - 16) = v10;
        *((_QWORD *)v6 - 1) = 0;
      }
      while ( v7-- != 0 );
      v6 = (char *)ptr;
    }
    v40 = (char *)v4;
    qfree(v6);
    v12 = v44;
    *((_QWORD *)&v44 + 1) = v5;
    ptr = v40;
    if ( (unsigned __int64)v44 < v3 )
    {
      v13 = &v40[24 * v44];
      *(_QWORD *)v13 = 0;
      *(_OWORD *)(v13 + 8) = 0;
      v14 = v12 + 1;
      if ( v12 + 1 < v3 )
      {
        v15 = 24 * v12 + 24;
        do
        {
          ++v14;
          v16 = (char *)ptr + v15;
          v15 += 24;
          *(_QWORD *)v16 = 0;
          *(_OWORD *)(v16 + 8) = 0;
        }
        while ( v3 != v14 );
      }
    }
    *(_QWORD *)&v44 = v3;
    if ( (int)v3 > 0 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * v18 + 16));
        v19 = *(_QWORD **)(a1 + v17 + 176);
        for ( i = &v19[*(_QWORD *)(a1 + v17 + 184)]; i != v19; ++v19 )
        {
          v21 = (_DWORD *)*v19;
          if ( *v19 )
          {
            v22 = v21[13];
            v23 = 1;
            v24 = (unsigned __int64 *)((char *)ptr + v17);
            if ( v21[14] != 4 )
              v23 = v21[18];
            v38 = v24[1];
            v36 = *v24;
            v25 = _mm_cvtsi32_si128(v22 + v23);
            v26 = v24[2];
            v37 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), v25).m128i_u64[0];
            v27 = v38 + 1;
            v42 = v37;
            if ( (unsigned __int64)&v42 < v36 || (unsigned __int64)&v42 >= v36 + 8 * v26 )
            {
              if ( v26 < v27 )
              {
                v34 = qvector_reserve((char *)ptr + v17, v36, v38 + 1, 8);
                *v24 = v34;
                v36 = v34;
                v38 = v24[1];
              }
              *(_QWORD *)(v36 + 8 * v38) = v42;
            }
            else
            {
              if ( v26 < v27 )
              {
                v40 = (char *)v37;
                v35 = qvector_reserve((char *)ptr + v17, v36, v38 + 1, 8);
                *v24 = v35;
                v36 = v35;
                v37 = (unsigned __int64)v40;
                v38 = v24[1];
              }
              *(_QWORD *)(v36 + 8 * v38) = v37;
            }
            ++v24[1];
          }
        }
        ++v18;
        v17 += 24;
      }
      while ( v39 != v18 );
    }
  }
  sub_4459B0((__int64 *)(a1 + 152), p_ptr);
  v28 = (char *)ptr;
  if ( ptr )
  {
    v29 = v44;
    if ( (_QWORD)v44 )
    {
      v30 = 0;
      do
      {
        v31 = &v28[24 * v30];
        v32 = *(void **)v31;
        if ( *(_QWORD *)v31 )
        {
          *((_QWORD *)v31 + 1) = 0;
          qfree(v32);
          v28 = (char *)ptr;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v44 = 0;
    qfree(v28);
  }
  return v45 - __readfsqword(0x28u);
}

