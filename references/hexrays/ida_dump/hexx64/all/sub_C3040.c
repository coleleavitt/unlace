unsigned __int64 __fastcall sub_C3040(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 *v6; // r12
  unsigned __int64 v7; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rbp
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-48h] BYREF
  __int128 v38; // [rsp+8h] [rbp-40h]
  unsigned __int64 v39; // [rsp+18h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  v3 = a2;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 8;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  v4 = operator new(0x40u);
  v5 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 112) = v4;
  v6 = (unsigned __int64 *)(v4 + ((4 * v5 - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v7 = operator new(0x1F8u);
  *v6 = v7;
  v8 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  *(_QWORD *)(a1 + 192) = 0;
  v9 = _mm_unpacklo_epi64((__m128i)(v7 + 504), (__m128i)(unsigned __int64)v6);
  *(_QWORD *)(a1 + 232) = 0;
  *(__m128i *)(a1 + 144) = v9;
  *(__m128i *)(a1 + 176) = v9;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 400) = 0;
  v10 = *(int *)(a2 + 64);
  *(_QWORD *)(a1 + 416) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 320) = a2;
  *(_QWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 228) = -1;
  *(_QWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 424) = -1;
  *(_DWORD *)(a1 + 224) = v10 - 1;
  *(__m128i *)(a1 + 128) = v8;
  *(__m128i *)(a1 + 160) = v8;
  LODWORD(v37) = -1;
  v11 = *(_QWORD *)(a1 + 24);
  if ( v10 >= v11 )
  {
    if ( v11 < v10 )
    {
      v25 = *(_QWORD *)(a1 + 16);
      v26 = *(_QWORD *)(a1 + 32);
      v27 = a1 + 16;
      if ( (unsigned __int64)&v37 < v25 || (unsigned __int64)&v37 >= v25 + 4 * v26 )
      {
        if ( v26 >= v10
          || (v36 = qvector_reserve(v27, v25, v10, 4),
              v11 = *(_QWORD *)(a1 + 24),
              *(_QWORD *)(a1 + 16) = v36,
              v25 = v36,
              v11 < v10) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v25 + 4 * v11++) = -1;
            if ( v10 == v11 )
              break;
            v25 = *(_QWORD *)(a1 + 16);
          }
        }
      }
      else if ( v26 >= v10
             || (v31 = qvector_reserve(v27, v25, v10, 4),
                 v11 = *(_QWORD *)(a1 + 24),
                 *(_QWORD *)(a1 + 16) = v31,
                 v25 = v31,
                 v11 < v10) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v25 + 4 * v11++) = -1;
          if ( v10 == v11 )
            break;
          v25 = *(_QWORD *)(a1 + 16);
        }
      }
      *(_QWORD *)(a1 + 24) = v10;
      v3 = *(_QWORD *)(a1 + 320);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v10;
  }
  v12 = *(int *)(v3 + 64);
  v13 = *(_QWORD *)(a1 + 48);
  if ( v12 != v13 )
  {
    v37 = 0;
    v38 = 0;
    if ( v12 < v13 )
    {
      v28 = v12;
      do
      {
        v29 = (__int64 *)(*(_QWORD *)(a1 + 40) + 24 * v28);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30);
        }
        ++v28;
      }
      while ( v28 < v13 );
      *(_QWORD *)(a1 + 48) = v12;
      v3 = *(_QWORD *)(a1 + 320);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 40);
      v15 = *(_QWORD *)(a1 + 56);
      v16 = a1 + 40;
      if ( (unsigned __int64)&v37 < v14 || (unsigned __int64)&v37 >= v14 + 24 * v15 )
      {
        if ( v15 < v12 )
        {
          *(_QWORD *)(a1 + 40) = qvector_reserve(v16, v14, v12, 24);
          v13 = *(_QWORD *)(a1 + 48);
        }
        if ( v13 < v12 )
        {
          v17 = 24 * v13;
          do
          {
            ++v13;
            v18 = v17 + *(_QWORD *)(a1 + 40);
            v17 += 24;
            *(_QWORD *)v18 = 0;
            *(_OWORD *)(v18 + 8) = 0;
          }
          while ( v12 != v13 );
        }
      }
      else
      {
        if ( v15 < v12 )
        {
          *(_QWORD *)(a1 + 40) = qvector_reserve(v16, v14, v12, 24);
          v13 = *(_QWORD *)(a1 + 48);
        }
        if ( v13 < v12 )
        {
          v33 = 24 * v13;
          do
          {
            ++v13;
            v34 = v33 + *(_QWORD *)(a1 + 40);
            v33 += 24;
            *(_QWORD *)v34 = 0;
            *(_OWORD *)(v34 + 8) = 0;
          }
          while ( v12 != v13 );
        }
      }
      *(_QWORD *)(a1 + 48) = v12;
      v3 = *(_QWORD *)(a1 + 320);
    }
  }
  v19 = *(_QWORD *)(v3 + 440);
  v20 = *(_QWORD *)(a1 + 72);
  v37 = 0;
  if ( v19 < v20 )
    goto LABEL_20;
  if ( v20 < v19 )
  {
    v22 = *(_QWORD *)(a1 + 64);
    v23 = *(_QWORD *)(a1 + 80);
    v24 = a1 + 64;
    if ( (unsigned __int64)&v37 < v22 || (unsigned __int64)&v37 >= v22 + 8 * v23 )
    {
      if ( v23 >= v19
        || (v35 = qvector_reserve(v24, v22, v19, 8),
            v20 = *(_QWORD *)(a1 + 72),
            *(_QWORD *)(a1 + 64) = v35,
            v22 = v35,
            v20 < v19) )
      {
        while ( 1 )
        {
          *(_QWORD *)(v22 + 8 * v20++) = 0;
          if ( v19 == v20 )
            break;
          v22 = *(_QWORD *)(a1 + 64);
        }
      }
    }
    else if ( v23 >= v19
           || (v32 = qvector_reserve(v24, v22, v19, 8),
               v20 = *(_QWORD *)(a1 + 72),
               *(_QWORD *)(a1 + 64) = v32,
               v22 = v32,
               v20 < v19) )
    {
      while ( 1 )
      {
        *(_QWORD *)(v22 + 8 * v20++) = 0;
        if ( v19 == v20 )
          break;
        v22 = *(_QWORD *)(a1 + 64);
      }
    }
LABEL_20:
    *(_QWORD *)(a1 + 72) = v19;
  }
  return v39 - __readfsqword(0x28u);
}
