/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B130
// Address: 0x0040B130

//----- (0040B130) --------------------------------------------------------
void __usercall sub_40B130(_DWORD *a1@<ecx>, int a2@<ebx>)
{
  void *v3; // eax

  *a1 = &off_48A244;
  sub_409730((int)(a1 + 5), a2);
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    sub_453A20(v3);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 48A244: using guessed type int (__stdcall *off_48A244)(char);
