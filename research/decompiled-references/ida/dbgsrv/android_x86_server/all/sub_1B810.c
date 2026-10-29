/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B810
// Address: 0x0001B810

//----- (0001B810) --------------------------------------------------------
void __cdecl sub_1B810(int *a1)
{
  if ( *a1 )
  {
    sub_1BDA0(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}
