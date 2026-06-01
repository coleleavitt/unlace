char __fastcall sub_B44A00(_QWORD *a1, unsigned int a2)
{
  char result; // al
  int v4; // ebp
  __int64 v5; // rdx
  int v6; // r14d
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // r14d
  __int64 v21; // rdx
  _QWORD **v22; // rbx
  __int64 v23; // rcx
  _QWORD **v24; // r13
  _QWORD *v25; // rbp
  unsigned int v26[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v26[0] = a2;
  result = sub_965DF0((__int64)a1, v26);
  if ( !result )
  {
    v4 = v26[0];
    if ( !v26[0] )
      goto LABEL_15;
    v5 = a1[38];
    if ( v5 )
      v6 = *(_DWORD *)(v5 - 4);
    else
      v6 = 0;
    v7 = v6 - v26[0];
    v8 = a1[37];
    v9 = *(unsigned int *)(v5 + 4LL * v7);
    v10 = 8 * v9;
    v11 = v8 + 8 * v9;
    if ( v8 )
    {
      v12 = 8LL * *(unsigned int *)(v8 - 4);
      v13 = v8 + v12;
      if ( v10 == v12 )
      {
LABEL_9:
        *(_DWORD *)(v8 - 4) = v9;
LABEL_10:
        if ( v5 )
          *(_DWORD *)(v5 - 4) = v7;
        v15 = 0;
        do
        {
          ++v15;
          sub_180C2E0(a1 + 39);
        }
        while ( v4 != v15 );
        v4 = v26[0];
LABEL_15:
        v16 = a1[5];
        if ( v16 )
          v17 = *(_DWORD *)(v16 - 4);
        else
          v17 = 0;
        v18 = *(unsigned int *)(v16 + 4LL * (unsigned int)(v17 - v4));
        v19 = a1[29];
        v20 = v18;
        v21 = 8 * v18;
        v22 = (_QWORD **)(v19 + v21);
        if ( v19 )
        {
          v23 = 8LL * *(unsigned int *)(v19 - 4);
          v24 = (_QWORD **)(v19 + v23);
          if ( v23 == v21 )
          {
LABEL_25:
            *(_DWORD *)(v19 - 4) = v20;
LABEL_26:
            v4 = v26[0];
            return sub_965AE0((__int64)a1, v4);
          }
        }
        else
        {
          v24 = nullptr;
          if ( !v21 )
            return sub_965AE0((__int64)a1, v4);
        }
        do
        {
          v25 = *v22;
          if ( *v22 )
          {
            if ( *v25 )
              sub_186B220((void *)(*v25 - 8LL));
            sub_186B220(v25);
          }
          ++v22;
        }
        while ( v22 != v24 );
        v19 = a1[29];
        if ( !v19 )
          goto LABEL_26;
        goto LABEL_25;
      }
    }
    else
    {
      v13 = 0;
      if ( !v10 )
        goto LABEL_10;
    }
    do
    {
      v14 = *(_QWORD *)(v13 - 8);
      v13 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    while ( v11 != v13 );
    v8 = a1[37];
    v5 = a1[38];
    if ( !v8 )
      goto LABEL_10;
    goto LABEL_9;
  }
  return result;
}

