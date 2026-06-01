/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95B30
// Address: 0x00095B30

//----- (00095B30) --------------------------------------------------------
unsigned int __cdecl sub_95B30(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // eax
  int v5; // ecx
  void ***v6; // esi
  void ***v7; // edi
  void **v8; // eax
  void **v9; // eax
  __int64 *v10; // esi
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // ecx
  void **v15; // [esp+8h] [ebp-44h]
  int v16; // [esp+Ch] [ebp-40h]
  int v17; // [esp+10h] [ebp-3Ch]
  int v18; // [esp+14h] [ebp-38h]
  int v19; // [esp+18h] [ebp-34h] BYREF
  void ***v20; // [esp+1Ch] [ebp-30h] BYREF
  int v21; // [esp+20h] [ebp-2Ch]
  __int64 v22; // [esp+28h] [ebp-24h]
  int v23; // [esp+30h] [ebp-1Ch]
  unsigned int v24; // [esp+38h] [ebp-14h]

  v24 = __readgsdword(0x14u);
  v20 = nullptr;
  v21 = 0;
  v19 = (int)&v20;
  v3 = a3 + *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 48) < v3 )
    *(_DWORD *)(a1 + 40) = qvector_reserve(a1 + 40, *(void **)(a1 + 40), v3, 0xCu);
  if ( a3 )
  {
    v4 = a2;
    v5 = 0;
    v15 = (void **)(a1 + 40);
    do
    {
      if ( !*(_DWORD *)(v4 + 12 * v5 + 4) )
      {
        if ( !(_BYTE)under_debugger )
          interr(1619);
LABEL_26:
        BUG();
      }
      v16 = *(unsigned __int8 *)(v4 + 12 * v5);
      v6 = v20;
      v7 = (void ***)&v20;
      if ( !v20 )
      {
        v6 = (void ***)&v20;
        goto LABEL_14;
      }
      while ( (int)v6[4] <= v16 )
      {
        if ( (int)v6[4] >= v16 )
          goto LABEL_14;
        v7 = v6 + 1;
        v8 = v6[1];
        if ( !v8 )
          goto LABEL_14;
LABEL_8:
        v6 = (void ***)v8;
      }
      v8 = *v6;
      v7 = v6;
      if ( *v6 )
        goto LABEL_8;
      v7 = v6;
LABEL_14:
      v18 = 3 * v5;
      v17 = v5;
      if ( *v7 )
      {
        if ( !(_BYTE)under_debugger )
          interr(1620);
        goto LABEL_26;
      }
      v9 = (void **)operator new(0x14u);
      v9[4] = (void *)v16;
      *v9 = nullptr;
      v9[1] = nullptr;
      v9[2] = v6;
      *v7 = v9;
      v10 = (__int64 *)(a2 + 4 * v18);
      if ( *(_DWORD *)v19 )
      {
        v19 = *(_DWORD *)v19;
        v9 = *v7;
      }
      sub_2D500((int)v20, (int)v9);
      ++v21;
      v23 = *((_DWORD *)v10 + 2);
      v22 = *v10;
      v11 = *(_DWORD *)(a1 + 44);
      if ( *(_DWORD *)(a1 + 48) >= (unsigned int)(v11 + 1) )
      {
        v12 = *v15;
      }
      else
      {
        v12 = qvector_reserve((int)v15, *v15, v11 + 1, 0xCu);
        *(_DWORD *)(a1 + 40) = v12;
        v11 = *(_DWORD *)(a1 + 44);
      }
      v13 = 3 * v11;
      v12[v13 + 2] = v23;
      *(_QWORD *)&v12[v13] = v22;
      ++*(_DWORD *)(a1 + 44);
      v5 = v17 + 1;
      v4 = a2;
    }
    while ( v17 + 1 < a3 );
  }
  sub_96AF0((int)&v19, (void **)v20);
  return __readgsdword(0x14u);
}
// 13E34C: using guessed type int under_debugger;
