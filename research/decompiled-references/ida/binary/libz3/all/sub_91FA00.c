__int64 __fastcall sub_91FA00(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned int *v8; // rbx
  __int64 v9; // rsi
  void *v10; // r13
  __int64 v11; // rcx
  void *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // r13

  result = a1[36];
  v4 = 8LL * a2;
  v5 = result + v4;
  if ( result )
  {
    v6 = 8LL * *(unsigned int *)(result - 4);
    v7 = result + v6;
    if ( v4 == v6 )
    {
LABEL_5:
      *(_DWORD *)(result - 4) = a2;
      return result;
    }
  }
  else
  {
    v7 = 0;
    if ( !v4 )
      return result;
  }
  do
  {
    v8 = *(unsigned int **)(v7 - 8);
    v7 -= 8;
    v9 = a1[39];
    v10 = qword_1C7F2C0;
    v11 = v8[1];
    v12 = qword_1C7F2C0;
    *(_QWORD *)(a1[37] + 8LL * *v8) = 0;
    v13 = v8[2];
    v14 = *(_QWORD *)(*(_QWORD *)(v9 + 8 * v11) + 80 * v13 + 72);
    --*(_DWORD *)(v14 - 4);
    v15 = *(_QWORD *)(v9 + 8 * v13) + 80 * v11;
    --*(_DWORD *)(*(_QWORD *)(v15 + 72) - 4LL);
    sub_182CBA0(v12, v8 + 12);
    sub_182CBA0(v10, v8 + 16);
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v8 + 4);
    sub_182CBA0(v16, v8 + 8);
    sub_186B220(v8);
  }
  while ( v5 != v7 );
  result = a1[36];
  if ( result )
    goto LABEL_5;
  return result;
}

