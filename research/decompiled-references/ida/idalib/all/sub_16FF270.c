unsigned __int64 __fastcall sub_16FF270(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        __int128 a7)
{
  __m128i v9; // xmm1
  __m128 v10; // xmm0
  __m128i v11; // xmm2
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __m128i v15; // xmm3
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  double v20[5]; // [rsp+0h] [rbp-28h] BYREF

  *(_OWORD *)a1 = 0;
  *(_QWORD *)&v20[0] = a3;
  v9 = _mm_loadu_si128((const __m128i *)&a7);
  *(_QWORD *)&v20[1] = a2;
  *(_QWORD *)(a1 + 24) = a1 + 48;
  v10 = _mm_loadh_ps(v20);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 16;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 1;
  *(__m128 *)(a1 + 176) = v10;
  *(_QWORD *)(a1 + 192) = a4;
  *(__m128i *)(a1 + 200) = v9;
  *(_BYTE *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 240) = a1 + 232;
  *(_QWORD *)(a1 + 232) = a1 + 232;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 292) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 304) = *a5;
  *(_BYTE *)(a1 + 308) = *((_BYTE *)a5 + 4);
  *(_QWORD *)(a1 + 312) = *((_QWORD *)a5 + 1);
  *(_QWORD *)(a1 + 320) = *((_QWORD *)a5 + 2);
  v11 = _mm_loadu_si128((const __m128i *)(a5 + 6));
  *(_BYTE *)(a1 + 392) = 0;
  *(__m128i *)(a1 + 328) = v11;
  if ( *((_BYTE *)a5 + 88) )
  {
    v14 = a1 + 352;
    *(_QWORD *)(v14 - 8) = *((_QWORD *)a5 + 5);
    sub_E90750(v14, (__int64 *)a5 + 6);
    v15 = _mm_loadu_si128((const __m128i *)(a5 + 18));
    *(_BYTE *)(a1 + 392) = 1;
    *(__m128i *)(a1 + 376) = v15;
  }
  sub_2236890(a1 + 400, a1 + 424, a5 + 24);
  *(_QWORD *)(a1 + 488) = 0;
  result = *a5;
  if ( (unsigned int)result <= 0x26 )
  {
    v13 = 0x5020000380LL;
    if ( _bittest64(&v13, result) )
    {
      result = sub_15F1670(a2);
      if ( result )
      {
        if ( (*(_BYTE *)(result + 58) & 2) != 0 )
        {
          result = sub_BA85D0(result);
          if ( result )
          {
            result = sub_BAC6C0(result, a1 + 424, v16, v17, v18, v19);
            *(_QWORD *)(a1 + 488) = result;
          }
        }
      }
    }
  }
  return result;
}
