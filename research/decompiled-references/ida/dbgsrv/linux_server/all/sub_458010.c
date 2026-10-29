/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458010
// Address: 0x0000000000458010

//----- (0000000000458010) ----------------------------------------------------
void __fastcall sub_458010(__int64 a1)
{
  __m128i si128; // xmm0
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 *v5; // rbp
  unsigned __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  _BYTE *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edx
  char *v14; // rdi
  __int64 v15; // r13
  __int64 i; // r12
  char *v17; // rbp
  void *v18; // rdi
  void *v19; // rdi

  si128 = _mm_load_si128((const __m128i *)&xmmword_48F510);
  *(_QWORD *)a1 = off_4C45E8;
  *(_QWORD *)(a1 + 24) = -1;
  *(_DWORD *)(a1 + 32) = 8;
  *(_BYTE *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 8;
  *(__m128i *)(a1 + 8) = si128;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v3 = operator new(0x40u);
  v4 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 120) = v3;
  v5 = (unsigned __int64 *)(v3 + ((4 * v4 - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v6 = operator new(0x1F8u);
  *v5 = v6;
  v7 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  *(__m128i *)(a1 + 136) = v7;
  *(__m128i *)(a1 + 168) = v7;
  *(_QWORD *)(a1 + 208) = -1;
  v8 = _mm_unpacklo_epi64((__m128i)(v6 + 504), (__m128i)(unsigned __int64)v5);
  *(_QWORD *)(a1 + 200) = 0xFFFFFFFFLL;
  *(__m128i *)(a1 + 152) = v8;
  *(_QWORD *)(a1 + 272) = 0x800000028LL;
  *(__m128i *)(a1 + 184) = v8;
  *(_QWORD *)(a1 + 360) = a1 + 344;
  *(_QWORD *)(a1 + 368) = a1 + 344;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 408) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 392;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 304) = -1;
  *(_QWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_OWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  *(_OWORD *)(a1 + 440) = 0;
  *(_OWORD *)(a1 + 464) = 0;
  v9 = _mm_load_si128((const __m128i *)&xmmword_48F5B0);
  *(_QWORD *)(a1 + 536) = a1 + 520;
  *(_QWORD *)(a1 + 544) = a1 + 520;
  *(_DWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_DWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = a1 + 616;
  *(_QWORD *)(a1 + 640) = a1 + 616;
  *(_QWORD *)(a1 + 648) = 0;
  *(_DWORD *)(a1 + 656) = -1;
  *(_QWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 744) = 0;
  *(_DWORD *)(a1 + 768) = 1;
  *(_BYTE *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 808) = 0;
  *(_OWORD *)(a1 + 480) = 0;
  *(_OWORD *)(a1 + 496) = 0;
  *(_OWORD *)(a1 + 568) = 0;
  *(_OWORD *)(a1 + 592) = 0;
  *(_OWORD *)(a1 + 664) = 0;
  *(_OWORD *)(a1 + 680) = 0;
  *(_OWORD *)(a1 + 704) = 0;
  *(_OWORD *)(a1 + 728) = 0;
  *(_OWORD *)(a1 + 752) = 0;
  *(__m128i *)(a1 + 776) = v9;
  *(_OWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_DWORD *)(a1 + 856) = -1;
  *(_WORD *)(a1 + 860) = 0;
  *(_OWORD *)(a1 + 840) = 0;
  v10 = sub_481540(a1 + 280, nullptr, 0xAu, 1u);
  *(_QWORD *)(a1 + 280) = v10;
  *(_QWORD *)(a1 + 288) = 10;
  *(_QWORD *)v10 = 0x454E494645444E55LL;
  v10[8] = 68;
  *(_BYTE *)(*(_QWORD *)(a1 + 280) + 9LL) = 0;
  v11 = sub_45A730();
  if ( *(_BYTE *)(a1 + 36) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13 = 4;
    if ( v11 == 8 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      v13 = 8;
    }
    *(_QWORD *)(a1 + 24) = v12;
    *(_DWORD *)(a1 + 32) = v13;
  }
  v14 = *(char **)(a1 + 312);
  *(_DWORD *)(a1 + 276) = v11;
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 320);
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = &v14[64 * i];
        v18 = *((void **)v17 + 5);
        if ( v18 )
        {
          *((_QWORD *)v17 + 6) = 0;
          j__free(v18);
        }
        v19 = *((void **)v17 + 1);
        if ( v19 )
        {
          *((_QWORD *)v17 + 2) = 0;
          j__free(v19);
        }
        v14 = *(char **)(a1 + 312);
      }
    }
    *(_QWORD *)(a1 + 320) = 0;
    j__free(v14);
    *(_QWORD *)(a1 + 312) = 0;
    *(_QWORD *)(a1 + 328) = 0;
  }
}
// 48F510: using guessed type __int128 xmmword_48F510;
// 48F5B0: using guessed type __int128 xmmword_48F5B0;
// 4C45E8: using guessed type __int64 (__fastcall *off_4C45E8[4])();
