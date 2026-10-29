__int64 __fastcall sub_B99430(_QWORD *a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // r14d
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdi
  _QWORD *v17; // rbp
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx

  v4 = a1[65];
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v19 = a1[65];
      v20 = v4 + 8 * v5;
      do
      {
        v21 = *(_QWORD *)(*(_QWORD *)v19 + 40LL);
        if ( v21 )
          *(_DWORD *)(v21 - 4) = 0;
        v19 += 8;
      }
      while ( v20 != v19 );
      *(_DWORD *)(v4 - 4) = 0;
    }
  }
  result = a1[66];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  if ( a2 )
  {
    v7 = a1[5];
    if ( v7 )
      v8 = *(_DWORD *)(v7 - 4);
    else
      v8 = 0;
    v9 = v8 - a2;
    v10 = a1[4];
    v11 = *(unsigned int *)(v7 + 4LL * v9);
    v12 = 8 * v11;
    v13 = v10 + 8 * v11;
    if ( v10 )
    {
      v14 = 8LL * *(unsigned int *)(v10 - 4);
      v15 = v10 + v14;
      if ( v12 == v14 )
        goto LABEL_12;
    }
    else
    {
      v15 = 0;
      if ( !v12 )
        goto LABEL_13;
    }
    do
    {
      v16 = *(_QWORD *)(v15 - 8);
      v15 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    while ( v13 != v15 );
    v10 = a1[4];
    v7 = a1[5];
    if ( !v10 )
    {
LABEL_13:
      if ( v7 )
        *(_DWORD *)(v7 - 4) = v9;
      v17 = a1 + 6;
      v18 = 0;
      do
      {
        ++v18;
        result = sub_180C2E0(v17);
      }
      while ( a2 != v18 );
      return result;
    }
LABEL_12:
    *(_DWORD *)(v10 - 4) = v11;
    goto LABEL_13;
  }
  return result;
}

