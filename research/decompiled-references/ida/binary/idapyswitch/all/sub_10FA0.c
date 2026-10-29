__int64 __fastcall sub_10FA0(int fildes, __int64 a2)
{
  unsigned int v2; // ecx
  int tv_nsec; // r8d
  __time_t tv_sec; // rdi
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm0
  __m128i v9; // xmm3
  __off_t st_size; // rax
  int v11; // kr00_4
  int v12; // kr08_4
  struct stat64 v13; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v2 = __fxstat64(1, fildes, &v13);
  if ( !v2 && a2 )
  {
    tv_nsec = v13.st_atim.tv_nsec;
    tv_sec = v13.st_atim.tv_sec;
    v6 = _mm_cvtsi32_si128(v13.st_nlink);
    v7 = _mm_cvtsi32_si128(v13.st_uid);
    v8 = _mm_cvtsi32_si128(v13.st_ino);
    *(_QWORD *)a2 = v13.st_dev;
    v9 = _mm_cvtsi32_si128(v13.st_mode);
    *(_DWORD *)(a2 + 24) = v13.st_gid;
    *(_QWORD *)(a2 + 32) = v13.st_rdev;
    st_size = v13.st_size;
    *(__m128i *)(a2 + 8) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v8, v9), _mm_unpacklo_epi32(v6, v7));
    *(_QWORD *)(a2 + 40) = st_size;
    *(_DWORD *)(a2 + 48) = v13.st_blksize;
    *(_DWORD *)(a2 + 52) = v13.st_blocks;
    v11 = v13.st_mtim.tv_nsec;
    *(_QWORD *)(a2 + 56) = (tv_nsec / 1000) | (unsigned __int64)(tv_sec << 32);
    v12 = v13.st_ctim.tv_nsec;
    *(_QWORD *)(a2 + 64) = (v11 / 1000) | (v13.st_mtim.tv_sec << 32);
    *(_QWORD *)(a2 + 72) = (v12 / 1000) | (v13.st_ctim.tv_sec << 32);
  }
  return v2;
}

