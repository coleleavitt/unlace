void __fastcall sub_2DD6D0(__int64 a1)
{
  char *v2; // r15
  __int64 v3; // rax
  __int64 v4; // rbx
  char *v5; // r14
  char *v6; // r12
  void *v7; // rbp
  char *v8; // r12
  __int64 v9; // rsi
  void *v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rax
  void *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r15
  void *v17; // r14
  __int64 v18; // rsi
  void *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r14
  void *v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r14
  void *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // [rsp+8h] [rbp-40h]

  v2 = *(char **)(a1 + 72);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 80);
    if ( (_DWORD)v3 )
    {
      v4 = *(_QWORD *)(a1 + 72);
      v5 = &v2[40 * v3];
      do
      {
        while ( 1 )
        {
          v6 = *(char **)(v4 + 24);
          if ( v6 )
          {
            v7 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, *(_QWORD *)(v4 + 24));
            sub_182CBA0(v7, v6 + 16);
            sub_186B220(v6);
          }
          v8 = *(char **)(v4 + 16);
          if ( !v8 )
            break;
          v9 = *(_QWORD *)(v4 + 16);
          v4 += 40;
          v10 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v9);
          sub_182CBA0(v10, v8 + 16);
          sub_186B220(v8);
          if ( (char *)v4 == v5 )
            goto LABEL_8;
        }
        v4 += 40;
      }
      while ( (char *)v4 != v5 );
    }
LABEL_8:
    sub_186B220(v2);
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    if ( (_DWORD)v12 )
    {
      v32 = v11 + 96 * v12;
      do
      {
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v11 + 64);
        sub_182CBA0(v13, v11 + 80);
        v14 = *(_QWORD *)(v11 + 48);
        if ( v14 )
        {
          v15 = *(unsigned int *)(v14 - 4);
          if ( (_DWORD)v15 )
          {
            v16 = v14 + 40 * v15;
            do
            {
              v17 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v14);
              v18 = v14 + 16;
              v14 += 40;
              sub_182CBA0(v17, v18);
            }
            while ( v14 != v16 );
            v14 = *(_QWORD *)(v11 + 48);
          }
          sub_186B220((void *)(v14 - 8));
        }
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v11 + 16);
        v20 = v11 + 32;
        v11 += 96;
        sub_182CBA0(v19, v20);
      }
      while ( v11 != v32 );
      v11 = *(_QWORD *)(a1 + 64);
    }
    sub_186B220((void *)(v11 - 8));
  }
  v21 = *(_QWORD *)(a1 + 56);
  if ( v21 )
  {
    v22 = *(unsigned int *)(v21 - 4);
    if ( (_DWORD)v22 )
    {
      v23 = v21 + 40 * v22;
      do
      {
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v21);
        v25 = v21 + 16;
        v21 += 40;
        sub_182CBA0(v24, v25);
      }
      while ( v21 != v23 );
      v21 = *(_QWORD *)(a1 + 56);
    }
    sub_186B220((void *)(v21 - 8));
  }
  v26 = *(_QWORD *)(a1 + 32);
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = *(_QWORD *)(a1 + 16);
  if ( v27 )
  {
    v28 = *(unsigned int *)(v27 - 4);
    if ( (_DWORD)v28 )
    {
      v29 = v27 + 56 * v28;
      do
      {
        v30 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v27 + 16);
        v31 = v27 + 32;
        v27 += 56;
        sub_182CBA0(v30, v31);
      }
      while ( v29 != v27 );
      v27 = *(_QWORD *)(a1 + 16);
    }
    sub_186B220((void *)(v27 - 8));
  }
}

