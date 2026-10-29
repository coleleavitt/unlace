void __fastcall sub_8FEC90(__int64 a1, int a2)
{
  __int64 v4; // rdx
  int v5; // r14d
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rbp
  int v15; // ebx

  if ( !a2 )
    return;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = v5 - a2;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(unsigned int *)(v4 + 4LL * v6);
  v9 = 8 * v8;
  v10 = v7 + 8 * v8;
  if ( v7 )
  {
    v11 = 8LL * *(unsigned int *)(v7 - 4);
    v12 = v7 + v11;
    if ( v9 == v11 )
    {
LABEL_8:
      *(_DWORD *)(v7 - 4) = v8;
      goto LABEL_9;
    }
  }
  else
  {
    v12 = 0;
    if ( !v9 )
      goto LABEL_9;
  }
  do
  {
    v13 = *(_QWORD *)(v12 - 8);
    v12 -= 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  while ( v10 != v12 );
  v7 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v7 )
    goto LABEL_8;
LABEL_9:
  if ( v4 )
    *(_DWORD *)(v4 - 4) = v6;
  v14 = a1 + 72;
  v15 = 0;
  do
  {
    ++v15;
    sub_180C2E0(v14);
  }
  while ( a2 != v15 );
}

