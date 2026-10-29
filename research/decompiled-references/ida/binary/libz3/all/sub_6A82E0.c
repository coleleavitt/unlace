__int64 __fastcall sub_6A82E0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // ebx

  v3 = *(_QWORD *)(a1 + 4376);
  if ( !v3 )
  {
    v5 = 0;
    goto LABEL_14;
  }
  v4 = *(_DWORD *)(v3 - 4);
  if ( v4 <= a2 )
    a2 = *(_DWORD *)(v3 - 4);
  v5 = a2;
  if ( a2 )
  {
    v6 = v4 - a2;
    v7 = *(_QWORD *)(a1 + 4368);
    v8 = *(unsigned int *)(v3 + 4LL * v6);
    v9 = 8 * v8;
    v10 = v7 + 8 * v8;
    if ( v7 )
    {
      v11 = 8LL * *(unsigned int *)(v7 - 4);
      v12 = v7 + v11;
      if ( v9 != v11 )
        goto LABEL_7;
      *(_DWORD *)(v7 - 4) = v8;
    }
    else
    {
      v12 = 0;
      if ( v9 )
      {
        do
        {
LABEL_7:
          v13 = *(_QWORD *)(v12 - 8);
          v12 -= 8;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        while ( v10 != v12 );
        v14 = *(_QWORD *)(a1 + 4368);
        v3 = *(_QWORD *)(a1 + 4376);
        if ( v14 )
          *(_DWORD *)(v14 - 4) = v8;
        if ( !v3 )
          goto LABEL_12;
      }
    }
    *(_DWORD *)(v3 - 4) = v6;
LABEL_12:
    v15 = 0;
    do
    {
      ++v15;
      sub_180C2E0(a1 + 4384);
    }
    while ( v5 != v15 );
  }
LABEL_14:
  sub_1623780(a1 + 4648, v5);
  sub_7868C0(a1 + 4544, v5);
  return sub_11C78C0(a1 + 96, v5);
}

