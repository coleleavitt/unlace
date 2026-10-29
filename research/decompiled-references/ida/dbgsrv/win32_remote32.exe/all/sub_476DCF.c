/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476DCF
// Address: 0x00476DCF

//----- (00476DCF) --------------------------------------------------------
void __cdecl sub_476DCF(void **lpMem)
{
  void *v1; // eax
  void **v2; // edi

  if ( lpMem )
  {
    v1 = *lpMem;
    v2 = lpMem;
    while ( v1 )
    {
      sub_479216(v1);
      v1 = *++v2;
    }
    sub_479216(lpMem);
  }
}
