__int64 __fastcall sub_7D0F0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // r13
  int v4; // eax
  __int64 v5; // rbx
  int v6; // r12d
  _QWORD *v7; // r15
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void *v14; // r12
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int i; // [rsp+4h] [rbp-44h]
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]

  v2 = (_QWORD *)a2;
  v3 = a1;
  v4 = sub_7CF30((_QWORD *)a1);
  if ( v4 < 0 )
    return 0;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = v4;
  while ( v5 )
  {
    sub_7BB40(*(_QWORD **)(v5 + 24));
    a1 = v5;
    v5 = *(_QWORD *)(v5 + 16);
    a2 = 40;
    operator delete((void *)a1, 0x28u);
  }
  v7 = v2 + 1;
  v2[2] = 0;
  v2[3] = v2 + 1;
  v8 = v2 + 1;
  v2[4] = v2 + 1;
  v2[5] = 0;
  for ( i = v6; i; --i )
  {
    if ( *(_DWORD *)(v3 + 48) > 3u )
    {
      v18 = *(_QWORD *)(v3 + 32);
      v9 = sub_7C940((_QWORD *)v3) + v18;
    }
    else if ( (unsigned __int8)is_cvt64() )
    {
      a2 = *(_QWORD *)(v3 + 8);
      if ( *(_QWORD *)v3 >= a2 )
        sub_79F50(a1);
      v9 = (int)unpack_dd(v3);
    }
    else
    {
      v9 = sub_7C780(v3);
    }
    a1 = 40;
    v10 = (_QWORD *)operator new(0x28u);
    v10[4] = v9;
    v14 = v10;
    if ( v7 == v8 )
    {
      if ( !v2[5] )
        goto LABEL_28;
      v11 = v2[4];
      v8 = nullptr;
      if ( *(_QWORD *)(v11 + 32) >= v9 )
        goto LABEL_28;
    }
    else
    {
      v15 = v8[4];
      if ( v9 < v15 )
      {
        v11 = v2[3];
        if ( v8 == (_QWORD *)v11 )
          goto LABEL_15;
        a1 = (__int64)v8;
        v16 = std::_Rb_tree_decrement(v8, a2, v11, v15, v13);
        v11 = v16;
        if ( *(_QWORD *)(v16 + 32) >= v9 )
        {
LABEL_28:
          a2 = v9;
          a1 = (__int64)v2;
          v8 = sub_79FC0((__int64)v2, v9, v11, v12, v13);
          goto LABEL_15;
        }
        if ( *(_QWORD *)(v16 + 24) )
        {
          v11 = (unsigned __int64)v8;
          goto LABEL_15;
        }
LABEL_35:
        v8 = nullptr;
        goto LABEL_15;
      }
      v22 = v8[4];
      if ( v15 >= v9 )
      {
LABEL_24:
        if ( v14 )
        {
          a2 = 40;
          a1 = (__int64)v14;
          operator delete(v14, 0x28u);
        }
        continue;
      }
      v11 = v2[4];
      if ( v8 == (_QWORD *)v11 )
        goto LABEL_35;
      a1 = (__int64)v8;
      v19 = std::_Rb_tree_increment(v8);
      v11 = v19;
      if ( v9 >= *(_QWORD *)(v19 + 32) )
        goto LABEL_28;
      v20 = v22;
      if ( !v8[3] )
      {
        v11 = (unsigned __int64)v8;
        if ( !v8 )
          goto LABEL_24;
        goto LABEL_37;
      }
      v8 = (_QWORD *)v19;
    }
LABEL_15:
    if ( !v11 )
      goto LABEL_24;
    if ( !v8 && (_QWORD *)v11 != v7 )
    {
      v20 = *(_QWORD *)(v11 + 32);
LABEL_37:
      a1 = v9 < v20;
      goto LABEL_19;
    }
    a1 = 1;
LABEL_19:
    a2 = (unsigned __int64)v14;
    v8 = v14;
    std::_Rb_tree_insert_and_rebalance(a1, v14, v11, v2 + 1);
    ++v2[5];
  }
  return 1;
}
