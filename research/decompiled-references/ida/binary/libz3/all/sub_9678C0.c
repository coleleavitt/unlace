void __fastcall sub_9678C0(char **a1)
{
  char *v1; // r8
  __int64 v2; // r9
  char *v3; // rsi
  char *v4; // rcx
  char *v5; // rax
  int v6; // edi
  __int64 v7; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 3);
    v3 = &v1[v2];
    if ( v1 != &v1[v2] )
    {
      v4 = *a1;
      v5 = *a1;
      v6 = 0;
      do
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)v5;
          if ( *(char *)(*(_QWORD *)v5 + 7LL) < 0 )
            break;
          v5 += 8;
          *(_QWORD *)v4 = v7;
          v4 += 8;
          if ( v5 == v3 )
            goto LABEL_7;
        }
        v5 += 8;
        ++v6;
      }
      while ( v5 != v3 );
LABEL_7:
      if ( v6 )
        *((_DWORD *)v1 - 3) = v2 - 8 * v6;
    }
  }
}

