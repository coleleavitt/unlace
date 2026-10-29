/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstat
// Address: 0x0007DEBC

//----- (0007DEBC) --------------------------------------------------------
int __fastcall qstat(const char *a1, _DWORD *a2)
{
  int result; // r0
  int st_dev_high; // r1
  int v5; // r2
  __mode_t st_mode; // r3
  __nlink_t st_nlink; // r6
  __uid_t st_uid; // r5
  __gid_t st_gid; // r7
  __uid_t *v10; // r4
  __uid_t st_rdev_high; // r1
  __blksize_t st_blksize; // r2
  __blkcnt_t st_blocks; // r3
  __time_t tv_sec; // r5
  __time_t v15; // r6
  int v16; // r2
  unsigned int v17; // r2
  int v18; // r2
  struct stat buf; // [sp+14h] [bp-6Ch] BYREF
  int v20; // [sp+6Ch] [bp-14h]
  int v21; // [sp+70h] [bp-10h]
  int v22; // [sp+74h] [bp-Ch]

  result = stat(a1, &buf);
  if ( a2 )
  {
    if ( !result )
    {
      st_dev_high = HIDWORD(buf.st_dev);
      v5 = v22;
      st_mode = buf.st_mode;
      st_nlink = buf.st_nlink;
      st_uid = buf.st_uid;
      st_gid = buf.st_gid;
      *a2 = buf.st_dev;
      a2[1] = st_dev_high;
      a2[2] = v5;
      a2[3] = st_mode;
      a2[4] = st_nlink;
      v10 = a2 + 5;
      *v10 = st_uid;
      v10[1] = st_gid;
      st_rdev_high = HIDWORD(buf.st_rdev);
      st_blksize = buf.st_blksize;
      st_blocks = buf.st_blocks;
      tv_sec = buf.st_atim.tv_sec;
      v15 = buf.st_mtim.tv_sec;
      v10 -= 5;
      v10[8] = buf.st_rdev;
      v10[9] = st_rdev_high;
      v10[10] = st_blksize;
      v10[11] = st_blocks;
      v10[12] = tv_sec;
      v10[13] = v15;
      v16 = ((buf.st_ctim.tv_nsec / 1000) >> 31) | buf.st_ctim.tv_sec;
      v10[14] = buf.st_ctim.tv_nsec / 1000;
      v10[15] = v16;
      v17 = (((signed int)buf.__unused5 / 1000) >> 31) | buf.__unused4;
      v10[16] = (signed int)buf.__unused5 / 1000;
      v10[17] = v17;
      v18 = ((v21 / 1000) >> 31) | v20;
      v10[18] = v21 / 1000;
      v10[19] = v18;
      return 0;
    }
  }
  return result;
}
