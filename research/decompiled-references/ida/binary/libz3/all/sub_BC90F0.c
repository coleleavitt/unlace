__int64 __fastcall sub_BC90F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _BYTE *a5, int a6)
{
  __int64 v8; // rbx
  __int64 v9; // r15
  int v10; // edx
  _DWORD *v11; // rax
  __int64 result; // rax
  bool v13; // zf
  void *v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // esi
  __int64 v19; // rsi
  void *v20; // rdi
  __int64 v21; // r14
  int v22; // [rsp+0h] [rbp-58h]
  __int64 v23; // [rsp+8h] [rbp-50h]
  unsigned __int8 v24; // [rsp+8h] [rbp-50h]
  int v25[2]; // [rsp+10h] [rbp-48h] BYREF
  void *ptr; // [rsp+18h] [rbp-40h]

  v8 = a2;
  v9 = *(_QWORD *)(a1 + 24);
  v23 = a3;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( !*(_WORD *)(a2 + 4) )
  {
    v10 = *(_DWORD *)(a1 + 1744);
    while ( 1 )
    {
      v11 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
      if ( !v11 || *v11 != v10 || v11[1] != 2 || *(_DWORD *)(v8 + 24) != 2 )
        break;
      v21 = *(_QWORD *)(v8 + 40);
      result = sub_BC90F0(a1, *(_QWORD *)(v8 + 32), v23, (_DWORD)a4, (_DWORD)a5, a6, v22, v23, *(__int64 *)v25);
      if ( !(_BYTE)result )
        goto LABEL_10;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      sub_BB0560(v8, v9);
      v13 = *(_WORD *)(v21 + 4) == 0;
      *a5 = 1;
      if ( !v13 )
      {
        v8 = v21;
        break;
      }
      v10 = *(_DWORD *)(a1 + 1744);
      v8 = v21;
    }
  }
  if ( (unsigned __int8)sub_BCED40(a1 + 1728, v8) )
  {
    *a5 = 1;
LABEL_9:
    result = 1;
    goto LABEL_10;
  }
  v14 = *(void **)(a1 + 24);
  *(_QWORD *)v25 = 0;
  ptr = v14;
  if ( (unsigned __int8)sub_BC8FB0(a1, v8, a4, (__int64 *)v25) )
  {
    v18 = v25[0];
    *a5 |= v8 != *(_QWORD *)v25;
    sub_163F730(a1 + 1728, v18, v23, v15, v16, v17, v22, v23, v25[0], ptr);
    v19 = *(_QWORD *)v25;
    if ( *(_QWORD *)v25 )
    {
      v20 = ptr;
      v13 = (*(_DWORD *)(*(_QWORD *)v25 + 8LL))-- == 1;
      if ( v13 )
        sub_15D7BC0(v20, v19);
    }
    goto LABEL_9;
  }
  sub_BB0560(*(__int64 *)v25, (__int64)ptr);
  result = 0;
LABEL_10:
  v13 = (*(_DWORD *)(v8 + 8))-- == 1;
  if ( v13 )
  {
    v24 = result;
    sub_15D7BC0(v9, v8);
    return v24;
  }
  return result;
}

