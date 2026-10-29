__int64 __fastcall sub_FA4210(__int64 a1)
{
  __int64 v2; // rbp
  char *v3; // r13
  char *v4; // rbx
  char *v5; // rdi
  void *v6; // rdi
  void **v7; // rbx
  void **v8; // r13
  __int64 result; // rax

  v2 = a1 + 13920;
LABEL_2:
  v3 = *(char **)(v2 + 528);
  v4 = &v3[64 * (unsigned __int64)*(unsigned int *)(v2 + 536)];
  if ( v3 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v4 -= 64;
        v5 = *((char **)v4 + 3);
        if ( v5 == v4 + 40 )
          break;
        operator delete(v5);
        if ( v3 == v4 )
          goto LABEL_5;
      }
    }
    while ( v3 != v4 );
LABEL_5:
    v3 = *(char **)(v2 + 528);
  }
  if ( v3 != (char *)(v2 + 544) )
    free(v3);
  v6 = *(void **)(v2 + 416);
  if ( v6 != (void *)(v2 + 432) )
    free(v6);
  v7 = (void **)(v2 + 384);
  v8 = (void **)(v2 + 64);
  do
  {
    while ( *v7 != v7 + 2 )
    {
      operator delete(*v7);
      v7 -= 4;
      if ( v8 == v7 )
      {
        result = v2 - 928;
        if ( v2 == a1 )
          return result;
LABEL_14:
        v2 = result;
        goto LABEL_2;
      }
    }
    v7 -= 4;
  }
  while ( v7 != v8 );
  result = v2 - 928;
  if ( v2 != a1 )
    goto LABEL_14;
  return result;
}

