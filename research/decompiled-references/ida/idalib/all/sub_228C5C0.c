__int64 __fastcall sub_228C5C0(int fildes, __int64 a2)
{
  unsigned int v3; // ebp
  int v4; // edx
  __m128i v5; // xmm0
  __m128i v6; // xmm4
  int v7; // eax
  __m128i v8; // xmm5
  __m128i v9; // xmm2
  std::_V2 *v10; // rdi
  __ino_t st_ino; // rcx
  __nlink_t st_nlink; // rsi
  __m128 v13; // xmm3
  __m128 v14; // xmm0
  __time_t tv_sec; // [rsp+8h] [rbp-B0h] BYREF
  struct stat stat_buf; // [rsp+10h] [rbp-A8h] BYREF

  if ( __fxstat((int)&dword_0 + 1, fildes, &stat_buf) )
  {
    std::_V2::generic_category((std::_V2 *)((char *)&dword_0 + 1));
    v3 = *__errno_location();
    *(_OWORD *)a2 = 0;
    *(_OWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    *(_OWORD *)(a2 + 48) = 0;
    if ( v3 == 2 )
      *(_QWORD *)(a2 + 40) = 0xFFFF00000001LL;
    else
      *(_QWORD *)(a2 + 40) = 0xFFFF00000000LL;
    *(_QWORD *)(a2 + 64) = 0;
  }
  else
  {
    v3 = 0;
    v4 = 3;
    v5 = _mm_loadl_epi64((const __m128i *)&stat_buf.st_atim.tv_nsec);
    v6 = _mm_loadl_epi64((const __m128i *)&stat_buf.st_mtim.tv_nsec);
    v7 = stat_buf.st_mode & 0xF000;
    v8 = _mm_cvtsi32_si128(stat_buf.st_gid);
    v9 = _mm_cvtsi32_si128(stat_buf.st_uid);
    v10 = (std::_V2 *)(stat_buf.st_mode & 0xFFF);
    st_ino = stat_buf.st_ino;
    st_nlink = stat_buf.st_nlink;
    if ( v7 != 0x4000 )
    {
      v4 = 2;
      if ( v7 != 0x8000 )
      {
        v4 = 5;
        if ( v7 != 24576 )
        {
          v4 = 6;
          if ( v7 != 0x2000 )
          {
            v4 = 7;
            if ( v7 != 4096 )
            {
              v4 = 8;
              if ( v7 != 49152 )
                v4 = 5 * (v7 != 40960) + 4;
            }
          }
        }
      }
    }
    tv_sec = stat_buf.st_mtim.tv_sec;
    *(_QWORD *)(a2 + 32) = stat_buf.st_size;
    *(__m128i *)(a2 + 16) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v5, v6), _mm_unpacklo_epi32(v9, v8));
    v13 = _mm_loadh_ps((const double *)&tv_sec);
    tv_sec = st_nlink;
    *(_DWORD *)(a2 + 40) = v4;
    *(_DWORD *)(a2 + 44) = (_DWORD)v10;
    *(_QWORD *)(a2 + 64) = st_ino;
    v14 = _mm_loadh_ps((const double *)&tv_sec);
    *(__m128 *)a2 = v13;
    *(__m128 *)(a2 + 48) = v14;
    std::_V2::system_category(v10);
  }
  return v3;
}
