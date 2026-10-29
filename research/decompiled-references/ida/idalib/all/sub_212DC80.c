__int64 *__fastcall sub_212DC80(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 *v5; // r8
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // r15
  const __m128i *v12; // rbp
  __m128i v13; // xmm0
  bool v14; // cc
  unsigned int v15; // edx
  __int64 v16; // rcx
  void *v17; // rdi
  __int64 v18; // r14
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rax
  __m128i v23; // xmm3
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rbp
  void *v28; // rdi
  __int64 v29; // rbx
  const __m128i *v30; // rbp
  __int64 v31; // rdi
  __m128i v32; // xmm1
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rbp
  __m128i v36; // xmm2
  unsigned int v37; // eax
  unsigned __int64 v38; // [rsp+0h] [rbp-48h]
  __int64 *v39; // [rsp+0h] [rbp-48h]
  __int64 v40; // [rsp+8h] [rbp-40h]

  if ( a2 != a1 )
  {
    v3 = a2[1];
    v4 = *a2;
    v5 = a2;
    v6 = *a1;
    v40 = v3 - *a2;
    v7 = 0xCCCCCCCCCCCCCCCDLL * (v40 >> 3);
    v8 = v7;
    if ( 0xCCCCCCCCCCCCCCCDLL * ((a1[2] - *a1) >> 3) < v7 )
    {
      v20 = 0;
      if ( v7 )
      {
        if ( v7 > 0x666666666666666LL )
          std::__throw_bad_alloc();
        v20 = operator new(v40);
      }
      v21 = v20;
      while ( v3 != v4 )
      {
        while ( 1 )
        {
          v23 = _mm_loadu_si128((const __m128i *)(v4 + 8));
          *(_DWORD *)v21 = *(_DWORD *)v4;
          v24 = *(_DWORD *)(v4 + 32);
          *(__m128i *)(v21 + 8) = v23;
          *(_DWORD *)(v21 + 32) = v24;
          if ( v24 > 0x40 )
            break;
          v22 = *(_QWORD *)(v4 + 24);
          v4 += 40;
          v21 += 40;
          *(_QWORD *)(v21 - 16) = v22;
          if ( v3 == v4 )
            goto LABEL_27;
        }
        v25 = v21 + 24;
        v4 += 40;
        v21 += 40;
        sub_2205510(v25);
      }
LABEL_27:
      v26 = a1[1];
      v27 = *a1;
      if ( v26 != *a1 )
      {
        do
        {
          if ( *(_DWORD *)(v27 + 32) > 0x40u )
          {
            v28 = *(void **)(v27 + 24);
            if ( v28 )
              operator delete[](v28);
          }
          v27 += 40;
        }
        while ( v26 != v27 );
        v27 = *a1;
      }
      if ( v27 )
        operator delete((void *)v27);
      *a1 = v20;
      v18 = v20 + v40;
      a1[2] = v20 + v40;
      goto LABEL_17;
    }
    v9 = a1[1];
    v10 = v9 - v6;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((v9 - v6) >> 3);
    if ( v7 > v11 )
    {
      if ( v10 > 0 )
      {
        v29 = v6 + 24;
        v30 = (const __m128i *)(v4 + 24);
        do
        {
          while ( 1 )
          {
            v32 = _mm_loadu_si128(v30 - 1);
            v14 = *(_DWORD *)(v29 + 8) <= 0x40u;
            *(_DWORD *)(v29 - 24) = v30[-2].m128i_i32[2];
            *(__m128i *)(v29 - 16) = v32;
            if ( v14 )
            {
              v33 = v30->m128i_u32[2];
              if ( v33 <= 0x40 )
                break;
            }
            v31 = v29;
            v39 = v5;
            v29 += 40;
            sub_22056A0(v31, v30);
            v30 = (const __m128i *)((char *)v30 + 40);
            v5 = v39;
            if ( !--v11 )
              goto LABEL_42;
          }
          v34 = v30->m128i_i64[0];
          v29 += 40;
          *(_DWORD *)(v29 - 32) = v33;
          v30 = (const __m128i *)((char *)v30 + 40);
          *(_QWORD *)(v29 - 40) = v34;
          --v11;
        }
        while ( v11 );
LABEL_42:
        v9 = a1[1];
        v6 = *a1;
        v3 = v5[1];
        v4 = *v5;
        v10 = v9 - *a1;
      }
      v35 = v10 + v4;
      if ( v35 == v3 )
      {
        v18 = v6 + v40;
        goto LABEL_17;
      }
      do
      {
        v36 = _mm_loadu_si128((const __m128i *)(v35 + 8));
        *(_DWORD *)v9 = *(_DWORD *)v35;
        v37 = *(_DWORD *)(v35 + 32);
        *(__m128i *)(v9 + 8) = v36;
        *(_DWORD *)(v9 + 32) = v37;
        if ( v37 <= 0x40 )
          *(_QWORD *)(v9 + 24) = *(_QWORD *)(v35 + 24);
        else
          sub_2205510(v9 + 24);
        v35 += 40;
        v9 += 40;
      }
      while ( v35 != v3 );
    }
    else
    {
      v12 = (const __m128i *)(v4 + 24);
      if ( v40 > 0 )
      {
        do
        {
          v13 = _mm_loadu_si128(v12 - 1);
          v14 = *(_DWORD *)(v6 + 32) <= 0x40u;
          *(_DWORD *)v6 = v12[-2].m128i_i32[2];
          *(__m128i *)(v6 + 8) = v13;
          if ( v14 && (v15 = v12->m128i_u32[2], v15 <= 0x40) )
          {
            v16 = v12->m128i_i64[0];
            *(_DWORD *)(v6 + 32) = v15;
            *(_QWORD *)(v6 + 24) = v16;
          }
          else
          {
            v38 = v8;
            sub_22056A0(v6 + 24, v12);
            v8 = v38;
          }
          v6 += 40;
          v12 = (const __m128i *)((char *)v12 + 40);
          --v8;
        }
        while ( v8 );
      }
      while ( v9 != v6 )
      {
        if ( *(_DWORD *)(v6 + 32) > 0x40u )
        {
          v17 = *(void **)(v6 + 24);
          if ( v17 )
            operator delete[](v17);
        }
        v6 += 40;
      }
    }
    v18 = *a1 + v40;
LABEL_17:
    a1[1] = v18;
  }
  return a1;
}
