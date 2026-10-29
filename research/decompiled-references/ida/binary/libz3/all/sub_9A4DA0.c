__int64 __fastcall sub_9A4DA0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r14
  void *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r14
  void *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rbp
  __int64 v17; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(a1 + 40) = 0;
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 32 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2);
        v6 = v2 + 16;
        v2 += 32;
        sub_182CBA0(v5, v6);
      }
      while ( v2 != v4 );
      v2 = *(_QWORD *)(a1 + 24);
    }
    *(_DWORD *)(v2 - 4) = 0;
  }
  v7 = *(_QWORD *)(a1 + 16);
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
      v7 = *(_QWORD *)(a1 + 16);
    }
    *(_DWORD *)(v7 - 4) = 0;
  }
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 )
    *(_DWORD *)(v12 - 4) = 0;
  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
    *(_DWORD *)(result - 4) = 0;
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    v15 = *(unsigned int *)(v14 - 4);
    if ( (_DWORD)v15 )
    {
      v16 = v14 + 16 * v15;
      do
      {
        v17 = v14;
        v14 += 16;
        result = sub_15D0DF0(v17);
      }
      while ( v16 != v14 );
      v14 = *(_QWORD *)(a1 + 32);
    }
    *(_DWORD *)(v14 - 4) = 0;
  }
  return result;
}

