unsigned int *__fastcall sub_4FED00(unsigned int **a1, unsigned int a2)
{
  unsigned int *v2; // rcx
  __int64 v4; // rdx
  unsigned int *v5; // rdi
  unsigned int *result; // rax
  __int64 i; // rdx
  char *v8; // rax

  v2 = *a1;
  v4 = 17LL * (_QWORD)a1[1];
  v5 = (unsigned int *)((char *)*a1 + v4);
  if ( a2 == -1 )
    return v5;
  result = a1[3];
  if ( result == v5 || a2 < *result || a2 >= result[1] )
  {
    v5 = v2;
    for ( i = 0xF0F0F0F0F0F0F0F1LL * v4; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v8 = (char *)v5 + 17 * (i >> 1);
        if ( a2 < *((_DWORD *)v8 + 1) )
          break;
        v5 = (unsigned int *)(v8 + 17);
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

