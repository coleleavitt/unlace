/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49830
// Address: 0x00049830

//----- (00049830) --------------------------------------------------------
int __cdecl sub_49830(int a1)
{
  _DWORD *v1; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // edi
  int v14; // ecx
  _BYTE *v15; // eax
  _DWORD *v16; // eax
  _DWORD **v17; // esi
  int v18; // eax
  int v19; // edi
  int v21; // [esp+8h] [ebp-24h]
  _DWORD *v22; // [esp+Ch] [ebp-20h]
  int v23; // [esp+10h] [ebp-1Ch]
  int v24; // [esp+14h] [ebp-18h]
  int v25; // [esp+18h] [ebp-14h]

  v1 = *(_DWORD **)(a1 + 164);
  v2 = *(_DWORD *)(a1 + 168);
  v3 = v1[v2 - 1];
  v21 = v3;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 168) = v2 - 1;
    v4 = v1[v2 - 2];
    v25 = v4;
    if ( v2 == 1 )
    {
      v6 = 0;
      v23 = v4;
    }
    else
    {
      v5 = v2 - 2;
      *(_DWORD *)(a1 + 168) = v2 - 2;
      v23 = v1[v2 - 3];
      v6 = v2 - 3;
      if ( !v5 )
        v6 = 0;
      *(_DWORD *)(a1 + 168) = v6;
    }
    v3 = v21;
  }
  else
  {
    v6 = 0;
    v23 = *(v1 - 1);
    v25 = v23;
  }
  v24 = v3 + 4;
  v22 = (_DWORD *)(a1 + 164);
  if ( *(_DWORD *)(a1 + 172) < (unsigned int)(v6 + 1) )
  {
    v1 = qvector_reserve(a1 + 164, v1, v6 + 1, 4u);
    *(_DWORD *)(a1 + 164) = v1;
    v6 = *(_DWORD *)(a1 + 168);
  }
  v1[v6] = v24;
  v7 = *(_DWORD *)(a1 + 168);
  v8 = *(_DWORD *)(a1 + 172);
  v9 = v7 + 1;
  *(_DWORD *)(a1 + 168) = v7 + 1;
  v10 = v7 + 2;
  if ( v8 >= v10 )
  {
    v11 = (_DWORD *)*v22;
  }
  else
  {
    v11 = qvector_reserve((int)v22, *(void **)(a1 + 164), v10, 4u);
    *(_DWORD *)(a1 + 164) = v11;
    v9 = *(_DWORD *)(a1 + 168);
  }
  v12 = v21;
  v11[v9] = v25;
  ++*(_DWORD *)(a1 + 168);
  if ( v25 )
  {
    *(_BYTE *)(a1 + 116) = -85;
    v13 = *(_DWORD *)(a1 + 108);
    v14 = *(_DWORD *)(v13 + 4);
    if ( *(_DWORD *)(v13 + 8) >= (unsigned int)(v14 + 1) )
    {
      v15 = *(_BYTE **)v13;
    }
    else
    {
      v15 = qvector_reserve(v13, *(void **)v13, v14 + 1, 1u);
      *(_DWORD *)v13 = v15;
      v14 = *(_DWORD *)(v13 + 4);
    }
    v15[v14] = -85;
    ++*(_DWORD *)(v13 + 4);
    v18 = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 112) = v18 + 1;
    v19 = v23 - 5 - v18;
    sub_46F00(a1, v23 - 5 - v18);
    v17 = (_DWORD **)(a1 + 108);
    sub_46F00(a1, SHIWORD(v19));
    v16 = (_DWORD *)(a1 + 112);
    v12 = v21;
  }
  else
  {
    v16 = (_DWORD *)(a1 + 112);
    v17 = (_DWORD **)(a1 + 108);
  }
  sub_52090(*v17, v12, *v16 - v24);
  return 0;
}
