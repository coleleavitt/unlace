void __fastcall sub_ACC960(__int64 *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rsi
  __int64 *i; // rax
  __int64 v6; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  v2 = (__int64 *)a1[1];
  v3 = &v2[2 * *((unsigned int *)a1 + 4)];
  if ( v2 != v3 )
  {
    while ( (unsigned __int64)*v2 <= 1 )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_14;
    }
    if ( v3 != v2 )
    {
      v4 = *v2;
      if ( *v2 )
        goto LABEL_12;
LABEL_7:
      for ( i = v2 + 2; v3 != v2 + 2; i = v2 + 2 )
      {
        while ( 1 )
        {
          v4 = *i;
          v2 = i;
          if ( (unsigned __int64)*i > 1 )
            break;
          i += 2;
          if ( v3 == i )
            goto LABEL_14;
        }
        if ( v3 == i )
          break;
LABEL_12:
        v6 = *a1;
        if ( (*(_DWORD *)(v4 + 8))-- != 1 )
          goto LABEL_7;
        sub_15D7BC0(v6, v4);
      }
    }
  }
LABEL_14:
  v8 = (void *)a1[9];
  if ( v8 )
    sub_186B220(v8);
  v9 = (void *)a1[4];
  if ( v9 )
    sub_186B220(v9);
  v10 = (void *)a1[1];
  if ( v10 )
    sub_186B220(v10);
}

