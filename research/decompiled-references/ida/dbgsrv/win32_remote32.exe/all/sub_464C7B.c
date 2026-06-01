/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464C7B
// Address: 0x00464C7B

//----- (00464C7B) --------------------------------------------------------
void __cdecl sub_464C7B(int a1, int a2)
{
  unsigned int v2; // kr00_4
  _BYTE *v3; // eax
  void *v4; // esi
  void *v5; // ecx

  if ( *(_BYTE *)(a1 + 4) && *(_DWORD *)a1 )
  {
    v2 = strlen(*(const char **)a1);
    v3 = sub_46D25F(v2 + 1);
    v4 = v3;
    if ( v3 )
    {
      sub_46C78C(v2 + 1, a1, v3, v2 + 1, *(_DWORD *)a1);
      v5 = v4;
      v4 = nullptr;
      *(_DWORD *)a2 = v5;
      *(_BYTE *)(a2 + 4) = 1;
    }
    sub_46C918(v4);
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_BYTE *)(a2 + 4) = 0;
  }
}
