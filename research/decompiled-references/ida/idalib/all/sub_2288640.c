__int64 __fastcall sub_2288640(size_t *a1, __int64 a2)
{
  char *v3; // rdi
  unsigned int v4; // r12d
  int v5; // edx
  __m128i v6; // xmm0
  __m128i v7; // xmm4
  int v8; // eax
  __m128i v9; // xmm5
  __m128i v10; // xmm2
  std::_V2 *v11; // rdi
  __ino_t st_ino; // rcx
  __nlink_t st_nlink; // rsi
  __m128 v14; // xmm3
  __m128 v15; // xmm0
  __time_t tv_sec; // [rsp+8h] [rbp-160h] BYREF
  struct stat stat_buf; // [rsp+10h] [rbp-158h] BYREF
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-C0h]
  _BYTE v21[176]; // [rsp+B8h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v21;
  v3 = (char *)sub_2253CC0(a1, &ptr);
  v4 = sub_22CFE00(v3, &stat_buf);
  if ( v4 )
  {
    std::_V2::generic_category((std::_V2 *)v3);
    v4 = *__errno_location();
    *(_OWORD *)a2 = 0;
    *(_OWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    *(_OWORD *)(a2 + 48) = 0;
    if ( v4 == 2 )
      *(_QWORD *)(a2 + 40) = 0xFFFF00000001LL;
    else
      *(_QWORD *)(a2 + 40) = 0xFFFF00000000LL;
    *(_QWORD *)(a2 + 64) = 0;
  }
  else
  {
    v5 = 3;
    v6 = _mm_loadl_epi64((const __m128i *)&stat_buf.st_atim.tv_nsec);
    v7 = _mm_loadl_epi64((const __m128i *)&stat_buf.st_mtim.tv_nsec);
    v8 = stat_buf.st_mode & 0xF000;
    v9 = _mm_cvtsi32_si128(stat_buf.st_gid);
    v10 = _mm_cvtsi32_si128(stat_buf.st_uid);
    v11 = (std::_V2 *)(stat_buf.st_mode & 0xFFF);
    st_ino = stat_buf.st_ino;
    st_nlink = stat_buf.st_nlink;
    if ( v8 != 0x4000 )
    {
      v5 = 2;
      if ( v8 != 0x8000 )
      {
        v5 = 5;
        if ( v8 != 24576 )
        {
          v5 = 6;
          if ( v8 != 0x2000 )
          {
            v5 = 7;
            if ( v8 != 4096 )
            {
              v5 = 8;
              if ( v8 != 49152 )
                v5 = 5 * (v8 != 40960) + 4;
            }
          }
        }
      }
    }
    tv_sec = stat_buf.st_mtim.tv_sec;
    *(_QWORD *)(a2 + 32) = stat_buf.st_size;
    *(__m128i *)(a2 + 16) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v6, v7), _mm_unpacklo_epi32(v10, v9));
    v14 = _mm_loadh_ps((const double *)&tv_sec);
    tv_sec = st_nlink;
    *(_DWORD *)(a2 + 40) = v5;
    *(_DWORD *)(a2 + 44) = (_DWORD)v11;
    *(_QWORD *)(a2 + 64) = st_ino;
    v15 = _mm_loadh_ps((const double *)&tv_sec);
    *(__m128 *)a2 = v14;
    *(__m128 *)(a2 + 48) = v15;
    std::_V2::system_category(v11);
  }
  if ( ptr != v21 )
    free(ptr);
  return v4;
}
