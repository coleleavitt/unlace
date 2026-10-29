/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2EA00
// Address: 0x0002EA00

//----- (0002EA00) --------------------------------------------------------
int __cdecl sub_2EA00(int a1, char *s, int a3)
{
  _BYTE *v3; // eax
  unsigned int v4; // eax
  int v5; // edi
  _BYTE *v6; // eax

  v3 = *(_BYTE **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v3);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  v4 = qvsnprintf(nullptr, 0, s, a3);
  if ( v4 )
  {
    v5 = v4 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v4 + 1 )
    {
      v6 = *(_BYTE **)a1;
    }
    else
    {
      v6 = qvector_reserve(a1, *(void **)a1, v4 + 1, 1u);
      *(_DWORD *)a1 = v6;
    }
    *(_DWORD *)(a1 + 4) = v5;
    qvsnprintf(v6, v5, s, a3);
  }
  return a1;
}
