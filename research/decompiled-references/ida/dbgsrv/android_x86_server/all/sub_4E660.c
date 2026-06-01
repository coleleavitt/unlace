/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E660
// Address: 0x0004E660

//----- (0004E660) --------------------------------------------------------
void __cdecl sub_4E660(_DWORD *a1)
{
  void *v1; // eax

  v1 = (void *)a1[5];
  if ( v1 )
  {
    a1[6] = 0;
    qfree(v1);
    a1[5] = 0;
    a1[7] = 0;
  }
}
