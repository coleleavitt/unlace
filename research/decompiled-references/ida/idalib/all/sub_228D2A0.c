__int64 __fastcall sub_228D2A0(size_t *a1, size_t *a2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  int fd; // [rsp+8h] [rbp-20h] BYREF
  int v6[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  LODWORD(result) = sub_228D080(a1, &fd, 2, 1, 0, 0x1B6u);
  if ( (_DWORD)result )
    return (unsigned int)result;
  v3 = sub_228D080(a2, v6, 0, 2, 0, 0x1B6u);
  if ( v3 )
  {
    close(fd);
    return v3;
  }
  else
  {
    v4 = sub_22880E0(fd, v6[0]);
    close(fd);
    close(v6[0]);
    return v4;
  }
}
