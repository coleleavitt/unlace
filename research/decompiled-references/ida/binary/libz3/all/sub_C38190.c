__int64 __fastcall sub_C38190(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r14
  void *v12; // rbp
  __int64 v13; // rsi

  v2 = a1[11];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 7);
  result = sub_182CBA0(v3, a1 + 9);
  v5 = a1[6];
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)v6 )
    {
      v7 = v5 + 16 * v6;
      do
      {
        v8 = v5;
        v5 += 16;
        sub_15D0DF0(v8);
      }
      while ( v5 != v7 );
      v5 = a1[6];
    }
    result = sub_186B220((void *)(v5 - 8));
  }
  v9 = a1[5];
  if ( v9 )
  {
    v10 = *(unsigned int *)(v9 - 4);
    if ( (_DWORD)v10 )
    {
      v11 = v9 + 32 * v10;
      do
      {
        v12 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v9);
        v13 = v9 + 16;
        v9 += 32;
        sub_182CBA0(v12, v13);
      }
      while ( v11 != v9 );
      v9 = a1[5];
    }
    return sub_186B220((void *)(v9 - 8));
  }
  return result;
}

