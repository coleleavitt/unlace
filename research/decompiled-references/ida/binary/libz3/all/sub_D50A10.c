__int64 __fastcall sub_D50A10(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 result; // rax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+8h] [rbp-50h]
  unsigned int v25; // [rsp+14h] [rbp-44h]
  __int64 v26; // [rsp+18h] [rbp-40h]

  v25 = sub_15C5540((int)a1 + 432, a3, a3, (_DWORD)a4, a5, a6);
  v8 = sub_15C5560(a1 + 432, a3);
  v26 = *(_QWORD *)(a1 + 8);
  v9 = sub_1674700(a1 + 232, 1);
  v10 = sub_15DB5C0(v26, a2, v9);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v23 = *(_QWORD *)(a1 + 8);
  v12 = sub_1674700(a1 + 232, (unsigned int)(v8 - 1));
  v13 = sub_15DB5C0(v23, a2 + 1, v12);
  v14 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v24 = *(_QWORD *)(a1 + 8);
  v15 = sub_1674700(a1 + 232, v25);
  v16 = sub_15DB5C0(v24, a2 + 2, v15);
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  result = sub_15E1BF0(*(_QWORD *)(a1 + 432));
  v19 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v20 = *a4;
  if ( *a4 )
  {
    v21 = a4[1];
    v22 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v22 )
      result = sub_15D7BC0(v21, v20);
  }
  *a4 = v19;
  if ( v17 )
  {
    v22 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v22 )
      result = sub_15D7BC0(v26, v17);
  }
  if ( v14 )
  {
    v22 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v22 )
      result = sub_15D7BC0(v26, v14);
  }
  if ( v11 )
  {
    v22 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v22 )
      return sub_15D7BC0(v26, v11);
  }
  return result;
}

