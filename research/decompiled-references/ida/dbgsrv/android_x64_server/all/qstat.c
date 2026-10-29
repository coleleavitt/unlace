/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstat
// Address: 0x00000000000C1F60

//----- (00000000000C1F60) ----------------------------------------------------
__int64 __fastcall qstat(const char *a1, __int64 a2)
{
  unsigned int v2; // ecx
  struct stat64 buf; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v5; // [rsp+98h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v2 = stat64(a1, &buf);
  if ( a2 && !v2 )
  {
    *(_QWORD *)a2 = buf.st_dev;
    *(_DWORD *)(a2 + 8) = buf.st_ino;
    *(_DWORD *)(a2 + 12) = buf.st_mode;
    *(_DWORD *)(a2 + 16) = buf.st_nlink;
    *(_DWORD *)(a2 + 20) = buf.st_uid;
    *(_DWORD *)(a2 + 24) = buf.st_gid;
    *(_OWORD *)(a2 + 32) = *(_OWORD *)&buf.st_rdev;
    *(_DWORD *)(a2 + 48) = buf.st_blksize;
    *(_DWORD *)(a2 + 52) = buf.st_blocks;
    *(_QWORD *)(a2 + 56) = (buf.st_atim.tv_sec << 32) | (SLODWORD(buf.st_atim.tv_nsec) / 1000);
    *(_QWORD *)(a2 + 64) = (buf.st_mtim.tv_sec << 32) | (SLODWORD(buf.st_mtim.tv_nsec) / 1000);
    *(_QWORD *)(a2 + 72) = (buf.st_ctim.tv_sec << 32) | (SLODWORD(buf.st_ctim.tv_nsec) / 1000);
  }
  return v2;
}
