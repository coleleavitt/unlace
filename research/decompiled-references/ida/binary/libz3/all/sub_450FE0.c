__int64 __fastcall sub_450FE0(_QWORD *a1)
{
  __int64 result; // rax
  void (__fastcall ***v3)(void *); // rbx
  bool v4; // zf
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r13
  void *v8; // r12
  __int64 v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi

  result = (__int64)&off_1C4E958;
  v3 = (void (__fastcall ***)(void *))a1[27];
  *a1 = &off_1C4E958;
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 12))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      result = sub_186B220(v3);
    }
  }
  v5 = a1[25];
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)v6 )
    {
      v7 = v5 + 32 * v6;
      do
      {
        v8 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v5);
        v9 = v5 + 16;
        v5 += 32;
        sub_182CBA0(v8, v9);
      }
      while ( v5 != v7 );
      v5 = a1[25];
    }
    result = sub_186B220((void *)(v5 - 8));
  }
  v10 = (__int64 *)a1[24];
  if ( v10 )
  {
    result = *((unsigned int *)v10 - 1);
    v11 = &v10[result];
    if ( v10 >= v11 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = a1[23];
          v4 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_17;
      }
      result = sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_17:
    v10 = (__int64 *)a1[24];
    if ( v10 )
LABEL_18:
      result = sub_186B220(v10 - 1);
  }
  v14 = (__int64 *)a1[21];
  if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v15 = &v14[result];
    if ( v14 >= v15 )
      return sub_186B220(v14 - 1);
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[20];
          v4 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v4 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_26;
      }
      result = sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_26:
    v14 = (__int64 *)a1[21];
    if ( v14 )
      return sub_186B220(v14 - 1);
  }
  return result;
}

