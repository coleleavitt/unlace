/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809D730
// Address: 0x0809D730

//----- (0809D730) --------------------------------------------------------
bool __cdecl sub_809D730(int a1, int a2)
{
  bool result; // al
  int *v3; // eax
  int *v4; // esi
  int v5; // ebp

  result = 1;
  if ( a2 )
  {
    v3 = &dword_80DDFD8;
    if ( *(_DWORD *)(a1 + 304) )
      v3 = *(int **)(a1 + 300);
    v4 = sub_80CD4D0((int)v3, 0);
    result = 0;
    if ( v4 )
    {
      v5 = sub_80C45E0(v4);
      sub_80CD620(v4);
      return a2 == v5;
    }
  }
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
