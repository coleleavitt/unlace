__int64 __fastcall sub_5A15C0(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v5; // r10d
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rax
  int i; // esi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rax

  v2 = *(_DWORD *)(a1 + 52);
  if ( !v2 )
    return 1;
  v5 = *(_DWORD *)(a1 + 56);
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
    for ( i = 0; i != v9; ++i )
    {
      v12 = *(_QWORD **)(v10 + 32);
      if ( !v12 || (v13 = v12[1]) == 0 )
      {
        if ( !under_debugger )
          interr(3441);
        BUG();
      }
      v10 = *v12 + 56 * v13 - 56;
    }
  }
  v14 = *(_QWORD *)(v10 + 32);
  v15 = *(_DWORD *)(a1 + 48);
  if ( v14 && *(_QWORD *)(v14 + 8) > 1u )
  {
    v15 += ((unsigned __int8)v5 >> 7) + 1;
    *(_DWORD *)(a1 + 48) = v15;
  }
  v16 = *(_DWORD *)(a2 + 24) + v15;
  *(_DWORD *)(a1 + 48) = v16;
  if ( v2 > v16 )
    return 1;
  v17 = *(_QWORD *)(a2 + 8);
  if ( v17 )
  {
    v18 = v16 - v2;
    if ( v18 < v17 - 1 )
    {
      v19 = v17 - v18;
      v20 = v17 - 1 - v18;
      if ( v17 < v17 - v18 )
      {
        v21 = *(_QWORD *)a2;
        if ( *(_QWORD *)(a2 + 16) < v19 )
        {
          v22 = qvector_reserve(a2, v21, v17 - v18, 1);
          v17 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v22;
          v21 = v22;
        }
        memset((void *)(v21 + v17), 0, v19 - v17);
        *(_QWORD *)(a2 + 8) = v19;
      }
      else if ( v17 != v17 - v18 )
      {
        *(_QWORD *)(a2 + 8) = v19;
      }
      *(_BYTE *)(*(_QWORD *)a2 + v20) = 0;
    }
  }
  set_qerrno(1645);
  return 0;
}
