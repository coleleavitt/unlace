/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4794A5
// Address: 0x004794A5

//----- (004794A5) --------------------------------------------------------
char __usercall sub_4794A5@<al>(int a1@<edi>)
{
  char v1; // bl

  sub_47A78B(7);
  v1 = 0;
  if ( !sub_4733AA(0, a1, 0) )
  {
    sub_47933B(a1);
    sub_4793F1();
    v1 = 1;
  }
  sub_47A7D3(7);
  return v1;
}
