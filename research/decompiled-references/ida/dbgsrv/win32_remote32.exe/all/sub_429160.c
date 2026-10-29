/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429160
// Address: 0x00429160

//----- (00429160) --------------------------------------------------------
int __stdcall sub_429160(int a1)
{
  int *v1; // ecx
  int v2; // edi
  char v3; // bl
  unsigned int v4; // eax
  int v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  char *v8; // eax
  __int8 *v9; // eax
  const char *v10; // eax
  int v11; // ecx
  int v13; // eax
  __int16 v14; // [esp-4h] [ebp-Ch]

  v1 = *(int **)(a1 + 104);
  v14 = *(_WORD *)(a1 + 64);
  *(_BYTE *)(a1 + 120) = 0;
  sub_428790(v1, 1, v14);
  if ( *(_BYTE *)(a1 + 112) != 0xAF )
  {
    v2 = *(_DWORD *)(a1 + 104);
    v3 = -32;
    if ( *(_DWORD *)(a1 + 116) == 1 )
      v3 = 112;
    *(_BYTE *)(a1 + 112) = v3;
    v4 = *(_DWORD *)(v2 + 4) + 1;
    if ( v4 > *(_DWORD *)(v2 + 8) )
      *(_DWORD *)v2 = sub_453B00(v2, *(void **)v2, v4, 1u);
    *(_BYTE *)(*(_DWORD *)v2 + (*(_DWORD *)(v2 + 4))++) = v3;
    v5 = *(_DWORD *)(a1 + 104);
    ++*(_DWORD *)(a1 + 108);
    *(_BYTE *)(a1 + 112) = -81;
    v6 = *(_DWORD *)(v5 + 4) + 1;
    if ( v6 > *(_DWORD *)(v5 + 8) )
      *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v6, 1u);
    *(_BYTE *)(*(_DWORD *)(v5 + 4) + *(_DWORD *)v5) = -81;
    ++*(_DWORD *)(v5 + 4);
    ++*(_DWORD *)(a1 + 108);
  }
  sub_427310((_DWORD *)(*(_DWORD *)(a1 + 100) + 16), (_DWORD *)(a1 + 208));
  if ( *(_DWORD *)(a1 + 96) )
  {
    v7 = *(_DWORD **)(a1 + 100);
    v8 = v7[1] ? (char *)*v7 : (char *)MultiByteStr;
    v9 = sub_464F10(v8, 0x2Eu);
    if ( v9 )
    {
      v10 = v9 + 1;
      v11 = strcmp(v10, "__getattr__");
      if ( v11 )
        v11 = v11 < 0 ? -1 : 1;
      if ( !v11 )
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 96) + 28) = sub_427550(*(_DWORD **)(a1 + 56), *(_DWORD *)(a1 + 100));
        sub_42E4D0((_DWORD *)a1);
        return 0;
      }
      v13 = strcmp(v10, "__setattr__");
      if ( v13 )
        v13 = v13 < 0 ? -1 : 1;
      if ( !v13 )
        *(_DWORD *)(*(_DWORD *)(a1 + 96) + 32) = sub_427550(*(_DWORD **)(a1 + 56), *(_DWORD *)(a1 + 100));
    }
  }
  sub_42E4D0((_DWORD *)a1);
  return 0;
}
