void __fastcall sub_5648A0(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi

  v2 = (__int64 *)a1[11];
  *a1 = &off_1C50F78;
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
          v5 = a1[10];
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
    v2 = (__int64 *)a1[11];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (__int64 *)a1[8];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_14;
    do
    {
      v9 = *v7++;
      sub_62A410(a1[7], v9);
    }
    while ( v7 < v8 );
    v7 = (__int64 *)a1[8];
    if ( v7 )
LABEL_14:
      sub_186B220(v7 - 1);
  }
  v10 = a1[6];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  operator delete(a1, 0x60u);
}

