__int64 __fastcall sub_63F270(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  void *v5; // rcx
  _QWORD *v6; // r15
  __int64 v7; // r13
  __int64 v8; // r14
  _QWORD *v9; // rbp
  const char *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  char *v13; // rcx
  __int64 v14; // rax
  char *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  void *ptra; // [rsp+0h] [rbp-58h]
  char *ptr; // [rsp+0h] [rbp-58h]
  char *v26; // [rsp+18h] [rbp-40h]

  if ( !a2 )
    return 0;
  v3 = *(_QWORD *)(a2 + 16) & 0x8000LL;
  if ( (*(_QWORD *)(a2 + 16) & 0x8000) != 0 )
    return 0;
  v5 = (void *)*(int *)(a2 + 96);
  if ( *(_DWORD *)(a2 + 96) )
  {
    v6 = *(_QWORD **)(a2 + 104);
    v7 = 0;
    v8 = 10LL * (_QWORD)v5;
    v9 = v6;
    while ( 1 )
    {
      v10 = (const char *)v9[1];
      v11 = 1;
      if ( v10 )
      {
        ptra = v5;
        v12 = strlen(v10);
        v5 = ptra;
        v11 = v12 + 5;
      }
      v8 += v11;
      v9 += 2;
      if ( v5 == (void *)(v7 + 1) )
        break;
      ++v7;
    }
    ptr = (char *)qcalloc(v8, 1);
    if ( !ptr )
      sub_3BC000((int)"write_llabels");
    v13 = ptr;
    v14 = *(_QWORD *)a2;
    v15 = &ptr[v8];
    do
    {
      v16 = *v6;
      v6 += 2;
      v17 = pack_dq(v13, v15, v16 - v14);
      v18 = pack_ds(v17, v15, *(v6 - 1), 0);
      v19 = v3++;
      v13 = (char *)v18;
      v14 = *(v6 - 2);
    }
    while ( v19 != v7 );
    v26 = v13;
    v20 = sub_3BDD60(a1, *(_QWORD *)a2);
    netnode_setblob(v20, ptr, v26 - ptr, 20480, 83);
    qfree(ptr);
  }
  else
  {
    v21 = sub_3BDD60(a1, *(_QWORD *)a2);
    netnode_delblob(v21, 20480, 83);
  }
  result = 1;
  if ( a3 )
    return sub_5C77B0((__int64)a1, (unsigned __int64 *)a2, 0);
  return result;
}
