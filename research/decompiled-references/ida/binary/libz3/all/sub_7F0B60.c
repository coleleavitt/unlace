void __fastcall sub_7F0B60(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r12d
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // r14
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r11
  unsigned int *v17; // rax
  __int64 v18; // rdx
  unsigned int *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // eax

  if ( !*(_BYTE *)(a1 + 8) )
    return;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 32);
  if ( v4 >= a2 )
  {
    *(_DWORD *)(a1 + 32) = v4 - a2;
    return;
  }
  if ( v4 )
  {
    *(_DWORD *)(a1 + 32) = 0;
    v3 = a2 - v4;
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( !v6 )
      goto LABEL_22;
    v7 = *(_DWORD *)(v5 + 4LL * (*(_DWORD *)(v5 - 4) - v3));
    v8 = *(_DWORD *)(v6 - 4);
    v9 = v8 - 1;
    if ( v7 >= v8 )
    {
      *(_DWORD *)(v6 - 4) = v7;
      goto LABEL_22;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( !v6 )
      return;
    v7 = *(_DWORD *)(4LL * -v3);
    v23 = *(_DWORD *)(v6 - 4);
    v9 = v23 - 1;
    if ( v7 >= v23 )
    {
      *(_DWORD *)(v6 - 4) = v7;
      return;
    }
  }
  v10 = 8LL * v9;
  v11 = 8 * (v9 - (unsigned __int64)(v9 - v7));
  while ( 2 )
  {
    v12 = v6 + v10;
    switch ( *(_DWORD *)(v6 + v10) )
    {
      case 0:
        *(_BYTE *)(*(_QWORD *)(a1 + 40) + *(unsigned int *)(v12 + 4)) = 0;
        goto LABEL_11;
      case 1:
        --*(_DWORD *)(*(_QWORD *)(a1 + 648) - 4LL);
        goto LABEL_11;
      case 2:
        v14 = *(_QWORD *)(a1 + 616);
        v15 = 0x7FFFFFFF8LL;
        if ( v14 )
          v15 = 8LL * (unsigned int)(*(_DWORD *)(v14 - 4) - 1);
        v16 = *(_QWORD *)(v14 + v15);
        v17 = (unsigned int *)(v16 + 20);
        v18 = 4LL * *(unsigned int *)(v16 + 4);
        v19 = (unsigned int *)(v16 + 20 + v18);
        if ( v18 )
        {
          v20 = *(_QWORD *)(a1 + 632);
          do
          {
            v21 = *v17++;
            --*(_DWORD *)(*(_QWORD *)(v20 + 8 * v21) - 4LL);
          }
          while ( v19 != v17 );
        }
        v22 = *(_QWORD *)(a1 + 624);
        --*(_DWORD *)(v14 - 4);
        --*(_DWORD *)(v22 - 4);
        sub_1171160(a1 + 48, v16);
        v6 = *(_QWORD *)(a1 + 16);
        v13 = v10 - 8;
        if ( v11 == v10 )
          goto LABEL_19;
        goto LABEL_12;
      case 3:
        *(_BYTE *)(*(_QWORD *)(a1 + 624) + *(unsigned int *)(v12 + 4)) = 0;
        goto LABEL_11;
      case 4:
        *(_DWORD *)(a1 + 640) = *(_DWORD *)(v12 + 4);
LABEL_11:
        v13 = v10 - 8;
        if ( v11 != v10 )
        {
LABEL_12:
          v10 = v13;
          continue;
        }
LABEL_19:
        v5 = *(_QWORD *)(a1 + 24);
        if ( v6 )
          *(_DWORD *)(v6 - 4) = v7;
        if ( v5 )
LABEL_22:
          *(_DWORD *)(v5 - 4) -= v3;
        return;
      default:
        sub_1872CE0("");
        sub_1873130(114, 64);
    }
  }
}

