__int64 __fastcall sub_1582CA0(__int64 a1, _BYTE **a2)
{
  bool v2; // zf
  __int64 result; // rax
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // rbp
  const __m128i *v8; // r14
  unsigned __int64 v9; // rdx
  __int64 *m128i_i64; // r15
  __int64 *v11; // rbp
  _BYTE *v12; // rsi
  __int64 *v13; // rax
  size_t v14; // r13
  unsigned __int64 v15; // r12
  __int64 v16; // r12
  unsigned __int64 v17; // rdi
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rbp
  void *v23; // rdi
  __int64 *v24; // [rsp+8h] [rbp-40h]

  *(_OWORD *)a1 = 0;
  v2 = *a2 == nullptr;
  *(_DWORD *)(a1 + 16) = *((_DWORD *)a2 + 4);
  result = (__int64)a2[1];
  *(_QWORD *)(a1 + 8) = result;
  if ( !v2 )
  {
    v5 = *(_DWORD *)(result + 14976);
    if ( v5 )
    {
      v19 = (unsigned int)(v5 - 1);
      *(_DWORD *)(result + 14976) = v19;
      v6 = *(_QWORD *)(result + 8 * v19 + 14848);
      v20 = *(unsigned int *)(v6 + 536);
      *(_BYTE *)v6 = 0;
      v21 = *(_QWORD *)(v6 + 528);
      *(_DWORD *)(v6 + 424) = 0;
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
            goto LABEL_28;
        }
      }
LABEL_28:
      *(_DWORD *)(v6 + 536) = 0;
      v7 = v6 + 96;
    }
    else
    {
      v6 = operator new(0x3A0u);
      *(_BYTE *)v6 = 0;
      v7 = v6 + 96;
      *(_QWORD *)(v6 + 96) = v6 + 112;
      *(_QWORD *)(v6 + 128) = v6 + 144;
      *(_QWORD *)(v6 + 160) = v6 + 176;
      *(_QWORD *)(v6 + 192) = v6 + 208;
      *(_QWORD *)(v6 + 224) = v6 + 240;
      *(_QWORD *)(v6 + 256) = v6 + 272;
      *(_QWORD *)(v6 + 288) = v6 + 304;
      *(_QWORD *)(v6 + 320) = v6 + 336;
      *(_QWORD *)(v6 + 352) = v6 + 368;
      *(_QWORD *)(v6 + 384) = v6 + 400;
      *(_QWORD *)(v6 + 416) = v6 + 432;
      *(_QWORD *)(v6 + 104) = 0;
      *(_BYTE *)(v6 + 112) = 0;
      *(_QWORD *)(v6 + 136) = 0;
      *(_BYTE *)(v6 + 144) = 0;
      *(_QWORD *)(v6 + 168) = 0;
      *(_BYTE *)(v6 + 176) = 0;
      *(_QWORD *)(v6 + 200) = 0;
      *(_BYTE *)(v6 + 208) = 0;
      *(_QWORD *)(v6 + 232) = 0;
      *(_BYTE *)(v6 + 240) = 0;
      *(_QWORD *)(v6 + 264) = 0;
      *(_BYTE *)(v6 + 272) = 0;
      *(_QWORD *)(v6 + 296) = 0;
      *(_BYTE *)(v6 + 304) = 0;
      *(_QWORD *)(v6 + 328) = 0;
      *(_BYTE *)(v6 + 336) = 0;
      *(_QWORD *)(v6 + 360) = 0;
      *(_BYTE *)(v6 + 368) = 0;
      *(_QWORD *)(v6 + 392) = 0;
      *(_BYTE *)(v6 + 400) = 0;
      *(_QWORD *)(v6 + 424) = 0x800000000LL;
      *(_QWORD *)(v6 + 528) = v6 + 544;
      *(_QWORD *)(v6 + 536) = 0x600000000LL;
    }
    *(_QWORD *)a1 = v6;
    v8 = (const __m128i *)*a2;
    v9 = (unsigned __int64)(*a2 + 16);
    *(_BYTE *)v6 = **a2;
    *(_BYTE *)(v6 + 1) = v8->m128i_i8[1];
    *(_BYTE *)(v6 + 2) = v8->m128i_i8[2];
    *(_BYTE *)(v6 + 3) = v8->m128i_i8[3];
    *(_BYTE *)(v6 + 4) = v8->m128i_i8[4];
    *(_BYTE *)(v6 + 5) = v8->m128i_i8[5];
    *(_BYTE *)(v6 + 6) = v8->m128i_i8[6];
    *(_BYTE *)(v6 + 7) = v8->m128i_i8[7];
    *(_BYTE *)(v6 + 8) = v8->m128i_i8[8];
    *(_BYTE *)(v6 + 9) = v8->m128i_i8[9];
    *(_BYTE *)(v6 + 10) = v8->m128i_i8[10];
    if ( v9 < v6 + 32 && v6 + 16 < (unsigned __int64)&v8[2] )
    {
      *(_QWORD *)(v6 + 16) = v8[1].m128i_i64[0];
      *(_QWORD *)(v6 + 24) = v8[1].m128i_i64[1];
      *(_QWORD *)(v6 + 32) = v8[2].m128i_i64[0];
      *(_QWORD *)(v6 + 40) = v8[2].m128i_i64[1];
      *(_QWORD *)(v6 + 48) = v8[3].m128i_i64[0];
      *(_QWORD *)(v6 + 56) = v8[3].m128i_i64[1];
      *(_QWORD *)(v6 + 64) = v8[4].m128i_i64[0];
      *(_QWORD *)(v6 + 72) = v8[4].m128i_i64[1];
      *(_QWORD *)(v6 + 80) = v8[5].m128i_i64[0];
      *(_QWORD *)(v6 + 88) = v8[5].m128i_i64[1];
    }
    else
    {
      *(__m128i *)(v6 + 16) = _mm_loadu_si128(v8 + 1);
      *(__m128i *)(v6 + 32) = _mm_loadu_si128(v8 + 2);
      *(__m128i *)(v6 + 48) = _mm_loadu_si128(v8 + 3);
      *(__m128i *)(v6 + 64) = _mm_loadu_si128(v8 + 4);
      *(__m128i *)(v6 + 80) = _mm_loadu_si128(v8 + 5);
    }
    m128i_i64 = v8[6].m128i_i64;
    v11 = (__int64 *)(v7 + 16);
    do
    {
      if ( m128i_i64 != v11 - 2 )
      {
        v13 = (__int64 *)*(v11 - 2);
        v14 = m128i_i64[1];
        if ( v13 == v11 )
          v15 = 15;
        else
          v15 = *v11;
        if ( v14 > v15 )
        {
          if ( (v14 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v16 = 2 * v15;
          if ( v14 < v16 )
          {
            v17 = v16 + 1;
            if ( v16 < 0 )
            {
              v17 = 0x8000000000000000LL;
              v16 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v17 = v14 + 1;
            v16 = m128i_i64[1];
          }
          v13 = (__int64 *)operator new(v17);
          v18 = (__int64 *)*(v11 - 2);
          if ( v18 != v11 )
          {
            v24 = v13;
            operator delete(v18);
            v13 = v24;
          }
          *(v11 - 2) = (__int64)v13;
          *v11 = v16;
        }
        if ( v14 )
        {
          v12 = (_BYTE *)*m128i_i64;
          if ( v14 == 1 )
            *(_BYTE *)v13 = *v12;
          else
            memcpy(v13, v12, v14);
          v13 = (__int64 *)*(v11 - 2);
        }
        *(v11 - 1) = v14;
        *((_BYTE *)v13 + v14) = 0;
      }
      m128i_i64 += 4;
      v11 += 4;
    }
    while ( m128i_i64 != (__int64 *)&v8[26] );
    sub_E32260((__int64 *)(v6 + 416), m128i_i64);
    return sub_9EED30(v6 + 528, v8[33].m128i_i64);
  }
  return result;
}
