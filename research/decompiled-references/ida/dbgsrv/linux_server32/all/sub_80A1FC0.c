/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A1FC0
// Address: 0x080A1FC0

//----- (080A1FC0) --------------------------------------------------------
void __cdecl sub_80A1FC0(int a1)
{
  int v1; // eax
  int v2; // edx
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i si128; // xmm0
  _DWORD *v6; // eax
  int v7; // eax
  char *v8; // eax
  char *v9; // eax
  void *v10; // ecx
  void *v11; // ecx
  int v12; // [esp-Ch] [ebp-34h]
  int v13; // [esp-8h] [ebp-30h]
  int v14; // [esp-4h] [ebp-2Ch]
  char *v15; // [esp+4h] [ebp-24h]
  int v16; // [esp+8h] [ebp-20h]
  _DWORD *v17; // [esp+Ch] [ebp-1Ch]
  int v18; // [esp+Ch] [ebp-1Ch]

  *(_DWORD *)(a1 + 12) = 4;
  *(_DWORD *)a1 = &off_811CAC4;
  *(_DWORD *)(a1 + 4) = -1;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 8;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v1 = operator new(0x20u);
  v2 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 56) = v1;
  v17 = (_DWORD *)(((2 * v2 - 2) & 0xFFFFFFFC) + v1);
  v3 = _mm_cvtsi32_si128(operator new(0x1E4u));
  *v17 = _mm_cvtsi128_si32(v3);
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 96) = -1;
  *(_DWORD *)(a1 + 140) = 24;
  v4 = _mm_unpacklo_epi64(
         _mm_unpacklo_epi32(v3, v3),
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v3) + 484), _mm_cvtsi32_si128((unsigned int)v17)));
  *(_DWORD *)(a1 + 188) = a1 + 180;
  *(_DWORD *)(a1 + 192) = a1 + 180;
  *(_DWORD *)(a1 + 212) = a1 + 204;
  *(_DWORD *)(a1 + 216) = a1 + 204;
  *(__m128i *)(a1 + 64) = v4;
  *(__m128i *)(a1 + 80) = v4;
  *(_OWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 104) = -1;
  *(_OWORD *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 144) = 4;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 160) = -1;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 276) = a1 + 268;
  *(_DWORD *)(a1 + 280) = a1 + 268;
  *(_DWORD *)(a1 + 324) = a1 + 316;
  *(_DWORD *)(a1 + 328) = a1 + 316;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_DWORD *)(a1 + 300) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 0;
  *(_DWORD *)(a1 + 316) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_DWORD *)(a1 + 336) = -1;
  *(_DWORD *)(a1 + 340) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_DWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 356) = 0;
  *(_DWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 364) = 0;
  *(_DWORD *)(a1 + 368) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_80DE230);
  *(_WORD *)(a1 + 452) = 0;
  *(_DWORD *)(a1 + 372) = 0;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 380) = 0;
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 0;
  *(_DWORD *)(a1 + 408) = -1;
  *(_BYTE *)(a1 + 412) = 0;
  *(_DWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 420) = 0;
  *(_DWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 428) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 440) = 0;
  *(_DWORD *)(a1 + 444) = 0;
  *(_DWORD *)(a1 + 448) = -1;
  *(__m128i *)(a1 + 392) = si128;
  v6 = sub_80CF920(a1 + 148, nullptr, 0xAu, 1u);
  *(_DWORD *)(a1 + 148) = v6;
  *(_DWORD *)(a1 + 152) = 10;
  *v6 = 1162104405;
  v6[1] = 1162758470;
  *((_BYTE *)v6 + 8) = 68;
  *(_BYTE *)(*(_DWORD *)(a1 + 148) + 9) = 0;
  v7 = sub_80A4AC0();
  if ( v7 > 7 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(2777, v12, v13, v14);
    BUG();
  }
  *(_DWORD *)(a1 + 144) = v7;
  v8 = *(char **)(a1 + 164);
  if ( v8 )
  {
    if ( *(_DWORD *)(a1 + 168) )
    {
      v16 = *(_DWORD *)(a1 + 168);
      v18 = 0;
      do
      {
        v9 = &v8[32 * v18];
        v10 = *((void **)v9 + 5);
        if ( v10 )
        {
          *((_DWORD *)v9 + 6) = 0;
          v15 = v9;
          sub_80CF780(v10);
          v9 = v15;
        }
        v11 = *((void **)v9 + 1);
        if ( v11 )
        {
          *((_DWORD *)v9 + 2) = 0;
          sub_80CF780(v11);
        }
        ++v18;
        v8 = *(char **)(a1 + 164);
      }
      while ( v16 != v18 );
    }
    *(_DWORD *)(a1 + 168) = 0;
    sub_80CF780(v8);
    *(_DWORD *)(a1 + 164) = 0;
    *(_DWORD *)(a1 + 172) = 0;
  }
}
// 80A24C3: variable 'v12' is possibly undefined
// 80A24C3: variable 'v13' is possibly undefined
// 80A24C3: variable 'v14' is possibly undefined
// 80DE230: using guessed type __int128 xmmword_80DE230;
// 811CAC4: using guessed type int (__cdecl *off_811CAC4)(int, int);
// 811F8A1: using guessed type char byte_811F8A1;
