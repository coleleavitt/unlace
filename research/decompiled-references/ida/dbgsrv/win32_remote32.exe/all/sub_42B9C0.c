/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B9C0
// Address: 0x0042B9C0

//----- (0042B9C0) --------------------------------------------------------
int __stdcall sub_42B9C0(int a1)
{
  _DWORD *v1; // eax
  int v2; // eax
  const char *v3; // eax
  void **v4; // esi
  int v5; // ebx
  unsigned int v6; // eax
  void **v7; // esi
  unsigned int v8; // eax

  v1 = *(_DWORD **)(*(_DWORD *)(a1 + 184) + 4 * *(_DWORD *)(a1 + 188) - 4);
  if ( *v1 == 1 )
  {
    v2 = v1[2];
    if ( *(_DWORD *)(v2 + 4) )
      v3 = *(const char **)v2;
    else
      v3 = MultiByteStr;
  }
  else
  {
    v3 = pNodeName;
  }
  sub_42EB90((char **)(a1 + 84), v3);
  v4 = (void **)(a1 + 136);
  v5 = *(_DWORD *)(a1 + 108);
  v6 = *(_DWORD *)(a1 + 140) + 1;
  if ( v6 > *(_DWORD *)(a1 + 144) )
    *v4 = sub_453B00(a1 + 136, *v4, v6, 4u);
  *((_DWORD *)*v4 + (*(_DWORD *)(a1 + 140))++) = v5;
  v7 = (void **)(a1 + 172);
  v8 = *(_DWORD *)(a1 + 176) + 1;
  if ( v8 > *(_DWORD *)(a1 + 180) )
    *v7 = sub_453B00(a1 + 172, *v7, v8, 2u);
  *((_WORD *)*v7 + (*(_DWORD *)(a1 + 176))++) = 0;
  return 0;
}
