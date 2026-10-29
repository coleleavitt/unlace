/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CFE0
// Address: 0x0045CFE0

//----- (0045CFE0) --------------------------------------------------------
int __userpurge sub_45CFE0@<eax>(int a1@<ebx>, int a2@<edi>, int a3, __int64 a4, DWORD a5)
{
  int v6; // esi

  if ( a3 )
  {
    v6 = sub_475847(a1, a2, a3, a4, a5);
    if ( v6 )
      sub_45CC20(1);
    return v6;
  }
  else
  {
    sub_45CC20(1);
    *sub_46B984() = 9;
    sub_45CC20(1);
    return -1;
  }
}
