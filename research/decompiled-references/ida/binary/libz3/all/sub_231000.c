void __fastcall sub_231000(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  void *v13; // rdi

  *a1 = &off_1C4C428;
  v2 = a1[13];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[12];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (__int64 *)a1[11];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[10];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_12;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_12:
    v4 = (__int64 *)a1[11];
    if ( v4 )
LABEL_13:
      sub_186B220(v4 - 1);
  }
  v9 = (__int64 *)a1[9];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[8];
          v8 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_21;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_21:
    v9 = (__int64 *)a1[9];
    if ( v9 )
LABEL_22:
      sub_186B220(v9 - 1);
  }
  v13 = (void *)a1[5];
  if ( v13 )
    sub_186B220(v13);
  operator delete(a1, 0x78u);
}

