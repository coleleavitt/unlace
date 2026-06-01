/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AAC0
// Address: 0x0045AAC0

//----- (0045AAC0) --------------------------------------------------------
char __stdcall sub_45AAC0(int a1, int a2, int a3)
{
  int v3; // ebp
  unsigned int v4; // eax
  int i; // eax
  unsigned int v7; // eax
  __int16 v8; // bx
  int *v9; // ebp
  int v10; // edi
  unsigned int v11; // ecx
  int v12; // edi
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // edi
  int v16; // eax
  _DWORD *v17; // eax
  int v19; // [esp+10h] [ebp-4h]
  _DWORD *v20; // [esp+18h] [ebp+4h]

  v3 = a3;
  v4 = 16;
  if ( a3 > 0 )
    v4 = a3;
  if ( v4 > *(_DWORD *)(a1 + 8) )
    *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v4, 2u);
  for ( i = 0; ; i = v19 + 1 )
  {
    v19 = i;
    if ( v3 >= 0 && i >= v3 )
      return 1;
    v7 = sub_45A040(&a2);
    v8 = v7;
    if ( !v7 )
    {
      if ( v3 < 0 )
        return 1;
      ++a2;
      v9 = (int *)(a1 + 4);
      v10 = *(_DWORD *)(a1 + 4);
      v11 = *(_DWORD *)(a1 + 8);
LABEL_13:
      v12 = v10 != 0 ? v10 - 1 : 0;
      v13 = v12 + 2;
      if ( v12 + 2 > v11 )
      {
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v12 + 2, 2u);
        v13 = v12 + 2;
      }
      *v9 = v13;
      goto LABEL_23;
    }
    if ( v7 == -1 )
      break;
    v10 = *(_DWORD *)(a1 + 4);
    v9 = (int *)(a1 + 4);
    v11 = *(_DWORD *)(a1 + 8);
    if ( v7 < 0x10000 )
      goto LABEL_13;
    v14 = v7 - 0x10000;
    v15 = v10 != 0 ? v10 - 1 : 0;
    v16 = v15 + 2;
    if ( v15 + 2 <= v11 )
    {
      v20 = (_DWORD *)(a1 + 4);
    }
    else
    {
      *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v15 + 2, 2u);
      v20 = (_DWORD *)(a1 + 4);
      v16 = v15 + 2;
    }
    *v9 = v16;
    *(_WORD *)(*(_DWORD *)a1 + 2 * v15) = (v14 >> 10) & 0x3FF | 0xD800;
    *(_WORD *)(*(_DWORD *)a1 + 2 * v15 + 2) = 0;
    v12 = *v9 != 0 ? *v9 - 1 : 0;
    if ( (unsigned int)(v12 + 2) <= *(_DWORD *)(a1 + 8) )
    {
      v17 = (_DWORD *)(a1 + 4);
    }
    else
    {
      *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v12 + 2, 2u);
      v17 = v20;
    }
    *v17 = v12 + 2;
    v8 = v14 & 0x3FF | 0xDC00;
LABEL_23:
    v3 = a3;
    *(_WORD *)(*(_DWORD *)a1 + 2 * v12) = v8;
    *(_WORD *)(*(_DWORD *)a1 + 2 * v12 + 2) = 0;
  }
  return 0;
}
