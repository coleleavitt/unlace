__int64 __fastcall sub_573340(_QWORD *a1, unsigned int *a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r15d
  void *v11; // r12
  __int64 v12; // r13
  __int64 v13; // rdx

  v2 = a1 + 1;
  v4 = a1[2];
  if ( !v4 )
  {
    v6 = (__int64)(a1 + 1);
LABEL_8:
    v9 = operator new(0x48u);
    v10 = *a2;
    *(_BYTE *)(v9 + 40) = 2;
    v11 = (void *)v9;
    v12 = v9 + 40;
    *(_DWORD *)(v9 + 32) = v10;
    *(_QWORD *)(v9 + 64) = 0;
    *(_OWORD *)(v9 + 48) = 0;
    v6 = sub_570000(a1, v6, v10);
    if ( v13 )
    {
      v6 = (__int64)v11;
      std::_Rb_tree_insert_and_rebalance();
      ++a1[5];
    }
    else if ( v11 )
    {
      free_idcv(v12);
      operator delete(v11, 0x48u);
    }
    return v6 + 40;
  }
  v5 = *a2;
  v6 = (__int64)v2;
  do
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v4 + 16);
      v8 = *(_QWORD *)(v4 + 24);
      if ( *(_DWORD *)(v4 + 32) < v5 )
        break;
      v6 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v7 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v8 );
LABEL_6:
  if ( v2 == (_QWORD *)v6 || v5 < *(_DWORD *)(v6 + 32) )
    goto LABEL_8;
  return v6 + 40;
}

