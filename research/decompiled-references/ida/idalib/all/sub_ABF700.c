__int64 __fastcall sub_ABF700(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10,
        __int128 a11,
        __int128 a12)
{
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v16; // xmm5
  __m128i v17; // xmm6
  __m128i v18; // xmm2
  __m128i v19; // xmm3

  if ( !(_DWORD)a7 )
    goto LABEL_20;
  if ( !(_DWORD)a10 )
    goto LABEL_19;
  if ( (_DWORD)a7 == 3 )
    goto LABEL_20;
  if ( (_DWORD)a10 == 3 )
  {
LABEL_19:
    v16 = _mm_loadu_si128((const __m128i *)&a11);
    v17 = _mm_loadu_si128((const __m128i *)&a12);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&a10);
    *(__m128i *)(a1 + 16) = v16;
    *(__m128i *)(a1 + 32) = v17;
    return a1;
  }
  if ( (_DWORD)a7 == 7 )
    goto LABEL_20;
  if ( (_DWORD)a10 == 7 || (_DWORD)a7 == 4 )
    goto LABEL_19;
  if ( (_DWORD)a10 == 4 )
  {
LABEL_20:
    v18 = _mm_loadu_si128((const __m128i *)&a8);
    v19 = _mm_loadu_si128((const __m128i *)&a9);
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&a7);
    *(__m128i *)(a1 + 16) = v18;
    *(__m128i *)(a1 + 32) = v19;
    return a1;
  }
  if ( (_DWORD)a7 == 1 )
    goto LABEL_19;
  if ( (_DWORD)a10 == 1 )
    goto LABEL_20;
  if ( (_DWORD)a7 == 5 )
    goto LABEL_19;
  if ( (_DWORD)a10 == 5 )
    goto LABEL_20;
  if ( (_DWORD)a7 == 8 )
    goto LABEL_19;
  if ( (_DWORD)a10 == 8 )
    goto LABEL_20;
  if ( (_DWORD)a7 == 6 || (_DWORD)a10 == 6 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    return a1;
  }
  else
  {
    sub_ABEED0(a2, a3, *((__int64 *)&a7 + 1), a8, *((__int64 *)&a10 + 1), a11);
    v13 = *(_QWORD *)a3;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v13;
    v14 = *(unsigned int *)(a3 + 8);
    *(_OWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 40) = 0;
    return a1;
  }
}
