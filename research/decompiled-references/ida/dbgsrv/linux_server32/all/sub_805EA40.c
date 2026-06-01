/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805EA40
// Address: 0x0805EA40

//----- (0805EA40) --------------------------------------------------------
_DWORD *__cdecl sub_805EA40(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  unsigned int v4; // ebx
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  _BOOL4 v12; // edx
  _DWORD *result; // eax
  unsigned int v14; // edx
  int v15; // eax
  _DWORD *v16; // [esp+4h] [ebp-40h]
  unsigned int v17; // [esp+8h] [ebp-3Ch]
  unsigned int v18; // [esp+8h] [ebp-3Ch]
  unsigned int v19; // [esp+8h] [ebp-3Ch]
  unsigned int v20; // [esp+Ch] [ebp-38h]
  _DWORD v21[5]; // [esp+10h] [ebp-34h] BYREF
  unsigned int v22; // [esp+24h] [ebp-20h]

  v22 = __readgsdword(0x14u);
  v2 = a1 + 1;
  v16 = a1 + 1;
  v3 = (_DWORD *)a1[2];
  if ( !v3 )
    goto LABEL_30;
  v4 = *a2;
  do
  {
    while ( 1 )
    {
      v5 = v3[2];
      v6 = v3[3];
      if ( v3[4] < v4 )
        break;
      v2 = v3;
      v3 = (_DWORD *)v3[2];
      if ( !v5 )
        goto LABEL_6;
    }
    v3 = (_DWORD *)v3[3];
  }
  while ( v6 );
LABEL_6:
  if ( v16 == v2 )
  {
LABEL_30:
    v15 = operator new(0x28u);
    *(_DWORD *)(v15 + 20) = -1;
    v8 = (_DWORD *)v15;
    v9 = *a2;
    *(_BYTE *)(v15 + 32) = 0;
    *(_DWORD *)(v15 + 36) = 0;
    *(_DWORD *)(v15 + 16) = v9;
    if ( a1[5] )
    {
      v11 = a1[4];
      v2 = nullptr;
      if ( *(_DWORD *)(v11 + 16) < v9 )
      {
LABEL_13:
        if ( v11 )
        {
          if ( v2 || v16 == (_DWORD *)v11 )
          {
            v12 = 1;
LABEL_17:
            v2 = v8;
            std::_Rb_tree_insert_and_rebalance(v12, v8, v11, v16);
            ++a1[5];
            goto LABEL_18;
          }
          goto LABEL_28;
        }
        goto LABEL_21;
      }
    }
LABEL_32:
    v19 = v9;
    sub_8054F40(v21, (int)a1, v9);
    v2 = (_DWORD *)v21[0];
    v11 = v21[1];
    v9 = v19;
    goto LABEL_13;
  }
  if ( v4 >= v2[4] )
    goto LABEL_18;
  v7 = operator new(0x28u);
  *(_DWORD *)(v7 + 20) = -1;
  v8 = (_DWORD *)v7;
  v9 = *a2;
  *(_BYTE *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 36) = 0;
  *(_DWORD *)(v7 + 16) = v9;
  v10 = v2[4];
  if ( v9 < v10 )
  {
    v11 = (int)v2;
    if ( (_DWORD *)a1[3] == v2 )
      goto LABEL_13;
    v17 = v9;
    v11 = std::_Rb_tree_decrement(v2);
    v9 = v17;
    if ( *(_DWORD *)(v11 + 16) < v17 )
    {
      if ( *(_DWORD *)(v11 + 12) )
        v11 = (int)v2;
      else
        v2 = nullptr;
      goto LABEL_13;
    }
    goto LABEL_32;
  }
  v18 = v2[4];
  if ( v10 >= v9 )
    goto LABEL_21;
  if ( (_DWORD *)a1[4] != v2 )
  {
    v20 = v9;
    v11 = std::_Rb_tree_increment(v2);
    v9 = v20;
    if ( v20 < *(_DWORD *)(v11 + 16) )
    {
      v14 = v18;
      if ( !v2[3] )
      {
        v11 = (int)v2;
        if ( v2 )
          goto LABEL_29;
        goto LABEL_21;
      }
      v2 = (_DWORD *)v11;
      goto LABEL_13;
    }
    goto LABEL_32;
  }
  v11 = (int)v2;
  if ( v2 )
  {
LABEL_28:
    v14 = *(_DWORD *)(v11 + 16);
LABEL_29:
    v12 = v9 < v14;
    goto LABEL_17;
  }
LABEL_21:
  if ( v8 )
    operator delete(v8, 0x28u);
LABEL_18:
  result = v2 + 5;
  if ( v22 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
