__int64 __fastcall sub_228FBE0(std::_V2 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  int fd[3]; // [rsp+24h] [rbp-Ch] BYREF

  LODWORD(result) = sub_228F900(a1, fd, a2, 0, 1, 0, a3);
  if ( (_DWORD)result )
    return (unsigned int)result;
  close(fd[0]);
  return 0;
}
