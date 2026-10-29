__int64 __fastcall sub_228C3C0(size_t *a1, __int64 a2, char a3)
{
  char *v5; // rax
  __int64 (__fastcall *v6)(char *, struct stat *); // rdx
  std::_V2 *v7; // rdi
  unsigned int v8; // r12d
  int v9; // edx
  __m128i v10; // xmm0
  __m128i v11; // xmm4
  int v12; // eax
  __m128i v13; // xmm5
  __m128i v14; // xmm2
  std::_V2 *v15; // rdi
  __ino_t st_ino; // rcx
  __nlink_t st_nlink; // rsi
  __m128 v18; // xmm3
  __m128 v19; // xmm0
  __time_t tv_sec; // [rsp+8h] [rbp-160h] BYREF
  struct stat stat_buf; // [rsp+10h] [rbp-158h] BYREF
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-C0h]
  _BYTE v25[176]; // [rsp+B8h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v25;
  v5 = (char *)sub_2253CC0(a1, &ptr);
  if ( a3 )
    v6 = sub_22CFE00;
  else
    v6 = sub_22CFE20;
  v7 = (std::_V2 *)v5;
  v8 = v6(v5, &stat_buf);
  if ( v8 )
  {
    std::_V2::generic_category(v7);
    v8 = *__errno_location();
    *(_OWORD *)a2 = 0;
    *(_OWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 32) = 0;
    *(_OWORD *)(a2 + 48) = 0;
    if ( v8 == 2 )
      *(_QWORD *)(a2 + 40) = 0xFFFF00000001LL;
    else
      *(_QWORD *)(a2 + 40) = 0xFFFF00000000LL;
    *(_QWORD *)(a2 + 64) = 0;
  }
  else
  {
    v9 = 3;
    v10 = _mm_loadl_epi64((const __m128i *)&stat_buf.st_atim.tv_nsec);
    v11 = _mm_loadl_epi64((const __m128i *)&stat_buf.st_mtim.tv_nsec);
    v12 = stat_buf.st_mode & 0xF000;
    v13 = _mm_cvtsi32_si128(stat_buf.st_gid);
    v14 = _mm_cvtsi32_si128(stat_buf.st_uid);
    v15 = (std::_V2 *)(stat_buf.st_mode & 0xFFF);
    st_ino = stat_buf.st_ino;
    st_nlink = stat_buf.st_nlink;
    if ( v12 != 0x4000 )
    {
      v9 = 2;
      if ( v12 != 0x8000 )
      {
        v9 = 5;
        if ( v12 != 24576 )
        {
          v9 = 6;
          if ( v12 != 0x2000 )
          {
            v9 = 7;
            if ( v12 != 4096 )
            {
              v9 = 8;
              if ( v12 != 49152 )
                v9 = 5 * (v12 != 40960) + 4;
            }
          }
        }
      }
    }
    tv_sec = stat_buf.st_mtim.tv_sec;
    *(_QWORD *)(a2 + 32) = stat_buf.st_size;
    *(__m128i *)(a2 + 16) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v10, v11), _mm_unpacklo_epi32(v14, v13));
    v18 = _mm_loadh_ps((const double *)&tv_sec);
    tv_sec = st_nlink;
    *(_DWORD *)(a2 + 40) = v9;
    *(_DWORD *)(a2 + 44) = (_DWORD)v15;
    *(_QWORD *)(a2 + 64) = st_ino;
    v19 = _mm_loadh_ps((const double *)&tv_sec);
    *(__m128 *)a2 = v18;
    *(__m128 *)(a2 + 48) = v19;
    std::_V2::system_category(v15);
  }
  if ( ptr != v25 )
    free(ptr);
  return v8;
}
