/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D340
// Address: 0x0004D340

//----- (0004D340) --------------------------------------------------------
int __cdecl sub_4D340(_DWORD *a1)
{
  char *v1; // eax

  if ( a1[6] )
    v1 = (char *)a1[5];
  else
    v1 = byte_EF875;
  a1[25] = add_idc_class(v1, 0);
  return 0;
}
