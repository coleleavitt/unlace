__int64 __fastcall sub_2FCBA0(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  _QWORD *v10; // rbp
  __int64 v11; // rax
  void *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r15
  void *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 result; // rax
  void *v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  _QWORD *v28; // [rsp+8h] [rbp-40h]

  v2 = (__int64 *)a1[20];
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = &v2[4 * v3];
      do
      {
        v8 = v2[2];
        if ( v8 )
        {
          v9 = v2[3];
          v7 = (*(_DWORD *)(v8 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v9, v8);
        }
        v5 = *v2;
        if ( *v2 )
        {
          v6 = v2[1];
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v6, v5);
        }
        v2 += 4;
      }
      while ( v4 != v2 );
      v2 = (__int64 *)a1[20];
    }
    sub_186B220(v2 - 1);
  }
  v10 = (_QWORD *)a1[19];
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 )
    {
      v28 = &v10[13 * v11];
      do
      {
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v10 + 6);
        sub_182CBA0(v12, v10 + 8);
        v13 = v10[5];
        if ( v13 )
        {
          v14 = *(unsigned int *)(v13 - 4);
          if ( (_DWORD)v14 )
          {
            v15 = v13 + 32 * v14;
            do
            {
              v16 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v13);
              v17 = v13 + 16;
              v13 += 32;
              sub_182CBA0(v16, v17);
            }
            while ( v13 != v15 );
            v13 = v10[5];
          }
          sub_186B220((void *)(v13 - 8));
        }
        sub_2334C0(v10 + 3);
        v18 = v10[1];
        if ( v18 )
        {
          v19 = v10[2];
          v7 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v19, v18);
        }
        v10 += 13;
      }
      while ( v28 != v10 );
      v10 = (_QWORD *)a1[19];
    }
    sub_186B220(v10 - 1);
  }
  sub_2334C0(a1 + 17);
  result = sub_2334C0(a1 + 15);
  v21 = (void *)a1[12];
  if ( v21 )
    result = sub_186B220(v21);
  v22 = a1[11];
  if ( v22 )
    result = sub_186B220((void *)(v22 - 8));
  v23 = a1[10];
  if ( v23 )
    result = sub_186B220((void *)(v23 - 8));
  v24 = a1[9];
  if ( v24 )
    result = sub_186B220((void *)(v24 - 8));
  v25 = a1[8];
  if ( v25 )
    result = sub_186B220((void *)(v25 - 8));
  v26 = a1[7];
  if ( v26 )
    result = sub_186B220((void *)(v26 - 8));
  v27 = a1[6];
  if ( v27 )
    return sub_186B220((void *)(v27 - 8));
  return result;
}

