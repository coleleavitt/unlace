/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstat
// Address: 0x000000010007C3B0

//----- (000000010007C3B0) ----------------------------------------------------
int __fastcall qstat(const char *a1, __int64 a2)
{
  int result; // eax
  stat v3; // [rsp+0h] [rbp-A0h] BYREF

  result = stat_INODE64(a1, &v3);
  if ( result == 0 && a2 != 0 )
  {
    *(_QWORD *)a2 = v3.st_dev;
    *(_DWORD *)(a2 + 8) = v3.st_ino;
    *(_QWORD *)(a2 + 12) = _mm_cvtepu16_epi32(_mm_cvtsi32_si128(*(unsigned int *)&v3.st_mode)).u64[0];
    *(_QWORD *)(a2 + 20) = *(_QWORD *)&v3.st_uid;
    *(_QWORD *)(a2 + 32) = v3.st_rdev;
    *(_QWORD *)(a2 + 40) = v3.st_size;
    *(_DWORD *)(a2 + 48) = v3.st_blksize;
    *(_DWORD *)(a2 + 52) = v3.st_blocks;
    *(_QWORD *)(a2 + 56) = (v3.st_atimespec.tv_sec << 32) | (SLODWORD(v3.st_atimespec.tv_nsec) / 1000);
    *(_QWORD *)(a2 + 64) = (v3.st_mtimespec.tv_sec << 32) | (SLODWORD(v3.st_mtimespec.tv_nsec) / 1000);
    *(_QWORD *)(a2 + 72) = (v3.st_ctimespec.tv_sec << 32) | (SLODWORD(v3.st_ctimespec.tv_nsec) / 1000);
  }
  return result;
}
