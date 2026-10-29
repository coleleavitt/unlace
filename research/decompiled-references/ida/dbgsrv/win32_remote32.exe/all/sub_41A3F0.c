/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A3F0
// Address: 0x0041A3F0

//----- (0041A3F0) --------------------------------------------------------
int __stdcall sub_41A3F0(int a1, int a2)
{
  const char *v2; // ecx
  const char *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // esi
  _DWORD *v6; // edi
  unsigned int v7; // eax
  LPVOID v8; // ecx

  v2 = MultiByteStr;
  if ( *(_DWORD *)(a1 + 36) )
    v2 = *(const char **)(a1 + 32);
  v3 = sub_424C30(a1, v2);
  v4 = (unsigned int)v3;
  if ( v3 )
    v5 = strlen(v3);
  else
    v5 = 0;
  v6 = (_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v5 )
  {
    v7 = v5 + 1;
    v8 = nullptr;
    if ( v5 != -1 )
    {
      v8 = sub_453B00((int)v6, nullptr, v5 + 1, 1u);
      v7 = v5 + 1;
      *v6 = v8;
    }
    *(_DWORD *)(a2 + 12) = v7;
    sub_464310((unsigned int)v8, v4, v5);
    *(_BYTE *)(v5 + *v6) = 0;
  }
  return 0;
}
