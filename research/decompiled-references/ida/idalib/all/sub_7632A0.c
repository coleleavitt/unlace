char *__fastcall sub_7632A0(unsigned int *a1, __int64 a2, __int64 a3, char *a4)
{
  char *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  char *v7; // rcx
  char *result; // rax

  v4 = qword_2CD44C0;
  v5 = (__int64)++qword_2CD44C0;
  if ( *v4 != 64
    || (v5 = (__int64)(v4 + 2), qword_2CD44C0 = v4 + 2, v4[1] != 95)
    || (v5 = (__int64)(v4 + 3), qword_2CD44C0 = v4 + 3, !v4[2]) )
  {
LABEL_8:
    sub_76E6C0(a1, a2, v5, a4);
  }
  sub_763140(a1, a2, v5, a4);
  sub_763140(a1, a2, v6, v7);
  result = qword_2CD44C0 + 1;
  do
  {
    qword_2CD44C0 = result;
    v5 = (unsigned __int8)*(result - 1);
    if ( !(_BYTE)v5 )
      goto LABEL_8;
    ++result;
  }
  while ( (_BYTE)v5 != 64 );
  return result;
}
