/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C810
// Address: 0x0044C810

//----- (0044C810) --------------------------------------------------------
void __cdecl sub_44C810(const char *a1, int a2)
{
  void **v2; // edi
  unsigned int v3; // esi

  v2 = (void **)(a2 + 20);
  if ( a1 && (v3 = strlen(a1)) != 0 )
  {
    if ( v3 + 1 > *(_DWORD *)(a2 + 28) )
      *v2 = sub_453B00(a2 + 20, *v2, v3 + 1, 1u);
    *(_DWORD *)(a2 + 24) = v3 + 1;
    sub_464310((unsigned int)*v2, (unsigned int)a1, v3);
    *((_BYTE *)*v2 + v3) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 24) = 0;
  }
}
