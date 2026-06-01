/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8089DD0
// Address: 0x08089DD0

//----- (08089DD0) --------------------------------------------------------
unsigned int __cdecl sub_8089DD0(_DWORD *a1, int a2, int a3)
{
  int v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  size_t v6; // eax
  void *v7; // eax
  unsigned int result; // eax
  const char *v9; // edx
  const char *v10; // eax
  unsigned int v11; // [esp+8h] [ebp-48h]
  size_t n; // [esp+Ch] [ebp-44h]
  _DWORD *v13; // [esp+10h] [ebp-40h]
  int v14; // [esp+14h] [ebp-3Ch]
  int v15; // [esp+20h] [ebp-30h] BYREF
  int v16; // [esp+24h] [ebp-2Ch]
  unsigned int v17; // [esp+34h] [ebp-1Ch]

  v17 = __readgsdword(0x14u);
  v3 = a2;
  if ( a3 != a2 )
  {
    v13 = a1 + 1;
    while ( 1 )
    {
      sub_8084DB0(&v15, a1, v13, v3 + 16);
      v14 = v16;
      if ( v16 )
        break;
LABEL_4:
      v3 = std::_Rb_tree_increment(v3);
      if ( v3 == a3 )
        goto LABEL_9;
    }
    LOBYTE(v11) = v13 == (_DWORD *)v16 || v15 != 0;
    if ( (_BYTE)v11 )
    {
LABEL_7:
      v4 = (_DWORD *)operator new(0x30u);
      v4[4] = 0;
      v5 = v4;
      v4[5] = 0;
      v4[6] = 0;
      v6 = *(_DWORD *)(v3 + 20);
      n = v6;
      if ( v6 )
      {
        v7 = sub_80CF8B0(v6);
        v5[4] = v7;
        v5[6] = n;
        memcpy(v7, *(const void **)(v3 + 16), n);
        v5[5] = n;
      }
      *((_BYTE *)v5 + 28) = 2;
      *((_OWORD *)v5 + 2) = 0;
      sub_8089810((unsigned __int8 *)v5 + 28, (unsigned __int8 *)(v3 + 28));
      std::_Rb_tree_insert_and_rebalance((unsigned __int8)v11, v5, v14, v13);
      ++a1[5];
      goto LABEL_4;
    }
    v9 = (const char *)&dword_80DDFD8;
    if ( *(_DWORD *)(v16 + 20) )
    {
      v9 = *(const char **)(v16 + 16);
      v10 = (const char *)&dword_80DDFD8;
      if ( !*(_DWORD *)(v3 + 20) )
        goto LABEL_13;
    }
    else
    {
      v10 = (const char *)&dword_80DDFD8;
      if ( !*(_DWORD *)(v3 + 20) )
      {
LABEL_13:
        v11 = (unsigned int)strcmp(v10, v9) >> 31;
        goto LABEL_7;
      }
    }
    v10 = *(const char **)(v3 + 16);
    goto LABEL_13;
  }
LABEL_9:
  result = v17 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
