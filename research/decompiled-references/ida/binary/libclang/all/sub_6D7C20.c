__int64 __fastcall sub_6D7C20(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r13d
  unsigned int v6; // r12d
  int v7; // eax
  int v8; // eax
  __int64 v9; // rsi
  int v10; // edi
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax

  v3 = sub_6D8300();
  if ( !(_BYTE)v3 )
    return 0;
  v6 = v3;
  v4 = *(_BYTE *)(a2 + 29) & 1;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_5;
  v13 = sub_79A2B0(a2);
  v14 = *(_QWORD *)v13;
  v15 = *(_QWORD *)v13 + 8LL * *(unsigned int *)(v13 + 8);
  if ( v14 < v15 )
  {
    while ( *(_WORD *)(*(_QWORD *)v14 + 32LL) != 218 )
    {
      v14 += 8LL;
      if ( v15 == v14 )
        goto LABEL_14;
    }
  }
  else
  {
    if ( v14 == v15 )
      goto LABEL_14;
    while ( *(_WORD *)(*(_QWORD *)v15 + 32LL) != 218 )
    {
      v15 += 8LL;
      if ( v14 == v15 )
        goto LABEL_14;
    }
  }
  if ( v14 != v15 )
    return v4;
LABEL_14:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_5;
  v16 = sub_79A2B0(a2);
  v17 = *(_QWORD *)v16;
  v18 = *(_QWORD *)v16 + 8LL * *(unsigned int *)(v16 + 8);
  if ( v17 < v18 )
  {
    while ( *(_WORD *)(*(_QWORD *)v17 + 32LL) != 157 )
    {
      v17 += 8LL;
      if ( v18 == v17 )
        goto LABEL_5;
    }
  }
  else
  {
    if ( v17 == v18 )
      goto LABEL_5;
    while ( *(_WORD *)(*(_QWORD *)v18 + 32LL) != 157 )
    {
      v18 += 8LL;
      if ( v17 == v18 )
        goto LABEL_5;
    }
  }
  if ( v17 != v18 )
    return v4;
LABEL_5:
  v7 = *(_DWORD *)(a1 + 22600);
  if ( !v7 )
    return 0;
  v8 = v7 - 1;
  v9 = *(_QWORD *)(a1 + 22584);
  v10 = 1;
  v11 = v8 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = *(_QWORD *)(v9 + 8LL * v11);
  if ( a2 != v12 )
  {
    while ( v12 != -4096 )
    {
      v11 = v8 & (v10 + v11);
      v12 = *(_QWORD *)(v9 + 8LL * v11);
      if ( a2 == v12 )
        return v6;
      ++v10;
    }
    return 0;
  }
  return v6;
}

