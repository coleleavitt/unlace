/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AA920
// Address: 0x080AA920

//----- (080AA920) --------------------------------------------------------
int __cdecl sub_80AA920(int a1, int a2)
{
  int v2; // edi
  _DWORD *v3; // edx
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *v6; // ebp
  int v7; // edx
  unsigned __int8 v8; // cl
  int (__cdecl *v9)(int, int); // eax
  int v10; // edi
  char *v11; // edx
  int i; // ebp
  char *v13; // esi
  void *v14; // ecx
  void *v15; // ecx
  unsigned __int8 v16; // cl
  int v17; // eax
  bool v18; // zf
  void *v19; // eax
  unsigned __int8 v20; // cl
  void (__cdecl *v21)(_DWORD *); // eax
  char v23; // al
  int v24; // [esp+0h] [ebp-2Ch]
  unsigned __int8 v25; // [esp+0h] [ebp-2Ch]
  unsigned __int8 v26; // [esp+0h] [ebp-2Ch]
  int v27; // [esp+0h] [ebp-2Ch]
  unsigned __int8 v28; // [esp+0h] [ebp-2Ch]
  unsigned __int8 v29; // [esp+0h] [ebp-2Ch]
  _DWORD *v30; // [esp+4h] [ebp-28h]
  unsigned __int8 v31; // [esp+4h] [ebp-28h]
  int v32; // [esp+4h] [ebp-28h]
  _DWORD *v33; // [esp+8h] [ebp-24h]
  unsigned __int8 v34; // [esp+8h] [ebp-24h]
  unsigned __int8 v35; // [esp+Fh] [ebp-1Dh]

  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 248) + 44) + 8))(*(_DWORD *)(*(_DWORD *)(a1 + 248) + 44));
  v2 = *(_DWORD *)(a1 + 248);
  v3 = *(_DWORD **)(v2 + 44);
  v4 = (_DWORD *)v3[4];
  if ( v4 == v3 + 2 )
  {
LABEL_27:
    v20 = 0;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v6 = (_DWORD *)v4[4];
    if ( (_DWORD *)a1 == v6 )
      goto LABEL_3;
    v7 = v6[61];
    v8 = *(_BYTE *)(v7 + 452);
    if ( !v8 || *(_DWORD *)(v7 + 336) != a2 )
      goto LABEL_3;
    v9 = *(int (__cdecl **)(int, int))(*(_DWORD *)v7 + 256);
    if ( (char *)v9 == (char *)sub_8053760 )
      break;
    v34 = *(_BYTE *)(v7 + 452);
    v32 = v6[61];
    v23 = v9(v7, a2);
    v8 = v34;
    if ( v23 )
    {
      v10 = v32;
      goto LABEL_18;
    }
    v2 = *(_DWORD *)(a1 + 248);
LABEL_3:
    v5 = std::_Rb_tree_increment(v4);
    v3 = *(_DWORD **)(v2 + 44);
    v4 = (_DWORD *)v5;
    if ( (_DWORD *)v5 == v3 + 2 )
      goto LABEL_27;
  }
  v10 = v6[61];
  v11 = *(char **)(v7 + 236);
  if ( v11 )
  {
    v24 = *(_DWORD *)(v10 + 240);
    if ( v24 )
    {
      v33 = v4;
      v35 = v8;
      v30 = (_DWORD *)v4[4];
      for ( i = 0; i != v24; ++i )
      {
        v13 = &v11[40 * i];
        v14 = *((void **)v13 + 5);
        if ( v14 )
        {
          *((_DWORD *)v13 + 6) = 0;
          sub_80CF780(v14);
        }
        v15 = *((void **)v13 + 2);
        if ( v15 )
        {
          *((_DWORD *)v13 + 3) = 0;
          sub_80CF780(v15);
        }
        v11 = *(char **)(v10 + 236);
      }
      v6 = v30;
      v4 = v33;
      v8 = v35;
    }
    v25 = v8;
    *(_DWORD *)(v10 + 240) = 0;
    sub_80CF780(v11);
    v8 = v25;
    *(_DWORD *)(v10 + 236) = 0;
    *(_DWORD *)(v10 + 244) = 0;
  }
LABEL_18:
  v26 = v8;
  (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 244) + 56))(*(_DWORD *)(a1 + 244));
  v16 = v26;
  v17 = *(_DWORD *)(a1 + 244);
  if ( v17 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v17 + 20))(v26, *(_DWORD *)(a1 + 244));
    v16 = v26;
  }
  v18 = *(_BYTE *)(a1 + 96) == 0;
  *(_DWORD *)(a1 + 244) = v10;
  if ( !v18 )
  {
    v29 = v16;
    sub_8058290();
    v16 = v29;
  }
  v31 = v16;
  sub_80BA320((int)v6);
  v27 = *(_DWORD *)(*(_DWORD *)(a1 + 248) + 44);
  v19 = (void *)std::_Rb_tree_rebalance_for_erase(v4, v27 + 8);
  operator delete(v19, 0x18u);
  v20 = v31;
  --*(_DWORD *)(v27 + 24);
  if ( v6 )
  {
    v21 = *(void (__cdecl **)(_DWORD *))(*v6 + 4);
    if ( v21 == sub_80A6040 )
    {
      sub_80A5F60(v6);
      operator delete(v6, 0xFCu);
    }
    else
    {
      v21(v6);
    }
    v20 = v31;
  }
  *(_BYTE *)(v10 + 452) = 0;
  v3 = *(_DWORD **)(*(_DWORD *)(a1 + 248) + 44);
LABEL_28:
  v28 = v20;
  (*(void (__cdecl **)(_DWORD *))(*v3 + 12))(v3);
  return v28;
}
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
