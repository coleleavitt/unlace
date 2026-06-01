/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429870
// Address: 0x00429870

//----- (00429870) --------------------------------------------------------
int __stdcall sub_429870(int a1)
{
  int v1; // ecx
  int v2; // edi
  unsigned int v3; // edx
  _DWORD *v4; // ecx
  unsigned int v5; // edx
  char v6; // bl
  int v8; // edi
  unsigned int v9; // eax

  v1 = *(_DWORD *)(a1 + 128);
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 124) + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 128) = v1 - 1;
  v3 = *(_DWORD *)(a1 + 108);
  if ( v3 - v2 == 4 )
  {
    if ( v3 < 5 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(708);
    }
    v4 = *(_DWORD **)(a1 + 104);
    v5 = v3 - 5;
    *(_DWORD *)(a1 + 108) = v5;
    v6 = *(_BYTE *)(v5 + *v4);
    sub_4028B0((int)v4, v5);
    *(_BYTE *)(a1 + 112) = -87;
    if ( v6 == -85 )
    {
      v8 = *(_DWORD *)(a1 + 104);
      *(_BYTE *)(a1 + 112) = -85;
      v9 = *(_DWORD *)(v8 + 4) + 1;
      if ( v9 > *(_DWORD *)(v8 + 8) )
        *(_DWORD *)v8 = sub_453B00(v8, *(void **)v8, v9, 1u);
      *(_BYTE *)(*(_DWORD *)v8 + (*(_DWORD *)(v8 + 4))++) = -85;
      ++*(_DWORD *)(a1 + 108);
      sub_42E320((int *)a1, 0);
      sub_42E320((int *)a1, 0);
      return 0;
    }
    else
    {
      return sub_429580(a1);
    }
  }
  else
  {
    sub_428740(*(_DWORD **)(a1 + 104), v2, *(_DWORD *)(a1 + 108) - v2 - 4);
    *(_BYTE *)(a1 + 112) = -1;
    return 0;
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
