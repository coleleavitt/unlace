unsigned __int64 build_strlist()
{
  __int64 v0; // rax
  __int64 v1; // rbp
  __int64 *v2; // r12
  __int64 v3; // rdx
  int **v4; // rax
  int **v5; // rbx
  int *v6; // rsi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  int *v11; // r13
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v22; // rax

  v0 = *(_QWORD *)(qword_2CA1698 + 1608);
  v1 = *(_QWORD *)(v0 + 72);
  v2 = (__int64 *)(v0 + 64);
  v3 = *(_QWORD *)(v1 + 48);
  v4 = *(int ***)(v1 + 40);
  v5 = &v4[v3];
  if ( v4 == v5 )
  {
LABEL_7:
    v8 = *(_QWORD *)(v1 + 56);
    v9 = v3 + 1;
    if ( v8 < v9 )
    {
      v13 = qvector_reserve(v1 + 40, 0, v9, 8);
      v14 = *(_QWORD *)(v1 + 48);
      v15 = *(_QWORD *)(v1 + 56);
      *(_QWORD *)(v1 + 56) = v8;
      v16 = *(__int64 **)(v1 + 40);
      v17 = v13;
      v18 = v14 - 1;
      if ( v18 >= 0 )
      {
        v19 = v13;
        do
        {
          v20 = *v16;
          v19 += 8;
          ++v16;
          *(_QWORD *)(v19 - 8) = v20;
        }
        while ( v18-- != 0 );
        v16 = *(__int64 **)(v1 + 40);
      }
      qfree(v16);
      v22 = *(_QWORD *)(v1 + 48);
      *(_QWORD *)(v1 + 40) = v17;
      *(_QWORD *)(v1 + 56) = v15;
      v5 = (int **)(v17 + 8 * v22);
    }
    *v5 = nullptr;
    ++*(_QWORD *)(v1 + 48);
    v10 = operator new(0x28u);
    *(_QWORD *)v10 = -1;
    *(_QWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 32) = -1;
    *(_BYTE *)(v10 + 36) = 0;
    *(_OWORD *)(v10 + 16) = 0;
    v11 = *v5;
    *v5 = (int *)v10;
    if ( v11 )
    {
      v12 = *((void **)v11 + 1);
      if ( v12 )
      {
        *((_QWORD *)v11 + 2) = 0;
        qfree(v12);
      }
      operator delete(v11, 0x28u);
    }
    *(_BYTE *)(v1 + 136) = 1;
    return sub_672250(v2, *v5);
  }
  else
  {
    while ( 1 )
    {
      v6 = *v4;
      if ( **v4 == -1 && v6[1] == -1 )
        return sub_672250(v2, v6);
      if ( v5 == ++v4 )
        goto LABEL_7;
    }
  }
}

