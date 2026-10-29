__int64 get_strlist_qty()
{
  __int64 v0; // r12
  __int64 *v1; // rax
  __int64 v2; // rdx
  __int64 *v3; // rbp
  _DWORD *v4; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  void *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v20; // rax

  v0 = *(_QWORD *)(qword_2CA1698 + 1608);
  v1 = *(__int64 **)(v0 + 40);
  v2 = *(_QWORD *)(v0 + 48);
  v3 = &v1[v2];
  if ( v1 == v3 )
  {
LABEL_7:
    v6 = *(_QWORD *)(v0 + 56);
    v7 = v2 + 1;
    if ( v6 < v7 )
    {
      v11 = qvector_reserve(v0 + 40, 0, v7, 8);
      v12 = *(_QWORD *)(v0 + 48);
      v13 = *(_QWORD *)(v0 + 56);
      *(_QWORD *)(v0 + 56) = v6;
      v14 = *(__int64 **)(v0 + 40);
      v15 = v11;
      v16 = v12 - 1;
      if ( v16 >= 0 )
      {
        v17 = v11;
        do
        {
          v18 = *v14;
          v17 += 8;
          ++v14;
          *(_QWORD *)(v17 - 8) = v18;
        }
        while ( v16-- != 0 );
        v14 = *(__int64 **)(v0 + 40);
      }
      qfree(v14);
      v20 = *(_QWORD *)(v0 + 48);
      *(_QWORD *)(v0 + 40) = v15;
      *(_QWORD *)(v0 + 56) = v13;
      v3 = (__int64 *)(v15 + 8 * v20);
    }
    *v3 = 0;
    ++*(_QWORD *)(v0 + 48);
    v8 = operator new(0x28u);
    *(_QWORD *)v8 = -1;
    *(_QWORD *)(v8 + 8) = 0;
    *(_DWORD *)(v8 + 32) = -1;
    *(_BYTE *)(v8 + 36) = 0;
    *(_OWORD *)(v8 + 16) = 0;
    v9 = (_QWORD *)*v3;
    *v3 = v8;
    if ( v9 )
    {
      v10 = (void *)v9[1];
      if ( v10 )
      {
        v9[2] = 0;
        qfree(v10);
      }
      operator delete(v9, 0x28u);
    }
    *(_BYTE *)(v0 + 136) = 1;
    v4 = (_DWORD *)*v3;
  }
  else
  {
    while ( 1 )
    {
      v4 = (_DWORD *)*v1;
      if ( *(_DWORD *)*v1 == -1 && v4[1] == -1 )
        break;
      if ( v3 == ++v1 )
        goto LABEL_7;
    }
  }
  sub_672370((__int64)v4, *(_QWORD *)v0);
  return *((_QWORD *)v4 + 2);
}

