/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D030
// Address: 0x0045D030

//----- (0045D030) --------------------------------------------------------
int __userpurge sub_45D030@<eax>(int a1@<ebx>, int a2@<edi>, unsigned int *a3)
{
  int v4; // esi
  int v5; // edx

  if ( a3 )
  {
    v4 = sub_475E33(a1, a2, a3);
    if ( (v5 & v4) == 0xFFFFFFFF )
      sub_45CC20(1);
    return v4;
  }
  else
  {
    sub_45CC20(1);
    *sub_46B984() = 9;
    sub_45CC20(1);
    return -1;
  }
}
// 45D030: could not find valid save-restore pair for edi
// 45D06A: variable 'v5' is possibly undefined
