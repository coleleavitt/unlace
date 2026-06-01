void __fastcall sub_451160(_QWORD *a1)
{
  void (__fastcall ***v2)(void *); // rbx
  bool v3; // zf
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  void *v7; // r12
  __int64 v8; // rsi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi

  v2 = (void (__fastcall ***)(void *))a1[27];
  *a1 = &off_1C4E958;
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 12))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  v4 = a1[25];
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 32 * v5;
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4);
        v8 = v4 + 16;
        v4 += 32;
        sub_182CBA0(v7, v8);
      }
      while ( v4 != v6 );
      v4 = a1[25];
    }
    sub_186B220((void *)(v4 - 8));
  }
  v9 = (__int64 *)a1[24];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[23];
          v3 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_17;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_17:
    v9 = (__int64 *)a1[24];
    if ( v9 )
LABEL_18:
      sub_186B220(v9 - 1);
  }
  v13 = (__int64 *)a1[21];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 >= v14 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = a1[20];
          v3 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_26;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_26:
    v13 = (__int64 *)a1[21];
    if ( v13 )
LABEL_27:
      sub_186B220(v13 - 1);
  }
  operator delete(a1, 0xE8u);
}

