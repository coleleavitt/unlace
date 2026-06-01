unsigned __int64 *__fastcall sub_5168B0(unsigned __int64 **a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rcx
  __int64 v4; // rdx
  unsigned __int64 *v5; // rdi
  unsigned __int64 *result; // rax
  __int64 i; // rdx
  char *v8; // rax

  v2 = *a1;
  v4 = 33LL * (_QWORD)a1[1];
  v5 = (unsigned __int64 *)((char *)*a1 + v4);
  if ( a2 == -1 )
    return v5;
  result = a1[3];
  if ( result == v5 || a2 < *result || a2 >= result[1] )
  {
    v5 = v2;
    for ( i = 0xF83E0F83E0F83E1LL * v4; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v8 = (char *)v5 + 33 * (i >> 1);
        if ( a2 < *((_QWORD *)v8 + 1) )
          break;
        v5 = (unsigned __int64 *)(v8 + 33);
        i = i - 1 - (i >> 1);
        if ( i <= 0 )
          goto LABEL_9;
      }
    }
LABEL_9:
    a1[3] = v5;
    return v5;
  }
  return result;
}
