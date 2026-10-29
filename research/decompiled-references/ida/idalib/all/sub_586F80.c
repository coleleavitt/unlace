__int64 __fastcall sub_586F80(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v3; // rdi
  unsigned int v4; // r12d
  unsigned __int64 i; // rbx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 *v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = a1[4];
  v13[1] = (unsigned __int64 *)__readfsqword(0x28u);
  while ( v1 )
  {
    sub_586D10(*(_QWORD **)(v1 + 24));
    v3 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v3, 0x30u);
  }
  a1[5] = a1 + 3;
  a1[4] = 0;
  a1[6] = a1 + 3;
  a1[7] = 0;
  netnode_check(a1 + 1, "$ vftables", 0, 1);
  v4 = sub_64E0C0(*(_QWORD *)(*a1 + 1672LL), 0);
  for ( i = netnode_supfirst(a1[1], 65); i != -1; i = netnode_supnext(a1[1], i, 65) )
  {
    if ( i && i < v4 )
    {
      v6 = netnode_altval(a1[1], i, 65);
      v7 = (_QWORD *)a1[4];
      v8 = a1 + 3;
      v12 = v6;
      if ( !v7 )
        goto LABEL_13;
      do
      {
        while ( 1 )
        {
          v9 = v7[2];
          v10 = v7[3];
          if ( v7[4] < v6 )
            break;
          v8 = v7;
          v7 = (_QWORD *)v7[2];
          if ( !v9 )
            goto LABEL_11;
        }
        v7 = (_QWORD *)v7[3];
      }
      while ( v10 );
LABEL_11:
      if ( a1 + 3 == v8 || v6 < v8[4] )
      {
LABEL_13:
        v13[0] = &v12;
        v8 = sub_586A50(a1 + 2, v8, v13);
      }
      *((_DWORD *)v8 + 10) = i;
    }
  }
  return register_undo_handlers(&unk_2B2EC00, 3, 1, 0);
}
