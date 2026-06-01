void __fastcall sub_6C1700(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // r12
  void *v10; // rdi
  __int64 v11; // rdi
  void *v12; // rdi

  v2 = (__int64 *)a1[9];
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
          v5 = a1[8];
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
    v2 = (__int64 *)a1[9];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (_QWORD *)a1[7];
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v7[v8];
      do
      {
        while ( *v7 )
        {
          v10 = (void *)(*v7++ - 8LL);
          sub_186B220(v10);
          if ( v7 == v9 )
          {
            v7 = (_QWORD *)a1[7];
            goto LABEL_16;
          }
        }
        ++v7;
      }
      while ( v7 != v9 );
      v7 = (_QWORD *)a1[7];
    }
LABEL_16:
    sub_186B220(v7 - 1);
  }
  v11 = a1[6];
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = (void *)a1[3];
  if ( v12 )
    sub_186B220(v12);
}

