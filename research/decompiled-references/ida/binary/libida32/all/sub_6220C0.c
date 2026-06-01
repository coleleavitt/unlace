__int64 __fastcall sub_6220C0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  void *v5; // rcx
  _DWORD *v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  _DWORD *v9; // rbp
  const char *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  char *v13; // rcx
  int v14; // eax
  char *v15; // rbp
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // eax
  void *ptra; // [rsp+0h] [rbp-58h]
  char *ptr; // [rsp+0h] [rbp-58h]
  char *v26; // [rsp+18h] [rbp-40h]

  if ( !a2 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8) & 0x8000LL;
  if ( (*(_QWORD *)(a2 + 8) & 0x8000) != 0 )
    return 0;
  v5 = (void *)*(int *)(a2 + 72);
  if ( *(_DWORD *)(a2 + 72) )
  {
    v6 = *(_DWORD **)(a2 + 80);
    v7 = 5LL * (_QWORD)v5;
    v8 = 0;
    v9 = v6;
    while ( 1 )
    {
      v10 = *((const char **)v9 + 1);
      v11 = 1;
      if ( v10 )
      {
        ptra = v5;
        v12 = strlen(v10);
        v5 = ptra;
        v11 = v12 + 5;
      }
      v7 += v11;
      v9 += 4;
      if ( v5 == (void *)(v8 + 1) )
        break;
      ++v8;
    }
    ptr = (char *)qcalloc(v7, 1);
    if ( !ptr )
      sub_3B74D0((int)"write_llabels");
    v13 = ptr;
    v14 = *(_DWORD *)a2;
    v15 = &ptr[v7];
    do
    {
      v16 = *v6;
      v6 += 4;
      v17 = pack_dd(v13, v15, (unsigned int)(v16 - v14));
      v18 = pack_ds(v17, v15, *((_QWORD *)v6 - 1), 0);
      v19 = v3++;
      v13 = (char *)v18;
      v14 = *(v6 - 4);
    }
    while ( v19 != v8 );
    v26 = v13;
    v20 = sub_3B90A0(a1, *(_DWORD *)a2);
    netnode_setblob(v20, ptr, v26 - ptr, 20480, 83);
    qfree(ptr);
  }
  else
  {
    v21 = sub_3B90A0(a1, *(_DWORD *)a2);
    netnode_delblob(v21, 20480, 83);
  }
  result = 1;
  if ( a3 )
    return sub_5ACD60((__int64)a1, (unsigned int *)a2, 0);
  return result;
}

