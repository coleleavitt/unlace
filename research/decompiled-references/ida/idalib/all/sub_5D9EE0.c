__int64 __fastcall sub_5D9EE0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // edx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // r14
  unsigned int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rax
  _BOOL8 v19; // rdi
  __int64 v21; // rax
  _DWORD *v22; // rax
  bool v23; // zf
  __int64 v24; // [rsp+8h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 1088);
  if ( v5 <= 223 )
  {
    v6 = a1 + 1048;
    sub_391AE0(a2, (__int64)"colorentry %d: %u %u %u\n", v5 + 32, (unsigned __int8)a3, BYTE1(a3), BYTE2(a3));
    v7 = *(_QWORD *)(a1 + 1056);
    v8 = *(_DWORD *)(a1 + 1088);
    if ( !v7 )
      goto LABEL_29;
    v9 = a1 + 1048;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v7 + 16);
        v11 = *(_QWORD *)(v7 + 24);
        if ( *(_DWORD *)(v7 + 32) < a3 )
          break;
        v9 = v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v10 )
          goto LABEL_7;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
    while ( v11 );
LABEL_7:
    if ( v6 == v9 )
    {
LABEL_29:
      v24 = a1 + 1040;
      v22 = (_DWORD *)operator new(0x28u);
      v23 = *(_QWORD *)(a1 + 1080) == 0;
      v22[8] = a3;
      v15 = v22;
      v22[9] = v8;
      if ( !v23 )
      {
        v17 = *(_QWORD *)(a1 + 1072);
        v9 = 0;
        if ( *(_DWORD *)(v17 + 32) < a3 )
        {
LABEL_14:
          if ( v17 )
          {
            if ( v9 || v6 == v17 )
            {
              v19 = 1;
LABEL_18:
              std::_Rb_tree_insert_and_rebalance(v19, v15, v17, a1 + 1048);
              ++*(_QWORD *)(v24 + 40);
LABEL_19:
              v8 = *(_DWORD *)(a1 + 1088);
              goto LABEL_20;
            }
            v16 = *(_DWORD *)(v17 + 32);
LABEL_33:
            v19 = a3 < v16;
            goto LABEL_18;
          }
LABEL_23:
          if ( v15 )
            operator delete(v15, 0x28u);
          goto LABEL_19;
        }
      }
    }
    else
    {
      if ( a3 >= *(_DWORD *)(v9 + 32) )
      {
LABEL_20:
        *(_DWORD *)(a1 + 1088) = v8 + 1;
        return v8;
      }
      v24 = a1 + 1040;
      v12 = (_DWORD *)operator new(0x28u);
      v12[8] = a3;
      v15 = v12;
      v12[9] = v8;
      v16 = *(_DWORD *)(v9 + 32);
      if ( a3 >= v16 )
      {
        if ( v16 >= a3 )
          goto LABEL_23;
        if ( *(_QWORD *)(a1 + 1072) != v9 )
        {
          v21 = std::_Rb_tree_increment(v9, "colorentry %d: %u %u %u\n", v13, v14);
          v17 = v21;
          if ( a3 >= *(_DWORD *)(v21 + 32) )
            goto LABEL_31;
          if ( *(_QWORD *)(v9 + 24) )
          {
            v9 = v21;
            goto LABEL_14;
          }
        }
        v17 = v9;
        if ( v9 )
          goto LABEL_33;
        goto LABEL_23;
      }
      v17 = v9;
      if ( *(_QWORD *)(a1 + 1064) == v9 )
        goto LABEL_14;
      v18 = std::_Rb_tree_decrement(v9);
      v17 = v18;
      if ( *(_DWORD *)(v18 + 32) < a3 )
      {
        if ( *(_QWORD *)(v18 + 24) )
          v17 = v9;
        else
          v9 = 0;
        goto LABEL_14;
      }
    }
LABEL_31:
    v9 = sub_5D7B80(v24, a3);
    goto LABEL_14;
  }
  if ( !*(_BYTE *)(a1 + 1092) )
    sub_378D50();
  return (unsigned int)-1;
}
