_QWORD *__fastcall sub_E58780(_QWORD *a1, int a2)
{
  _QWORD *v2; // rdx
  size_t v3; // rax
  char *v4; // rsi
  size_t v5; // rax

  if ( a2 == 1 )
  {
    v3 = j__strlen("protected");
    v4 = "protected";
    v2 = a1 + 2;
    if ( v3 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v3 = j__strlen("public");
    v4 = (char *)"public";
    v2 = a1 + 2;
    if ( v3 )
      goto LABEL_6;
LABEL_5:
    *a1 = v2;
    v5 = j__strlen("none");
    sub_E58600(a1, "none", (__int64)&aNone[v5 + 1]);
    return a1;
  }
  v2 = a1 + 2;
  if ( a2 != 2 )
    goto LABEL_5;
  v3 = j__strlen("private");
  v4 = "private";
  v2 = a1 + 2;
  if ( !v3 )
    goto LABEL_5;
LABEL_6:
  *a1 = v2;
  sub_E58600(a1, v4, (__int64)&v4[v3]);
  return a1;
}
