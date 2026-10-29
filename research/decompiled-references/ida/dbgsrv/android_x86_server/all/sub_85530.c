/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85530
// Address: 0x00085530

//----- (00085530) --------------------------------------------------------
int __cdecl sub_85530(int a1)
{
  _DWORD *v1; // eax
  char *v2; // esi
  _DWORD *v4; // eax
  void **v5; // eax
  int v6; // ecx
  char *v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  bool v11; // al
  int v12; // esi
  int v13; // esi
  __int64 v14; // [esp+8h] [ebp-294h]
  void *v15; // [esp+18h] [ebp-284h]
  int v16; // [esp+20h] [ebp-27Ch] BYREF
  int v17; // [esp+24h] [ebp-278h]
  int v18; // [esp+28h] [ebp-274h]
  int v19[3]; // [esp+30h] [ebp-26Ch] BYREF
  char v20; // [esp+3Ch] [ebp-260h]
  int v21; // [esp+40h] [ebp-25Ch] BYREF
  void *v22; // [esp+44h] [ebp-258h]
  int v23; // [esp+48h] [ebp-254h]
  int v24; // [esp+4Ch] [ebp-250h]
  int v25; // [esp+78h] [ebp-224h]
  unsigned __int16 v26; // [esp+7Ch] [ebp-220h]
  unsigned __int16 v27; // [esp+7Eh] [ebp-21Eh]
  int v28; // [esp+84h] [ebp-218h]
  int v29; // [esp+88h] [ebp-214h]
  unsigned __int16 v30; // [esp+8Ch] [ebp-210h]
  unsigned __int16 v31; // [esp+8Eh] [ebp-20Eh]
  int v32; // [esp+27Ch] [ebp-20h]
  unsigned int v33; // [esp+288h] [ebp-14h]

  v33 = __readgsdword(0x14u);
  v1 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1
    && v1[1] == 1
    && (!v1[3] ? (v2 = byte_EF875) : (v2 = (char *)v1[2]), (v4 = open_linput(v2, 0)) != nullptr) )
  {
    v21 = (int)&off_13839C;
    v22 = nullptr;
    v23 = 0;
    v24 = 0;
    v15 = v4;
    if ( sub_7A850((int)&v21, (int)v4, 1, 1u) )
    {
      v5 = (void **)(a1 + 52);
      v6 = *(_DWORD *)(a1 + 56);
      if ( *(_DWORD *)(a1 + 60) >= (unsigned int)(v6 + 1) )
      {
        v7 = (char *)*v5;
      }
      else
      {
        v7 = (char *)qvector_reserve(a1 + 52, *v5, v6 + 1, 0x64u);
        *(_DWORD *)(a1 + 52) = v7;
        v6 = *(_DWORD *)(a1 + 56);
      }
      v9 = 100 * v6;
      *(_DWORD *)&v7[v9 + 12] = 0;
      *(_DWORD *)&v7[v9 + 16] = 0;
      *(_DWORD *)&v7[v9 + 20] = 0;
      *(_DWORD *)&v7[v9 + 4] = 0;
      *(_DWORD *)&v7[v9] = 0;
      *(_DWORD *)&v7[v9 + 8] = 0;
      *(_DWORD *)&v7[v9 + 28] = 0;
      *(_DWORD *)&v7[v9 + 24] = 0;
      *(_DWORD *)&v7[v9 + 36] = 0;
      *(_DWORD *)&v7[v9 + 32] = 0;
      *(_DWORD *)&v7[v9 + 44] = 0;
      *(_DWORD *)&v7[v9 + 40] = 0;
      *(_DWORD *)&v7[v9 + 52] = 0;
      *(_DWORD *)&v7[v9 + 48] = 0;
      *(_DWORD *)&v7[v9 + 60] = 0;
      *(_DWORD *)&v7[v9 + 56] = 0;
      *(_DWORD *)&v7[v9 + 68] = 0;
      *(_DWORD *)&v7[v9 + 64] = 0;
      *(_DWORD *)&v7[v9 + 76] = 0;
      *(_DWORD *)&v7[v9 + 72] = 0;
      *(_DWORD *)&v7[v9 + 84] = 0;
      *(_DWORD *)&v7[v9 + 80] = 0;
      *(_DWORD *)&v7[v9 + 96] = 0;
      *(_DWORD *)&v7[v9 + 92] = 0;
      *(_DWORD *)&v7[v9 + 88] = 0;
      ++*(_DWORD *)(a1 + 56);
      v16 = 0;
      v17 = 0;
      v18 = 0;
      if ( v28 )
      {
        LODWORD(v14) = v28 + 18 * v29;
        HIDWORD(v14) = __CFADD__(v28, 18 * v29);
        sub_85F60((int)&v16, (int)v15, v14, 0);
      }
      v19[0] = (int)&off_1383B0;
      v19[1] = a1;
      v19[2] = (int)&v16;
      v20 = 0;
      if ( v25 == 23126 )
        v10 = v32 + 40;
      else
        v10 = v32 + v30 + 24;
      sub_864C0((int)&v21, (int)v15, v10, v27, (int)v19);
      v11 = 1;
      if ( v26 != 34404 && v26 != 43620 )
        v11 = v26 == 512;
      v8 = v31 >> 15;
      *(_BYTE *)(a1 + 92) = v11;
      *(_BYTE *)(a1 + 93) = v8;
      LOBYTE(v8) = v20 != 0;
      if ( v16 )
      {
        v12 = v8;
        v17 = 0;
        qfree((void *)v16);
        v16 = 0;
        v18 = 0;
        v8 = v12;
      }
    }
    else
    {
      sub_1C900();
      v8 = 0;
    }
    v13 = v8;
    v21 = (int)&off_13839C;
    if ( v22 )
    {
      v23 = 0;
      qfree(v22);
      v22 = nullptr;
      v24 = 0;
    }
    close_linput(v15);
    return v13;
  }
  else
  {
    sub_1C900();
    return 0;
  }
}
// 85530: using guessed type int __cdecl sub_85530(int a1);
// 13839C: using guessed type int (__cdecl *off_13839C)(int, int, int off);
// 1383B0: using guessed type int (__cdecl *off_1383B0)(int, int);
