char *__fastcall sub_2245280(char ***a1, const void *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **v7; // rdi
  char *v8; // rcx
  char *v9; // rax

  v7 = *a1;
  v8 = *v7;
  v7[10] += a3 + 1;
  v9 = &v8[a3 + 1];
  if ( v7[1] >= v9 && v8 )
    *v7 = v9;
  else
    v8 = (char *)sub_986170((__int64)v7, a3 + 1, a3 + 1, 0, a5, a6);
  if ( a3 )
    v8 = (char *)memcpy(v8, a2, a3);
  v8[a3] = 0;
  return v8;
}
