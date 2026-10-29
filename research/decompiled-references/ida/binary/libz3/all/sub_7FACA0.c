void __fastcall sub_7FACA0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  char **v5; // rbp
  __int64 v6; // rax
  void *v7; // r12
  __int64 v8; // rax
  char *v9; // r15
  char *v10; // r12
  void *v11; // r14
  char *v12; // rsi
  char **v13; // rbp
  __int64 v14; // rax
  void *v15; // r12
  __int64 v16; // rax
  char *v17; // r15
  char *v18; // r12
  void *v19; // r14
  char *v20; // rsi
  void *v21; // rbp
  char *v22; // r15
  __int64 v23; // rax
  char *v24; // rbp
  char *v25; // r14
  void *v26; // r12
  char *v27; // rsi
  void *v28; // rbp
  char *v29; // r15
  __int64 v30; // rax
  char *v31; // rbp
  char *v32; // r14
  void *v33; // r12
  char *v34; // rsi
  __int64 v35; // rbp
  __int64 v36; // rax
  __int64 v37; // r14
  void *v38; // r12
  __int64 v39; // rsi
  char *ptr; // [rsp+0h] [rbp-48h]
  char *ptra; // [rsp+0h] [rbp-48h]
  char **v42; // [rsp+8h] [rbp-40h]
  char **v43; // [rsp+8h] [rbp-40h]

  *a1 = &off_1C54C38;
  v2 = a1[28];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[27];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[26];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = (char **)a1[21];
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 )
    {
      v42 = &v5[7 * v6];
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v5 + 3);
        sub_182CBA0(v7, v5 + 5);
        ptr = *v5;
        if ( *v5 )
        {
          v8 = *((unsigned int *)v5 + 2);
          if ( (_DWORD)v8 )
          {
            v9 = *v5;
            v10 = &ptr[40 * v8];
            do
            {
              v11 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v9 + 8);
              v12 = v9 + 24;
              v9 += 40;
              sub_182CBA0(v11, v12);
            }
            while ( v9 != v10 );
          }
          sub_186B220(ptr);
        }
        v5 += 7;
      }
      while ( v5 != v42 );
      v5 = (char **)a1[21];
    }
    sub_186B220(v5 - 1);
  }
  v13 = (char **)a1[20];
  if ( v13 )
  {
    v14 = *((unsigned int *)v13 - 1);
    if ( (_DWORD)v14 )
    {
      v43 = &v13[7 * v14];
      do
      {
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13 + 3);
        sub_182CBA0(v15, v13 + 5);
        ptra = *v13;
        if ( *v13 )
        {
          v16 = *((unsigned int *)v13 + 2);
          if ( (_DWORD)v16 )
          {
            v17 = *v13;
            v18 = &ptra[40 * v16];
            do
            {
              v19 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v17 + 8);
              v20 = v17 + 24;
              v17 += 40;
              sub_182CBA0(v19, v20);
            }
            while ( v17 != v18 );
          }
          sub_186B220(ptra);
        }
        v13 += 7;
      }
      while ( v13 != v43 );
      v13 = (char **)a1[20];
    }
    sub_186B220(v13 - 1);
  }
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 16);
  sub_182CBA0(v21, a1 + 18);
  v22 = (char *)a1[13];
  if ( v22 )
  {
    v23 = *((unsigned int *)a1 + 28);
    if ( (_DWORD)v23 )
    {
      v24 = (char *)a1[13];
      v25 = &v22[40 * v23];
      do
      {
        v26 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v24 + 8);
        v27 = v24 + 24;
        v24 += 40;
        sub_182CBA0(v26, v27);
      }
      while ( v24 != v25 );
    }
    sub_186B220(v22);
  }
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 9);
  sub_182CBA0(v28, a1 + 11);
  v29 = (char *)a1[6];
  if ( v29 )
  {
    v30 = *((unsigned int *)a1 + 14);
    if ( (_DWORD)v30 )
    {
      v31 = (char *)a1[6];
      v32 = &v29[40 * v30];
      do
      {
        v33 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v31 + 8);
        v34 = v31 + 24;
        v31 += 40;
        sub_182CBA0(v33, v34);
      }
      while ( v32 != v31 );
    }
    sub_186B220(v29);
  }
  v35 = a1[4];
  if ( v35 )
  {
    v36 = *(unsigned int *)(v35 - 4);
    if ( (_DWORD)v36 )
    {
      v37 = v35 + 40 * v36;
      do
      {
        v38 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v35);
        v39 = v35 + 16;
        v35 += 40;
        sub_182CBA0(v38, v39);
      }
      while ( v37 != v35 );
      v35 = a1[4];
    }
    sub_186B220((void *)(v35 - 8));
  }
  operator delete(a1, 0xE8u);
}

