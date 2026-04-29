__int64 __fastcall sub_1BDFB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  __int64 *v10; // r13
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rsi
  __int16 v14; // dx
  __int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  int v29; // [rsp+8h] [rbp-40h]

  v29 = a5;
  if ( *(_DWORD *)a2 == 1 && *(_DWORD *)a4 == 1 )
  {
    v26 = *(_QWORD *)(a4 + 8);
    result = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(a1 + 145) )
    {
      if ( v26 + a5 == result )
      {
        *(_QWORD *)(a2 + 8) = v26;
        return result;
      }
    }
    else
    {
      result += a3;
      if ( result == v26 )
        return result;
    }
  }
  v7 = qalloc_or_throw(24);
  *(_QWORD *)v7 = 0;
  v8 = (__int64 *)v7;
  *(_OWORD *)(v7 + 8) = 0;
  if ( *(_DWORD *)a2 == 2 )
  {
    v9 = *(_QWORD **)(a2 + 8);
    *v8 = *v9;
    v8[1] = v9[1];
    v8[2] = v9[2];
    *v9 = 0;
    *(_OWORD *)(v9 + 1) = 0;
    if ( *(_DWORD *)a4 == 2 )
      goto LABEL_5;
LABEL_11:
    v22 = v8[1];
    v23 = *v8;
    if ( v8[2] < (unsigned __int64)(v22 + 1) )
    {
      v27 = qvector_reserve(v8, v23, v22 + 1, 24);
      v22 = v8[1];
      *v8 = v27;
      v23 = v27;
    }
    v24 = v23 + 24 * v22;
    *(_DWORD *)(v24 + 16) = 0xFFFF;
    *(_QWORD *)v24 = 0;
    *(_QWORD *)(v24 + 8) = 0;
    ++v8[1];
    *(_WORD *)(v24 + 16) = a3;
    *(_WORD *)(v24 + 18) = v29;
    copy_argloc(v24, a4);
    goto LABEL_14;
  }
  v19 = qvector_reserve(v7, 0, 1, 24);
  v20 = v8[1];
  *v8 = v19;
  v21 = v19 + 24 * v20;
  *(_DWORD *)(v21 + 16) = 0xFFFF;
  *(_QWORD *)v21 = 0;
  *(_QWORD *)(v21 + 8) = 0;
  ++v8[1];
  *(_WORD *)(v21 + 16) = 0;
  *(_WORD *)(v21 + 18) = a3;
  copy_argloc(v21, a2);
  if ( *(_DWORD *)a4 != 2 )
    goto LABEL_11;
LABEL_5:
  v10 = *(__int64 **)(a4 + 8);
  v11 = *v10;
  if ( 24 * v10[1] )
  {
    do
    {
      v16 = v8[1];
      v17 = *v8;
      if ( v8[2] < (unsigned __int64)(v16 + 1) )
      {
        v18 = qvector_reserve(v8, v17, v16 + 1, 24);
        v16 = v8[1];
        *v8 = v18;
        v17 = v18;
      }
      v12 = v17 + 24 * v16;
      v13 = v11;
      v11 += 24;
      *(_QWORD *)v12 = 0;
      *(_DWORD *)(v12 + 16) = 0xFFFF;
      *(_QWORD *)(v12 + 8) = 0;
      ++v8[1];
      copy_argloc(v12, v13);
      v14 = *(_WORD *)(v11 - 8);
      *(_WORD *)(v12 + 16) = v14;
      v15 = *(_WORD *)(v11 - 6);
      *(_WORD *)(v12 + 16) = a3 + v14;
      *(_WORD *)(v12 + 18) = v15;
    }
    while ( v11 != *v10 + 24 * v10[1] );
  }
LABEL_14:
  cleanup_argloc(a2);
  if ( v8 )
  {
    *(_DWORD *)a2 = 2;
    *(_QWORD *)(a2 + 8) = v8;
  }
  result = optimize_argloc(a2, (unsigned int)(v29 + a3), 0);
  if ( !(_BYTE)result )
  {
    if ( !under_debugger )
      sub_37B760(51497);
    BUG();
  }
  return result;
}
