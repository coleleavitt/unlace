__int64 __fastcall sub_56D440(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rdi
  unsigned int v4; // r12d
  unsigned int i; // ebx
  unsigned int v6; // eax
  __int64 v7; // rdx
  _DWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned int v12; // [rsp+Ch] [rbp-3Ch] BYREF
  _DWORD *v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v13[1] = (_DWORD *)__readfsqword(0x28u);
  while ( v1 )
  {
    sub_56D1D0(*(_QWORD **)(v1 + 24));
    v3 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v3, 0x28u);
  }
  *(_QWORD *)(a1 + 40) = a1 + 24;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 24;
  *(_QWORD *)(a1 + 56) = 0;
  netnode_check(a1 + 8, "$ vftables", 0, 1);
  v4 = sub_630AA0(*(_QWORD *)(*(_QWORD *)a1 + 1480LL), 0);
  for ( i = netnode_supfirst(*(unsigned int *)(a1 + 8), 65); i != -1; i = netnode_supnext(
                                                                            *(unsigned int *)(a1 + 8),
                                                                            i,
                                                                            65) )
  {
    if ( i && i < v4 )
    {
      v6 = netnode_altval(*(unsigned int *)(a1 + 8), i, 65);
      v7 = *(_QWORD *)(a1 + 32);
      v8 = (_DWORD *)(a1 + 24);
      v12 = v6;
      if ( !v7 )
        goto LABEL_13;
      do
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v7 + 16);
          v10 = *(_QWORD *)(v7 + 24);
          if ( *(_DWORD *)(v7 + 32) < v6 )
            break;
          v8 = (_DWORD *)v7;
          v7 = *(_QWORD *)(v7 + 16);
          if ( !v9 )
            goto LABEL_11;
        }
        v7 = *(_QWORD *)(v7 + 24);
      }
      while ( v10 );
LABEL_11:
      if ( (_DWORD *)(a1 + 24) == v8 || v6 < v8[8] )
      {
LABEL_13:
        v13[0] = &v12;
        v8 = sub_56CF10((_QWORD *)(a1 + 16), (__int64)v8, v13);
      }
      v8[9] = i;
    }
  }
  return register_undo_handlers(&unk_2B04C40, 3, 1, 0);
}

