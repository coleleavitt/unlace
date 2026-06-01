_QWORD *__fastcall sub_112BD70(_QWORD *a1, __int64 a2, char **a3)
{
  char *v3; // rbp
  __int64 v4; // rdx

  v3 = *a3;
  *a1 = a1 + 2;
  v4 = -1;
  if ( v3 )
    v4 = (__int64)&v3[j__strlen(v3)];
  sub_112B570(a1, v3, v4);
  return a1;
}
