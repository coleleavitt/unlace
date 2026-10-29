void __fastcall sub_A7A240(__int64 a1)
{
  char *v2; // r15
  __int64 v3; // rax
  char *v4; // rbx
  char *v5; // r14
  void *v6; // r12
  char *v7; // rsi
  char *v8; // r15
  __int64 v9; // rax
  char *v10; // rbx
  char *v11; // r14
  void *v12; // r12
  char *v13; // rsi
  char *v14; // r15
  __int64 v15; // rax
  char *v16; // rbx
  char *v17; // r14
  void *v18; // r12
  char *v19; // rsi
  void *v20; // rdi
  void *v21; // rdi

  v2 = *(char **)(a1 + 120);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 128);
    if ( (_DWORD)v3 )
    {
      v4 = *(char **)(a1 + 120);
      v5 = &v2[48 * v3];
      do
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4 + 8);
        v7 = v4 + 24;
        v4 += 48;
        sub_182CBA0(v6, v7);
      }
      while ( v4 != v5 );
    }
    sub_186B220(v2);
  }
  v8 = *(char **)(a1 + 96);
  if ( v8 )
  {
    v9 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v9 )
    {
      v10 = *(char **)(a1 + 96);
      v11 = &v8[48 * v9];
      do
      {
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v10 + 8);
        v13 = v10 + 24;
        v10 += 48;
        sub_182CBA0(v12, v13);
      }
      while ( v10 != v11 );
    }
    sub_186B220(v8);
  }
  v14 = *(char **)(a1 + 72);
  if ( v14 )
  {
    v15 = *(unsigned int *)(a1 + 80);
    if ( (_DWORD)v15 )
    {
      v16 = *(char **)(a1 + 72);
      v17 = &v14[48 * v15];
      do
      {
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16 + 8);
        v19 = v16 + 24;
        v16 += 48;
        sub_182CBA0(v18, v19);
      }
      while ( v17 != v16 );
    }
    sub_186B220(v14);
  }
  v20 = *(void **)(a1 + 32);
  if ( v20 )
    sub_186B220(v20);
  v21 = *(void **)(a1 + 8);
  if ( v21 )
    sub_186B220(v21);
  if ( *(_QWORD *)a1 )
    sub_186B220((void *)(*(_QWORD *)a1 - 8LL));
}

