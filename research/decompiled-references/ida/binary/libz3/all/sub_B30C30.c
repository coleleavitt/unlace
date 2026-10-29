__int64 __fastcall sub_B30C30(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  int v5; // r14d
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // ebx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // rdx
  _QWORD **v21; // rbp
  __int64 v22; // rcx
  _QWORD **v23; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi

  if ( !a2 )
    goto LABEL_13;
  v4 = a1[49];
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = v5 - a2;
  v7 = a1[48];
  v8 = *(unsigned int *)(v4 + 4LL * v6);
  v9 = 8 * v8;
  v10 = v7 + 8 * v8;
  if ( !v7 )
  {
    v12 = 0;
    if ( !v9 )
      goto LABEL_9;
    goto LABEL_6;
  }
  v11 = 8LL * *(unsigned int *)(v7 - 4);
  v12 = v7 + v11;
  if ( v9 != v11 )
  {
    do
    {
LABEL_6:
      v13 = *(_QWORD *)(v12 - 8);
      v12 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    while ( v10 != v12 );
    v7 = a1[48];
    v4 = a1[49];
    if ( !v7 )
      goto LABEL_9;
  }
  *(_DWORD *)(v7 - 4) = v8;
LABEL_9:
  if ( v4 )
    *(_DWORD *)(v4 - 4) = v6;
  v14 = 0;
  do
  {
    ++v14;
    sub_180C2E0(a1 + 50);
  }
  while ( a2 != v14 );
LABEL_13:
  v15 = a1[5];
  if ( v15 )
    v16 = *(_DWORD *)(v15 - 4);
  else
    v16 = 0;
  v17 = *(unsigned int *)(v15 + 4LL * (v16 - a2));
  v18 = a1[32];
  v19 = v17;
  v20 = 8 * v17;
  v21 = (_QWORD **)(v18 + v20);
  if ( v18 )
  {
    v22 = 8LL * *(unsigned int *)(v18 - 4);
    v23 = (_QWORD **)(v18 + v22);
    if ( v22 == v20 )
    {
LABEL_27:
      *(_DWORD *)(v18 - 4) = v19;
      return sub_BDF4C0(a1, a2);
    }
  }
  else
  {
    v23 = nullptr;
    if ( !v20 )
      return sub_BDF4C0(a1, a2);
  }
  do
  {
    v24 = *v21;
    if ( *v21 )
    {
      v25 = v24[2];
      if ( v25 )
        sub_186B220((void *)(v25 - 8));
      v26 = v24[1];
      if ( v26 )
        sub_186B220((void *)(v26 - 8));
      if ( *v24 )
        sub_186B220((void *)(*v24 - 8LL));
      sub_186B220(v24);
    }
    ++v21;
  }
  while ( v21 != v23 );
  v18 = a1[32];
  if ( v18 )
    goto LABEL_27;
  return sub_BDF4C0(a1, a2);
}

