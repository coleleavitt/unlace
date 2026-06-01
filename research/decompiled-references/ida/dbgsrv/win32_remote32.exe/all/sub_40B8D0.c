/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B8D0
// Address: 0x0040B8D0

//----- (0040B8D0) --------------------------------------------------------
_DWORD *__userpurge sub_40B8D0@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, char a3)
{
  void *v4; // eax
  void *v5; // eax

  v4 = (void *)a1[16];
  if ( v4 )
  {
    a1[17] = 0;
    sub_453A20(v4);
    a1[16] = 0;
    a1[18] = 0;
  }
  *a1 = &off_48A244;
  sub_409730((int)(a1 + 5), a2);
  v5 = (void *)a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    sub_453A20(v5);
    a1[2] = 0;
    a1[4] = 0;
  }
  if ( (a3 & 1) != 0 )
    sub_4627F2(a1);
  return a1;
}
// 48A244: using guessed type int (__stdcall *off_48A244)(char);
