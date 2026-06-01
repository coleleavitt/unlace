__int64 __fastcall sub_18C8370(__int64 a1, __int64 a2)
{
  const __m128i *v2; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  __int64 *m128i_i64; // r15
  __int64 *v6; // r13
  _BYTE *v7; // rsi
  __int64 *v8; // rax
  size_t v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 *v13; // rdi
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // r13
  void *v23; // rdi
  __int64 *v25; // [rsp+10h] [rbp-48h]

  v2 = *(const __m128i **)a2;
  v3 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  if ( v2 )
  {
    if ( v3 )
    {
      v4 = v3 + 96;
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *(_DWORD *)(v17 + 14976);
      if ( v18 )
      {
        v19 = (unsigned int)(v18 - 1);
        *(_DWORD *)(v17 + 14976) = v19;
        v3 = *(_QWORD *)(v17 + 8 * v19 + 14848);
        v20 = *(unsigned int *)(v3 + 536);
        *(_BYTE *)v3 = 0;
        v21 = *(_QWORD *)(v3 + 528);
        *(_DWORD *)(v3 + 424) = 0;
        v22 = v21 + (v20 << 6);
        while ( v21 != v22 )
        {
          while ( 1 )
          {
            v22 -= 64;
            v23 = *(void **)(v22 + 24);
            if ( v23 == (void *)(v22 + 40) )
              break;
            operator delete(v23);
            if ( v21 == v22 )
              goto LABEL_41;
          }
        }
LABEL_41:
        *(_DWORD *)(v3 + 536) = 0;
        v4 = v3 + 96;
      }
      else
      {
        v3 = operator new(0x3A0u);
        *(_BYTE *)v3 = 0;
        v4 = v3 + 96;
        *(_QWORD *)(v3 + 96) = v3 + 112;
        *(_QWORD *)(v3 + 128) = v3 + 144;
        *(_QWORD *)(v3 + 160) = v3 + 176;
        *(_QWORD *)(v3 + 192) = v3 + 208;
        *(_QWORD *)(v3 + 224) = v3 + 240;
        *(_QWORD *)(v3 + 256) = v3 + 272;
        *(_QWORD *)(v3 + 288) = v3 + 304;
        *(_QWORD *)(v3 + 320) = v3 + 336;
        *(_QWORD *)(v3 + 352) = v3 + 368;
        *(_QWORD *)(v3 + 384) = v3 + 400;
        *(_QWORD *)(v3 + 416) = v3 + 432;
        *(_QWORD *)(v3 + 104) = 0;
        *(_BYTE *)(v3 + 112) = 0;
        *(_QWORD *)(v3 + 136) = 0;
        *(_BYTE *)(v3 + 144) = 0;
        *(_QWORD *)(v3 + 168) = 0;
        *(_BYTE *)(v3 + 176) = 0;
        *(_QWORD *)(v3 + 200) = 0;
        *(_BYTE *)(v3 + 208) = 0;
        *(_QWORD *)(v3 + 232) = 0;
        *(_BYTE *)(v3 + 240) = 0;
        *(_QWORD *)(v3 + 264) = 0;
        *(_BYTE *)(v3 + 272) = 0;
        *(_QWORD *)(v3 + 296) = 0;
        *(_BYTE *)(v3 + 304) = 0;
        *(_QWORD *)(v3 + 328) = 0;
        *(_BYTE *)(v3 + 336) = 0;
        *(_QWORD *)(v3 + 360) = 0;
        *(_BYTE *)(v3 + 368) = 0;
        *(_QWORD *)(v3 + 392) = 0;
        *(_BYTE *)(v3 + 400) = 0;
        *(_QWORD *)(v3 + 424) = 0x800000000LL;
        *(_QWORD *)(v3 + 528) = v3 + 544;
        *(_QWORD *)(v3 + 536) = 0x600000000LL;
      }
      *(_QWORD *)a1 = v3;
      v2 = *(const __m128i **)a2;
    }
    *(_BYTE *)v3 = v2->m128i_i8[0];
    *(_BYTE *)(v3 + 1) = v2->m128i_i8[1];
    *(_BYTE *)(v3 + 2) = v2->m128i_i8[2];
    *(_BYTE *)(v3 + 3) = v2->m128i_i8[3];
    *(_BYTE *)(v3 + 4) = v2->m128i_i8[4];
    *(_BYTE *)(v3 + 5) = v2->m128i_i8[5];
    *(_BYTE *)(v3 + 6) = v2->m128i_i8[6];
    *(_BYTE *)(v3 + 7) = v2->m128i_i8[7];
    *(_BYTE *)(v3 + 8) = v2->m128i_i8[8];
    *(_BYTE *)(v3 + 9) = v2->m128i_i8[9];
    *(_BYTE *)(v3 + 10) = v2->m128i_i8[10];
    if ( v3 + 16 < (unsigned __int64)&v2[2] && (unsigned __int64)&v2[1] < v3 + 32 )
    {
      *(_QWORD *)(v3 + 16) = v2[1].m128i_i64[0];
      *(_QWORD *)(v3 + 24) = v2[1].m128i_i64[1];
      *(_QWORD *)(v3 + 32) = v2[2].m128i_i64[0];
      *(_QWORD *)(v3 + 40) = v2[2].m128i_i64[1];
      *(_QWORD *)(v3 + 48) = v2[3].m128i_i64[0];
      *(_QWORD *)(v3 + 56) = v2[3].m128i_i64[1];
      *(_QWORD *)(v3 + 64) = v2[4].m128i_i64[0];
      *(_QWORD *)(v3 + 72) = v2[4].m128i_i64[1];
      *(_QWORD *)(v3 + 80) = v2[5].m128i_i64[0];
      *(_QWORD *)(v3 + 88) = v2[5].m128i_i64[1];
    }
    else
    {
      *(__m128i *)(v3 + 16) = _mm_loadu_si128(v2 + 1);
      *(__m128i *)(v3 + 32) = _mm_loadu_si128(v2 + 2);
      *(__m128i *)(v3 + 48) = _mm_loadu_si128(v2 + 3);
      *(__m128i *)(v3 + 64) = _mm_loadu_si128(v2 + 4);
      *(__m128i *)(v3 + 80) = _mm_loadu_si128(v2 + 5);
    }
    m128i_i64 = v2[6].m128i_i64;
    v6 = (__int64 *)(v4 + 16);
    do
    {
      if ( m128i_i64 != v6 - 2 )
      {
        v8 = (__int64 *)*(v6 - 2);
        v9 = m128i_i64[1];
        if ( v8 == v6 )
          v10 = 15;
        else
          v10 = *v6;
        if ( v9 > v10 )
        {
          if ( (v9 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v11 = 2 * v10;
          if ( v9 < v11 )
          {
            v12 = v11 + 1;
            if ( v11 < 0 )
            {
              v12 = 0x8000000000000000LL;
              v11 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v12 = v9 + 1;
            v11 = m128i_i64[1];
          }
          v8 = (__int64 *)operator new(v12);
          v13 = (__int64 *)*(v6 - 2);
          if ( v13 != v6 )
          {
            v25 = v8;
            operator delete(v13);
            v8 = v25;
          }
          *(v6 - 2) = (__int64)v8;
          *v6 = v11;
        }
        if ( v9 )
        {
          v7 = (_BYTE *)*m128i_i64;
          if ( v9 == 1 )
            *(_BYTE *)v8 = *v7;
          else
            memcpy(v8, v7, v9);
          v8 = (__int64 *)*(v6 - 2);
        }
        *(v6 - 1) = v9;
        *((_BYTE *)v8 + v9) = 0;
      }
      m128i_i64 += 4;
      v6 += 4;
    }
    while ( m128i_i64 != (__int64 *)&v2[26] );
    sub_E32260((__int64 *)(v3 + 416), m128i_i64);
    sub_9EED30(v3 + 528, v2[33].m128i_i64);
  }
  else if ( v3 )
  {
    v16 = *(_QWORD *)(a1 + 8);
    if ( v16 )
    {
      sub_1580C40(v16, v3);
      *(_QWORD *)a1 = 0;
    }
  }
  return a1;
}
