/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403770
// Address: 0x00403770

//----- (00403770) --------------------------------------------------------
int __stdcall sub_403770(_DWORD *a1, int a2, unsigned int a3, _DWORD *a4)
{
  if ( a2 && a3 >= 0x1C && a4[3] == 2 )
  {
    a1[8] = a4[6];
    a1[9] = 0;
    a1[10] = a4[5];
  }
  return 0;
}
