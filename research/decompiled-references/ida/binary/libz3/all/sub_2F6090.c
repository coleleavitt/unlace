__int64 __fastcall sub_2F6090(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD **)(a1 + 128);
  if ( !v5 )
  {
    if ( !v6 )
    {
      v12 = a1 + 120;
      v2 = 0;
      goto LABEL_16;
    }
    v8 = *((unsigned int *)v6 - 1);
    v12 = a1 + 120;
    v2 = 0;
    if ( !(_DWORD)v8 )
      goto LABEL_15;
    goto LABEL_21;
  }
  v7 = *(_DWORD *)(v5 - 4);
  if ( !v6 )
  {
    v12 = a1 + 120;
    LOBYTE(v2) = v7 != 0;
    goto LABEL_16;
  }
  v8 = *((unsigned int *)v6 - 1);
  if ( v7 != (_DWORD)v8 )
  {
LABEL_21:
    v10 = &v6[v8];
    v12 = a1 + 120;
    v2 = 1;
    if ( v6 < v10 )
      goto LABEL_11;
    goto LABEL_15;
  }
  v9 = 8LL * v7;
  v10 = &v6[(unsigned __int64)v9 / 8];
  if ( !v7 )
  {
LABEL_17:
    v12 = a1 + 120;
    v2 = 0;
    if ( v6 < v10 )
      goto LABEL_11;
    goto LABEL_15;
  }
  v11 = 0;
  while ( v6[v11 / 8] == *(_QWORD *)(v5 + v11) )
  {
    v11 += 8LL;
    if ( v9 == v11 )
      goto LABEL_17;
  }
  v12 = a1 + 120;
  v2 = 1;
  if ( v6 >= v10 )
    goto LABEL_15;
  do
  {
LABEL_11:
    while ( 1 )
    {
      v13 = *v6;
      if ( *v6 )
      {
        v14 = *(_QWORD *)(a1 + 120);
        if ( (*(_DWORD *)(v13 + 8))-- == 1 )
          break;
      }
      if ( ++v6 >= v10 )
        goto LABEL_14;
    }
    sub_15D7BC0(v14, v13);
    ++v6;
  }
  while ( v6 < v10 );
LABEL_14:
  v6 = *(_QWORD **)(a1 + 128);
  if ( v6 )
LABEL_15:
    *((_DWORD *)v6 - 1) = 0;
LABEL_16:
  sub_2FD290(v12, a2);
  return v2;
}

