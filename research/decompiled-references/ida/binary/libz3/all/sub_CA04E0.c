void __fastcall sub_CA04E0(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r13
  void *v15; // r12
  __int64 v16; // rsi

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
    v2 = (__int64 *)a1[9];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = a1[6];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = (__int64 *)a1[5];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[4];
          v6 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_19;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_19:
    v8 = (__int64 *)a1[5];
    if ( v8 )
LABEL_20:
      sub_186B220(v8 - 1);
  }
  v12 = a1[3];
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 - 4);
    if ( (_DWORD)v13 )
    {
      v14 = v12 + 32 * v13;
      do
      {
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v12);
        v16 = v12 + 16;
        v12 += 32;
        sub_182CBA0(v15, v16);
      }
      while ( v12 != v14 );
      v12 = a1[3];
    }
    sub_186B220((void *)(v12 - 8));
  }
}

