/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439CE0
// Address: 0x00439CE0

//----- (00439CE0) --------------------------------------------------------
void __cdecl sub_439CE0(const char *a1, int a2)
{
  void **v2; // edi
  unsigned int v3; // esi

  v2 = (void **)(a2 + 72);
  if ( a1 && (v3 = strlen(a1)) != 0 )
  {
    if ( v3 + 1 > *(_DWORD *)(a2 + 80) )
      *v2 = sub_453B00(a2 + 72, *v2, v3 + 1, 1u);
    *(_DWORD *)(a2 + 76) = v3 + 1;
    sub_464310((unsigned int)*v2, (unsigned int)a1, v3);
    *((_BYTE *)*v2 + v3) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 76) = 0;
  }
}
