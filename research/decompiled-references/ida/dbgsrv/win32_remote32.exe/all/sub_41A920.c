/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A920
// Address: 0x0041A920

//----- (0041A920) --------------------------------------------------------
int __stdcall sub_41A920(int a1, int a2)
{
  const char *v2; // edi
  unsigned int v3; // esi
  _DWORD *v4; // ebx
  unsigned int v5; // eax
  LPVOID v6; // ecx

  if ( !*(_DWORD *)(a1 + 12) )
  {
    v2 = MultiByteStr;
LABEL_3:
    v3 = strlen(v2);
    goto LABEL_4;
  }
  v2 = *(const char **)(a1 + 8);
  if ( v2 )
    goto LABEL_3;
  v3 = 0;
LABEL_4:
  v4 = (_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v3 )
  {
    v5 = v3 + 1;
    v6 = nullptr;
    if ( v3 != -1 )
    {
      v6 = sub_453B00((int)v4, nullptr, v3 + 1, 1u);
      v5 = v3 + 1;
      *v4 = v6;
    }
    *(_DWORD *)(a2 + 12) = v5;
    sub_464310((unsigned int)v6, (unsigned int)v2, v3);
    *(_BYTE *)(v3 + *v4) = 0;
  }
  return 0;
}
