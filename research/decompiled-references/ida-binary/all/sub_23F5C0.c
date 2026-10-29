__int64 __fastcall sub_23F5C0(char *s1, __int64 a2, double a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  char *v6; // rcx
  _DWORD *v7; // rdi
  __int64 v8; // rax

  v3 = *(int *)(dbg + 64);
  if ( (int)v3 <= 0 )
LABEL_13:
    sub_16B930((__int64)"Bad register name is passed to getreg: %s", s1);
  v4 = *(_QWORD *)(dbg + 56);
  v5 = 0;
  while ( strcasecmp(s1, *(const char **)(v4 + 32 * v5)) )
  {
    if ( ++v5 == v3 )
      goto LABEL_13;
  }
  if ( (_DWORD)dword_8CC428 )
  {
    v7 = (_DWORD *)qword_8CC430;
    v8 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
    if ( qword_8CC430 != v8 )
    {
      while ( (_DWORD)dword_8CC428 != *v7 )
      {
        v7 += 64;
        if ( (_DWORD *)v8 == v7 )
          return a2 + 32 * v5;
      }
      if ( v7 )
        sub_23F1C0((__int64)v7, v5, a3, (unsigned int)dword_8CC428, v6);
    }
  }
  return a2 + 32 * v5;
}
