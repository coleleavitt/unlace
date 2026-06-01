__int64 __fastcall sub_5874D0(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v5; // r10d
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rbp
  __int64 v20; // rsi
  void *v21; // rdi
  __int64 v22; // rax

  v2 = *(_DWORD *)(a1 + 52);
  if ( !v2 )
    return 1;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = a2;
  if ( (v5 & 0x100) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 24);
      if ( v8 > 1 )
        *(_DWORD *)(a1 + 48) += v8;
    }
  }
  v9 = *(_DWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v9 > 0 )
  {
    LODWORD(a2) = 0;
    do
    {
      v11 = *(_QWORD **)(v10 + 32);
      if ( !v11 || (v12 = v11[1]) == 0 )
      {
        if ( !under_debugger )
          interr(3441);
        BUG();
      }
      a2 = (unsigned int)(a2 + 1);
      v10 = *v11 + 56 * v12 - 56;
    }
    while ( v9 != (_DWORD)a2 );
  }
  v13 = *(_QWORD *)(v10 + 32);
  v14 = *(_DWORD *)(a1 + 48);
  if ( v13 && *(_QWORD *)(v13 + 8) > 1u )
  {
    v14 += ((unsigned __int8)v5 >> 7) + 1;
    *(_DWORD *)(a1 + 48) = v14;
  }
  v15 = *(_DWORD *)(v6 + 24) + v14;
  *(_DWORD *)(a1 + 48) = v15;
  if ( v2 > v15 )
    return 1;
  v16 = *(_QWORD *)(v6 + 8);
  if ( v16 )
  {
    v17 = v15 - v2;
    if ( v17 < v16 - 1 )
    {
      v18 = v16 - v17;
      v19 = v16 - 1 - v17;
      if ( v16 < v16 - v17 )
      {
        v20 = *(_QWORD *)v6;
        if ( *(_QWORD *)(v6 + 16) < v18 )
        {
          v22 = qvector_reserve(v6, v20, v16 - v17, 1);
          v16 = *(_QWORD *)(v6 + 8);
          *(_QWORD *)v6 = v22;
          v20 = v22;
        }
        v21 = (void *)(v20 + v16);
        a2 = 0;
        memset(v21, 0, v18 - v16);
        *(_QWORD *)(v6 + 8) = v18;
      }
      else if ( v16 != v16 - v17 )
      {
        *(_QWORD *)(v6 + 8) = v18;
      }
      *(_BYTE *)(*(_QWORD *)v6 + v19) = 0;
    }
  }
  set_qerrno(1645, a2);
  return 0;
}

