__int64 __fastcall sub_24B9C0(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v5; // rdx
  int v6; // eax
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ecx
  int v14; // r14d
  __int64 v15; // rax
  _DWORD *v16; // r15
  _DWORD *v17; // r13
  _DWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  _DWORD *v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  _BOOL8 v26; // rdi
  _DWORD *v27; // rax
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-48h]
  unsigned int v32; // [rsp+8h] [rbp-40h]
  int v33; // [rsp+8h] [rbp-40h]
  unsigned int v34; // [rsp+Ch] [rbp-3Ch]

  v2 = *(_DWORD *)(a2 + 12);
  if ( v2 == -1 )
    return 0;
  v5 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = v5;
  if ( (int)v5 < 0 )
  {
    if ( v6 != 76 )
      return 0;
LABEL_38:
    v11 = a2;
LABEL_8:
    *((_DWORD *)sub_23A040(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL), -1) + 3) = v2;
    *(_DWORD *)(a2 + 12) = -1;
    return 0;
  }
  v8 = 8 * v5;
  if ( v6 > 69 )
  {
    if ( v6 != 76 )
      return 0;
    goto LABEL_38;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10 = a2;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v9 + v8);
    v12 = *(_DWORD *)(v11 + 8);
    if ( v12 > 69 )
      break;
    if ( *(_QWORD *)(v11 + 24) == v10 )
    {
      --v7;
      v8 -= 8;
      v10 = v11;
      if ( v7 != -1 )
        continue;
    }
    goto LABEL_12;
  }
  if ( v12 != 74 )
  {
    if ( v12 == 76 )
      goto LABEL_8;
    goto LABEL_23;
  }
  if ( v10 == *(_QWORD *)(v11 + 24) + 72LL )
  {
LABEL_23:
    v10 = *(_QWORD *)(v9 + v8);
LABEL_12:
    if ( a2 == v10 )
      return 0;
    v14 = *(_DWORD *)(v10 + 12);
    if ( v14 == -1 )
    {
      *(_DWORD *)(v10 + 12) = v2;
LABEL_15:
      *(_DWORD *)(a2 + 12) = -1;
      return 0;
    }
    v15 = *(_QWORD *)(a1 + 80);
    v16 = (_DWORD *)(a1 + 72);
    if ( !v15 )
      goto LABEL_41;
    v17 = (_DWORD *)(a1 + 72);
    do
    {
      if ( v2 <= *(_DWORD *)(v15 + 32) )
      {
        v17 = (_DWORD *)v15;
        v15 = *(_QWORD *)(v15 + 16);
      }
      else
      {
        v15 = *(_QWORD *)(v15 + 24);
      }
    }
    while ( v15 );
    if ( v16 == v17 )
    {
LABEL_41:
      v31 = a1 + 64;
      v27 = (_DWORD *)operator new(0x28u);
      v20 = *(unsigned int *)(a2 + 12);
      v28 = *(_QWORD *)(a1 + 104) == 0;
      v27[9] = 0;
      v21 = v27;
      v27[8] = v20;
      if ( !v28 )
      {
        v23 = *(_QWORD *)(a1 + 96);
        v17 = nullptr;
        if ( *(_DWORD *)(v23 + 32) < (int)v20 )
        {
LABEL_31:
          if ( v23 )
          {
            if ( v17 || (_DWORD *)v23 == v16 )
            {
              v26 = 1;
LABEL_35:
              v17 = v21;
              std::_Rb_tree_insert_and_rebalance(v26, v21, v23, a1 + 72);
              ++*(_QWORD *)(v31 + 40);
              goto LABEL_36;
            }
            LODWORD(v22) = *(_DWORD *)(v23 + 32);
LABEL_52:
            v26 = (int)v22 > (int)v20;
            goto LABEL_35;
          }
LABEL_39:
          if ( v21 )
            operator delete(v21, 0x28u);
          goto LABEL_36;
        }
      }
    }
    else
    {
      if ( v2 >= v17[8] )
      {
LABEL_36:
        v17[9] = v14;
        goto LABEL_15;
      }
      v31 = a1 + 64;
      v18 = (_DWORD *)operator new(0x28u);
      v20 = *(unsigned int *)(a2 + 12);
      v18[9] = 0;
      v21 = v18;
      v18[8] = v20;
      v22 = (unsigned int)v17[8];
      if ( (int)v22 <= (int)v20 )
      {
        if ( (int)v22 >= (int)v20 )
          goto LABEL_39;
        if ( *(_DWORD **)(a1 + 96) != v17 )
        {
          v34 = v20;
          v30 = std::_Rb_tree_increment(v17);
          v20 = v34;
          v23 = v30;
          if ( *(_DWORD *)(v30 + 32) <= (signed int)v34 )
            goto LABEL_43;
          if ( *((_QWORD *)v17 + 3) )
          {
            v17 = (_DWORD *)v30;
            goto LABEL_31;
          }
        }
        v23 = (__int64)v17;
        if ( v17 )
          goto LABEL_52;
        goto LABEL_39;
      }
      v23 = (__int64)v17;
      if ( *(_DWORD **)(a1 + 88) == v17 )
        goto LABEL_31;
      v32 = v20;
      v24 = std::_Rb_tree_decrement(v17, v22, v17, v20, v19);
      v20 = v32;
      v23 = v24;
      if ( *(_DWORD *)(v24 + 32) < (signed int)v32 )
      {
        if ( *(_QWORD *)(v24 + 24) )
          v23 = (__int64)v17;
        else
          v17 = nullptr;
        goto LABEL_31;
      }
    }
LABEL_43:
    v33 = v20;
    v29 = sub_24B8A0(v31, (unsigned int)v20, v23, v20, v25);
    LODWORD(v20) = v33;
    v17 = (_DWORD *)v29;
    goto LABEL_31;
  }
  return 0;
}
