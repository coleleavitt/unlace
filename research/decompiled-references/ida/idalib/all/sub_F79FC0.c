char *__fastcall sub_F79FC0(__int64 *src, __int64 *a2, __int64 *a3, __int64 *a4, _QWORD *a5)
{
  __int64 *i; // rbx
  __int64 v9; // rax
  char *v10; // r12
  __int64 v12; // rax

  for ( i = src; a2 != i; *(a5 - 1) = v12 )
  {
    if ( a4 == a3 )
      break;
    while ( sub_F79CB0(*a3, *i) )
    {
      v9 = *a3++;
      *a5++ = v9;
      if ( a4 == a3 || a2 == i )
        goto LABEL_6;
    }
    v12 = *i++;
    ++a5;
  }
LABEL_6:
  if ( a2 != i )
    memmove(a5, i, (char *)a2 - (char *)i);
  v10 = (char *)a5 + (char *)a2 - (char *)i;
  if ( a4 != a3 )
    memmove(v10, a3, (char *)a4 - (char *)a3);
  return &v10[(char *)a4 - (char *)a3];
}
