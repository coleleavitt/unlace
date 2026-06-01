void **__fastcall sub_E21790(void ***a1, unsigned __int64 a2)
{
  void **result; // rax
  _BYTE *v4; // rsi
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdx
  void **v7; // rax
  __int64 v8; // rdx

  for ( result = *a1; ; *a1 = result )
  {
    v4 = result[2];
    v5 = result + 3;
    v6 = v4 - (_BYTE *)(result + 3);
    if ( a2 <= v6 )
      break;
    while ( 1 )
    {
      a2 -= v6;
      if ( !*result )
        break;
      free(*result);
      v7 = *a1;
      v8 = (__int64)(*a1 + 3);
      *v7 = nullptr;
      v7[2] = (void *)v8;
      result = (void **)v7[1];
      v4 = result[2];
      v5 = result + 3;
      *a1 = result;
      v6 = v4 - (_BYTE *)(result + 3);
      if ( v6 >= a2 )
        goto LABEL_5;
    }
    result[2] = v5;
    result = (void **)result[1];
  }
LABEL_5:
  result[2] = &v4[-a2];
  a1[1] = (void **)((char *)a1[1] - a2);
  return result;
}
