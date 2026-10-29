/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C68C0
// Address: 0x080C68C0

//----- (080C68C0) --------------------------------------------------------
int *__userpurge sub_80C68C0@<eax>(int *a1, _DWORD *a2, _DWORD *a3, unsigned int *a4)
{
  _DWORD *v4; // esi
  unsigned int v5; // ecx
  int v6; // edi
  unsigned int v7; // edx
  int v8; // eax
  _BOOL4 v9; // edx
  unsigned int v11; // edx
  _DWORD *v12; // [esp+4h] [ebp-40h]
  unsigned int v13; // [esp+8h] [ebp-3Ch]
  unsigned int v14; // [esp+8h] [ebp-3Ch]
  unsigned int v15; // [esp+8h] [ebp-3Ch]
  unsigned int v16; // [esp+Ch] [ebp-38h]
  _DWORD v17[5]; // [esp+10h] [ebp-34h] BYREF
  unsigned int v18; // [esp+24h] [ebp-20h]

  v18 = __readgsdword(0x14u);
  v4 = (_DWORD *)operator new(0x18u);
  v5 = *a4;
  v4[4] = *a4;
  v6 = (int)a3;
  v4[5] = a4[1];
  v12 = a2 + 1;
  if ( a3 == a2 + 1 )
  {
    if ( a2[5] )
    {
      v8 = a2[4];
      v6 = 0;
      if ( *(_DWORD *)(v8 + 16) < v5 )
        goto LABEL_6;
    }
LABEL_5:
    v14 = v5;
    sub_80C5B60(v17, (int)a2, v5);
    v6 = v17[0];
    v8 = v17[1];
    v5 = v14;
    goto LABEL_6;
  }
  v7 = a3[4];
  if ( v5 < v7 )
  {
    v8 = a2[3];
    if ( a3 == (_DWORD *)v8 )
      goto LABEL_6;
    v13 = v5;
    v8 = std::_Rb_tree_decrement(a3);
    v5 = v13;
    if ( *(_DWORD *)(v8 + 16) >= v13 )
      goto LABEL_5;
    if ( *(_DWORD *)(v8 + 12) )
    {
      v8 = (int)a3;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  v15 = a3[4];
  if ( v7 >= v5 )
    goto LABEL_12;
  v8 = a2[4];
  if ( a3 == (_DWORD *)v8 )
  {
LABEL_27:
    v6 = 0;
    goto LABEL_6;
  }
  v16 = v5;
  v8 = std::_Rb_tree_increment(a3);
  v5 = v16;
  if ( v16 >= *(_DWORD *)(v8 + 16) )
    goto LABEL_5;
  v11 = v15;
  if ( !a3[3] )
  {
    v8 = (int)a3;
    if ( a3 )
      goto LABEL_26;
    goto LABEL_12;
  }
  v6 = v8;
LABEL_6:
  if ( v8 )
  {
    if ( v12 == (_DWORD *)v8 || v6 )
    {
      v9 = 1;
LABEL_10:
      std::_Rb_tree_insert_and_rebalance(v9, v4, v8, v12);
      ++a2[5];
      *a1 = (int)v4;
      goto LABEL_14;
    }
    v11 = *(_DWORD *)(v8 + 16);
LABEL_26:
    v9 = v5 < v11;
    goto LABEL_10;
  }
LABEL_12:
  *a1 = v6;
  if ( v4 )
    operator delete(v4, 0x18u);
LABEL_14:
  if ( v18 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
