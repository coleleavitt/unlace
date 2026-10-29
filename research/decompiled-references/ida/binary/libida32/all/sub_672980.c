unsigned __int64 __fastcall sub_672980(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r12
  int **v5; // rax
  __int64 v6; // rdx
  int **v7; // rbx
  int v8; // ecx
  int *v9; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int *v15; // rbp
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v26; // rax

  v4 = a1[1];
  v5 = *(int ***)(v4 + 40);
  v6 = *(_QWORD *)(v4 + 48);
  v7 = &v5[v6];
  if ( v5 == v7 )
  {
LABEL_7:
    v11 = *(_QWORD *)(v4 + 56);
    v12 = v6 + 1;
    if ( v11 < v12 )
    {
      v17 = qvector_reserve(v4 + 40, 0, v12, 8);
      v18 = *(_QWORD *)(v4 + 48);
      v19 = *(_QWORD *)(v4 + 56);
      *(_QWORD *)(v4 + 56) = v11;
      v20 = *(__int64 **)(v4 + 40);
      v21 = v17;
      v22 = v18 - 1;
      if ( v22 >= 0 )
      {
        v23 = v17;
        do
        {
          v24 = *v20;
          v23 += 8;
          ++v20;
          *(_QWORD *)(v23 - 8) = v24;
        }
        while ( v22-- != 0 );
        v20 = *(__int64 **)(v4 + 40);
      }
      qfree(v20);
      v26 = *(_QWORD *)(v4 + 48);
      *(_QWORD *)(v4 + 40) = v21;
      *(_QWORD *)(v4 + 56) = v19;
      v7 = (int **)(v21 + 8 * v26);
    }
    *v7 = nullptr;
    ++*(_QWORD *)(v4 + 48);
    v13 = operator new(0x28u);
    v14 = *a2;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)v13 = v14;
    *(_DWORD *)(v13 + 32) = -1;
    *(_BYTE *)(v13 + 36) = 0;
    *(_OWORD *)(v13 + 16) = 0;
    v15 = *v7;
    *v7 = (int *)v13;
    if ( v15 )
    {
      v16 = *((void **)v15 + 1);
      if ( v16 )
      {
        *((_QWORD *)v15 + 2) = 0;
        qfree(v16);
      }
      operator delete(v15, 0x28u);
    }
    *(_BYTE *)(v4 + 136) = 1;
    v9 = *v7;
  }
  else
  {
    v8 = *(_DWORD *)a2;
    while ( 1 )
    {
      v9 = *v5;
      if ( **v5 == v8 && v9[1] == *((_DWORD *)a2 + 1) )
        break;
      if ( v7 == ++v5 )
        goto LABEL_7;
    }
  }
  return sub_672250(a1, v9);
}

