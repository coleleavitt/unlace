__int64 __fastcall sub_9D6C70(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r14
  void *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r14
  void *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi

  v2 = a1[4];
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 16 * v3;
      do
      {
        v5 = v2;
        v2 += 16;
        sub_15D0DF0(v5);
      }
      while ( v2 != v4 );
      v2 = a1[4];
    }
    result = sub_186B220((void *)(v2 - 8));
  }
  v7 = a1[3];
  if ( v7 )
  {
    v8 = *(unsigned int *)(v7 - 4);
    if ( (_DWORD)v8 )
    {
      v9 = v7 + 32 * v8;
      do
      {
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v7);
        v11 = v7 + 16;
        v7 += 32;
        sub_182CBA0(v10, v11);
      }
      while ( v7 != v9 );
      v7 = a1[3];
    }
    result = sub_186B220((void *)(v7 - 8));
  }
  v12 = a1[2];
  if ( v12 )
  {
    v13 = *(unsigned int *)(v12 - 4);
    if ( (_DWORD)v13 )
    {
      v14 = v12 + 32 * v13;
      do
      {
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v12);
        v16 = v12 + 16;
        v12 += 32;
        sub_182CBA0(v15, v16);
      }
      while ( v14 != v12 );
      v12 = a1[2];
    }
    result = sub_186B220((void *)(v12 - 8));
  }
  v17 = a1[1];
  if ( v17 )
    result = sub_186B220((void *)(v17 - 8));
  if ( *a1 )
    return sub_186B220((void *)(*a1 - 8LL));
  return result;
}

