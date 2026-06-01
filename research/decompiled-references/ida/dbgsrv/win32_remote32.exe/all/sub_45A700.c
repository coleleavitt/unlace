/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A700
// Address: 0x0045A700

//----- (0045A700) --------------------------------------------------------
char __stdcall sub_45A700(int a1, unsigned __int16 *a2, int a3)
{
  unsigned __int16 *v3; // ebp
  int v5; // ecx
  unsigned int v6; // eax
  LPVOID v7; // eax
  int i; // edi
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // ebp
  int v15; // edi
  int v16; // edi
  _BYTE *v17; // eax
  int v18; // edi
  unsigned __int16 v19; // ax
  int v20; // edi
  int v21; // edi
  int v22; // edi
  __int16 v24; // [esp+14h] [ebp-4h]
  int v25; // [esp+1Ch] [ebp+4h]
  unsigned __int16 *v26; // [esp+20h] [ebp+8h]

  v3 = a2;
  if ( a2 && a1 )
  {
    v5 = a3;
    v6 = 16;
    *(_DWORD *)(a1 + 4) = 0;
    if ( a3 > 0 )
      v6 = a3;
    if ( v6 > *(_DWORD *)(a1 + 8) )
    {
      v7 = sub_453B00(a1, *(void **)a1, v6, 1u);
      v5 = a3;
      *(_DWORD *)a1 = v7;
    }
    for ( i = 0; ; i = v25 + 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v25 = i;
          if ( v5 >= 0 && i >= v5 )
            return 1;
          v9 = *v3++;
          v26 = v3;
          v10 = v9;
          if ( v5 < 0 && !(_WORD)v9 )
            return 1;
          if ( (unsigned __int16)v9 >= 0x80u )
            break;
          v11 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
          if ( (unsigned int)(v11 + 2) > *(_DWORD *)(a1 + 8) )
            *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v11 + 2, 1u);
          v5 = a3;
          *(_DWORD *)(a1 + 4) = v11 + 2;
          *(_BYTE *)(v11 + *(_DWORD *)a1) = v10;
          *(_BYTE *)(*(_DWORD *)a1 + v11 + 1) = 0;
          i = v25 + 1;
        }
        if ( (unsigned __int16)v9 < 0x800u )
        {
          v12 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
          if ( (unsigned int)(v12 + 2) > *(_DWORD *)(a1 + 8) )
            *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v12 + 2, 1u);
          *(_DWORD *)(a1 + 4) = v12 + 2;
          *(_BYTE *)(v12 + *(_DWORD *)a1) = (v10 >> 6) & 0x1F | 0xC0;
          *(_BYTE *)(*(_DWORD *)a1 + v12 + 1) = 0;
          v13 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
          v14 = v13 + 2;
          if ( (unsigned int)(v13 + 2) > *(_DWORD *)(a1 + 8) )
            *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v13 + 2, 1u);
          goto LABEL_44;
        }
        v24 = v9;
        if ( (unsigned __int16)(v9 + 10240) > 0x3FFu && (unsigned __int16)(v9 + 9216) > 0x3FFu )
          break;
        if ( v9 - 55296 > 0x3FF )
          return 0;
        v18 = i + 1;
        v25 = v18;
        if ( v5 >= 0 && v18 >= v5 )
          return 0;
        v19 = *v3;
        v26 = v3 + 1;
        if ( v5 < 0 && !v19 )
          return 0;
        if ( (unsigned __int16)(v19 + 9216) > 0x3FFu )
          return 0;
        v10 = v19 & 0x3FF | (((v24 & 0x3FF) + 64) << 10);
        v20 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
        if ( (unsigned int)(v20 + 2) > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v20 + 2, 1u);
        *(_DWORD *)(a1 + 4) = v20 + 2;
        *(_BYTE *)(v20 + *(_DWORD *)a1) = (v10 >> 18) | 0xF0;
        *(_BYTE *)(*(_DWORD *)a1 + v20 + 1) = 0;
        v21 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
        if ( (unsigned int)(v21 + 2) > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v21 + 2, 1u);
        *(_DWORD *)(a1 + 4) = v21 + 2;
        *(_BYTE *)(v21 + *(_DWORD *)a1) = (v10 >> 12) & 0x3F | 0x80;
        *(_BYTE *)(*(_DWORD *)a1 + v21 + 1) = 0;
        v22 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
        if ( (unsigned int)(v22 + 2) > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v22 + 2, 1u);
        *(_DWORD *)(a1 + 4) = v22 + 2;
        *(_BYTE *)(v22 + *(_DWORD *)a1) = (v10 >> 6) & 0x3F | 0x80;
        *(_BYTE *)(v22 + *(_DWORD *)a1 + 1) = 0;
        v13 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
        v14 = v13 + 2;
        if ( (unsigned int)(v13 + 2) > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v13 + 2, 1u);
LABEL_44:
        v5 = a3;
        *(_DWORD *)(a1 + 4) = v14;
        v3 = v26;
        *(_BYTE *)(v13 + *(_DWORD *)a1) = v10 & 0x3F | 0x80;
        *(_BYTE *)(v13 + *(_DWORD *)a1 + 1) = 0;
        i = v25 + 1;
      }
      v15 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
      if ( (unsigned int)(v15 + 2) > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v15 + 2, 1u);
      *(_DWORD *)(a1 + 4) = v15 + 2;
      *(_BYTE *)(v15 + *(_DWORD *)a1) = ((unsigned __int16)v10 >> 12) | 0xE0;
      *(_BYTE *)(*(_DWORD *)a1 + v15 + 1) = 0;
      v16 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
      if ( (unsigned int)(v16 + 2) > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v16 + 2, 1u);
      *(_DWORD *)(a1 + 4) = v16 + 2;
      *(_BYTE *)(v16 + *(_DWORD *)a1) = (v10 >> 6) & 0x3F | 0x80;
      *(_BYTE *)(*(_DWORD *)a1 + v16 + 1) = 0;
      v13 = *(_DWORD *)(a1 + 4) != 0 ? *(_DWORD *)(a1 + 4) - 1 : 0;
      v14 = v13 + 2;
      if ( (unsigned int)(v13 + 2) <= *(_DWORD *)(a1 + 8) )
        goto LABEL_44;
      v17 = sub_453B00(a1, *(void **)a1, v13 + 2, 1u);
      v5 = a3;
      *(_DWORD *)(a1 + 4) = v14;
      v3 = v26;
      *(_DWORD *)a1 = v17;
      v17[v13] = v10 & 0x3F | 0x80;
      *(_BYTE *)(*(_DWORD *)a1 + v13 + 1) = 0;
    }
  }
  return 0;
}
