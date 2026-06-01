/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C900
// Address: 0x0044C900

//----- (0044C900) --------------------------------------------------------
void __cdecl sub_44C900(const char *a1, int a2)
{
  void **v2; // edi
  unsigned int v3; // esi

  v2 = (void **)(a2 + 32);
  if ( a1 && (v3 = strlen(a1)) != 0 )
  {
    if ( v3 + 1 > *(_DWORD *)(a2 + 40) )
      *v2 = sub_453B00(a2 + 32, *v2, v3 + 1, 1u);
    *(_DWORD *)(a2 + 36) = v3 + 1;
    sub_464310((unsigned int)*v2, (unsigned int)a1, v3);
    *((_BYTE *)*v2 + v3) = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 36) = 0;
  }
}
