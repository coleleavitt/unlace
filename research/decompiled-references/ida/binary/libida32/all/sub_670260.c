_QWORD *__fastcall sub_670260(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // esi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rbp
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v24; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 40);
  v5 = *(_QWORD *)(v3 + 48);
  v6 = v4 + 8 * v5;
  if ( v4 == v6 )
  {
LABEL_7:
    v9 = *(_QWORD *)(v3 + 56);
    v10 = v5 + 1;
    if ( v9 < v10 )
    {
      v15 = qvector_reserve(v3 + 40, 0, v10, 8);
      v16 = *(_QWORD *)(v3 + 48);
      v17 = *(_QWORD *)(v3 + 56);
      *(_QWORD *)(v3 + 56) = v9;
      v18 = *(__int64 **)(v3 + 40);
      v19 = v15;
      v20 = v16 - 1;
      if ( v20 >= 0 )
      {
        v21 = v15;
        do
        {
          v22 = *v18;
          v21 += 8;
          ++v18;
          *(_QWORD *)(v21 - 8) = v22;
        }
        while ( v20-- != 0 );
        v18 = *(__int64 **)(v3 + 40);
      }
      qfree(v18);
      v24 = *(_QWORD *)(v3 + 48);
      *(_QWORD *)(v3 + 40) = v19;
      *(_QWORD *)(v3 + 56) = v17;
      v6 = v19 + 8 * v24;
    }
    *(_QWORD *)v6 = 0;
    ++*(_QWORD *)(v3 + 48);
    v11 = operator new(0x28u);
    v12 = *a2;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)v11 = v12;
    *(_DWORD *)(v11 + 32) = -1;
    *(_BYTE *)(v11 + 36) = 0;
    *(_OWORD *)(v11 + 16) = 0;
    v13 = *(_QWORD **)v6;
    *(_QWORD *)v6 = v11;
    if ( v13 )
    {
      v14 = (void *)v13[1];
      if ( v14 )
      {
        v13[2] = 0;
        qfree(v14);
      }
      operator delete(v13, 0x28u);
    }
    *(_BYTE *)(v3 + 136) = 1;
    return *(_QWORD **)v6;
  }
  else
  {
    v7 = *(_DWORD *)a2;
    while ( **(_DWORD **)v4 != v7 || *(_DWORD *)(*(_QWORD *)v4 + 4LL) != *((_DWORD *)a2 + 1) )
    {
      v4 += 8;
      if ( v6 == v4 )
        goto LABEL_7;
    }
    return *(_QWORD **)v4;
  }
}

