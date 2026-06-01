__int64 __fastcall sub_8A9080(_QWORD *a1, __int64 *a2, const char *a3, int a4, char a5, char **a6)
{
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v10; // r14
  const char *v11; // rdi
  __int64 v12; // rax

  v7 = a2[1];
  if ( v7 )
  {
    v8 = *a2;
    v10 = 0;
    while ( 1 )
    {
      v11 = haystack;
      if ( *(_QWORD *)(v8 + 8) )
        v11 = *(const char **)v8;
      if ( !strcmp(v11, a3) )
        break;
      ++v10;
      v8 += 40;
      if ( v7 == v10 )
        goto LABEL_10;
    }
    v12 = v8 + 24;
    if ( !a4 || *(_DWORD *)(v8 + 24) == a4 )
      goto LABEL_9;
  }
  else
  {
LABEL_10:
    v12 = 0;
    if ( a5 )
    {
LABEL_9:
      *a1 = v12;
      return 0;
    }
  }
  sub_35A790(a6);
  return 2;
}
