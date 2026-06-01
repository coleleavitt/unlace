__int64 (__fastcall **__fastcall sub_B82B80(__int64 a1))()
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  void *v5; // rbp
  __int64 v6; // rsi
  void *v7; // rbx
  char *v8; // r15
  __int64 v9; // rax
  char *v10; // rbx
  char *v11; // r14
  void *v12; // rbp
  char *v13; // rsi
  void *v14; // rdi
  __int64 (__fastcall **result)(); // rax
  void *v16; // rdi
  __int64 v17; // rdi

  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 40 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2 + 8);
        v6 = v2 + 24;
        v2 += 40;
        sub_182CBA0(v5, v6);
      }
      while ( v2 != v4 );
      v2 = *(_QWORD *)(a1 + 144);
    }
    sub_186B220((void *)(v2 - 8));
  }
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 112);
  sub_182CBA0(v7, a1 + 128);
  v8 = *(char **)(a1 + 88);
  if ( v8 )
  {
    v9 = *(unsigned int *)(a1 + 96);
    if ( (_DWORD)v9 )
    {
      v10 = *(char **)(a1 + 88);
      v11 = &v8[40 * v9];
      do
      {
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v10 + 8);
        v13 = v10 + 24;
        v10 += 40;
        sub_182CBA0(v12, v13);
      }
      while ( v11 != v10 );
    }
    sub_186B220(v8);
  }
  v14 = *(void **)(a1 + 80);
  result = &off_1C62200;
  *(_QWORD *)(a1 + 32) = &off_1C62200;
  if ( v14 )
    result = (__int64 (__fastcall **)())sub_186B220(v14);
  v16 = *(void **)(a1 + 56);
  if ( v16 )
    result = (__int64 (__fastcall **)())sub_186B220(v16);
  v17 = *(_QWORD *)(a1 + 24);
  if ( v17 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v17 - 8));
  return result;
}

