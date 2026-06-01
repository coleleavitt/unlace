/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FD20
// Address: 0x0807FD20

//----- (0807FD20) --------------------------------------------------------
unsigned int __cdecl sub_807FD20(int a1, _DWORD *a2)
{
  unsigned int v2; // edx
  __int16 v3; // ax
  unsigned int result; // eax
  size_t v5; // edi
  unsigned int v6; // ebp
  int v7; // edx
  int v8; // ecx
  int *v9; // esi
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  _BYTE *v12; // eax
  size_t v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // ebp
  int v16; // edx
  char *v17; // eax
  int v18; // [esp+8h] [ebp-44h]
  __int16 v19; // [esp+16h] [ebp-36h] BYREF
  _BYTE v20[5]; // [esp+18h] [ebp-34h] BYREF
  _BYTE v21[15]; // [esp+1Dh] [ebp-2Fh] BYREF
  _DWORD v22[8]; // [esp+2Ch] [ebp-20h] BYREF

  v22[0] = __readgsdword(0x14u);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 4);
  v2 = a2[1];
  v3 = 0;
  if ( !v2 )
    goto LABEL_2;
  v5 = sub_80CDC90(v20, (unsigned int)v21, v2) - v20;
  if ( v5 )
  {
    v14 = *(_DWORD *)(a1 + 4);
    v15 = v14 + v5;
    if ( __CFADD__(v14, v5) )
    {
      if ( v14 > 0x7FFFFFFE )
      {
        if ( v14 != 0x7FFFFFFF )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_15;
      }
      v15 = 0x7FFFFFFF;
    }
    v16 = *(_DWORD *)(a1 + 4);
    v17 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v15 )
    {
      v17 = (char *)sub_80CF920(a1, v17, v15, 1u);
      *(_DWORD *)a1 = v17;
      v16 = *(_DWORD *)(a1 + 4);
    }
    memset(&v17[v16], 0, v15 - v16);
    *(_DWORD *)(a1 + 4) = v15;
LABEL_15:
    memcpy((void *)(*(_DWORD *)a1 + v14), v20, v5);
  }
  if ( a2[1] )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      v18 = v7;
      v9 = (int *)(*a2 + 16 * v6);
      v10 = sub_80CDC90(v20, (unsigned int)v22, *v9 - v8);
      v11 = sub_80CDC90(v10, (unsigned int)v22, v9[1] - v18);
      v12 = sub_80CDC90(v11, (unsigned int)v22, v9[2]);
      v13 = sub_80CDC90(v12, (unsigned int)v22, v9[3]) - v20;
      if ( v13 )
        sub_807E3C0((char **)a1, v20, v13);
      v8 = *v9;
      ++v6;
      v7 = v9[1];
    }
    while ( v6 < a2[1] );
  }
  v3 = *(_DWORD *)(a1 + 4) - *(_WORD *)(a1 + 12);
LABEL_2:
  v19 = v3;
  sub_807E3C0((char **)a1, &v19, 2u);
  result = v22[0] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
