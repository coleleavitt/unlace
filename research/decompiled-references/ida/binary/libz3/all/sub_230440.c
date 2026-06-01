__int64 __fastcall sub_230440(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned int v4; // r13d
  unsigned int v5; // ebp
  unsigned int v6; // edx
  unsigned __int64 v7; // r12
  __int64 *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  result = *(_QWORD *)(v1 + 96);
  if ( !result )
    return result;
  v3 = *(unsigned int *)(result - 4);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = v3 - 1;
  if ( v4 < (unsigned int)v3 )
  {
    do
    {
      sub_15D0A90(v1 + 32, *(_QWORD *)(result + 8LL * v5), 0);
      v1 = *(_QWORD *)(a1 + 16);
      v4 = *(_DWORD *)(a1 + 8);
      v6 = v5--;
      result = *(_QWORD *)(v1 + 96);
    }
    while ( v4 < v6 );
    if ( !result )
      return result;
    v3 = *(unsigned int *)(result - 4);
  }
  v7 = result + 8 * v3;
  v8 = (__int64 *)(result + 8LL * v4);
  if ( (unsigned __int64)v8 >= v7 )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        v10 = *(_QWORD *)(v1 + 88);
        if ( (*(_DWORD *)(v9 + 8))-- == 1 )
          break;
      }
      if ( (unsigned __int64)++v8 >= v7 )
        goto LABEL_12;
    }
    sub_15D7BC0(v10, v9);
    ++v8;
  }
  while ( (unsigned __int64)v8 < v7 );
LABEL_12:
  result = *(_QWORD *)(v1 + 96);
  if ( result )
LABEL_13:
    *(_DWORD *)(result - 4) = v4;
  return result;
}

