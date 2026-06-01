/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458330
// Address: 0x00458330

//----- (00458330) --------------------------------------------------------
int __cdecl sub_458330(int a1, unsigned __int8 *a2, signed int a3, WCHAR *a4, int *a5)
{
  unsigned __int8 v5; // al
  int v6; // esi
  int v7; // eax
  char **v8; // ecx
  signed int v9; // edi
  char *v10; // eax
  unsigned __int8 v12; // dl
  int v13; // ebp
  unsigned int v14; // esi
  signed int v15; // ebp
  int v16; // eax
  unsigned int v17; // edi
  DWORD v18; // eax
  int v19; // edi
  int v20; // esi
  int v21; // [esp+1Ch] [ebp-2Ch]
  int v22; // [esp+24h] [ebp-24h] BYREF
  LPWSTR v23; // [esp+28h] [ebp-20h]
  DWORD v24; // [esp+2Ch] [ebp-1Ch]
  DWORD v25; // [esp+30h] [ebp-18h] BYREF
  CHAR v26[16]; // [esp+34h] [ebp-14h] BYREF

  v23 = a4;
  v5 = *a2;
  v25 = 0;
  if ( v5 == 27 )
  {
    v6 = 0;
    if ( off_4B5CF8 )
    {
      v7 = 0;
      v8 = &off_4B5CF8;
      while ( 1 )
      {
        v9 = dword_4B5CFC[v7];
        v10 = *v8;
        if ( a3 >= v9 )
        {
          if ( !sub_467F80((int)a2, v10, v9) )
          {
            *(_DWORD *)(a1 + 24) = dword_4B5D04[4 * v6] << 8;
            *a5 = 0;
            return v9;
          }
        }
        else if ( !sub_467F80((int)a2, v10, a3) )
        {
          goto LABEL_6;
        }
        ++v6;
        v7 = 4 * v6;
        v8 = &(&off_4B5CF8)[4 * v6];
        if ( !*v8 )
          goto LABEL_9;
      }
    }
    goto LABEL_9;
  }
  v12 = *(_BYTE *)(a1 + 25);
  if ( v5 == 14 )
  {
    *(_DWORD *)(a1 + 24) = (v12 << 8) | 1;
    *a5 = 0;
    return 1;
  }
  else if ( v5 == 15 )
  {
    *(_DWORD *)(a1 + 24) = v12 << 8;
    *a5 = 0;
    return 1;
  }
  else
  {
    v13 = 0;
    if ( v5 >= 0x20u )
      v13 = *(unsigned __int8 *)(a1 + 24);
    v14 = 0;
    v21 = v13;
    if ( v5 >= 0x20u )
      v14 = v12;
    if ( v14 >= 7 || (v15 = dword_4B5D00[4 * v14], a3 < v15) )
    {
LABEL_6:
      *sub_46B984() = 22;
      return -1;
    }
    v16 = 0;
    if ( v15 > 0 )
    {
      while ( a2[v16] < 0x80u )
      {
        if ( ++v16 >= v15 )
          goto LABEL_25;
      }
      goto LABEL_9;
    }
LABEL_25:
    v17 = dword_4B5CFC[4 * v14];
    sub_464310((unsigned int)v26, (unsigned int)(&off_4B5CF8)[4 * v14], v17);
    if ( v21 == 1 )
      v26[v17++] = 14;
    sub_464310((unsigned int)&v26[v17], (unsigned int)a2, v15);
    v18 = *(_DWORD *)a1;
    v24 = v18;
    if ( (v18 == 50220 || v18 == 50221 || v18 == 50222) && v21 == 1 )
    {
      v17 = dword_4B5D1C;
      sub_464310((unsigned int)v26, (unsigned int)off_4B5D18, dword_4B5D1C);
      sub_464310((unsigned int)&v26[v17], (unsigned int)a2, v15);
    }
    v19 = v15 + v17;
    v22 = v19;
    if ( ConvertINetMultiByteToUnicode(&v25, v24, v26, &v22, v23, a5)
      || v22 != v19
      || *v23 == *a2 && *(_DWORD *)(a1 + 24) )
    {
LABEL_9:
      *sub_46B984() = 42;
      return -1;
    }
    v20 = v21 | (v14 << 8);
    if ( *(_DWORD *)(a1 + 24) != v20 )
      *(_DWORD *)(a1 + 24) = v20;
    return v15;
  }
}
// 4B5CF8: using guessed type char *off_4B5CF8;
// 4B5CFC: using guessed type int dword_4B5CFC[];
// 4B5D00: using guessed type int dword_4B5D00[];
// 4B5D04: using guessed type int dword_4B5D04[];
// 4B5D18: using guessed type char **off_4B5D18;
// 4B5D1C: using guessed type int dword_4B5D1C;
