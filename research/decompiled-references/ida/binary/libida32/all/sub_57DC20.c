void __fastcall __noreturn sub_57DC20(char a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v8; // eax
  const char *v9; // rdi
  char v10[72]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
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
    qsnprintf((int)v10, 64, (int)"%llu%cb\n", a2, aKmgt[v8 - 1], a6, v10[0]);
  else
    qsnprintf((int)v10, 64, (int)"%llu bytes\n", a2, a5, a6, v10[0]);
  v9 = "HIDECANCEL\nIDA tried to extend the database by %s but failed.\n\nPlease free some disk space and retry";
  if ( a1 )
    v9 = "HIDECANCEL\nIDA still needs %s of disk space, please free disk space and retry";
  sub_57DAD0((__int64)v9, v10);
}

