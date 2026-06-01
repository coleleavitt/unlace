/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4342E0
// Address: 0x004342E0

//----- (004342E0) --------------------------------------------------------
int __usercall sub_4342E0@<eax>(int a1@<ebx>, int *a2)
{
  void *v2; // ecx
  int result; // eax

  if ( a2 )
  {
    v2 = (void *)a2[3];
    if ( v2 )
    {
      sub_40FB70(a1, (int)a2, v2, (a2[5] - (int)v2) >> 2);
      a2[3] = 0;
      a2[4] = 0;
      a2[5] = 0;
    }
    sub_430250((int)(a2 + 1), a2[1]);
    sub_4627F2((void *)a2[1]);
    return sub_4627F2(a2);
  }
  return result;
}
