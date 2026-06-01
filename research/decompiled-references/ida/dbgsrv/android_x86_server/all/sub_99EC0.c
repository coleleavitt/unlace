/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99EC0
// Address: 0x00099EC0

//----- (00099EC0) --------------------------------------------------------
void __cdecl sub_99EC0(_DWORD *a1)
{
  void *v1; // eax

  v1 = (void *)a1[1];
  if ( v1 )
  {
    a1[2] = 0;
    qfree(v1);
    a1[1] = 0;
    a1[3] = 0;
  }
}
