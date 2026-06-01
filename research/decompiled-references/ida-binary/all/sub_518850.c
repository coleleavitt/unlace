__int64 __fastcall sub_518850(int *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // rbp
  __int64 v20; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v1 = operator new(0x18u);
  *(_OWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 = 0;
  v2 = qvector_reserve(v1, 0, 1, 16);
  v3 = *(_QWORD *)(v1 + 8);
  *(_QWORD *)v1 = v2;
  v4 = 16 * v3;
  v5 = (_QWORD *)(v2 + v4);
  *v5 = 0;
  v5[1] = 0;
  v6 = a1[1];
  ++*(_QWORD *)(v1 + 8);
  if ( *(_DWORD *)(v2 + v4) )
    jvalue_t_clear(v2 + v4);
  *(_DWORD *)v5 = 1;
  v5[1] = v6;
  v7 = *(_QWORD *)(v1 + 8);
  v8 = *(_QWORD *)v1;
  if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v7 + 1) )
  {
    v24 = qvector_reserve(v1, v8, v7 + 1, 16);
    *(_QWORD *)v1 = v24;
    v8 = v24;
    v7 = *(_QWORD *)(v1 + 8);
  }
  v9 = 16 * v7;
  v10 = (_QWORD *)(v8 + v9);
  *v10 = 0;
  v10[1] = 0;
  v11 = *a1;
  ++*(_QWORD *)(v1 + 8);
  if ( *(_DWORD *)(v8 + v9) )
    jvalue_t_clear(v8 + v9);
  *(_DWORD *)v10 = 1;
  v10[1] = v11;
  v12 = *(_QWORD *)(v1 + 8);
  v13 = *(_QWORD *)v1;
  if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v12 + 1) )
  {
    v23 = qvector_reserve(v1, v13, v12 + 1, 16);
    *(_QWORD *)v1 = v23;
    v13 = v23;
    v12 = *(_QWORD *)(v1 + 8);
  }
  v14 = 16 * v12;
  v15 = (_QWORD *)(v13 + v14);
  *v15 = 0;
  v15[1] = 0;
  v16 = a1[3];
  ++*(_QWORD *)(v1 + 8);
  if ( *(_DWORD *)(v13 + v14) )
    jvalue_t_clear(v13 + v14);
  *(_DWORD *)v15 = 1;
  v15[1] = v16;
  v17 = *(_QWORD *)(v1 + 8);
  v18 = *(_QWORD *)v1;
  if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v17 + 1) )
  {
    v22 = qvector_reserve(v1, v18, v17 + 1, 16);
    *(_QWORD *)v1 = v22;
    v18 = v22;
    v17 = *(_QWORD *)(v1 + 8);
  }
  v19 = (_QWORD *)(v18 + 16 * v17);
  *v19 = 0;
  v19[1] = 0;
  v20 = a1[2];
  ++*(_QWORD *)(v1 + 8);
  if ( *(_DWORD *)v19 )
    jvalue_t_clear(v19);
  *(_DWORD *)v19 = 1;
  v19[1] = v20;
  return v1;
}
