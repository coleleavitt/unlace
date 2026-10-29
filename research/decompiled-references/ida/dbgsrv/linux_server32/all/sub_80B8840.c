/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B8840
// Address: 0x080B8840

//----- (080B8840) --------------------------------------------------------
unsigned int __cdecl sub_80B8840(int a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int result; // eax
  int v4; // edx
  int v5; // edx
  const char *v6; // ebp
  unsigned int v7; // eax
  size_t v8; // esi
  unsigned int v9; // edx
  void *v10; // eax
  unsigned int v11; // [esp+0h] [ebp-20h]

  v2 = sub_80CDEC0(a2, a2[1]);
  sub_80C6150((_DWORD *)a1, v2);
  *(_DWORD *)a1 = sub_80CDEC0(a2, a2[1]);
  *(_DWORD *)(a1 + 4) = sub_80CDEC0(a2, a2[1]);
  *(_DWORD *)(a1 + 8) = sub_80CE010(a2, a2[1]) - 1;
  result = sub_80CDEC0(a2, a2[1]);
  v4 = *(_DWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 12) = result != 0;
  v5 = v4 & 0xFFFFFFF;
  switch ( v5 )
  {
    case 1:
    case 8:
    case 11:
      return sub_80B8560((void **)(a1 + 20), a2);
    case 2:
    case 4:
      result = sub_80CDEC0(a2, a2[1]);
      if ( (((*(_DWORD *)(a1 + 16) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        sub_80B7D90();
      *(_DWORD *)(a1 + 20) = result;
      return result;
    case 3:
    case 9:
    case 10:
      v6 = (const char *)*a2;
      v7 = *a2;
      break;
    case 5:
      *(_DWORD *)(a1 + 20) = sub_80CE010(a2, a2[1]) - 1;
      result = sub_80CE010(a2, a2[1]) - 1;
      *(_DWORD *)(a1 + 24) = result;
      return result;
    case 7:
      return sub_80B8760(a1 + 20, a2);
    default:
      return result;
  }
  do
  {
    if ( v7 >= a2[1] )
    {
      result = v5 - 9;
      if ( (unsigned int)(v5 - 9) > 1 && v5 != 3 )
        goto LABEL_20;
LABEL_9:
      *(_DWORD *)(a1 + 24) = 0;
      return result;
    }
    ++v7;
  }
  while ( *(_BYTE *)(v7 - 1) );
  *a2 = v7;
  result = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
  if ( result - 9 > 1 && result != 3 )
LABEL_20:
    sub_80B7DC0();
  if ( !v6 )
    goto LABEL_9;
  result = strlen(v6);
  v8 = result;
  if ( !result )
    goto LABEL_9;
  v9 = result + 1;
  v10 = *(void **)(a1 + 20);
  if ( *(_DWORD *)(a1 + 28) < v9 )
  {
    v11 = v9;
    v10 = sub_80CF920(a1 + 20, v10, v9, 1u);
    v9 = v11;
    *(_DWORD *)(a1 + 20) = v10;
  }
  *(_DWORD *)(a1 + 24) = v9;
  memmove(v10, v6, v8);
  result = *(_DWORD *)(a1 + 20);
  *(_BYTE *)(result + v8) = 0;
  return result;
}
