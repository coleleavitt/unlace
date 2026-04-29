unsigned __int64 __fastcall sub_35E2E0(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdi
  __m128i si128; // xmm4
  __m128i v9; // xmm1
  __m128i v10; // xmm3
  __m128i v11; // xmm2
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // r13
  __int64 **v18; // r14
  __int64 *v19; // rdi
  __int64 *v20; // rdx
  __int64 *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 i; // rax
  __int64 *v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 j; // rdx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __m128i v34; // xmm1
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  int v38; // ecx
  __m128i v39; // xmm4
  __m128i v40; // xmm3
  __m128i v41; // xmm2
  __int64 v42; // rdx
  __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-158h] BYREF
  __int64 v45; // [rsp+18h] [rbp-140h]
  _OWORD v46[2]; // [rsp+20h] [rbp-138h] BYREF
  __int64 v47; // [rsp+40h] [rbp-118h]
  __int128 v48; // [rsp+48h] [rbp-110h] BYREF
  __int128 v49; // [rsp+58h] [rbp-100h] BYREF
  __int128 v50; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v51; // [rsp+78h] [rbp-E0h]
  __int128 v52; // [rsp+88h] [rbp-D0h]
  __int128 v53; // [rsp+A0h] [rbp-B8h]
  __int128 v54; // [rsp+B0h] [rbp-A8h]
  __m128i v55; // [rsp+C0h] [rbp-98h]
  __m128i v56; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v57; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v58; // [rsp+F0h] [rbp-68h] BYREF
  int v59; // [rsp+100h] [rbp-58h]
  __int64 v60; // [rsp+104h] [rbp-54h]
  __int64 v61; // [rsp+10Ch] [rbp-4Ch]
  unsigned __int64 v62; // [rsp+118h] [rbp-40h]

  v3 = a2;
  v62 = __readfsqword(0x28u);
  sub_63040((__int64)a1, a2);
  v4 = a1[23];
  if ( a2 != v4 )
  {
    v47 = -1;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    memset(v46, 0, sizeof(v46));
    if ( a2 < v4 )
    {
      v16 = a2;
      v17 = 120LL * a2;
      do
      {
        v18 = (__int64 **)(v17 + a1[22]);
        v19 = v18[1];
        if ( v19 )
        {
          v18[2] = nullptr;
          qfree(v19);
        }
        v20 = *v18;
        if ( *v18 )
        {
          if ( (*((_DWORD *)v20 + 26))-- == 1 )
          {
            v22 = *v18;
            if ( v22 )
            {
              sub_253D70(v22);
              v23 = v22[23];
              if ( v23 )
              {
                v24 = v22[24];
                if ( v24 )
                {
                  for ( i = 0; i != v24; ++i )
                  {
                    v26 = (__int64 *)(v23 + 24 * i);
                    v27 = *v26;
                    if ( *v26 )
                    {
                      v26[1] = 0;
                      v45 = i;
                      v44.m128i_i64[0] = v24;
                      qfree(v27);
                      v23 = v22[23];
                      i = v45;
                    }
                  }
                }
                v22[24] = 0;
                qfree(v23);
              }
              v28 = v22[20];
              if ( v28 )
              {
                v22[21] = 0;
                qfree(v28);
              }
              v29 = v22[16];
              if ( v29 )
              {
                v30 = v22[17];
                if ( v30 )
                {
                  for ( j = 0; j != v30; ++j )
                  {
                    v32 = (__int64 *)(v29 + 32 * j);
                    v33 = *v32;
                    if ( *v32 )
                    {
                      v32[1] = 0;
                      v45 = v30;
                      v44.m128i_i64[0] = j;
                      qfree(v33);
                      v29 = v22[16];
                      j = v44.m128i_i64[0];
                    }
                  }
                }
                v22[17] = 0;
                qfree(v29);
              }
              sub_250450((__int64)(v22 + 2));
              j__qfree(v22);
            }
          }
        }
        ++v16;
        v17 += 120;
      }
      while ( v16 < v4 );
      a1[23] = v3;
    }
    else
    {
      v5 = a1[22];
      v6 = a1[24];
      v7 = a1 + 22;
      if ( (unsigned __int64)v46 < v5 || (unsigned __int64)v46 >= v5 + 120 * v6 )
      {
        if ( v6 < v3 )
        {
          a1[22] = qvector_reserve(v7, v5, v3, 120);
          v4 = a1[23];
        }
        if ( v4 < v3 )
        {
          si128 = _mm_load_si128((const __m128i *)((char *)&v48 + 8));
          v9 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
          v10 = _mm_load_si128((const __m128i *)((char *)&v49 + 8));
          v11 = _mm_load_si128((const __m128i *)((char *)&v50 + 8));
          v12 = DWORD2(v51);
          v13 = 120 * v4;
          do
          {
            ++v4;
            v14 = v13 + a1[22];
            v13 += 120;
            *(_DWORD *)(v14 + 96) = v12;
            *(_QWORD *)(v14 + 100) = 0;
            *(_QWORD *)(v14 + 108) = 0;
            *(_OWORD *)v14 = 0;
            *(_OWORD *)(v14 + 16) = 0;
            *(__m128i *)(v14 + 32) = v9;
            *(__m128i *)(v14 + 48) = si128;
            *(__m128i *)(v14 + 64) = v10;
            *(__m128i *)(v14 + 80) = v11;
          }
          while ( v3 != v4 );
        }
      }
      else
      {
        v53 = 0;
        v34 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
        v54 = 0;
        v35 = _mm_load_si128((const __m128i *)((char *)&v48 + 8));
        v59 = DWORD2(v51);
        v56 = v35;
        v36 = _mm_load_si128((const __m128i *)((char *)&v49 + 8));
        v60 = 0;
        v57 = v36;
        v37 = _mm_load_si128((const __m128i *)((char *)&v50 + 8));
        v61 = 0;
        v55 = v34;
        v58 = v37;
        if ( v6 < v3 )
        {
          v44 = v34;
          a1[22] = qvector_reserve(v7, v5, v3, 120);
          v4 = a1[23];
          v34 = _mm_load_si128(&v44);
        }
        if ( v4 < v3 )
        {
          v38 = v59;
          v39 = _mm_load_si128(&v56);
          v40 = _mm_load_si128(&v57);
          v41 = _mm_load_si128(&v58);
          v42 = 120 * v4;
          do
          {
            ++v4;
            v43 = v42 + a1[22];
            v42 += 120;
            *(_DWORD *)(v43 + 96) = v38;
            *(_QWORD *)(v43 + 100) = 0;
            *(_QWORD *)(v43 + 108) = 0;
            *(_OWORD *)v43 = 0;
            *(_OWORD *)(v43 + 16) = 0;
            *(__m128i *)(v43 + 32) = v34;
            *(__m128i *)(v43 + 48) = v39;
            *(__m128i *)(v43 + 64) = v40;
            *(__m128i *)(v43 + 80) = v41;
          }
          while ( v3 != v4 );
        }
      }
      a1[23] = v3;
    }
  }
  return v62 - __readfsqword(0x28u);
}
