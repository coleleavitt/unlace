/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A2560
// Address: 0x080A2560

//----- (080A2560) --------------------------------------------------------
int *__userpurge sub_80A2560@<eax>(int *a1, _DWORD *a2, _DWORD *a3, int a4, int **a5)
{
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  _BOOL4 v10; // edx
  int v12; // edx
  _DWORD *v13; // [esp+4h] [ebp-40h]
  int v14; // [esp+8h] [ebp-3Ch]
  int v15; // [esp+8h] [ebp-3Ch]
  int v16; // [esp+8h] [ebp-3Ch]
  int v17; // [esp+Ch] [ebp-38h]
  _DWORD v18[5]; // [esp+10h] [ebp-34h] BYREF
  unsigned int v19; // [esp+24h] [ebp-20h]

  v19 = __readgsdword(0x14u);
  v5 = (_DWORD *)operator new(0x20u);
  v6 = (int)a3;
  v7 = **a5;
  v5[5] = 0;
  v13 = a2 + 1;
  v5[4] = v7;
  v5[6] = 0;
  v5[7] = 0;
  if ( a2 + 1 == a3 )
  {
    if ( a2[5] )
    {
      v9 = a2[4];
      v6 = 0;
      if ( *(_DWORD *)(v9 + 16) < v7 )
        goto LABEL_6;
    }
LABEL_5:
    v15 = v7;
    sub_809D980(v18, (int)a2, v7);
    v6 = v18[0];
    v9 = v18[1];
    v7 = v15;
    goto LABEL_6;
  }
  v8 = a3[4];
  if ( v8 > v7 )
  {
    v9 = (int)a3;
    if ( (_DWORD *)a2[3] == a3 )
      goto LABEL_6;
    v14 = v7;
    v9 = std::_Rb_tree_decrement(a3);
    v7 = v14;
    if ( *(_DWORD *)(v9 + 16) >= v14 )
      goto LABEL_5;
    if ( *(_DWORD *)(v9 + 12) )
      v9 = (int)a3;
    else
      v6 = 0;
LABEL_6:
    if ( v9 )
    {
      if ( v6 || v13 == (_DWORD *)v9 )
      {
        v10 = 1;
LABEL_10:
        std::_Rb_tree_insert_and_rebalance(v10, v5, v9, v13);
        ++a2[5];
        *a1 = (int)v5;
        goto LABEL_14;
      }
      goto LABEL_26;
    }
    goto LABEL_12;
  }
  v16 = a3[4];
  if ( v8 >= v7 )
    goto LABEL_12;
  if ( (_DWORD *)a2[4] != a3 )
  {
    v17 = v7;
    v9 = std::_Rb_tree_increment(a3);
    v7 = v17;
    if ( *(_DWORD *)(v9 + 16) > v17 )
    {
      v12 = v16;
      if ( !a3[3] )
      {
        v9 = (int)a3;
        if ( a3 )
          goto LABEL_27;
        goto LABEL_12;
      }
      v6 = v9;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = (int)a3;
  if ( a3 )
  {
LABEL_26:
    v12 = *(_DWORD *)(v9 + 16);
LABEL_27:
    v10 = v7 < v12;
    goto LABEL_10;
  }
LABEL_12:
  *a1 = v6;
  if ( v5 )
    operator delete(v5, 0x20u);
LABEL_14:
  if ( v19 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
