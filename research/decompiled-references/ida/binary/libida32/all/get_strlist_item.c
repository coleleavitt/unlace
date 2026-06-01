__int64 __fastcall get_strlist_item(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r14
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rbp
  _DWORD *v8; // rbx
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rbx
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 *v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v25; // rax

  if ( !a1 )
    return 0;
  v4 = *(_QWORD *)(qword_2CA1698 + 1608);
  v5 = *(__int64 **)(v4 + 40);
  v6 = *(_QWORD *)(v4 + 48);
  v7 = &v5[v6];
  if ( v5 == v7 )
  {
LABEL_10:
    v11 = *(_QWORD *)(v4 + 56);
    v12 = v6 + 1;
    if ( v11 < v12 )
    {
      v16 = qvector_reserve(v4 + 40, 0, v12, 8);
      v17 = *(_QWORD *)(v4 + 48);
      v18 = *(_QWORD *)(v4 + 56);
      *(_QWORD *)(v4 + 56) = v11;
      v19 = *(__int64 **)(v4 + 40);
      v20 = v16;
      v21 = v17 - 1;
      if ( v21 >= 0 )
      {
        v22 = v16;
        do
        {
          v23 = *v19;
          v22 += 8;
          ++v19;
          *(_QWORD *)(v22 - 8) = v23;
        }
        while ( v21-- != 0 );
        v19 = *(__int64 **)(v4 + 40);
      }
      qfree(v19);
      v25 = *(_QWORD *)(v4 + 48);
      *(_QWORD *)(v4 + 40) = v20;
      *(_QWORD *)(v4 + 56) = v18;
      v7 = (__int64 *)(v20 + 8 * v25);
    }
    *v7 = 0;
    ++*(_QWORD *)(v4 + 48);
    v13 = operator new(0x28u);
    *(_QWORD *)v13 = -1;
    *(_QWORD *)(v13 + 8) = 0;
    *(_DWORD *)(v13 + 32) = -1;
    *(_BYTE *)(v13 + 36) = 0;
    *(_OWORD *)(v13 + 16) = 0;
    v14 = (_QWORD *)*v7;
    *v7 = v13;
    if ( v14 )
    {
      v15 = (void *)v14[1];
      if ( v15 )
      {
        v14[2] = 0;
        qfree(v15);
      }
      operator delete(v14, 0x28u);
    }
    *(_BYTE *)(v4 + 136) = 1;
    v8 = (_DWORD *)*v7;
  }
  else
  {
    while ( 1 )
    {
      v8 = (_DWORD *)*v5;
      if ( *(_DWORD *)*v5 == -1 && v8[1] == -1 )
        break;
      if ( v7 == ++v5 )
        goto LABEL_10;
    }
  }
  sub_672370((__int64)v8, *(_QWORD *)v4);
  result = 0;
  if ( a2 < *((_QWORD *)v8 + 2) )
  {
    v10 = *((_QWORD *)v8 + 1) + 12 * a2;
    *(_QWORD *)a1 = *(_QWORD *)v10;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(v10 + 8);
    return 1;
  }
  return result;
}

