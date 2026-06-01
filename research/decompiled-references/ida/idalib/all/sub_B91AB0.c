__int64 __fastcall sub_B91AB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r9
  bool v14; // dl
  bool v15; // cl
  __int64 v16; // rdx
  __int64 v17; // r14
  int v18; // eax
  const __m128i *v19; // r15
  const __m128i *v20; // r12
  __int64 v21; // r13
  _BYTE *v22; // rsi
  _BYTE *v23; // rax
  size_t v24; // r11
  unsigned __int64 v25; // rbp
  __int64 v26; // rbp
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int32 v30; // ebp
  _BYTE *v31; // rdi
  char *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rcx
  char *v36; // rsi
  __int64 v37; // rdx
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rax
  size_t v42; // [rsp+8h] [rbp-50h]
  size_t v43; // [rsp+8h] [rbp-50h]
  _BYTE *v44; // [rsp+10h] [rbp-48h]
  unsigned __int64 v45; // [rsp+18h] [rbp-40h]

  v7 = (unsigned __int64 *)sub_B91570(a2, a2, a3, a4, a5, a6);
  v45 = *v7;
  if ( !*v7 )
  {
    sub_B8EF10(v7, (__int64)a1);
    v45 = *v7;
  }
  v9 = a1[294];
  v10 = *(_QWORD *)a3;
  v11 = a1[304];
  v12 = a1[295];
  v13 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v9 != 0;
  v15 = v14;
  if ( *(_QWORD *)a3 )
  {
    a1[304] = v11 + 928;
    if ( v13 + 928 <= v12 && v14 )
    {
      a1[294] = v13 + 928;
      v10 = v13;
    }
    else
    {
      v10 = sub_986170((__int64)(a1 + 294), 928, 928, 3, v8, v13);
    }
    *(_BYTE *)v10 = 0;
    *(_QWORD *)(v10 + 96) = v10 + 112;
    *(_QWORD *)(v10 + 128) = v10 + 144;
    *(_QWORD *)(v10 + 160) = v10 + 176;
    *(_QWORD *)(v10 + 192) = v10 + 208;
    *(_QWORD *)(v10 + 224) = v10 + 240;
    *(_QWORD *)(v10 + 256) = v10 + 272;
    *(_QWORD *)(v10 + 288) = v10 + 304;
    *(_QWORD *)(v10 + 320) = v10 + 336;
    *(_QWORD *)(v10 + 352) = v10 + 368;
    *(_QWORD *)(v10 + 384) = v10 + 400;
    *(_QWORD *)(v10 + 416) = v10 + 432;
    *(_QWORD *)(v10 + 104) = 0;
    *(_BYTE *)(v10 + 112) = 0;
    *(_QWORD *)(v10 + 136) = 0;
    *(_BYTE *)(v10 + 144) = 0;
    *(_QWORD *)(v10 + 168) = 0;
    *(_BYTE *)(v10 + 176) = 0;
    *(_QWORD *)(v10 + 200) = 0;
    *(_BYTE *)(v10 + 208) = 0;
    *(_QWORD *)(v10 + 232) = 0;
    *(_BYTE *)(v10 + 240) = 0;
    *(_QWORD *)(v10 + 264) = 0;
    *(_BYTE *)(v10 + 272) = 0;
    *(_QWORD *)(v10 + 296) = 0;
    *(_BYTE *)(v10 + 304) = 0;
    *(_QWORD *)(v10 + 328) = 0;
    *(_BYTE *)(v10 + 336) = 0;
    *(_QWORD *)(v10 + 360) = 0;
    *(_BYTE *)(v10 + 368) = 0;
    *(_QWORD *)(v10 + 392) = 0;
    *(_BYTE *)(v10 + 400) = 0;
    *(_QWORD *)(v10 + 424) = 0x800000000LL;
    *(_QWORD *)(v10 + 528) = v10 + 544;
    *(_QWORD *)(v10 + 536) = 0x600000000LL;
    v16 = a1[294];
    v11 = a1[304];
    v12 = a1[295];
    v13 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v15 = v16 != 0;
  }
  a1[304] = v11 + 64;
  if ( v13 + 64 <= v12 && v15 )
  {
    a1[294] = v13 + 64;
    v17 = v13;
  }
  else
  {
    v17 = sub_986170((__int64)(a1 + 294), 64, 64, 3, v8, v13);
  }
  v18 = *(_DWORD *)(a3 + 16);
  *(_QWORD *)(v17 + 8) = v10;
  v19 = *(const __m128i **)a3;
  *(_QWORD *)(v17 + 16) = -1;
  *(_DWORD *)(v17 + 24) = v18;
  if ( v19 )
  {
    *(_BYTE *)v10 = v19->m128i_i8[0];
    *(_BYTE *)(v10 + 1) = v19->m128i_i8[1];
    *(_BYTE *)(v10 + 2) = v19->m128i_i8[2];
    *(_BYTE *)(v10 + 3) = v19->m128i_i8[3];
    *(_BYTE *)(v10 + 4) = v19->m128i_i8[4];
    *(_BYTE *)(v10 + 5) = v19->m128i_i8[5];
    *(_BYTE *)(v10 + 6) = v19->m128i_i8[6];
    *(_BYTE *)(v10 + 7) = v19->m128i_i8[7];
    *(_BYTE *)(v10 + 8) = v19->m128i_i8[8];
    *(_BYTE *)(v10 + 9) = v19->m128i_i8[9];
    *(_BYTE *)(v10 + 10) = v19->m128i_i8[10];
    if ( v10 + 16 < (unsigned __int64)&v19[2] && (unsigned __int64)&v19[1] < v10 + 32 )
    {
      *(_QWORD *)(v10 + 16) = v19[1].m128i_i64[0];
      *(_QWORD *)(v10 + 24) = v19[1].m128i_i64[1];
      *(_QWORD *)(v10 + 32) = v19[2].m128i_i64[0];
      *(_QWORD *)(v10 + 40) = v19[2].m128i_i64[1];
      *(_QWORD *)(v10 + 48) = v19[3].m128i_i64[0];
      *(_QWORD *)(v10 + 56) = v19[3].m128i_i64[1];
      *(_QWORD *)(v10 + 64) = v19[4].m128i_i64[0];
      *(_QWORD *)(v10 + 72) = v19[4].m128i_i64[1];
      *(_QWORD *)(v10 + 80) = v19[5].m128i_i64[0];
      *(_QWORD *)(v10 + 88) = v19[5].m128i_i64[1];
    }
    else
    {
      *(__m128i *)(v10 + 16) = _mm_loadu_si128(v19 + 1);
      *(__m128i *)(v10 + 32) = _mm_loadu_si128(v19 + 2);
      *(__m128i *)(v10 + 48) = _mm_loadu_si128(v19 + 3);
      *(__m128i *)(v10 + 64) = _mm_loadu_si128(v19 + 4);
      *(__m128i *)(v10 + 80) = _mm_loadu_si128(v19 + 5);
    }
    v20 = v19 + 6;
    v21 = v10 + 96;
    do
    {
      if ( (const __m128i *)v21 != v20 )
      {
        v23 = *(_BYTE **)v21;
        v24 = v20->m128i_u64[1];
        if ( *(_QWORD *)v21 == v21 + 16 )
          v25 = 15;
        else
          v25 = *(_QWORD *)(v21 + 16);
        if ( v24 > v25 )
        {
          if ( (v24 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v26 = 2 * v25;
          if ( v24 < v26 )
          {
            v27 = v26 + 1;
            if ( v26 < 0 )
            {
              v27 = 0x8000000000000000LL;
              v26 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v27 = v24 + 1;
            v26 = v20->m128i_i64[1];
          }
          v43 = v20->m128i_u64[1];
          v23 = (_BYTE *)operator new(v27);
          v24 = v43;
          if ( *(_QWORD *)v21 != v21 + 16 )
          {
            v44 = v23;
            operator delete(*(void **)v21);
            v23 = v44;
            v24 = v43;
          }
          *(_QWORD *)v21 = v23;
          *(_QWORD *)(v21 + 16) = v26;
        }
        if ( v24 )
        {
          v22 = (_BYTE *)v20->m128i_i64[0];
          if ( v24 == 1 )
          {
            *v23 = *v22;
            v23 = *(_BYTE **)v21;
          }
          else
          {
            v42 = v24;
            memcpy(v23, v22, v24);
            v23 = *(_BYTE **)v21;
            v24 = v42;
          }
        }
        *(_QWORD *)(v21 + 8) = v24;
        v23[v24] = 0;
      }
      v20 += 2;
      v21 += 32;
    }
    while ( v20 != &v19[26] );
    if ( (const __m128i *)(v10 + 416) != v20 )
    {
      v28 = v19[26].m128i_u32[2];
      v29 = *(unsigned int *)(v10 + 424);
      v30 = v19[26].m128i_i32[2];
      if ( v28 <= v29 )
      {
        if ( v19[26].m128i_i32[2] )
        {
          v39 = *(_QWORD *)(v10 + 416);
          v40 = v19[26].m128i_i64[0];
          v41 = 0;
          do
          {
            *(_QWORD *)(v39 + v41) = *(_QWORD *)(v40 + v41);
            *(_BYTE *)(v39 + v41 + 8) = *(_BYTE *)(v40 + v41 + 8);
            v41 += 12;
          }
          while ( 12 * v28 != v41 );
        }
      }
      else
      {
        if ( v28 > *(unsigned int *)(v10 + 428) )
        {
          *(_DWORD *)(v10 + 424) = 0;
          sub_2237220(v10 + 416, v10 + 432, v28, 12);
          v32 = (char *)v19[26].m128i_i64[0];
          v31 = *(_BYTE **)(v10 + 416);
          v35 = 0;
          v28 = v19[26].m128i_u32[2];
          v36 = v32;
        }
        else
        {
          v31 = *(_BYTE **)(v10 + 416);
          v32 = (char *)v19[26].m128i_i64[0];
          if ( *(_DWORD *)(v10 + 424) )
          {
            v33 = 0;
            v34 = 12 * v29;
            v35 = 12 * v29;
            do
            {
              *(_QWORD *)&v31[v33] = *(_QWORD *)&v32[v33];
              v31[v33 + 8] = v32[v33 + 8];
              v33 += 12;
            }
            while ( v33 != v34 );
            v28 = v19[26].m128i_u32[2];
            v31 += v33;
            v36 = &v32[v33];
          }
          else
          {
            v36 = (char *)v19[26].m128i_i64[0];
            v35 = 0;
          }
        }
        v37 = 12 * v28;
        if ( v36 != &v32[v37] )
          memcpy(v31, v36, v37 - v35);
      }
      *(_DWORD *)(v10 + 424) = v30;
    }
    sub_9EED30(v10 + 528, v19[33].m128i_i64);
  }
  *(_DWORD *)(v17 + 32) = 0;
  *(_QWORD *)v17 = *(_QWORD *)(v45 + 80);
  *(_QWORD *)(v45 + 80) = v17;
  return v17;
}
