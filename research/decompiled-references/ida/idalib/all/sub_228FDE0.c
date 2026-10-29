__int64 __fastcall sub_228FDE0(__int64 *a1, size_t a2, size_t a3, _QWORD *a4, char a5)
{
  __int64 result; // rax
  int fd[3]; // [rsp+24h] [rbp-Ch] BYREF

  LODWORD(result) = sub_228FC40(a1, a2, a3, fd, a4, 1, a5);
  if ( (_DWORD)result )
    return (unsigned int)result;
  close(fd[0]);
  return 0;
}
