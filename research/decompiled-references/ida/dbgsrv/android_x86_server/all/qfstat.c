/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfstat
// Address: 0x000AF9F0

//----- (000AF9F0) --------------------------------------------------------
int __cdecl qfstat(int fd, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  struct stat buf; // [esp+8h] [ebp-70h] BYREF
  int v7; // [esp+60h] [ebp-18h]
  unsigned int v8; // [esp+6Ch] [ebp-Ch]

  v8 = __readgsdword(0x14u);
  result = fstat(fd, &buf);
  if ( a2 )
  {
    if ( !result )
    {
      *(_QWORD *)a2 = buf.st_dev;
      *(_DWORD *)(a2 + 8) = v7;
      *(_OWORD *)(a2 + 12) = *(_OWORD *)&buf.st_mode;
      *(_QWORD *)(a2 + 28) = buf.st_rdev;
      *(_QWORD *)(a2 + 36) = *(_QWORD *)&buf.st_size;
      *(_DWORD *)(a2 + 44) = buf.st_blocks;
      *(_DWORD *)(a2 + 48) = buf.st_atim.tv_sec;
      v3 = buf.st_mtim.tv_nsec / 1000;
      *(_DWORD *)(a2 + 56) = buf.st_mtim.tv_sec | ((buf.st_mtim.tv_nsec / 1000) >> 31);
      *(_DWORD *)(a2 + 52) = v3;
      v4 = buf.st_ctim.tv_nsec / 1000;
      *(_DWORD *)(a2 + 64) = buf.st_ctim.tv_sec | ((buf.st_ctim.tv_nsec / 1000) >> 31);
      *(_DWORD *)(a2 + 60) = v4;
      v5 = (signed int)buf.__unused5 / 1000;
      *(_DWORD *)(a2 + 72) = buf.__unused4 | (((signed int)buf.__unused5 / 1000) >> 31);
      *(_DWORD *)(a2 + 68) = v5;
    }
  }
  return result;
}
