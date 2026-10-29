void __fastcall sub_5E4360(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  __int64 v11; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // rsi

  v2 = (__int64 *)a1[25];
  *a1 = &off_1C52638;
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
          v5 = a1[24];
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
    v2 = (__int64 *)a1[25];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (void *)a1[21];
  if ( v7 )
    sub_186B220(v7);
  v8 = (void *)a1[18];
  if ( v8 )
    sub_186B220(v8);
  v9 = (void *)a1[15];
  if ( v9 )
    sub_186B220(v9);
  v10 = (void *)a1[11];
  if ( v10 )
    sub_186B220(v10);
  v11 = a1[9];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = (__int64 *)a1[7];
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_24;
    do
    {
      v14 = *v12++;
      sub_62A410(a1[6], v14);
    }
    while ( v12 < v13 );
    v12 = (__int64 *)a1[7];
    if ( v12 )
LABEL_24:
      sub_186B220(v12 - 1);
  }
  operator delete(a1, 0xD0u);
}

