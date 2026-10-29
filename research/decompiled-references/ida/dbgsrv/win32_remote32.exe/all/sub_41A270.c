/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A270
// Address: 0x0041A270

//----- (0041A270) --------------------------------------------------------
int __stdcall sub_41A270(int a1, int a2)
{
  const char *v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  _DWORD *v5; // edi
  unsigned int v6; // eax
  LPVOID v7; // ecx

  v2 = sub_423B40(a1);
  v3 = (unsigned int)v2;
  if ( v2 )
    v4 = strlen(v2);
  else
    v4 = 0;
  v5 = (_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v4 )
  {
    v6 = v4 + 1;
    v7 = nullptr;
    if ( v4 != -1 )
    {
      v7 = sub_453B00((int)v5, nullptr, v4 + 1, 1u);
      v6 = v4 + 1;
      *v5 = v7;
    }
    *(_DWORD *)(a2 + 12) = v6;
    sub_464310((unsigned int)v7, v3, v4);
    *(_BYTE *)(v4 + *v5) = 0;
  }
  return 0;
}
