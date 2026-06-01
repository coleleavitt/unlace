char *__fastcall sub_18BEC30(_QWORD *a1, char a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  char *v5; // rax

  v3 = -1;
  if ( *a1 > a3 )
  {
    v4 = a1[1];
    v5 = (char *)memchr((const void *)(v4 + a3), a2, *a1 - a3);
    if ( v5 )
      return &v5[-v4];
  }
  return (char *)v3;
}
