/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417940
// Address: 0x0000000000417940

//----- (0000000000417940) ----------------------------------------------------
__int64 __fastcall sub_417940(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  void *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  _BOOL8 v15; // rdi
  __int64 v17; // rax
  int v18; // [rsp+Ch] [rbp-3Ch]

  v2 = a1 + 152;
  v4 = (__int64)(a1 + 152);
  v5 = a1[153];
  if ( !v5 )
    goto LABEL_8;
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      v7 = *(_QWORD *)(v5 + 24);
      if ( (int)a2 > *(_DWORD *)(v5 + 32) )
        break;
      v4 = v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v6 )
        goto LABEL_6;
    }
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v7 );
LABEL_6:
  if ( v2 == (_QWORD *)v4 || (int)a2 < *(_DWORD *)(v4 + 32) )
  {
LABEL_8:
    v8 = operator new(0x60u);
    *(_DWORD *)(v8 + 32) = a2;
    v12 = (void *)v8;
    *(_DWORD *)(v8 + 40) = a2;
    *(_DWORD *)(v8 + 44) = 0;
    *(_QWORD *)(v8 + 48) = 0;
    *(_BYTE *)(v8 + 56) = 0;
    *(_DWORD *)(v8 + 60) = 1;
    *(_WORD *)(v8 + 64) = 0;
    *(_DWORD *)(v8 + 68) = 0;
    *(_QWORD *)(v8 + 72) = 0;
    *(_OWORD *)(v8 + 80) = 0;
    if ( v2 == (_QWORD *)v4 )
    {
      if ( a1[156] )
      {
        v9 = a1[155];
        v4 = 0;
        if ( (int)a2 > *(_DWORD *)(v9 + 32) )
        {
LABEL_14:
          if ( v9 )
          {
            if ( v2 == (_QWORD *)v9 || v4 )
            {
              v15 = 1;
LABEL_18:
              v4 = (__int64)v12;
              std::_Rb_tree_insert_and_rebalance(v15, v12, v9, v2);
              ++a1[156];
              goto LABEL_19;
            }
            LODWORD(v13) = *(_DWORD *)(v9 + 32);
LABEL_31:
            v15 = (int)a2 < (int)v13;
            goto LABEL_18;
          }
          goto LABEL_21;
        }
      }
    }
    else
    {
      v13 = *(unsigned int *)(v4 + 32);
      if ( (int)a2 >= (int)v13 )
      {
        if ( (int)a2 > (int)v13 )
        {
          if ( a1[155] != v4 )
          {
            v18 = *(_DWORD *)(v4 + 32);
            v17 = std::_Rb_tree_increment(v4);
            v9 = v17;
            if ( (int)a2 >= *(_DWORD *)(v17 + 32) )
              goto LABEL_25;
            LODWORD(v13) = v18;
            if ( *(_QWORD *)(v4 + 24) )
            {
              v4 = v17;
              goto LABEL_14;
            }
          }
          v9 = v4;
          if ( v4 )
            goto LABEL_31;
        }
LABEL_21:
        if ( v12 )
          operator delete(v12, 0x60u);
        goto LABEL_19;
      }
      v9 = v4;
      if ( a1[154] == v4 )
        goto LABEL_14;
      v14 = std::_Rb_tree_decrement(v4, a2, v4, v13, v11);
      v9 = v14;
      if ( (int)a2 > *(_DWORD *)(v14 + 32) )
      {
        if ( *(_QWORD *)(v14 + 24) )
          v9 = v4;
        else
          v4 = 0;
        goto LABEL_14;
      }
    }
LABEL_25:
    v4 = sub_40DBC0((__int64)(a1 + 151), (unsigned int)a2, v9, v10, v11);
    goto LABEL_14;
  }
LABEL_19:
  sub_417370((__int64)a1, (char **)(v4 + 72), a2);
  return v4 + 40;
}
// 417A29: variable 'v11' is possibly undefined
// 417A53: variable 'v9' is possibly undefined
// 417AE5: variable 'v10' is possibly undefined
// 4050E0: using guessed type __int64 __fastcall std::_Rb_tree_insert_and_rebalance(_QWORD, _QWORD, _QWORD, _QWORD);
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
