__int64 __fastcall sub_27FB50(__int64 a1)
{
  void *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r14
  void *v11; // rbp
  __int64 v12; // rsi

  v2 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 32);
  result = sub_182CBA0(v2, a1 + 48);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 16 * v5;
      do
      {
        v7 = v4;
        v4 += 16;
        sub_15D0DF0(v7);
      }
      while ( v4 != v6 );
      v4 = *(_QWORD *)(a1 + 24);
    }
    result = sub_186B220((void *)(v4 - 8));
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 )
    {
      v10 = v8 + 32 * v9;
      do
      {
        v11 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v8);
        v12 = v8 + 16;
        v8 += 32;
        sub_182CBA0(v11, v12);
      }
      while ( v10 != v8 );
      v8 = *(_QWORD *)(a1 + 16);
    }
    return sub_186B220((void *)(v8 - 8));
  }
  return result;
}

