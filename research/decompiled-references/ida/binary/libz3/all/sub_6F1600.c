void __fastcall sub_6F1600(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rdi
  void *v18; // rdi

  v2 = (__int64 *)a1[17];
  *a1 = &off_1C53478;
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
          v5 = a1[16];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
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
    v2 = (__int64 *)a1[17];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (__int64 *)a1[15];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[14];
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = (__int64 *)a1[15];
    if ( v7 )
LABEL_18:
      sub_186B220(v7 - 1);
  }
  v11 = (__int64 *)a1[13];
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 >= v12 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = a1[12];
          v6 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_26;
      }
      sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_26:
    v11 = (__int64 *)a1[13];
    if ( v11 )
LABEL_27:
      sub_186B220(v11 - 1);
  }
  v15 = (void *)a1[11];
  if ( v15 )
    sub_186B220(v15);
  v16 = (void *)a1[8];
  if ( v16 )
    sub_186B220(v16);
  v17 = a1[5];
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = (void *)a1[4];
  if ( v18 )
    sub_186B220(v18);
  operator delete(a1, 0x90u);
}

