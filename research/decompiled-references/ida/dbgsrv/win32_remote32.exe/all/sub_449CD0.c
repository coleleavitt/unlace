/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449CD0
// Address: 0x00449CD0

//----- (00449CD0) --------------------------------------------------------
unsigned int __cdecl sub_449CD0(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  _BYTE *v4; // eax
  int v5; // ecx
  int v6; // eax
  _BYTE *v7; // eax
  int v8; // ecx
  int v9; // eax
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  const char *v12; // ebp
  const char *v13; // ecx
  unsigned int v14; // kr00_4
  unsigned int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // edi
  unsigned int v18; // ecx
  unsigned int result; // eax
  unsigned int v20; // ebx
  unsigned int v21; // edi
  unsigned int v22; // [esp+14h] [ebp-14h]
  unsigned int v23; // [esp+18h] [ebp-10h] BYREF
  _BYTE v24[5]; // [esp+1Dh] [ebp-Bh] BYREF
  _BYTE v25[2]; // [esp+22h] [ebp-6h] BYREF

  v2 = 0;
  v3 = *(_DWORD *)(a2 + 32);
  if ( v3 == -1 )
    v2 = -1;
  v4 = sub_454140(&v23, (unsigned int)v25, v3 + 1, (__PAIR64__(v2, v3) + 1) >> 32);
  sub_401600(a1, (unsigned int)&v23, v4 - (_BYTE *)&v23);
  v5 = *(_DWORD *)a2 - 16 * *(_DWORD *)(a2 + 32);
  v6 = 0;
  if ( v5 == -1 )
    v6 = -1;
  v7 = sub_454140(&v23, (unsigned int)v25, v5 + 1, (__PAIR64__(v6, v5) + 1) >> 32);
  sub_401600(a1, (unsigned int)&v23, v7 - (_BYTE *)&v23);
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 4) - *(_DWORD *)a2;
  if ( v9 == -1 )
    v8 = -1;
  v10 = sub_454140(&v23, (unsigned int)v25, v9 + 1, (__PAIR64__(v8, v9) + 1) >> 32);
  sub_401600(a1, (unsigned int)&v23, v10 - (_BYTE *)&v23);
  v11 = sub_4540B0(&v23, (unsigned int)v24, *(unsigned __int8 *)(a2 + 37) | (16 * *(unsigned __int8 *)(a2 + 36)));
  sub_401600(a1, (unsigned int)&v23, v11 - (_BYTE *)&v23);
  v12 = pNodeName;
  if ( *(_DWORD *)(a2 + 12) )
  {
    v13 = pNodeName;
    if ( *(_DWORD *)(a2 + 8) )
      v13 = *(const char **)(a2 + 8);
  }
  else
  {
    v13 = MultiByteStr;
  }
  v22 = (unsigned int)v13;
  v14 = strlen(v13);
  v15 = v14 + 1;
  v23 = v14 + 1;
  if ( v14 != -1 )
  {
    v16 = *(_DWORD *)(a1 + 4);
    v17 = v15 + v16;
    if ( v15 + v16 < v16 )
      v17 = 0x7FFFFFFF;
    if ( v17 <= v16 )
    {
      if ( v17 == v16 || v17 >= v16 )
        goto LABEL_21;
    }
    else
    {
      if ( v17 > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v17, 1u);
      sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v17 - *(_DWORD *)(a1 + 4));
      v15 = v23;
    }
    *(_DWORD *)(a1 + 4) = v17;
LABEL_21:
    sub_464310(v16 + *(_DWORD *)a1, v22, v15);
    v12 = pNodeName;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
    if ( *(_DWORD *)(a2 + 20) )
      v12 = *(const char **)(a2 + 20);
  }
  else
  {
    v12 = MultiByteStr;
  }
  v18 = strlen(v12);
  result = v18 + 1;
  v23 = v18 + 1;
  if ( v18 != -1 )
  {
    v20 = *(_DWORD *)(a1 + 4);
    v21 = v20 + result;
    if ( v20 + result < v20 )
      v21 = 0x7FFFFFFF;
    if ( v21 <= v20 )
    {
      if ( v21 == v20 || v21 >= v20 )
        return sub_464310(v20 + *(_DWORD *)a1, (unsigned int)v12, result);
    }
    else
    {
      if ( v21 > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v21, 1u);
      sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v21 - *(_DWORD *)(a1 + 4));
      result = v23;
    }
    *(_DWORD *)(a1 + 4) = v21;
    return sub_464310(v20 + *(_DWORD *)a1, (unsigned int)v12, result);
  }
  return result;
}
