__int64 __fastcall sub_6B0C70(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 *v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // edx
  __int64 v19; // rsi
  __int64 result; // rax
  _QWORD *v21; // rcx
  __int64 *v22; // rbx
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  unsigned int v27; // edx
  __int64 *v28; // rdx
  int v29; // ecx

  v3 = a2;
  v6 = (__int64 *)a1[103];
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v7 = *v6;
  if ( *v6 )
  {
    v8 = v6[1];
    v9 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v8, v7);
  }
  v10 = (__int64 *)a1[102];
  *v6 = a3;
  v11 = 0x7FFFFFFF8LL;
  v12 = v10[1];
  if ( v12 )
    v11 = 8LL * (unsigned int)(*(_DWORD *)(v12 - 4) - 1);
  v13 = *(_QWORD *)(v12 + v11);
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v14 = 8 * v3;
  v15 = *v10;
  v16 = (__int64 *)(v12 + 8 * v3);
  v17 = *v16;
  if ( *v16 && (v9 = *(_DWORD *)(v17 + 8) == 1, --*(_DWORD *)(v17 + 8), v9) )
  {
    sub_15D7BC0(v15, v17);
    v28 = (__int64 *)a1[102];
    v12 = v28[1];
    v15 = *v28;
    v29 = *(_DWORD *)(v12 - 4);
    *(_QWORD *)(v10[1] + 8 * v3) = v13;
    v18 = v29 - 1;
  }
  else
  {
    *v16 = v13;
    v18 = *(_DWORD *)(v12 - 4) - 1;
  }
  v19 = *(_QWORD *)(v12 + 8LL * v18);
  *(_DWORD *)(v12 - 4) = v18;
  if ( v19 )
  {
    v9 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v15, v19);
  }
  result = a1[104];
  v21 = (_QWORD *)(result + v14);
  v22 = *(__int64 **)(result + 8 * v3);
  if ( v22 )
  {
    sub_2334C0(v22 + 19);
    v23 = (void *)v22[18];
    v22[12] = (__int64)&off_1C62200;
    if ( v23 )
      sub_186B220(v23);
    v24 = (void *)v22[15];
    if ( v24 )
      sub_186B220(v24);
    v25 = (void *)v22[11];
    v22[5] = (__int64)&off_1C62200;
    if ( v25 )
      sub_186B220(v25);
    v26 = (void *)v22[8];
    if ( v26 )
      sub_186B220(v26);
    sub_6A99A0(*v22, v22[1]);
    sub_186B220(v22);
    result = a1[104];
    v21 = (_QWORD *)(result + v14);
    v27 = *(_DWORD *)(result - 4) - 1;
  }
  else
  {
    v27 = *(_DWORD *)(result - 4) - 1;
  }
  *v21 = *(_QWORD *)(result + 8LL * v27);
  *(_DWORD *)(result - 4) = v27;
  return result;
}

