/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37D58
// Address: 0x00037D58

//----- (00037D58) --------------------------------------------------------
int __fastcall sub_37D58(int a1, int a2)
{
  __int64 nsec_stamp; // kr00_8

  nsec_stamp = get_nsec_stamp();
  free_idcv((unsigned __int8 *)a2);
  *(_QWORD *)(a2 + 8) = nsec_stamp;
  *(_BYTE *)a2 = 9;
  return 0;
}
