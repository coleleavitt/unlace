unsigned __int64 __fastcall sub_4AC680(__int64 a1)
{
  __int64 v1; // rax
  void **v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r15
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  __m128i v10; // xmm0
  char v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  int v25; // eax
  __m128i v26; // xmm0
  int v27; // eax
  __m128i v28; // xmm0
  void *v29; // rdi
  void *v30; // rdi
  void **p_ptr; // rbp
  void *v33; // r12
  void *v34; // r14
  _QWORD *v35; // rbx
  void *v36; // rdi
  void *v37; // rdi
  const void *v39; // r9
  void *v40; // rax
  const void *v41; // r9
  void *v42; // rax
  unsigned __int64 i; // [rsp+0h] [rbp-148h]
  unsigned __int64 v44; // [rsp+8h] [rbp-140h]
  __int64 v45; // [rsp+10h] [rbp-138h]
  __int64 v46; // [rsp+20h] [rbp-128h]
  const void *v47; // [rsp+20h] [rbp-128h]
  const void *v48; // [rsp+20h] [rbp-128h]
  __int64 v49; // [rsp+28h] [rbp-120h]
  _QWORD v51[4]; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v52; // [rsp+70h] [rbp-D8h] BYREF
  __m128i v53; // [rsp+80h] [rbp-C8h]
  _QWORD v54[2]; // [rsp+90h] [rbp-B8h] BYREF
  _BYTE v55[72]; // [rsp+A0h] [rbp-A8h] BYREF
  void *ptr; // [rsp+E8h] [rbp-60h] BYREF
  __int128 v57; // [rsp+F0h] [rbp-58h]
  __int64 v58; // [rsp+100h] [rbp-48h]
  unsigned __int64 v59; // [rsp+108h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  v1 = *(int *)(*(_QWORD *)(a1 + 8) + 28LL);
  v44 = *(_QWORD *)(a1 + 8);
  v54[0] = v44;
  v54[1] = v1;
  v2 = (void **)v55;
  v3 = (__int64 *)v55;
  do
  {
    *v2 = nullptr;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &ptr );
  v57 = 0;
  ptr = nullptr;
  v58 = 0;
  for ( i = 0; i < *(int *)(v44 + 28); v3 += 3 )
  {
    v4 = *(_QWORD *)(a1 + 8 * i + 56);
    v5 = *(_QWORD *)(v4 + 72);
    v51[i] = v4;
    v6 = v5;
    v45 = v5 + 144LL * *(_QWORD *)(v4 + 80);
    if ( v45 != v5 )
    {
      do
      {
        switch_dbctx(*(int *)(v44 + 4 * i + 16));
        v12 = v3[1];
        v13 = v3[2];
        if ( v13 < v12 + 1 )
        {
          v14 = qvector_reserve(v3, 0, v12 + 1, 192);
          v15 = v3[2];
          v16 = v3[1];
          v46 = v14;
          v3[2] = v13;
          v17 = *v3;
          v49 = v15;
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
              *(_QWORD *)(v17 + 40) = 0;
              *(_OWORD *)(v17 + 48) = 0;
              *(_QWORD *)(v19 + 40) = v22;
              *(_QWORD *)(v19 + 64) = 0;
              *(__m128i *)(v19 + 48) = v23;
              copy_tinfo_t(v19 + 64);
              v24 = _mm_loadu_si128((const __m128i *)(v17 + 72));
              *(_QWORD *)(v19 + 120) = *(_QWORD *)(v17 + 120);
              v25 = *(_DWORD *)(v17 + 128);
              *(__m128i *)(v19 + 72) = v24;
              v26 = _mm_loadu_si128((const __m128i *)(v17 + 88));
              *(_DWORD *)(v19 + 128) = v25;
              v27 = *(_DWORD *)(v17 + 132);
              *(__m128i *)(v19 + 88) = v26;
              v28 = _mm_loadu_si128((const __m128i *)(v17 + 104));
              *(_DWORD *)(v19 + 132) = v27;
              LOBYTE(v27) = *(_BYTE *)(v17 + 136);
              *(__m128i *)(v19 + 104) = v28;
              *(_BYTE *)(v19 + 136) = v27;
              *(_QWORD *)(v19 + 144) = *(_QWORD *)(v17 + 144);
              *(_QWORD *)(v19 + 152) = *(_QWORD *)(v17 + 152);
              *(_QWORD *)(v19 + 160) = *(_QWORD *)(v17 + 160);
              *(_QWORD *)(v19 + 168) = *(_QWORD *)(v17 + 168);
              *(_BYTE *)(v19 + 176) = *(_BYTE *)(v17 + 176);
              *(_QWORD *)(v19 + 184) = *(_QWORD *)(v17 + 184);
              clear_tinfo_t(v17 + 64);
              v29 = *(void **)(v17 + 40);
              if ( v29 )
              {
                *(_QWORD *)(v17 + 48) = 0;
                qfree(v29);
              }
              v30 = *(void **)(v17 + 16);
              if ( v30 )
              {
                *(_QWORD *)(v17 + 24) = 0;
                qfree(v30);
              }
              v17 += 192;
              v19 += 192;
            }
            while ( v18-- != 0 );
            v17 = *v3;
          }
          qfree((void *)v17);
          *v3 = v46;
          v3[2] = v49;
          v12 = v3[1];
        }
        v7 = (_QWORD *)(*v3 + 192 * v12);
        memset(v7, 0, 0xB0u);
        *((_BYTE *)v7 + 176) = 0;
        v7[14] = (char *)&dword_0 + 1;
        *((_DWORD *)v7 + 30) = -1;
        v7[18] = -1;
        v7[20] = -1;
        v7[21] = -1;
        v7[23] = -1;
        ++v3[1];
        *v7 = *(_QWORD *)v6;
        v7[1] = *(_QWORD *)(v6 + 8);
        if ( v7 + 2 != (_QWORD *)(v6 + 16) )
        {
          v8 = *(_QWORD *)(v6 + 24);
          if ( v8 > 1 )
          {
            v39 = *(const void **)(v6 + 16);
            v40 = (void *)v7[2];
            if ( v7[4] < v8 )
            {
              v47 = *(const void **)(v6 + 16);
              v40 = (void *)qvector_reserve(v7 + 2, v7[2], *(_QWORD *)(v6 + 24), 1);
              v7[2] = v40;
              v39 = v47;
            }
            v7[3] = v8;
            memmove(v40, v39, v8 - 1);
            *(_BYTE *)(v7[2] + v8 - 1) = 0;
          }
          else
          {
            v7[3] = 0;
          }
        }
        if ( v7 + 5 != (_QWORD *)(v6 + 40) )
        {
          v9 = *(_QWORD *)(v6 + 48);
          if ( v9 > 1 )
          {
            v41 = *(const void **)(v6 + 40);
            v42 = (void *)v7[5];
            if ( v7[7] < v9 )
            {
              v48 = *(const void **)(v6 + 40);
              v42 = (void *)qvector_reserve(v7 + 5, v7[5], *(_QWORD *)(v6 + 48), 1);
              v7[5] = v42;
              v41 = v48;
            }
            v7[6] = v9;
            memmove(v42, v41, v9 - 1);
            *(_BYTE *)(v7[5] + v9 - 1) = 0;
          }
          else
          {
            v7[6] = 0;
          }
        }
        copy_tinfo_t(v7 + 8);
        v10 = _mm_loadu_si128((const __m128i *)(v6 + 72));
        v6 += 144;
        *(__m128i *)(v7 + 9) = v10;
        *(__m128i *)(v7 + 11) = _mm_loadu_si128((const __m128i *)(v6 - 56));
        *(__m128i *)(v7 + 13) = _mm_loadu_si128((const __m128i *)(v6 - 40));
        *((_DWORD *)v7 + 30) = *(_DWORD *)(v6 - 24);
        *((_DWORD *)v7 + 32) = *(_DWORD *)(v6 - 16);
        *((_DWORD *)v7 + 33) = *(_DWORD *)(v6 - 12);
        v11 = *(_BYTE *)(v6 - 8);
        *((_BYTE *)v7 + 176) = 1;
        *((_BYTE *)v7 + 136) = v11;
        *((_DWORD *)v7 + 42) = i;
      }
      while ( v45 != v6 );
    }
    ++i;
  }
  v52 = (__m128i)v44;
  v53 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2CBC0), (__m128i)(unsigned __int64)sub_4929F0);
  sub_4AACE0(v54, &v52, 1);
  sub_377BA0((__int64)&v52);
  v52 = (__m128i)v44;
  v53 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2CBC8), (__m128i)(unsigned __int64)sub_493660);
  sub_4AACE0(v54, &v52, 0);
  sub_377BA0((__int64)&v52);
  sub_49EFC0(v54, v51, 1);
  if ( ptr )
  {
    *(_QWORD *)&v57 = 0;
    qfree(ptr);
  }
  p_ptr = &ptr;
  do
  {
    p_ptr -= 3;
    if ( *p_ptr )
    {
      v33 = p_ptr[1];
      v34 = nullptr;
      if ( v33 )
      {
        do
        {
          v35 = (char *)*p_ptr + 192 * (_QWORD)v34;
          clear_tinfo_t(v35 + 8);
          v36 = (void *)v35[5];
          if ( v36 )
          {
            v35[6] = 0;
            qfree(v36);
          }
          v37 = (void *)v35[2];
          if ( v37 )
          {
            v35[3] = 0;
            qfree(v37);
          }
          v34 = (char *)v34 + 1;
        }
        while ( v33 != v34 );
      }
      p_ptr[1] = nullptr;
      qfree(*p_ptr);
    }
  }
  while ( p_ptr != (void **)v55 );
  return v59 - __readfsqword(0x28u);
}
