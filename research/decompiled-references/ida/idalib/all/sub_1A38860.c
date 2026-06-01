void __fastcall sub_1A38860(char *a1)
{
  char *v2; // rax
  char *v3; // rdi
  char *v4; // rbp
  char *v5; // r12
  char *v6; // rdi
  char *v7; // r13

  v2 = a1 + 248;
  v3 = *((char **)a1 + 29);
  if ( v3 != v2 )
    free(v3);
  if ( !a1[188] )
    free(*((void **)a1 + 21));
  if ( (a1[32] & 1) == 0 )
    operator delete(*((_QWORD *)a1 + 5), 16LL * *((unsigned int *)a1 + 12), 8);
  v4 = *((char **)a1 + 1);
  v5 = a1 + 8;
  if ( v4 != a1 + 8 )
  {
    while ( 1 )
    {
      v6 = *((char **)v4 + 2);
      v7 = *(char **)v4;
      if ( v6 == v4 + 32 )
      {
        operator delete(v4);
        if ( v7 == v5 )
          break;
      }
      else
      {
        free(v6);
        operator delete(v4);
        if ( v7 == v5 )
          break;
      }
      v4 = v7;
    }
  }
  operator delete(a1, 0x170u);
}
