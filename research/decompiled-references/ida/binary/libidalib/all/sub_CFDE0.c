__int64 __fastcall sub_CFDE0(char *s1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  _DWORD *v9; // rdi
  __int64 v10; // rax
  char v12; // [rsp+0h] [rbp-38h]

  v6 = *(int *)(dbg + 64LL);
  if ( (int)v6 <= 0 )
LABEL_13:
    sub_92050((__int64)"Bad register name is passed to getreg: %s", (__int64)s1, a3, a4, a5, a6, v12);
  v7 = *(_QWORD *)(dbg + 56LL);
  v8 = 0;
  while ( strcasecmp(s1, *(const char **)(v7 + 32 * v8)) )
  {
    if ( ++v8 == v6 )
      goto LABEL_13;
  }
  if ( dword_252588 )
  {
    v9 = (_DWORD *)qword_252590;
    v10 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
    if ( qword_252590 != v10 )
    {
      while ( dword_252588 != *v9 )
      {
        v9 += 64;
        if ( (_DWORD *)v10 == v9 )
          return a2 + 32 * v8;
      }
      if ( v9 )
        sub_CFA40((__int64)v9, v8);
    }
  }
  return a2 + 32 * v8;
}

