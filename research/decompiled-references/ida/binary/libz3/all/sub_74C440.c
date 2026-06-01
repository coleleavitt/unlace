__int64 (__fastcall **__fastcall sub_74C440(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  void (__fastcall ***v2)(_QWORD); // rbx
  void (__fastcall ***v3)(void *); // rbx
  bool v4; // zf
  void (__fastcall ***v5)(void *); // rbx
  char *v6; // r15
  __int64 v7; // rax
  char *v8; // rbx
  char *v9; // r14
  void *v10; // r12
  char *v11; // rsi
  char *v12; // r15
  __int64 v13; // rax
  char *v14; // rbx
  char *v15; // r14
  void *v16; // r12
  char *v17; // rsi
  char *v18; // r15
  __int64 v19; // rax
  char *v20; // rbx
  char *v21; // r14
  void *v22; // r12
  char *v23; // rsi
  char *v24; // r14
  __int64 v25; // rax
  char *v26; // rbx
  char *v27; // r13
  void *v28; // r12
  char *v29; // rsi

  result = &off_1C54120;
  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 160);
  *(_QWORD *)a1 = &off_1C54120;
  if ( v2 )
  {
    (**v2)(v2);
    result = (__int64 (__fastcall **)())sub_186B220(v2);
  }
  v3 = *(void (__fastcall ****)(void *))(a1 + 152);
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 2))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      result = (__int64 (__fastcall **)())sub_186B220(v3);
    }
  }
  v5 = *(void (__fastcall ****)(void *))(a1 + 144);
  if ( v5 )
  {
    v4 = (*((_DWORD *)v5 + 2))-- == 1;
    if ( v4 )
    {
      (**v5)(v5);
      result = (__int64 (__fastcall **)())sub_186B220(v5);
    }
  }
  v6 = *(char **)(a1 + 120);
  if ( v6 )
  {
    v7 = *(unsigned int *)(a1 + 128);
    if ( (_DWORD)v7 )
    {
      v8 = *(char **)(a1 + 120);
      v9 = &v6[40 * v7];
      do
      {
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v8 + 8);
        v11 = v8 + 24;
        v8 += 40;
        sub_182CBA0(v10, v11);
      }
      while ( v8 != v9 );
    }
    result = (__int64 (__fastcall **)())sub_186B220(v6);
  }
  v12 = *(char **)(a1 + 96);
  if ( v12 )
  {
    v13 = *(unsigned int *)(a1 + 104);
    if ( (_DWORD)v13 )
    {
      v14 = *(char **)(a1 + 96);
      v15 = &v12[40 * v13];
      do
      {
        v16 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v14 + 8);
        v17 = v14 + 24;
        v14 += 40;
        sub_182CBA0(v16, v17);
      }
      while ( v14 != v15 );
    }
    result = (__int64 (__fastcall **)())sub_186B220(v12);
  }
  v18 = *(char **)(a1 + 72);
  if ( v18 )
  {
    v19 = *(unsigned int *)(a1 + 80);
    if ( (_DWORD)v19 )
    {
      v20 = *(char **)(a1 + 72);
      v21 = &v18[40 * v19];
      do
      {
        v22 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 8);
        v23 = v20 + 24;
        v20 += 40;
        sub_182CBA0(v22, v23);
      }
      while ( v21 != v20 );
    }
    result = (__int64 (__fastcall **)())sub_186B220(v18);
  }
  v24 = *(char **)(a1 + 48);
  if ( v24 )
  {
    v25 = *(unsigned int *)(a1 + 56);
    if ( (_DWORD)v25 )
    {
      v26 = *(char **)(a1 + 48);
      v27 = &v24[40 * v25];
      do
      {
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v26 + 8);
        v29 = v26 + 24;
        v26 += 40;
        sub_182CBA0(v28, v29);
      }
      while ( v26 != v27 );
    }
    return (__int64 (__fastcall **)())sub_186B220(v24);
  }
  return result;
}

