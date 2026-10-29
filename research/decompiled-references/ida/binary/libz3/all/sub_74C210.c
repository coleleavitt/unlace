void __fastcall sub_74C210(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD); // rbx
  void (__fastcall ***v2)(void *); // rbx
  bool v3; // zf
  void (__fastcall ***v4)(void *); // rbx
  char *v5; // r15
  __int64 v6; // rax
  char *v7; // rbx
  char *v8; // r14
  void *v9; // r13
  char *v10; // rsi
  char *v11; // r15
  __int64 v12; // rax
  char *v13; // rbx
  char *v14; // r14
  void *v15; // r13
  char *v16; // rsi
  char *v17; // r15
  __int64 v18; // rax
  char *v19; // rbx
  char *v20; // r14
  void *v21; // r13
  char *v22; // rsi
  char *v23; // r15
  __int64 v24; // rax
  char *v25; // rbx
  char *v26; // r14
  void *v27; // r13
  char *v28; // rsi

  v1 = (void (__fastcall ***)(_QWORD))a1[20];
  *a1 = &off_1C54120;
  if ( v1 )
  {
    (**v1)(v1);
    sub_186B220(v1);
  }
  v2 = (void (__fastcall ***)(void *))a1[19];
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 2))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  v4 = (void (__fastcall ***)(void *))a1[18];
  if ( v4 )
  {
    v3 = (*((_DWORD *)v4 + 2))-- == 1;
    if ( v3 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  v5 = (char *)a1[15];
  if ( v5 )
  {
    v6 = *((unsigned int *)a1 + 32);
    if ( (_DWORD)v6 )
    {
      v7 = (char *)a1[15];
      v8 = &v5[40 * v6];
      do
      {
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v7 + 8);
        v10 = v7 + 24;
        v7 += 40;
        sub_182CBA0(v9, v10);
      }
      while ( v7 != v8 );
    }
    sub_186B220(v5);
  }
  v11 = (char *)a1[12];
  if ( v11 )
  {
    v12 = *((unsigned int *)a1 + 26);
    if ( (_DWORD)v12 )
    {
      v13 = (char *)a1[12];
      v14 = &v11[40 * v12];
      do
      {
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v13 + 8);
        v16 = v13 + 24;
        v13 += 40;
        sub_182CBA0(v15, v16);
      }
      while ( v13 != v14 );
    }
    sub_186B220(v11);
  }
  v17 = (char *)a1[9];
  if ( v17 )
  {
    v18 = *((unsigned int *)a1 + 20);
    if ( (_DWORD)v18 )
    {
      v19 = (char *)a1[9];
      v20 = &v17[40 * v18];
      do
      {
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v19 + 8);
        v22 = v19 + 24;
        v19 += 40;
        sub_182CBA0(v21, v22);
      }
      while ( v20 != v19 );
    }
    sub_186B220(v17);
  }
  v23 = (char *)a1[6];
  if ( v23 )
  {
    v24 = *((unsigned int *)a1 + 14);
    if ( (_DWORD)v24 )
    {
      v25 = (char *)a1[6];
      v26 = &v23[40 * v24];
      do
      {
        v27 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v25 + 8);
        v28 = v25 + 24;
        v25 += 40;
        sub_182CBA0(v27, v28);
      }
      while ( v25 != v26 );
    }
    sub_186B220(v23);
  }
  operator delete(a1, 0xB0u);
}

