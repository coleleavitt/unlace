/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E6B0
// Address: 0x0004E6B0

//----- (0004E6B0) --------------------------------------------------------
void __cdecl sub_4E6B0(void **a1)
{
  void **v1; // esi
  char *v2; // eax
  unsigned int v3; // esi
  int i; // edi
  void *v5; // [esp+8h] [ebp-14h]

  v1 = a1;
  v2 = (char *)*a1;
  if ( *a1 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      v3 = 1;
      for ( i = 0; ; i += 20 )
      {
        free_idcv(&v2[i]);
        if ( v3 >= (unsigned int)v5 )
          break;
        v2 = (char *)*a1;
        ++v3;
      }
      v1 = a1;
      v2 = (char *)*a1;
    }
    v1[1] = nullptr;
    qfree(v2);
    *v1 = nullptr;
    v1[2] = nullptr;
  }
}
