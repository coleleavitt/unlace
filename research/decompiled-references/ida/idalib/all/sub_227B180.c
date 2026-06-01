__blksize_t __fastcall sub_227B180(int *a1)
{
  __int64 (__fastcall *v2)(__int64); // rax
  char v3; // al
  struct stat v4; // [rsp+0h] [rbp-98h] BYREF

  if ( __fxstat(1, a1[12], &v4) )
    return 0;
  if ( (v4.st_mode & 0xF000) == 0x2000
    && ((v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL), v2 != sub_227AF90)
      ? (v3 = v2((__int64)a1))
      : (v3 = sub_2290BF0((unsigned int)a1[12])),
        v3) )
  {
    return 0;
  }
  else
  {
    return v4.st_blksize;
  }
}
