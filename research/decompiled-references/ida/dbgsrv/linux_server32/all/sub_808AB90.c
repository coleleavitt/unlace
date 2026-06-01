/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808AB90
// Address: 0x0808AB90

//----- (0808AB90) --------------------------------------------------------
int __cdecl sub_808AB90(int a1)
{
  char v1; // al
  bool v2; // zf
  _BOOL4 v4; // edi

  v1 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 == 7 )
  {
    v4 = *(_DWORD *)(a1 + 8) > 1u;
    sub_8089430(a1);
    *(_DWORD *)(a1 + 4) = v4;
    return 1;
  }
  if ( v1 > 7 )
  {
    if ( v1 == 9 )
    {
      v2 = *(_QWORD *)(a1 + 4) == 0;
      *(_BYTE *)a1 = 2;
      *(_DWORD *)(a1 + 4) = !v2;
      return 1;
    }
  }
  else
  {
    if ( v1 == 2 )
      return 1;
    if ( v1 == 5 )
    {
      sub_8089430(a1);
      *(_DWORD *)(a1 + 4) = 1;
      return 1;
    }
  }
  sub_80C7880(61);
  return 0;
}
