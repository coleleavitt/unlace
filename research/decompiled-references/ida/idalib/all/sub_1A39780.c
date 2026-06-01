void __fastcall sub_1A39780(char *a1)
{
  char *v2; // rax
  char *v3; // rdi
  char *v4; // rbp
  char *v5; // r13
  char *v6; // rdi
  char *v7; // r12

  if ( a1 )
  {
    v2 = a1 + 248;
    v3 = *((char **)a1 + 29);
    if ( v3 != v2 )
      free(v3);
    if ( a1[188] )
    {
      if ( (a1[32] & 1) != 0 )
        goto LABEL_6;
    }
    else
    {
      free(*((void **)a1 + 21));
      if ( (a1[32] & 1) != 0 )
      {
LABEL_6:
        v4 = *((char **)a1 + 1);
        v5 = a1 + 8;
        if ( v4 != a1 + 8 )
          goto LABEL_10;
LABEL_7:
        operator delete(a1, 0x170u);
        return;
      }
    }
    v5 = a1 + 8;
    operator delete(*((_QWORD *)a1 + 5), 16LL * *((unsigned int *)a1 + 12), 8);
    v4 = *((char **)a1 + 1);
    if ( v4 != a1 + 8 )
    {
      while ( 1 )
      {
LABEL_10:
        v6 = *((char **)v4 + 2);
        v7 = *(char **)v4;
        if ( v6 == v4 + 32 )
        {
          operator delete(v4);
          if ( v7 == v5 )
            goto LABEL_7;
        }
        else
        {
          free(v6);
          operator delete(v4);
          if ( v7 == v5 )
            goto LABEL_7;
        }
        v4 = v7;
      }
    }
    goto LABEL_7;
  }
}
