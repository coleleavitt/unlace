void __fastcall sub_223C6C0(__int64 *a1)
{
  __int64 v1; // rdi
  char *v3; // r13
  char *v4; // rbx
  char *v5; // rdi
  char *v6; // r14
  __int64 v7; // rbp
  void *v8; // rdi

  if ( (a1[9] & 1) != 0 )
  {
    v1 = *a1;
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  }
  else
  {
    v3 = (char *)a1[2];
    v4 = &v3[40 * *((unsigned int *)a1 + 6)];
    if ( v3 != v4 )
    {
      do
      {
        while ( 1 )
        {
          v4 -= 40;
          v5 = *((char **)v4 + 2);
          if ( v5 != v4 + 40 )
            free(v5);
          v6 = *(char **)v4;
          v7 = *(_QWORD *)v4 + 80LL * *((unsigned int *)v4 + 2);
          if ( *(_QWORD *)v4 != v7 )
          {
            do
            {
              while ( 1 )
              {
                v7 -= 80;
                v8 = *(void **)(v7 + 8);
                if ( v8 == (void *)(v7 + 24) )
                  break;
                free(v8);
                if ( v6 == (char *)v7 )
                  goto LABEL_11;
              }
            }
            while ( v6 != (char *)v7 );
LABEL_11:
            v6 = *(char **)v4;
          }
          if ( v6 == v4 + 16 )
            break;
          free(v6);
          if ( v3 == v4 )
            goto LABEL_14;
        }
      }
      while ( v3 != v4 );
LABEL_14:
      v4 = (char *)a1[2];
    }
    if ( v4 != (char *)(a1 + 4) )
      free(v4);
  }
}
