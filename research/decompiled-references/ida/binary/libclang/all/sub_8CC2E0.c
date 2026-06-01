char *__fastcall sub_8CC2E0(_QWORD *a1, unsigned __int64 a2)
{
  char *result; // rax
  char *v4; // rdi

  if ( a2 > 0x28 )
    sub_25D6230(a1, a1 + 3, a2, 1);
  result = (char *)a1[1];
  v4 = &result[*a1];
  if ( (char *)a2 != result )
    result = (char *)memset(v4, 0, a2 - (_QWORD)result);
  a1[1] = a2;
  return result;
}

