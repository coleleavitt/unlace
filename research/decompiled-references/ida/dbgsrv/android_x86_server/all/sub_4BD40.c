/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BD40
// Address: 0x0004BD40

//----- (0004BD40) --------------------------------------------------------
int __cdecl sub_4BD40(int a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // edx
  const void *v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // esi
  char *v10; // eax
  _DWORD *v11; // edi
  unsigned int v12; // ecx
  const void *v13; // esi
  _DWORD *v14; // edi
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // edx
  size_t v18; // esi
  bool v19; // cf
  unsigned int v20; // esi
  int v21; // edi
  unsigned int v22; // ecx
  char *v23; // eax
  _DWORD *v24; // esi
  unsigned int v26; // [esp-Ch] [ebp-38h]
  unsigned int v27; // [esp-Ch] [ebp-38h]
  int v28; // [esp+4h] [ebp-28h]
  size_t v29; // [esp+4h] [ebp-28h]
  unsigned int v30; // [esp+8h] [ebp-24h]
  unsigned int v31; // [esp+8h] [ebp-24h]
  int v32; // [esp+Ch] [ebp-20h]
  const void *v33; // [esp+Ch] [ebp-20h]
  _DWORD *v34; // [esp+10h] [ebp-1Ch]
  char v35; // [esp+16h] [ebp-16h] BYREF
  char v36; // [esp+17h] [ebp-15h] BYREF
  unsigned int v37; // [esp+18h] [ebp-14h]

  v2 = (_DWORD *)a1;
  v37 = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a1 + 144);
  v32 = *(_DWORD *)(*(_DWORD *)(a1 + 140) + 4 * v3 - 4);
  if ( v3 )
    *(_DWORD *)(a1 + 144) = v3 - 1;
  v28 = *(_DWORD *)(a1 + 112);
  v4 = operator new(0x10u);
  v4[3] = 0;
  *v4 = a2;
  v5 = qalloc_or_throw(12);
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v34 = v4;
  v4[1] = v5;
  v29 = v28 - v32;
  if ( v29 )
  {
    v6 = v5;
    v7 = (const void *)(**(_DWORD **)(a1 + 108) + v32);
    v8 = v5[1];
    v9 = 0x7FFFFFFF;
    if ( !__CFADD__(v29, v8) )
      v9 = v29 + v8;
    if ( v8 >= v9 )
    {
      if ( v8 != v9 )
      {
        v36 = 0;
        v26 = v9;
        v13 = v7;
        v31 = v8;
        v14 = v5;
        sub_43860((char **)v5, v26, &v36);
        v6 = v14;
        v8 = v31;
        v7 = v13;
      }
    }
    else
    {
      v33 = (const void *)(**(_DWORD **)(a1 + 108) + v32);
      v10 = (char *)*v5;
      v30 = v8;
      if ( v6[2] >= v9 )
      {
        v12 = v8;
        v11 = v6;
      }
      else
      {
        v11 = v6;
        v10 = (char *)qvector_reserve((int)v6, v10, v9, 1u);
        *v11 = v10;
        v12 = v11[1];
      }
      memset(&v10[v12], 0, v9 - v12);
      v11[1] = v9;
      v7 = v33;
      v6 = v11;
      v8 = v30;
    }
    memcpy((void *)(*v6 + v8), v7, v29);
    v2 = (_DWORD *)a1;
  }
  v15 = v2[47];
  v16 = v2[48];
  v34[2] = *(_DWORD *)(v15 + 4 * v16 - 4);
  *(_DWORD *)(v15 + 4 * v16 - 4) = v34;
  v17 = v2;
  if ( v29 )
  {
    v18 = v2[28];
    v19 = v18 < v29;
    v20 = v18 - v29;
    if ( v19 )
    {
      if ( !(_BYTE)under_debugger )
        interr(708);
      BUG();
    }
    v17[28] = v20;
    v21 = v17[27];
    v22 = *(_DWORD *)(v21 + 4);
    if ( v22 >= v20 )
    {
      if ( v22 != v20 )
      {
        v35 = 0;
        v27 = v20;
        v24 = v17;
        sub_43860((char **)v21, v27, &v35);
        v17 = v24;
      }
    }
    else
    {
      v23 = *(char **)v21;
      if ( *(_DWORD *)(v21 + 8) < v20 )
      {
        v23 = (char *)qvector_reserve(v21, v23, v20, 1u);
        *(_DWORD *)v21 = v23;
        v22 = *(_DWORD *)(v21 + 4);
      }
      memset(&v23[v22], 0, v20 - v22);
      *(_DWORD *)(v21 + 4) = v20;
      v17 = (_DWORD *)a1;
    }
  }
  *((_BYTE *)v17 + 116) = -87;
  return 0;
}
// 13E34C: using guessed type int under_debugger;
