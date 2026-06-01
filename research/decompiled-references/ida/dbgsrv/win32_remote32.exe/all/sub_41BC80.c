/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41BC80
// Address: 0x0041BC80

//----- (0041BC80) --------------------------------------------------------
int __cdecl sub_41BC80(const char *a1, int a2)
{
  unsigned int v2; // esi
  _DWORD *v3; // edi
  unsigned int v4; // eax
  LPVOID v5; // ecx

  if ( a1 )
    v2 = strlen(a1);
  else
    v2 = 0;
  v3 = (_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v2 )
  {
    v4 = v2 + 1;
    v5 = nullptr;
    if ( v2 != -1 )
    {
      v5 = sub_453B00((int)v3, nullptr, v2 + 1, 1u);
      v4 = v2 + 1;
      *v3 = v5;
    }
    *(_DWORD *)(a2 + 12) = v4;
    sub_464310((unsigned int)v5, (unsigned int)a1, v2);
    *(_BYTE *)(v2 + *v3) = 0;
  }
  return 0;
}
