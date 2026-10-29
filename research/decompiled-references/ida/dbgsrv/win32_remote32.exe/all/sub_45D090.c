/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D090
// Address: 0x0045D090

//----- (0045D090) --------------------------------------------------------
int __userpurge sub_45D090@<eax>(int a1@<ebx>, int a2, char a3, int a4)
{
  int v5; // esi
  signed int v6; // eax

  if ( a2 )
  {
    v5 = a4;
    if ( a4 )
    {
      v6 = sub_476068(a1, a4, a3, 1, a4, a2);
      v5 = v6;
      if ( v6 != a4 )
        sub_45CC20((v6 > 0) + 1);
    }
    return v5;
  }
  else
  {
    sub_45CC20(1);
    *sub_46B984() = 9;
    sub_45CC20(1);
    return -1;
  }
}
