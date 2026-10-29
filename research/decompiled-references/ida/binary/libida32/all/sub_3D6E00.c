_QWORD *__fastcall sub_3D6E00(int *a1, const void *a2)
{
  const void *v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  size_t v9; // r13
  _QWORD *v10; // r12
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  int *v14; // rbp
  _QWORD *v15; // rbx
  _QWORD *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  size_t v22; // r13
  int v23; // eax
  __int64 v24; // rdi
  void *v26; // rax
  void *v27; // rax

  v2 = a2;
  v4 = operator new(0x40u);
  v9 = *((_QWORD *)a1 + 5);
  *(_QWORD *)(v4 + 32) = 0;
  v10 = (_QWORD *)v4;
  *(_OWORD *)(v4 + 40) = 0;
  if ( v9 )
  {
    v27 = (void *)qalloc_or_throw(v9, a2, v5, v6, v7, v8);
    v10[4] = v27;
    a2 = *((const void **)a1 + 4);
    v10[6] = v9;
    memcpy(v27, a2, v9);
    v10[5] = v9;
  }
  v11 = a1[14];
  v12 = *((_QWORD *)a1 + 3);
  v10[2] = 0;
  v10[3] = 0;
  *((_DWORD *)v10 + 14) = v11;
  v13 = *a1;
  v10[1] = v2;
  *(_DWORD *)v10 = v13;
  if ( v12 )
  {
    a2 = v10;
    v10[3] = sub_3D6E00(v12, v10);
  }
  v14 = *((int **)a1 + 2);
  if ( v14 )
  {
    v15 = v10;
    do
    {
      v16 = v15;
      v17 = operator new(0x40u);
      *(_QWORD *)(v17 + 32) = 0;
      v15 = (_QWORD *)v17;
      *(_OWORD *)(v17 + 40) = 0;
      v22 = *((_QWORD *)v14 + 5);
      if ( v22 )
      {
        v26 = (void *)qalloc_or_throw(*((_QWORD *)v14 + 5), a2, v18, v19, v20, v21);
        v15[4] = v26;
        v15[6] = v22;
        a2 = *((const void **)v14 + 4);
        memcpy(v26, a2, v22);
        v15[5] = v22;
      }
      *((_DWORD *)v15 + 14) = v14[14];
      v23 = *v14;
      v15[2] = 0;
      *(_DWORD *)v15 = v23;
      v15[3] = 0;
      v16[2] = v15;
      v15[1] = v16;
      v24 = *((_QWORD *)v14 + 3);
      if ( v24 )
      {
        a2 = v15;
        v15[3] = sub_3D6E00(v24, v15);
      }
      v14 = *((int **)v14 + 2);
    }
    while ( v14 );
  }
  return v10;
}

