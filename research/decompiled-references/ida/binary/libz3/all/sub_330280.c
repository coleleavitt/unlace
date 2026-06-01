__int64 __fastcall sub_330280(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  void *v5; // r13
  void *v6; // r13
  void *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r14
  void *v12; // r13
  void *v13; // r13
  void *v14; // r13
  __int64 v15; // rsi
  _QWORD *v16; // rbx
  _QWORD *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  __int64 result; // rax
  void (__fastcall ***v22)(void *); // rbx
  void (__fastcall ***v23)(void *); // rbx
  void **v24; // rbx
  void **v25; // r13
  void (__fastcall ***v26)(void *); // r12
  _QWORD *v27; // rbx
  _QWORD *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rdi

  v2 = a1[3];
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 96 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2 + 64);
        sub_182CBA0(v5, v2 + 80);
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2 + 32);
        sub_182CBA0(v6, v2 + 48);
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2);
        v8 = v2 + 16;
        v2 += 96;
        sub_182CBA0(v7, v8);
      }
      while ( v2 != v4 );
      v2 = a1[3];
    }
    *(_DWORD *)(v2 - 4) = 0;
  }
  v9 = a1[4];
  if ( v9 )
  {
    v10 = *(unsigned int *)(v9 - 4);
    if ( (_DWORD)v10 )
    {
      v11 = v9 + 96 * v10;
      do
      {
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v9 + 64);
        sub_182CBA0(v12, v9 + 80);
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v9 + 32);
        sub_182CBA0(v13, v9 + 48);
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v9);
        v15 = v9 + 16;
        v9 += 96;
        sub_182CBA0(v14, v15);
      }
      while ( v9 != v11 );
      v9 = a1[4];
    }
    *(_DWORD *)(v9 - 4) = 0;
  }
  v16 = (_QWORD *)a1[6];
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v16 >= v17 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = a1[5];
          v20 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v20 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_20;
      }
      sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_20:
    v16 = (_QWORD *)a1[6];
    if ( v16 )
LABEL_21:
      *((_DWORD *)v16 - 1) = 0;
  }
  result = a1[9];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v22 = (void (__fastcall ***)(void *))a1[11];
  if ( v22 )
  {
    v20 = (*((_DWORD *)v22 + 4))-- == 1;
    if ( v20 )
    {
      (**v22)(v22);
      result = sub_186B220(v22);
    }
  }
  v23 = (void (__fastcall ***)(void *))a1[12];
  a1[11] = 0;
  if ( v23 )
  {
    v20 = (*((_DWORD *)v23 + 4))-- == 1;
    if ( v20 )
    {
      (**v23)(v23);
      result = sub_186B220(v23);
    }
  }
  v24 = (void **)a1[14];
  a1[12] = 0;
  if ( v24 )
  {
    result = *((unsigned int *)v24 - 1);
    v25 = &v24[result];
    if ( v24 >= v25 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v26 = (void (__fastcall ***)(void *))*v24;
        if ( *v24 )
        {
          v20 = (*((_DWORD *)v26 + 4))-- == 1;
          if ( v20 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_37;
      }
      ++v24;
      (**v26)(v26);
      result = sub_186B220(v26);
    }
    while ( v24 < v25 );
LABEL_37:
    v24 = (void **)a1[14];
    if ( v24 )
LABEL_38:
      *((_DWORD *)v24 - 1) = 0;
  }
  v27 = (_QWORD *)a1[8];
  if ( v27 )
  {
    result = *((unsigned int *)v27 - 1);
    v28 = &v27[result];
    if ( v27 >= v28 )
      goto LABEL_47;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = a1[7];
          v20 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v20 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_46;
      }
      result = sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_46:
    v27 = (_QWORD *)a1[8];
    if ( v27 )
LABEL_47:
      *((_DWORD *)v27 - 1) = 0;
  }
  a1[2] = 0;
  return result;
}

