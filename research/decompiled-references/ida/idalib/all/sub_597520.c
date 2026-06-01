void __fastcall __noreturn sub_597520(char a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v8; // eax
  const char *v9; // rdi
  _QWORD v10[13]; // [rsp+0h] [rbp-68h] BYREF

  v10[9] = __readfsqword(0x28u);
  v8 = 0;
  while ( a2 > 0x3FF )
  {
    ++v8;
    a2 >>= 10;
    if ( v8 == 4 )
      goto LABEL_4;
  }
  if ( v8 )
LABEL_4:
    qsnprintf((unsigned int)v10, 64, (unsigned int)"%llu%cb\n", a2, aKmgt[v8 - 1], a6);
  else
    qsnprintf((unsigned int)v10, 64, (unsigned int)"%llu bytes\n", a2, a5, a6);
  v9 = "HIDECANCEL\nIDA tried to extend the database by %s but failed.\n\nPlease free some disk space and retry";
  if ( a1 )
    v9 = "HIDECANCEL\nIDA still needs %s of disk space, please free disk space and retry";
  sub_5973D0((__int64)v9, v10);
}
