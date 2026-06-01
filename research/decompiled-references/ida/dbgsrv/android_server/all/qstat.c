/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstat
// Address: 0x00000000000BD32C

//----- (00000000000BD32C) ----------------------------------------------------
long double __fastcall qstat(const char *a1, __int64 a2)
{
  int v3; // w0
  long double result; // q0
  __time_t tv_sec; // x10
  struct stat64 buf; // [xsp+8h] [xbp-A8h] BYREF

  buf.__unused[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = stat64(a1, &buf);
  if ( a2 )
  {
    if ( !v3 )
    {
      *(_QWORD *)a2 = buf.st_dev;
      *(_DWORD *)(a2 + 8) = buf.st_ino;
      result = *(long double *)&buf.st_nlink;
      *(_OWORD *)(a2 + 12) = *(_OWORD *)&buf.st_nlink;
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&buf.st_gid;
      *(_QWORD *)(a2 + 40) = buf.st_size;
      *(_DWORD *)(a2 + 48) = buf.st_blksize;
      tv_sec = buf.st_atim.tv_sec;
      *(_DWORD *)(a2 + 52) = buf.st_blocks;
      *(_QWORD *)(a2 + 56) = (SLODWORD(buf.st_atim.tv_nsec) / 1000) | (unsigned __int64)(tv_sec << 32);
      *(_QWORD *)(a2 + 64) = (SLODWORD(buf.st_mtim.tv_nsec) / 1000) | (buf.st_mtim.tv_sec << 32);
      *(_QWORD *)(a2 + 72) = (SLODWORD(buf.st_ctim.tv_nsec) / 1000) | (buf.st_ctim.tv_sec << 32);
    }
  }
  return result;
}
