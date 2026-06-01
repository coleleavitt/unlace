/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D70
// Address: 0x00044D70

//----- (00044D70) --------------------------------------------------------
int __cdecl sub_44D70(int a1, int a2)
{
  __int64 nsec_stamp; // kr00_8

  nsec_stamp = get_nsec_stamp();
  free_idcv((char *)a2);
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 4) = nsec_stamp;
  return 0;
}
