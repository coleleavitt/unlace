/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E215
// Address: 0x0046E215

//----- (0046E215) --------------------------------------------------------
char __userpurge sub_46E215@<al>(int a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  _BYTE *v5; // ebx
  int *v6; // ecx
  int v8; // edi
  unsigned int v9; // edx
  unsigned int v10; // ecx
  int v11; // [esp+Ch] [ebp-1Ch]
  _BYTE *v12; // [esp+10h] [ebp-18h]
  __int64 v13; // [esp+14h] [ebp-14h]
  unsigned __int64 v14; // [esp+1Ch] [ebp-Ch]
  int v15; // [esp+24h] [ebp-4h]

  v5 = nullptr;
  if ( *(_BYTE *)(a1 + 46) )
    goto LABEL_7;
  *(_DWORD *)(a1 + 108) += 4;
  v6 = *(int **)(a1 + 108);
  v5 = (_BYTE *)*(v6 - 1);
  if ( !v5 )
  {
    *sub_46B984() = 22;
    sub_467EF4(0, a2);
    return 0;
  }
  if ( (*(_DWORD *)a1 & 1) == 0 )
  {
LABEL_7:
    v8 = -1;
  }
  else
  {
    *(_DWORD *)(a1 + 108) = v6 + 1;
    v8 = *v6;
  }
  if ( !v8 )
  {
    if ( (*(_DWORD *)a1 & 4) != 0 )
    {
      sub_470F7F((unsigned __int8 **)(a1 + 8));
LABEL_11:
      *v5 = 0;
    }
LABEL_12:
    *sub_46B984() = 12;
    return 0;
  }
  HIDWORD(v13) = *(_DWORD *)(a1 + 48);
  LODWORD(v13) = *(_DWORD *)(a1 + 52);
  v12 = v5;
  v15 = v8;
  if ( a3 && v8 != -1 )
    v15 = v8 - 1;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v14 = __PAIR64__(v10, v9);
    if ( v13 )
    {
      if ( __PAIR64__(v9, v10) == v13 )
        break;
    }
    v11 = sub_470F7F((unsigned __int8 **)(a1 + 8));
    if ( !sub_470FB3((_BYTE *)a1, a3, v11) )
    {
      sub_4718E9((_DWORD *)(a1 + 8), v11);
      v10 = HIDWORD(v14);
      v9 = v14;
      break;
    }
    if ( !*(_BYTE *)(a1 + 46) )
    {
      if ( !v15 )
      {
        if ( v8 == -1 )
          goto LABEL_12;
        goto LABEL_11;
      }
      *v12++ = v11;
      --v15;
    }
    v10 = (v14 + 1) >> 32;
    v9 = v14 + 1;
  }
  if ( !__PAIR64__(v10, v9) || !a3 && __PAIR64__(v9, v10) != v13 && (*(_DWORD *)a1 & 4) == 0 )
    return 0;
  if ( !*(_BYTE *)(a1 + 46) )
  {
    if ( a3 )
      *v12 = 0;
  }
  return 1;
}
