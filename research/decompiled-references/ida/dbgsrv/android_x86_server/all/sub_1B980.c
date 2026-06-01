/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B980
// Address: 0x0001B980

//----- (0001B980) --------------------------------------------------------
void __cdecl sub_1B980(_DWORD *a1)
{
  void *v1; // eax

  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    qfree(v1);
    a1[2] = 0;
    a1[4] = 0;
  }
}
