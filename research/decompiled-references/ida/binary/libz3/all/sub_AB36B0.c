__int64 __fastcall sub_AB36B0(_QWORD *a1, int a2)
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
  int v14; // ebx
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // r13d
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rbx
  _QWORD *v22; // r14
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rbx
  _QWORD *v29; // r14
  void *v30; // rdi
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // r10d
  unsigned int v34; // eax
  unsigned int v35; // edx
  __int64 v36; // rdi
  unsigned int *v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // ecx
  unsigned int v42; // eax

  if ( !a2 )
    goto LABEL_13;
  v4 = a1[50];
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = v5 - a2;
  v7 = a1[49];
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
  if ( v11 != v9 )
  {
    do
    {
LABEL_6:
      v13 = *(_QWORD *)(v12 - 8);
      v12 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    while ( v10 != v12 );
    v7 = a1[49];
    v4 = a1[50];
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
    sub_180C2E0(a1 + 51);
  }
  while ( a2 != v14 );
LABEL_13:
  v15 = a1[5];
  if ( v15 )
    v16 = *(_DWORD *)(v15 - 4);
  else
    v16 = 0;
  v17 = *(_DWORD *)(v15 + 4LL * (unsigned int)(v16 - a2));
  v18 = a1[63];
  if ( v18 )
  {
    v19 = 8LL * v17;
    v20 = 8LL * *(unsigned int *)(v18 - 4);
    v21 = (_QWORD *)(v18 + v19);
    v22 = (_QWORD *)(v18 + v20);
    if ( v19 != v20 )
    {
      do
      {
        while ( *v21 )
        {
          v23 = (void *)(*v21++ - 8LL);
          sub_186B220(v23);
          if ( v21 == v22 )
            goto LABEL_19;
        }
        ++v21;
      }
      while ( v22 != v21 );
LABEL_19:
      v18 = a1[63];
    }
    *(_DWORD *)(v18 - 4) = v17;
  }
  v24 = a1[65];
  if ( v24 )
    *(_DWORD *)(v24 - 4) = v17;
  v25 = a1[66];
  if ( v25 )
  {
    v26 = 8LL * v17;
    v27 = 8LL * *(unsigned int *)(v25 - 4);
    v28 = (_QWORD *)(v25 + v26);
    v29 = (_QWORD *)(v25 + v27);
    if ( v26 != v27 )
    {
      do
      {
        while ( *v28 )
        {
          v30 = (void *)(*v28++ - 8LL);
          sub_186B220(v30);
          if ( v29 == v28 )
            goto LABEL_27;
        }
        ++v28;
      }
      while ( v29 != v28 );
LABEL_27:
      v25 = a1[66];
    }
    *(_DWORD *)(v25 - 4) = v17;
  }
  v31 = a1[142];
  if ( v31 )
  {
    v32 = a1[141];
    if ( v32 )
    {
      v33 = *(_DWORD *)(v31 + 4LL * (unsigned int)(*(_DWORD *)(v31 - 4) - a2));
      v34 = *(_DWORD *)(v32 - 4);
      v35 = v34 - 1;
      if ( v33 < v34 )
        goto LABEL_32;
      *(_DWORD *)(v32 - 4) = v33;
    }
LABEL_38:
    *(_DWORD *)(v31 - 4) -= a2;
    return sub_965AE0((__int64)a1, a2);
  }
  v32 = a1[141];
  if ( !v32 )
    return sub_965AE0((__int64)a1, a2);
  v33 = *(_DWORD *)(4LL * (unsigned int)-a2);
  v42 = *(_DWORD *)(v32 - 4);
  v35 = v42 - 1;
  if ( v33 >= v42 )
  {
    *(_DWORD *)(v32 - 4) = v33;
    return sub_965AE0((__int64)a1, a2);
  }
LABEL_32:
  v36 = a1[108];
  v37 = (unsigned int *)(v32 + 4LL * v35);
  v38 = (__int64)&v37[-(v35 - v33) - 1];
  do
  {
    v39 = *(_QWORD *)(v36 + 8LL * *v37);
    if ( v39 )
    {
      v40 = *(_DWORD *)(v39 - 4);
      if ( v40 )
        *(_DWORD *)(v39 - 4) = v40 - 1;
    }
    --v37;
  }
  while ( (unsigned int *)v38 != v37 );
  *(_DWORD *)(v32 - 4) = v33;
  if ( v31 )
    goto LABEL_38;
  return sub_965AE0((__int64)a1, a2);
}

