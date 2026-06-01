__int64 __fastcall sub_922D80(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r12
  unsigned int *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax

  v4 = 8LL * a2;
  result = a1[21];
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
    v10 = a1[24];
    v11 = v9[2];
    *(_QWORD *)(a1[22] + 8LL * *v9) = 0;
    v12 = v9[1];
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v12) + 16 * v11 + 8);
    v14 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v11) + 16 * v12 + 8);
    --*(_DWORD *)(v13 - 4);
    --*(_DWORD *)(v14 - 4);
    sub_186B220(v9);
  }
  while ( v6 != v8 );
  result = a1[21];
  if ( result )
    goto LABEL_5;
  return result;
}

