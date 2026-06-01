__int64 __fastcall sub_9983C0(__int64 *a1, char *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rbx
  int v7; // r13d
  unsigned __int64 v8; // r14
  const void *v9; // rdi
  size_t v10; // rdx
  size_t v12; // rbp
  char *v13; // rax
  char *v14; // r15
  size_t v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-40h]

  v4 = a1[1];
  if ( a4 )
  {
    result = -1;
    if ( v4 > a3 )
    {
      v6 = *a1;
      v7 = *a2;
      v8 = *a1 + v4;
      v9 = (const void *)(*a1 + a3);
      v16 = v6;
      v10 = v4 - a3;
      if ( a4 <= v10 )
      {
        v12 = 1 - a4;
        while ( 1 )
        {
          v15 = v12 + v10;
          if ( !v15 )
            return -1;
          v13 = (char *)memchr(v9, v7, v15);
          v14 = v13;
          if ( !v13 )
            return -1;
          if ( !memcmp(v13, a2, a4) )
            break;
          v9 = v14 + 1;
          v10 = v8 - (_QWORD)(v14 + 1);
          if ( a4 > v10 )
            return -1;
        }
        return (__int64)&v14[-v16];
      }
    }
  }
  else
  {
    result = -1;
    if ( v4 >= a3 )
      return a3;
  }
  return result;
}
