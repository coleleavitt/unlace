/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstat
// Address: 0x000000010006EB5C

//----- (000000010006EB5C) ----------------------------------------------------
int8x16_t __fastcall qstat(const char *a1, __int64 a2)
{
  int v3; // w0
  int8x16_t result; // q0
  int st_mode; // w9
  off_t st_size; // x9
  int st_blocks; // w10
  int64x2_t v8; // q0
  int64x2_t v9; // q1
  stat v10; // [xsp+8h] [xbp-A8h] BYREF

  v3 = stat(a1, &v10);
  if ( a2 )
  {
    if ( !v3 )
    {
      *(_QWORD *)a2 = v10.st_dev;
      st_mode = v10.st_mode;
      *(_DWORD *)(a2 + 8) = v10.st_ino;
      *(_DWORD *)(a2 + 12) = st_mode;
      *(_DWORD *)(a2 + 16) = v10.st_nlink;
      *(_QWORD *)(a2 + 20) = *(_QWORD *)&v10.st_uid;
      st_size = v10.st_size;
      st_blocks = v10.st_blocks;
      *(_QWORD *)(a2 + 32) = v10.st_rdev;
      *(_QWORD *)(a2 + 40) = st_size;
      *(_DWORD *)(a2 + 48) = v10.st_blksize;
      *(_DWORD *)(a2 + 52) = st_blocks;
      v8.i64[0] = v10.st_atimespec.tv_sec;
      v9.i64[0] = v10.st_atimespec.tv_nsec / 1000;
      v9.i64[1] = v10.st_mtimespec.tv_nsec / 1000;
      v8.i64[1] = v10.st_mtimespec.tv_sec;
      result = vorrq_s8((int8x16_t)vshrq_n_s64(vshlq_n_s64(v9, 0x20u), 0x20u), (int8x16_t)vshlq_n_s64(v8, 0x20u));
      *(int8x16_t *)(a2 + 56) = result;
      *(_QWORD *)(a2 + 72) = (SLODWORD(v10.st_ctimespec.tv_nsec) / 1000) | (v10.st_ctimespec.tv_sec << 32);
    }
  }
  return result;
}
