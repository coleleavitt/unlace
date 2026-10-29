__int64 __fastcall sub_921F40(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r12
  unsigned int *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9

  v4 = 8LL * a2;
  result = a1[22];
  v6 = result + v4;
  if ( result )
  {
    v7 = 8LL * *(unsigned int *)(result - 4);
    v8 = result + v7;
    if ( v4 == v7 )
    {
LABEL_5:
      *(_DWORD *)(result - 4) = a2;
      return result;
    }
  }
  else
  {
    v8 = 0;
    if ( !v4 )
      return result;
  }
  do
  {
    v9 = *(unsigned int **)(v8 - 8);
    v8 -= 8;
    v10 = a1[25];
    v11 = v9[1];
    *(_QWORD *)(a1[23] + 8LL * *v9) = 0;
    v12 = v9[2];
    v13 = *(_QWORD *)(v10 + 8 * v12);
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * v11) + 24 * v12 + 16) - 4LL);
    --*(_DWORD *)(*(_QWORD *)(v13 + 24 * v11 + 16) - 4LL);
    sub_186B220(v9);
  }
  while ( v6 != v8 );
  result = a1[22];
  if ( result )
    goto LABEL_5;
  return result;
}

