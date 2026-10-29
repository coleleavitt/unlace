/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B840
// Address: 0x0040B840

//----- (0040B840) --------------------------------------------------------
_DWORD *__userpurge sub_40B840@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, char a3)
{
  void *v4; // eax

  *a1 = &off_48A244;
  sub_409730((int)(a1 + 5), a2);
  v4 = (void *)a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    sub_453A20(v4);
    a1[2] = 0;
    a1[4] = 0;
  }
  if ( (a3 & 1) != 0 )
    sub_4627F2(a1);
  return a1;
}
// 48A244: using guessed type int (__stdcall *off_48A244)(char);
