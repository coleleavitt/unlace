void __fastcall sub_5C2D80(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  char *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  char *v10; // r12
  void *v11; // rdi
  void *v12; // rdi

  v2 = (__int64 *)a1[12];
  *a1 = &off_1C68570;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[11];
          if ( (*(_DWORD *)(v4 + 8))-- == 1 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (__int64 *)a1[12];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (char *)a1[8];
  if ( v7 )
  {
    v8 = *((unsigned int *)a1 + 18);
    if ( (_DWORD)v8 )
    {
      v9 = a1[8];
      v10 = &v7[24 * v8];
      do
      {
        while ( 1 )
        {
          v11 = *(void **)(v9 + 16);
          if ( !v11 )
            break;
          sub_186B220(v11);
          v9 += 24;
          if ( v10 == (char *)v9 )
            goto LABEL_15;
        }
        v9 += 24;
      }
      while ( (char *)v9 != v10 );
    }
LABEL_15:
    sub_186B220(v7);
  }
  v12 = (void *)a1[5];
  if ( v12 )
    sub_186B220(v12);
  operator delete(a1, 0x68u);
}

