__m128i *__fastcall sub_228CE30(__m128i *a1, size_t a2)
{
  char v3; // bp
  char *v4; // rax
  __int64 (__fastcall *v5)(char *, struct stat *); // rdx
  std::_V2 *v6; // rdi
  int v7; // r12d
  int v8; // ebp
  __off_t st_size; // r13
  int v10; // eax
  __int64 v11; // r15
  char v12; // dl
  __uid_t st_uid; // [rsp+Ch] [rbp-1BCh]
  unsigned int v15; // [rsp+10h] [rbp-1B8h]
  int v16; // [rsp+14h] [rbp-1B4h]
  unsigned int tv_nsec; // [rsp+18h] [rbp-1B0h]
  __gid_t st_gid; // [rsp+1Ch] [rbp-1ACh]
  __time_t tv_sec; // [rsp+20h] [rbp-1A8h] BYREF
  __time_t v20; // [rsp+28h] [rbp-1A0h]
  size_t v21[4]; // [rsp+30h] [rbp-198h] BYREF
  __int16 v22; // [rsp+50h] [rbp-178h]
  struct stat stat_buf; // [rsp+60h] [rbp-168h] BYREF
  void *ptr; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-D0h]
  _BYTE v26[192]; // [rsp+108h] [rbp-C0h] BYREF

  v3 = *(_BYTE *)(a2 + 36);
  v22 = 260;
  v21[0] = a2;
  ptr = v26;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v4 = (char *)sub_2253CC0(v21, &ptr);
  if ( v3 )
    v5 = sub_22CFE00;
  else
    v5 = sub_22CFE20;
  v6 = (std::_V2 *)v4;
  v7 = v5(v4, &stat_buf);
  if ( v7 )
  {
    v11 = std::_V2::generic_category(v6);
    v16 = 0xFFFF;
    v7 = *__errno_location();
    st_gid = 0;
    st_uid = 0;
    v15 = 0;
    v8 = v7 == 2;
    st_size = 0;
    tv_nsec = 0;
    tv_sec = 0;
    v20 = 0;
  }
  else
  {
    v8 = 3;
    st_size = stat_buf.st_size;
    tv_nsec = stat_buf.st_atim.tv_nsec;
    tv_sec = stat_buf.st_mtim.tv_sec;
    v15 = stat_buf.st_mtim.tv_nsec;
    v10 = stat_buf.st_mode & 0xF000;
    v16 = stat_buf.st_mode & 0xFFF;
    st_gid = stat_buf.st_gid;
    st_uid = stat_buf.st_uid;
    v20 = stat_buf.st_atim.tv_sec;
    if ( v10 != 0x4000 )
    {
      v8 = 2;
      if ( v10 != 0x8000 )
      {
        v8 = 5;
        if ( v10 != 24576 )
        {
          v8 = 6;
          if ( v10 != 0x2000 )
          {
            v8 = 7;
            if ( v10 != 4096 )
            {
              v8 = 8;
              if ( v10 != 49152 )
                v8 = 5 * (v10 != 40960) + 4;
            }
          }
        }
      }
    }
    v11 = std::_V2::system_category(v6);
  }
  if ( ptr != v26 )
    free(ptr);
  if ( v7 )
  {
    a1->m128i_i32[0] = v7;
    v12 = 1;
    a1->m128i_i64[1] = v11;
  }
  else
  {
    a1[2].m128i_i64[0] = st_size;
    v12 = 0;
    a1[2].m128i_i32[2] = v8;
    a1[2].m128i_i32[3] = v16;
    *(__m128 *)a1 = _mm_loadh_ps((const double *)&tv_sec);
    a1[1] = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(tv_nsec), _mm_cvtsi32_si128(v15)),
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(st_uid), _mm_cvtsi32_si128(st_gid)));
  }
  a1[3].m128i_i8[0] = v12 | a1[3].m128i_i8[0] & 0xFE;
  return a1;
}
