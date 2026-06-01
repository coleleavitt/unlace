__int64 *__fastcall sub_539CB0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r14
  void *v6; // r13
  __int64 v7; // rsi
  __int64 *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r15
  void *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r14
  void *v19; // r13
  __int64 v20; // rsi
  __int64 *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // r15
  void *v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v31; // rdi
  __int64 *result; // rax
  __int64 *v33; // [rsp+8h] [rbp-40h]
  __int64 *v34; // [rsp+8h] [rbp-40h]

  *a1 = &off_1C67178;
  v2 = a1[17];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[16];
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v5 = v3 + 32 * v4;
      do
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v3);
        v7 = v3 + 16;
        v3 += 32;
        sub_182CBA0(v6, v7);
      }
      while ( v3 != v5 );
      v3 = a1[16];
    }
    sub_186B220((void *)(v3 - 8));
  }
  v8 = (__int64 *)a1[15];
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 )
    {
      v33 = &v8[v9];
      do
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = *(unsigned int *)(v10 - 4);
          if ( (_DWORD)v11 )
          {
            v12 = v10 + 32 * v11;
            do
            {
              v13 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v10);
              v14 = v10 + 16;
              v10 += 32;
              sub_182CBA0(v13, v14);
            }
            while ( v12 != v10 );
            v10 = *v8;
          }
          sub_186B220((void *)(v10 - 8));
        }
        ++v8;
      }
      while ( v8 != v33 );
      v8 = (__int64 *)a1[15];
    }
    sub_186B220(v8 - 1);
  }
  v15 = a1[13];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[12];
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 - 4);
    if ( (_DWORD)v17 )
    {
      v18 = v16 + 32 * v17;
      do
      {
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16);
        v20 = v16 + 16;
        v16 += 32;
        sub_182CBA0(v19, v20);
      }
      while ( v18 != v16 );
      v16 = a1[12];
    }
    sub_186B220((void *)(v16 - 8));
  }
  v21 = (__int64 *)a1[11];
  if ( v21 )
  {
    v22 = *((unsigned int *)v21 - 1);
    if ( (_DWORD)v22 )
    {
      v34 = &v21[v22];
      do
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = *(unsigned int *)(v23 - 4);
          if ( (_DWORD)v24 )
          {
            v25 = v23 + 32 * v24;
            do
            {
              v26 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v23);
              v27 = v23 + 16;
              v23 += 32;
              sub_182CBA0(v26, v27);
            }
            while ( v25 != v23 );
            v23 = *v21;
          }
          sub_186B220((void *)(v23 - 8));
        }
        ++v21;
      }
      while ( v34 != v21 );
      v21 = (__int64 *)a1[11];
    }
    sub_186B220(v21 - 1);
  }
  v28 = a1[8];
  if ( v28 )
  {
    v29 = a1[9];
    if ( (*(_DWORD *)(v28 + 8))-- == 1 )
      sub_15D7BC0(v29, v28);
  }
  v31 = a1[2];
  result = qword_1C665B0;
  *a1 = qword_1C665B0;
  if ( v31 )
    return (__int64 *)sub_186B220((void *)(v31 - 8));
  return result;
}

